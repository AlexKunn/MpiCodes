#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int i, j;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    clock_t t;
    int arr[100000];
    int n = sizeof(arr)/sizeof(arr[0]);
     for(i=0;i<n;i++){
                arr[i]=(rand()%100000);
                }
     t = clock();
     selectionSort(arr, n);
     t = clock() - t;
     double time_taken = ((double)t)/CLOCKS_PER_SEC;
   //printf("Sorted array: \n");
   //printArray(arr, n);
    printf("%f", time_taken);
    return 0;
}

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

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
     insertionSort(arr, n);
     t = clock() - t;
     double time_taken = ((double)t)/CLOCKS_PER_SEC;
   //printf("Sorted array: \n");
   //printArray(arr, n);
    printf("%f", time_taken);
    return 0;
}

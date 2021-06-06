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

void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

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
     quicksort(arr,0,n);
     t = clock() - t;
     double time_taken = ((double)t)/CLOCKS_PER_SEC;
   //printf("Sorted array: \n");
   //printArray(arr, n);
    printf("%f", time_taken);
    return 0;
}

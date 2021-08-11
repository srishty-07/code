#include <stdio.h>
#include <stdlib.h>
 
void merge(int arr[], int l, int mid, int r)
{
    // temproray varibles
    int n1 = mid - l + 1;
    int n2 = r - mid;
 
    // temporary arrays
    int L[n1], R[n2];
    int i,j,k;
    for (i = 0; i < n1; i++){
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }
 
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
  
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        
        int m= l+ (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    printf("SRISHTY BEDI \n A2305219783 \n MERGE SORT \n");
    
    // no of elements
    int n;
    scanf("%d",&n);
    int a[n];
    // no of elements in array
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
 
    // printf("Given array is \n");
    printArray(a,n);
 
    mergeSort(a, 0, n - 1);
 
    // printf("\nSorted array is \n");
    printArray(a, n);
    return 0;
}

/******************************************************************************
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
-12 -6 -13 -5 -3 -7 5 6 11 
*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/***************************************1st method*****************************************/
//using two pointer tc= in linear time
// void rearrange(int a[],int n){
//     int l = 0;
//     int r = n-1;
//         while(l<=r){
//             if(a[l]<0 && a[r]<0){
//                 l++;
//             }
//             else if(a[l]>0 && a[r]<0){
//                 swap(a[l],a[r]);
//                 l++;
//                 r--;
//             }
//             else if(a[l]>0 && a[r]>0){
//                 r--;
//             }
//             else{
//                 l++;
//                 r--;
//             }
//         }
// }

/***************************************2nd method*****************************************/
// void rearrange(int a[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(a[i]<0){
//             if(i!=j){
//                 swap(a[i],a[j]);
//             }
//             j++;
//         }
//     }
// }

/***************************************3rd method*****************************************/
//this method is used when we are carefull about the direction of the element also 
//like even after rearanging -ve elements in begining the order is not changed.


// 5, 5, -3, 4, -8, 0, -7, 3, -9, -3, 9, -2, 1
// __ ,5, 5, -3, 4, -8, 0, -7, 3, -9, -3, 9, -2, 1
// -3, 5, 5, 4, -8, 0, -7, 3, -9, -3, 9, -2, 1

// Loop from i = 1 to n - 1.
//   a) If the current element is positive, do nothing.
//   b) If the current element arr[i] is negative, we 
//      insert it into sequence arr[0..i-1] such that 
//      all positive elements in arr[0..i-1] are shifted 
//      one position to their right and arr[i] is inserted
//      at index of first positive element.

void rearrange(int a[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key = a[i];
        //if key is +ve
        if(key > 0){
            continue;
        }
        //if key is -ve
        //then right shift all
        j = i-1;
        while(j >= 0 && a[j] > 0){
            a[j+1] = a[j];
            j--;
        }
        
        a[j+1] = key;
        
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rearrange(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
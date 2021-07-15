// maximum subarray using kadanes algo
// it will not work for when array will have all -ve integres 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currSum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum=currSum+a[i];
        if(currSum<0){
            currSum=0;
        }
        maxsum=max(maxsum,currSum);
    }
    cout<<maxsum<<endl;
    return 0;
}
// though kadanes algo needs atleat one postive integre but it can be done using below approach
// int max_so_far      = INT_MIN;
// int max_ending_here = 0;
// int max_element     = INT_MIN;

// for (int i = 0; i < size; i++)
// {
//     max_ending_here = max(max_ending_here + array[i], 0);
//     max_so_far      = max(max_ending_here, max_so_far);
//     max_element     = max(max_element, array[i]);
// }

// if (max_so_far == 0)
//   max_so_far = max_element;

// printf("%d\n", max_so_far);



// maximum circular array sum
/******************************************************************************
for explanation
 https://www.youtube.com/watch?v=0JYgnhnZFcE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=27
*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int kadanes(int a[],int n){
    int currSum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum=currSum+a[i];
        if(currSum<0){
            currSum=0;
        }
        maxsum=max(maxsum,currSum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int nw,w;
    // nw=non wrap sum
    // w=wrapsum
    
    nw=kadanes(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
        // creating all elemsnt of array -ve and applying kadanes algo to find non wrap numbers and then 
        // subtract it from total sum of all element 
    }
    // w=totalsum-(-nw)
    // as nw= kadanes(a,n)now this will be of -ve numbers
    w=totalsum+kadanes(a,n);
    
    // ab hum maximum lenge wrapsum(w) aur nonwrapsum(nw) se 
    cout<<max(w,nw);
    return 0;
}

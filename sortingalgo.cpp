/******************************************************************************
mergesort
*******************************************************************************/

// print all possible permutation without duplicating elemst in an array
#include <iostream>
using namespace std;
void merge(int res[],int l,int mid,int r){
    // size of these two temp arrays will be
    int n1 = mid-l+1;
    int n2 = r-mid;
    
    // now creating array of these sizes we get
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i] = res[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = res[mid+1+i];
    }
    int i=0,j=0;
    int k = l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            res[k]=a[i];
            i++,k++;
        }
        else{
            res[k]=b[j];
            j++,k++;
        }
    }
    while(i<n1){
        res[k]=a[i];
            i++,k++;
    }
    while(j<n2){
        res[k]=b[j];
            j++,k++;
    }
}
void mergesort(int res[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        
        mergesort(res,l,mid);
        mergesort(res,mid+1,r);
        merge(res,l,mid,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int res[n];
    for(int i=0;i<n;i++){
        cin>>res[i];
    }
    mergesort(res,0,n-1);
    for(int i=0;i<n;i++){
        
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}

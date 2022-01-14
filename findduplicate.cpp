int countrotat(int a[],int n){
    int min=a[0],minindex;
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min = a[i];
            minindex = i;
        }
    }
    return minindex;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Pair
{
  int min;
  int max;
}; 
 
struct Pair getMinMax(int a[], int n){
    struct Pair minmax;
    if(n==1){
        minmax.min=a[0];
        minmax.max=a[0];
        return minmax;
    }
    if(a[0]>a[1]){
        minmax.max=a[0];
        minmax.min=a[1];
    }
    else{
        minmax.min=a[0];
        minmax.max=a[1];
    }
    for(int i=2;i<n;i++){
        if(a[i]>minmax.max){
            minmax.max=a[i];
        }
        else if(a[i]<minmax.min){
		
            minmax.min=a[i];
        }
    }
    return minmax;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    struct Pair minmax = getMinMax(a, n);
	int freq[minmax.max-minmax.min+1] = {0};
	
	for(int i=0;i<n;i++){
	    //hum array ko iterate karenge aur jo value ati hai suppose a[0]=9 to usme main se min ko minus karte hai aur us position pe of frequency array hum value/freq ko ++ kardete hai 
	    int point = a[i] - minmax.min;
	    freq[point]++;
	}
	for(int i=0;i<(minmax.max-minmax.min+1);i++){
	    cout<<freq[i]<<" ";
	}
	return 0;
}

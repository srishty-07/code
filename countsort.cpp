// 15
// 9 6 3 5 3 4 3 9 6 4 6 5 8 9 9
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
    int range = minmax.max-minmax.min+1;
	int freq[range] = {0};
	
	for(int i=0;i<n;i++){
	    //hum array ko iterate karenge aur jo value ati hai suppose a[0]=9 to usme main se min ko minus karte hai aur us position pe of frequency array hum value/freq ko ++ kardete hai 
	    int point = a[i] - minmax.min;
	    freq[point]++;
	}
       //converting freq array into prefix sum array
	for(int i=0;i < range;i++){
	    freq[i] = freq[i]+freq[i-1];//adding the previous freq value to get the pos 
	    //jis position tak voh no hoga us postion ko store kar lenge in prefix array
	}
	// we will start from backwards because we need correct order like if we have students with same marks so order will be according to the no jiska pehle aya or roll no
    // this is stable sort	
    int ans[n];
    for(int i=n-1;i>=0;i--){
        int val = a[i];
        int pos = freq[val - minmax.min];
        int idx = pos-1;
        ans[idx] = val;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
	return 0;
}

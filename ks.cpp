#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool comp(struct Item p1,struct Item p2){
    // sort array in value/weight  in decsending order 
    // r = value/weight
    double r1=((double)p1.value/(double)p1.weight);
    double r2=((double)p2.value/(double)p2.weight);
    return r1>r2;
}
double fractionalKnapsack(int W, Item arr[], int n)
{
    sort(arr,arr+n,comp);
    
    // variables 
    int curw=0;  //current weight
    double finalval=0;  //to keep the count of the value
    
    for(int i=0;i<n;i++){
        // if the current weight and the weight we are picking is fitting directly in knapsack then we will keep on 
        // adding current weight to the new weight in array and then final value to array value until it is > W
        if(curw+arr[i].weight <=W){
            curw+=arr[i].weight;
            finalval+=arr[i].value;
        }
        else{
            int r=(W-curw);//remaining amount that is left
            finalval+=arr[i].value*((double)r/(double)arr[i].weight);//the value whivh is left is then multoiplied by value/weight item
            // to and add it to the final value 
            break;
            // as knapsack is fully filled up we will break out of the loop
        }
    }
    return finalval;
}


int main()
{
	cout<<setprecision(2)<<fixed;
	//size of array and weight
	int n, W;
	cin>>n>>W;
		
	Item arr[n];
	
	//value and weight of each item
	for(int i=0;i<n;i++){
		cin>>arr[i].value>>arr[i].weight;
	}
	cout<<fractionalKnapsack(W, arr, n)<<endl;
	
    return 0;
}


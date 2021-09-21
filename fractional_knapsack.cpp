#include <stdio.h>
#include <stdlib.h>

typedef struct Item
{
    int itemId;
    int weight;
    int profit;
	
    float pByw;
    float xi;
} 
Item;
void mergeRev(Item *arr, int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int c = 0;
    int temp_Arr_size = high - low + 1;
    Item *tempArr = (Item *)malloc(sizeof(arr[0]) * temp_Arr_size);

    while (i <= mid && j <= high)
        if (arr[i].pByw > arr[j].pByw)
            tempArr[c++] = arr[i++];
        else
            tempArr[c++] = arr[j++];

    while (i <= mid)
        tempArr[c++] = arr[i++];

    while (j <= high)
        tempArr[c++] = arr[j++];

    for (i = low, c = 0; i <= high; i++)
        arr[i] = tempArr[c++];
}

void mergeSortRev(Item *arr, int low, int high)
{
    if (low < high)
    {
        int mid = (high + low) / 2;
        mergeSortRev(arr, low, mid);
        mergeSortRev(arr, mid + 1, high);
        mergeRev(arr, low, mid, high);
    }
}

double fractionalknapsack(Item *items, int n, int capacity)
{
    mergeSortRev(items, 0, n - 1);
    double profit = 0;
    int i = 0;
    int takenWeight = 0;
    for (i = 0; i < n; i++)
    {
        if (takenWeight + items[i].weight <= capacity)
        {
            // if the current weight and the weight we are picking is fitting directly in knapsack then we will keep on 
           // adding current weight to the new weight in array and then final value to array value until it is > W
            profit += items[i].profit;
            takenWeight += items[i].weight;
            items[i].xi = 1;
        }
        else
        {
            items[i].xi = ((double)capacity - takenWeight) / items[i].weight;
            takenWeight += items[i].xi * items[i].weight;
            profit += items[i].xi * items[i].profit;
            break;
             // as knapsack is fully filled up we will break out of the loop
        }
    }

    return profit;
}

int main()
{
    
    int n, i, capacity;
    // printf("Enter the number of items: ");
    scanf("%d", &n);

    Item *items = (Item *)malloc(sizeof(Item) * n);
    for (i = 0; i < n; i++)
    {
        // printf("Enter profit, weight : ");
        scanf("%d %d", &items[i].profit, &items[i].weight);
        items[i].pByw = (float)items[i].profit / items[i].weight;
    }

    // printf("Enter Capacity: ");
    scanf("%d", &capacity);

    int totalProfit = fractionalknapsack(items, n, capacity);

    printf("Total Profit %d\n", totalProfit);

    return 0;
}

OR {using inbuilt sort function}
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


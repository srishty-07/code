#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool ratMaze(int **arr,int x,int y,int n,int **solnArr){
    
    // base condn when we reach the end of the array
    if(x == (n-1) && y == (n-1)){
        // making the last element also as 1 and returning true
        solnArr[x][y]=1;
        return true;
    }
    // checking the condn that whether we are allowed to move 
    if(isSafe(arr,x,y,n)){
        solnArr[x][y] = 1;
        if(ratMaze(arr,x+1,y,n,solnArr)){
            // to move in a row
            return true;
        }
        if(ratMaze(arr,x,y+1,n,solnArr)){
            return true;
        }
        // agar dono case main true nahi milta tab do backtracking by making solnArr[x][y] again to 0
        solnArr[x][y] = 0;
        return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int **arr = new int*[n];//declaring a 2d array
    
    for(int i=0;i<n;i++){
        // now declaring memeory of that array 
        arr[i]=new int[n];
    }
    // taking element in an array 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    // creating a soln array that will be passed in the fiunction
    int **solnArr = new int*[n];
    for(int i=0;i<n;i++){
        // now declaring memeory of that soln array as done earlier 
        solnArr[i]=new int[n];
        // declaring soln array as 0 initially
        for(int j=0;j<n;j++){
            solnArr[i][j] = 0;
        }
    }
    // now calling the function and printing the values
    if(ratMaze(arr,0,0,n,solnArr)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solnArr[i][j]<<" ";
        }cout<<endl;
    }
    }
    return 0;
}

// inpput
// 5 
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 0

// output

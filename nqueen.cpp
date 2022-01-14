#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    //for every column we are chcecking a row
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            //if queen is placed 
            return false;
        }
    }
    //checking for diagnols
    int row = x;
    int col = y;
 
    //left diagnol
    //so that row don't get out of bound
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            //if queen is present
            return false;
        }
        row--;
        col--;
    }
    //right diagnol
    row = x;
    col = y;
    //checking column constraints so that it dont get out of bound
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    //if nothing is return false we will return true
    return true;
}
bool nQueen(int** arr,int x,int n){
    //x-row 
    //base condn i.e all n queens are placed
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        //before placing the queen we are checking whether that pos is safe or not
        if(isSafe(arr,x,col,n)){
            //then placing queen on that pos
            arr[x][col]=1;
            //checking for next row x+1
            //matlab is row pe rakhne ke baad hum next rows pe queen ko 
            //place kar sakte hai to check karo varna jispe place kara tha humne upar usko vapis se 0 karo aur ab voh next row ke liye check karega
            if(nQueen(arr,x+1,n)){
                return true;
            }
            //backtracking to previous pos and marking that 0
            arr[x][col]=0;
        }
    }
    //after checking all the columns
    return false;
}
int main()
{
    int n;
    cin>>n;
    int** arr = new int*[n]; //2d array
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;//initialising it to 0
        }
    }
    
    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    }
    return 0;
}

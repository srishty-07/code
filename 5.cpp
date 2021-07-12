// print spiral loop in 2-d array 
// in this we will first interate to the first row then to the last column of array then to the last row/end row of the array and at last to the first column thus creating a spiral anfd then moving inwards;

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int start_row=0,start_column=0,row_end=n-1,column_end=m-1;
    
    while(start_row<=row_end && start_column<=column_end){
        // startring row
        for(int col=start_column;col<=column_end;col++){
            cout<< a[start_row][col]<<" ";
            
        }
        start_row++;
        // end column
         for(int row = start_row;row<=row_end;row++){
            cout<< a[row][column_end]<<" ";
            
        }
        column_end--;
        // end row 
        for(int col=column_end;col>=start_column;col--){
            cout<< a[row_end][col]<<" ";
           
        }
         row_end--;
        // starting column
         for(int row=row_end;row>=start_row;row--){
            cout<< a[row][start_column]<<" ";
            
        }
        start_column++;
    }
    return 0;
}
// transport of an 2-D array
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        // j is starting from i bcoz we only want element above diagnol element to be converted to ij to ji 
        for(int j=i;j<m;j++){
            // we will swap it using tem variable
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}


// https://drive.google.com/file/d/1Y-dVpTnL_OVYNl-9MYbAvrup26xdIPUQ/view
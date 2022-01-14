// union 
// Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

// Example 1:

// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3
// Output: 
// 5
// Explanation: 
// 1, 2, 3, 4 and 5 are the
// elements which comes in the union set
// of both arrays. So count is 5.

//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
       set<int>s;
       for(int i=0;i<n;i++)
       s.insert(a[i]);
       for(int i=0;i<m;i++)
       s.insert(b[i]);
       return s.size();
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends

//Initial template for C++
#include <bits/stdc++.h>
using namespace std;
class Solution
{   public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        sort(a, a + n);
        sort(b, b + m);
        int i = 1, j = 1, k;
        set<int> s;
        if (a[0] != b[0])
        {
            s.insert(a[0]);
            s.insert(b[0]);
            k = 2;
        }
        else
        {
            s.insert(a[0]);
            k = 1;
        }
        while (i < n && j < m)
        {
            if (a[i] != b[j])
            {
                s.insert(a[i]);
                k++;
                i++;
                s.insert(b[j]);
                k++;
                j++;
            }
            else
            {
                s.insert(a[i]);
                k++;
                i++;
                j++;
            }
        }
        while (i < n)
        {
            s.insert(a[i]);
            k++;
            i++;
        }
        while (j < m)
        {
            s.insert(b[j]);
            k++;
            j++;
        }
        return s.size();
    }
};
// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }
    return 0;
} // } Driver Code Ends
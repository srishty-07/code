// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
// Input:
// N = 4, M = 5
// arr1[] = {1, 3, 5, 7}
// arr2[] = {0, 2, 6, 8, 9}
// Output: 0 1 2 3 5 6 7 8 9
// Explanation: Since you can't use any 
// extra space, modify the given arrays
// to form 
// arr1[] = {0, 1, 2, 3}
// arr2[] = {5, 6, 7, 8, 9}


// ab j is pointing toward 5 of arr2 and i is pointing towards 3 i.e  n-1 of arr1,now we are checking if a1[i]>a2[j]
// i.e if last element of a1[] is greater than that of first element of a2[] then swap them ab humare jitne bhi chote element hai a2 main voh 
// a1 ke end main ate jayenge aur bade vale a2 main jaate jayenge aur swap karne ke baad hum sort kardenege dono ko
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {

        int i = n - 1;//last element of arr1
	    int j = 0;//1st element	of arr2
	    while (j < m && i >= 0) {
	        if (arr1[i] > arr2[j]) {
	            swap(arr1[i],arr2[j]);
	        }
	        i--;
	        j++;
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    // code here
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends



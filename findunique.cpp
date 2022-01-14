// unique element
// naive approach
/*
input: 12 12 12 13
output: unique elements = 2
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        while (a[i] == a[i + 1])
        {
            i++;
        }
        cnt++;
    }

    cout << cnt;
    return 0;
}
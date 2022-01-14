// you can use __int128 var in cpp 14
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin.tie(nullptr)->sync_with_stdio(false), cin >> t;
	while (t--) {
		string S; 
		cin >> S;
		int N = S.size();
		__int128 X = 0;
		for (int i = 0; i < N; ++i)
			if (X <<= 1, S[i] == '1')
				X |= 1;
		string ans;
		if (X == 0)
			ans = "0";
		else {
			while (X > 0)
				ans += char('0'+X%6), X /= 6;
			reverse(ans.begin(),ans.end()); }
		cout << ans << '\n'; }
	return 0; }
 

 // another way to convert a vector from base 2 to base 6 without use of _int128
 // https://leetcode.com/problems/minimum-interval-to-include-each-query
#include <bits/stdc++.h>
using namespace std;
 
string add(string num1, string num2) {
        string res = "";
        int c = 0;
        for(int i = num1.size() - 1,j = num2.size() - 1;i >= 0 || j >= 0 ;i--,j--) {
            const int val =  (i < 0 ? 0 : num1[i] - '0') + (j < 0 ? 0 : num2[j] - '0') + c;
            c = val/6;
            res.push_back('0' + val%6);
        }
        if(c > 0) {
            res.push_back('0' + 1);
        }
        reverse(res.begin(),res.end());
        return res;
    }
 
vector<int> Solve(vector<bool> v) {
    string temp="0", power="1";
    for(int i=v.size()-1; i>=0; --i)
    {
    	if(v[i])
        temp=add(temp, power);
        power=add(power, power);
    }
    vector<int> ans(temp.size(), 0);
    for(int i=0; i<temp.size(); ++i)
    ans[i]=temp[i]-'0';
    return ans;
}
 
int main() {
	vector<bool> v={1, 1, 1, 1, 1, 1, 1};
	auto k = Solve(v);
	for(auto i:k)
	cout<<i<<" ";
	return 0;
}

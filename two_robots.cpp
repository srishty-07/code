#include <bits/stdc++.h>;
using namespace std;
const int inf = 1e9 + 5;
const int nax = 1005;

int a[nax], b[nax], dp[nax][nax];

int dist(int i, int j) {
    if(i == 0) return abs(b[j] - a[j]);
    return abs(a[j]-b[i]) + abs(b[j] - a[j]);
}

void te() {
    int m;
    scanf("%d%d", &m, &m);
    for(int i = 1; i <= m; ++i) scanf("%d%d", &a[i], &b[i]);
    for(int i = 0; i < nax; ++i)
        for(int j = 1; j < nax; ++j)
            dp[i][j] = inf;
    int res = inf;
    for(int i = 0; i < m; ++i) 
        for(int j = i; j <= m; ++j) {
            if(j == m) {
                res = min(res, dp[i][j]);
                continue;
            }
            int me = dp[i][j];
            dp[i][j+1] = min(dp[i][j+1], me + dist(j, j+1));
            dp[j][j+1] = min(dp[j][j+1], me + dist(i, j+1));
        }
    printf("%d\n", res);
}

int main()
{
    int z;
    scanf("%d", &z);
    while(z--) te();
    return 0;
}

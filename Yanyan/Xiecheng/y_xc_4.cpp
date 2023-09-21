//
// Created by 13176 on 2023/9/21.
//
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll M = 1e9 + 7;
const int MAXN = 1e3 + 5;

ll dp[MAXN][MAXN][100];
int num[20];
ll dfs(int pos, int cnt, int state, bool  lim){
    if(pos == -1) return (cnt = 0) && (state == 0);
    if (cnt < 0) return 0;
    if (!lim && dp[pos][cnt][state] != -1) return dp[pos][cnt][state];
    int up = lim? num[pos] : 9;
    ll ans = 0;
    for (int i = 0; i <= up; ++i) {
        ans = (ans + dfs(pos - 1, cnt - (i != num[pos]), (state * 10 + i)%75, lim && i==up)) % M;
    }
    if(!lim) dp[pos][cnt][state] = ans;
    return ans;
}

ll solve (ll x, int k){
    int pos = 0;
    while(x){
      num[pos++] = x%10;
      x /= 10;
    }
    return  dfs(pos - 1, k, 0, true);
}
int main() {
    int n, k;
    cin >> n >> k;
    memset(dp, -1,sizeof(dp));
    cout<<solve(n,k);
    return 0;
}

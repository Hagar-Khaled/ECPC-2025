#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int N = 1e6 + 16, MOD = 1e9 + 7;
int fact[N], invFact[N];
int add(int x, int y) {
    return ((x + y) % MOD + MOD) % MOD;
}
int mul(int x, int y) {
    return ((1LL * x * y % MOD) + MOD) % MOD;
}
int pw(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1) res = mul(res, x);
        x = mul(x, x);
        y >>= 1;
    
    return res;
}

}
int main() {
    RUN();
    fact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = mul(fact[i - 1], i);
    }
    invFact[N - 1] = pw(fact[N - 1], MOD - 2);
    for (int i = N - 2; i >= 0; i -- ) {
        invFact[i] = mul(invFact[i + 1], i +1);
    }
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        if (n==1 || k>=n) cout<<0<<endl;
        else{
            //number of pairs  num 
            // number of positions n-1
            // rest of positions n-2
            
            k = max(k,1);
            int num = n - k;
            int ans = (1LL * num * (num + 1) / 2) % MOD;
            ans = mul(ans,fact[n-2]);
            ans=mul(ans,n-1);
            cout<<ans<<endl;
        }
        
    }
    
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    RUN();
    int t;
    cin>>t;
    while (t--){
        int n;
        cin >> n ;
        vector<ll> a(n);
        vector<ll> uniq;
        vector<ll> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        
        for (int i = 0; i < n; i++) {
            if(uniq.empty()||uniq.back()!=a[i]){
                uniq.push_back(a[i]);
                freq.push_back(1);
            }
            else {freq.back()++;}
        }
        sort(freq.begin(),freq.end());
        sort(uniq.begin(),uniq.end());
        ll ans=0;
        for (int i = 0; i < freq.size(); i++) {
            ans += (freq[i] * uniq[uniq.size()-i-1]);
        }
        cout<<ans<<endl;
    }
    
}

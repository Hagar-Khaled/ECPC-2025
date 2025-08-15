
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main()
{
    RUN();
    int t;
    cin>>t;
    while(t--){
        ll v,ti,r;
        cin>>v>>ti>>r;
        cout<<(r/(v*ti))<<endl;
    }

    return 0;
}

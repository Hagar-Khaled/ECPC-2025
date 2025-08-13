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
        ll a,b;
        cin>>a>>b;
        if (b==0 )cout<<a<<" "<<1<<endl;
        else {
            // B > 0 -> n,m >= 3
            // x = n-2, y = m-2; B = x*y; S = x+y = (A-4)/2
            ll S = (a - 4) / 2;
            ll D = S * S - 4 * b; // discriminant
            ll sd = sqrtl(D);
            while (sd * sd < D) sd++;
            while (sd * sd > D) sd--;
            ll x1 = (S + sd) / 2;
            ll x2 = (S - sd) / 2;
            cout<<max(x1,x2)+2 <<" "<<min(x1,x2)+2 <<endl;
        }
    }

    return 0;
}

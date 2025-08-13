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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    int minDays = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        minDays = min(minDays, a[i] / k);
    }

    cout << minDays + 1 << " ";

    ll sum = 1LL * n * minDays * k; // gold stolen in full days

    int caughtHouse = -1;
    if (minDays % 2) { // odd days next: right-to-left
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] - 1LL * minDays * k >= k) {
                sum += k;
            } else {
                caughtHouse = i + 1; // 1-based
                break;
            }
        }
    } else { // even days next: left-to-right
        for (int i = 0; i < n; i++) {
            if (a[i] - 1LL * minDays * k >= k) {
                sum += k;
            } else {
                caughtHouse = i + 1; // 1-based
                break;
            }
        }
    }

    cout << caughtHouse << " " << sum << endl;
}

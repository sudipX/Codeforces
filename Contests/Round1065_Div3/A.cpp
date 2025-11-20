#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define debug(x) cerr << #x << ":" << x << endl;
using namespace std;

void solve() {
    int n;cin>>n;
    if(n&1)cout<<0<<endl;
    else cout<<n/4+1<<endl;
    
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define debug(x) cerr << #x << ":" << x << endl;
using namespace std;

void solve() {
    int ans=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int x;cin>>x;
            if(x)ans+=abs(3-i)+abs(3-j);
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
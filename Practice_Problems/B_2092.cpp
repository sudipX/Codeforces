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
    string a,b;cin>>a>>b;
    int evenA=0,evenB=0,oddA=0,oddB=0;
    for(int i=0;i<n;i++){
        if(i&1){if(a[i]=='1')oddA++;if(b[i]=='1')oddB++;}
        else{if(a[i]=='1')evenA++;if(b[i]=='1')evenB++;}
    }
    int odd=oddB+evenA,even=evenB+oddA;
    cout<<((odd>n/2||even>(n+1)/2)?"NO\n":"YES\n");
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
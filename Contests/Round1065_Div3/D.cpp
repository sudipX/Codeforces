#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define debug(x) cerr << #x << ":" << x << endl;
using namespace std;

void solve() {
    int n,bit,index;cin>>n;
    vector<int>a(n),b(n);
    int xorr=0;
    for(int i=0;i<n;i++){cin>>a[i];xorr^=a[i];}
    for(int i=0;i<n;i++){cin>>b[i];xorr^=b[i];}
    if(xorr==0){cout<<"Tie\n";return;}
    for(int i=0;i<20;i++)if(xorr& 1<<i)bit=i;
    for(int i=0;i<n;i++)if((a[i]^b[i])&1<<bit)index=i;
    cout<<(index&1?"Mai\n":"Ajisai\n");
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
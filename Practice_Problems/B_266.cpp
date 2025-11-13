#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define debug(x) cerr << #x << ":" << x << endl;
using namespace std;

void solve() {
    int n,t;cin>>n>>t;
    string s;cin>>s;
    for(int i=0;i<t;i++){
        int j=0;
        while(j<n-1){
            if(s[j]=='B' && s[j+1]=='G'){
                swap(s[j],s[j+1]);j+=2;
            }
            else j++;
        }
    }
    cout<<s<<endl;
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
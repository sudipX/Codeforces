#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define debug(x) cerr << #x << ":" << x << endl;
using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    vector<int>ans(m+1,0);
    vector<vector<int>>a;
    for(int i=0;i<n;i++){
        int l;cin>>l;
        vector<int>b;
        for(int i=1;i<=l;i++){
            int k;cin>>k;ans[k]++;
            b.pb(k);
        }
        a.pb(b);
    }
    for(int i=1;i<ans.size();i++){
        if(ans[i]==0){cout<<"NO"<<endl;return;}
    }
    int num=0;
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<a[i].size();j++){
            if(ans[a[i][j]]==1)flag=false;
        }
        if(flag)num++;
    }
    if(num>=2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
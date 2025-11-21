#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define debug(x) cerr << #x << ":" << x << endl;
using namespace std;

void solve() {
    int k,x;cin>>k>>x;
    int kk=1ll<<k,y=kk*2-x;
    vector<int>ans;
    int count=0;
    while(x!=kk){
        if(x<kk){y-=x;x*=2;ans.push_back(1);}
        else{x-=y;y*=2;ans.push_back(2);}
        count++;
    }
    cout<<count<<endl;
    while(!ans.empty())cout<<ans.back()<<' ',ans.pop_back();
    cout<<endl;
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
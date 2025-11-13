#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define debug(x) cerr << #x << ":" << x << endl;
using namespace std;

void solve() {
    vector<vector<int>>a(3,vector<int>(3,0));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int k;cin>>k;
            if(k){
                a[i][j]+=k;
                if(j!=2)a[i][j+1]+=k;
                if(j!=0)a[i][j-1]+=k;
                if(i!=2)a[i+1][j]+=k;
                if(i!=0)a[i-1][j]+=k;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<(a[i][j]%2?0:1);
        }
        cout<<endl;
    }
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
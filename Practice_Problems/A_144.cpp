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
    vector<int>a(n);
    for(int &i:a)cin>>i;
    int maximum=INT_MIN,minimum=INT_MAX,max_index,min_index;
    for(int i=0;i<n;i++){
        if(a[i]<=minimum){min_index=i;minimum=a[i];}
        if(a[i]>maximum){max_index=i;maximum=a[i];}
    }
    int ans=n-1-min_index+max_index;
    cout<<(min_index>max_index?ans:ans-1)<<endl; 
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
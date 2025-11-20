#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define debug(x) cerr << #x << ":" << x << endl;
using namespace std;

void solve() {
    int n,count=0;cin>>n;
    vector<int>a(n);
    bool last=false, first=false;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        a[i]=k!=-1?k:0;
        if(k==-1){if(i==0)first=true;if(i==n-1)last=true;}
        if(i>0 && !last)count+=a[i]-a[i-1];
    }
    if(first){
        if(last)a[0]=0;
        else a[0]=max(0ll,count);
    }
    if(last)a[n-1]=max(0ll,a[n-2]-count);
    int sum=0;
    for(int i=1;i<n;i++)sum+=a[i]-a[i-1];
    cout<<abs(sum)<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
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
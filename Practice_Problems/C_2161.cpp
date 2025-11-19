#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define debug(x) cerr << #x << ":" << x << endl;
using namespace std;

void solve() {
    int n,x;cin>>n>>x;
    vector<int>a(n);
    for(int &i:a)cin>>i;
    sort(all(a));
    int left=0,right=n-1;
    int sum=0,bonus=0;
    vector<int>ans;
    while(left<=right){
        if((sum+a[right])/x>(sum/x)){
            ans.pb(a[right]);bonus+=a[right];
            sum+=a[right];right--;
        }
        else{
            ans.pb(a[left]);
            sum+=a[left];left++;
        }
    }
    cout<<bonus<<endl;
    for(int &i:ans)cout<<i<<" ";
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
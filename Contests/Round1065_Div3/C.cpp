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
    vector<int>a(n),b(n);
    int Axor=0,Bxor=0;
    for(int i=0;i<n;i++){cin>>a[i];Axor^=a[i];}
    for(int i=0;i<n;i++){cin>>b[i];Bxor^=b[i];}
    for(int i=0;i<n;i++){
        int newAxor=Axor^a[i]^b[i];
        int newBxor=Bxor^b[i]^a[i];
        if (i%2==0){ 
            if (newAxor>Axor && newAxor>=newBxor) {
                Axor=newAxor;Bxor=newBxor;
                swap(a[i],b[i]);
            }
        }
        else {
            if (newBxor>Bxor && newBxor>=newAxor) {
                Axor=newAxor;Bxor=newBxor;
                swap(a[i],b[i]);
            }
        }
    }
    if(Axor==Bxor)cout<<"Tie"<<endl;
    else if(Axor>Bxor)cout<<"Ajisai"<<endl;
    else cout<<"Mai"<<endl;
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
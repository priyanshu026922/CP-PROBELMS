#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef set<int> si;
typedef multiset<int> msi;
typedef map<int, int> mii; 
typedef map<ll, ll> mll;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define maxe(v) (*max_element(all(v)))
#define mine(v) (*min_element(all(v)))
#define sumv(v) (accumulate(all(v), 0LL))
#define lb(v, x) (lower_bound(all(v), x) - (v).begin())
#define ub(v, x) (upper_bound(all(v), x) - (v).begin())
#define ispresent(v, x) (binary_search(all(v), x))
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define ff first
#define ss second
#define mod 1000000007
 
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
// bool cmp(pair<ll,ll>&p1,pair<ll,ll>&p2){
//     if(p1.first==p2.first){
//         return p1.second<p2.second;
//     }
 
//     return p1.first>p2.first;
// }

// bool isPos(vll &a,ll mid,ll n){

//     ll i=0;
//     ll x=a[0];
//     while(x!)
// }
void solve(){
ll n;
cin>>n;
vll a(n);
rep(i,0,n){
    cin>>a[i];
}
vll diff(n-1);
ll m=LLONG_MAX;
rep(i,0,n-1){
    ll x=a[i+1]-a[i];
    diff[i]=a[i+1]-a[i];
  m=min(x,m);
}

ll x=0;
rep(i,0,n-1){
  x=__gcd(diff[i],x);
}
// cout<<x<<endl;
int ans=0;
rep(i,0,n-1){
ll y=1LL*(a[i+1]-a[i])/x;
if(y>0)ans=1LL*(ans+y-1);
}
cout<<ans<<endl;
// ll l=0;
// ll h=m;
// ll ans=-1;
// while(l<=h){
//     ll mid=(l+(h-l)/2);
//     if(isPos(a,mid,n)){
//        ans=mid;
//        l=mid+1;
//     }else{
//         h=mid-1;
//     }
// }

}
  


 
 
int main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
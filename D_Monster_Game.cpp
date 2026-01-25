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

// ll avail(vll &b,vll &a,ll mid){
//     ll cnt=0;
//     rep(i,0,b.size()){
//         if(a[i]>=mid){
//             cnt++;
//         }
//     }
//     return cnt;
// }
// ll ispos(vll &b,ll av,ll n){
//     ll lvl=0;
//     for(ll i=0;i<n;i++){
//       if(av<b[i]){
//         break;
//       }
//       av=(av-b[i]);
//       lvl++;
//     }
//     return lvl;
// }
void solve(){
ll n;
cin>>n;
vll a(n);
rep(i,0,n){
    cin>>a[i];
}

vll b(n);
rep(i,0,n){
    cin>>b[i];
}
sort(begin(a),end(a));
vll pref(n);
pref[0]=b[0];
rep(i,1,n){
    pref[i]=b[i]+pref[i-1];
}
ll ans=0;
rep(i,0,n){
    ll x=a[i];
    ll h=n-i;
    ll lvl=upper_bound(begin(pref),end(pref),h)-begin(pref);
    ans=max(ans,x*lvl);
}


cout<<ans<<endl;
}
 
 
 
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
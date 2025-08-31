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

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
ll n,k,a,b;
cin>>n>>k>>a>>b;

vpll v(n);
rep(i,0,n){
    ll x,y;
    cin>>x>>y;
   v[i]={x,y};
}
// rep(i,0,n){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
// }
// cout<<endl;
if(a<=k&&b<=k){
    cout<<"0"<<endl;
    return;
}
ll x1=v[a-1].first;
ll y1=v[a-1].second;

ll x2=v[b-1].first;
ll y2=v[b-1].second;
 ll val1=abs(x2-x1)+abs(y2-y1);
if(k==0){
   
    cout<<val1<<endl;
    return;
}

ll mini1=LLONG_MAX;
rep(i,0,k){
    ll val=abs(v[i].first-x1)+abs(v[i].second-y1);
mini1=min(mini1,val);
}

ll mini2=LLONG_MAX;
rep(i,0,k){
    ll val=abs(v[i].first-x2)+abs(v[i].second-y2);
mini2=min(mini2,val);
}
val1=min(val1,mini1+mini2);
cout<<mini1+mini2<<endl;


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
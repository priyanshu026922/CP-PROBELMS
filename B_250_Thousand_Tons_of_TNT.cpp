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
ll n;
cin>>n;
vll a(n);
rep(i,0,n){
    cin>>a[i];
}

vll pre(n);
pre[0]=a[0];

rep(i,1,n){
    pre[i]=a[i]+pre[i-1];
}

ll ans=0;
rep(k,1,n){
    if(n%k!=0)continue;
    int s=k-1;
    ll maxi=pre[s];
    ll mini=pre[s];
   for(int j=s+k;j<n;j+=k){
    ll curr=pre[j]-pre[j-k];
    maxi=max(maxi,curr);
    mini=min(mini,curr);
   }
   ans=max(ans,maxi-mini);
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
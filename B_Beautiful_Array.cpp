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

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define maxe(v) (*max_element(all(v)))
#define mine(v) (*min_element(all(v)))
#define sumv(v) (accumulate(all(v), 0LL))
#define sortasc(v) sort(all(v))
#define sortdesc(v) sort(rall(v))
#define lb(v, x) (lower_bound(all(v), x) - (v).begin())
#define ub(v, x) (upper_bound(all(v), x) - (v).begin())
#define ispresent(v, x) (binary_search(all(v), x))
#define freqmap(mp, v) for (auto &el : v) mp[el]++


#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define ff first
#define ss second


void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
ll n,k,b,s;
cin>>n>>k>>b>>s;

ll mini=k*b;
ll maxi=k*b+n*(k-1);

if(s>maxi||s<mini){
 cout<<"-1"<<endl;
 return;
}

vll ans(n);
ans[0]=mini;
ll S=s-mini;
rep(i,0,n){
ll add=min(k-1,S);
ans[i]+=add;
S-=add;
}
  rep(i,0,n){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
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
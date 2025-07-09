#include <bits/stdc++.h>
using namespace std;

// ------------------ Type Aliases ------------------
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

// ------------------ STL Helpers ------------------
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

// ------------------ Looping ------------------
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define ff first
#define ss second

// ------------------ Fast I/O ------------------
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// ------------------ Solve Function ------------------
void solve() {
   ll n,p;
    cin>> n>>p;
    vll a(n);
    vll b(n);
    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];

    vpll ans(n);
    rep(i,0,n)ans[i]={b[i],a[i]};
    
    sortasc(ans);

   ll mCost=p;
  ll shared=1;

  rep(i,0,n){
ll b_=ans[i].ff;
  ll a_=ans[i].ss;
  if(b_>=p)break;
 if(shared+a_>=n){
    mCost+=(n-shared)*b_;
    shared=n;
    break;
 }
 else{
    mCost+=a_*b_;
    shared+=a_;
 }
 }
 mCost+=(n-shared)*p;
 cout<<mCost<<endl;
    
}


    

// ------------------ Main Function ------------------
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
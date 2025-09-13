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

void solve(){
ll n;
cin>>n;
ll m;
cin>>m;
ll last=0;
ll state=0;
ll count=0;
vector<pair<int,int>> vec(n);
rep(i,0,n){
    int a,b;
    cin>>a>>b;
vec[i].first=a;
vec[i].second=b;
}

vec.insert(vec.begin(),{0,0});
vec.push_back({m,-1});
ll ans=0;
int p=vec.size();
rep(i,0,p-1){
    ll x1=vec[i].first;
    ll y1=vec[i].second;
     ll x2=vec[i+1].first;
    ll y2=vec[i+1].second;
    ll len=x2-x1;
    if(y2==-1)ans+=len;
    else{
        int d=abs(y2-y1);
        int val=len-d;
        ans+=(len-(val%2));
    }
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
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
int n;
cin>>n;
vll a(n),b(n),c(n);
rep(i,0,n){
    cin>>a[i];
}

rep(i,0,n){
    cin>>b[i];
}

rep(i,0,n){
    cin>>c[i];
}
vpll vec;
rep(i,0,n){
    vec.push_back({a[i],i});
     vec.push_back({b[i],i});
      vec.push_back({c[i],i});
}
sort(begin(vec),end(vec));
int m=vec.size();
ll mini=LLONG_MAX;
vll f(n,0);
ll l=0;
ll cnt=0;
rep(i,0,m){
    int curr=vec[i].second;
    if(f[curr]==0){
        cnt++;
    }
    
    f[curr]++;
    while(cnt==n){
        mini=min(mini,vec[i].first-vec[l].first);
        int lefty=vec[l].second;
        f[lefty]--;
        if(f[lefty]==0){
            cnt--;
        }
        l++;
    }
}
cout<<mini<<endl;
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
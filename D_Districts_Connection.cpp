#include <bits/stdc++.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
 
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
#define mod  998244353

 
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


void solve(){
ll n;
cin>>n;
vll a(n);
rep(i,0,n){
    cin>>a[i];
}
vll vis(n,0);
ll x=a[0];
vis[0]=1;
ll ans=0;
rep(i,1,n){
  if(a[i]==x){
    vis[i]=1;
  }
}
vll q(n,0);
q=vis;
ll val1=0;

bool t=true;
rep(i,0,n){
   if(!vis[i]){
    val1=i;
    t=false;
    break;
   }
}

if(t){
    cout<<"NO"<<endl;
    return;
}

set<pair<ll,ll>>s;
cout<<"YES"<<endl;
rep(i,0,n){
    if(!vis[i])continue;
    rep(j,i+1,n){
        if(!vis[j]){
            cout<<i+1<<" "<<j+1<<endl;
            vis[j]=1;
            s.insert({i+1,j+1});
            s.insert({j+1,i+1});
        }
    }
}

rep(i,0,n){
    if(q[i]&&s.count({i+1,val1+1})==0&&s.count({val1+1,i+1})==0){
        cout<<val1+1<<" "<<i+1<<endl;
    }
}





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
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
#define mod 998244353
 
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

bool s(vvi &a,int i,int j,bool left,bool up){
    if(i<0||j<0){
        return false;
    }
    if(i==0&&j==0){
        return true;
    }
    bool l=false,r=false;
    if(up){
      l=s(a,i,j-1,left,true);
    }else{
       r= s(a,i-1,j,left,true)||s(a,i,j-1,left,up);
    }
    return l||r;
}

void solve(){
ll n;
cin>>n;
vvi a(2,vi(n));
rep(i,0,2){
    rep(j,0,n){
      cin>>a[i][j];
}
}
a[0][1]=min(a[0][1],a[1][1]);
a[1][1]=max(a[0][1],a[1][1]);
a[0][n-1]=min(a[0][n-1],a[1][n-1]);
a[1][n-1]=max(a[0][n-1],a[1][n-1]);

if(s(a,0,0,false,false)){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}
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
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


// ll s(vector<vector<ll>>&vec,ll n,int i,int j,vector<vector<ll>>&dp){
// if(i==0&&j==0)return vec[0][0];
// if(i<0||j<0){
//     return LLONG_MIN;
// }
// if(dp[i][j]!=-1)return dp[i][j];

// ll t1=(vec[i][j]+s(vec,n,i-1,j,dp))%mod;
// ll t2=(vec[i][j]+s(vec,n,i,j-1,dp))%mod;
// return dp[i][j]= max(t1,t2);
// }

void solve(){
ll n;
cin>>n;
// vector<vector<ll>>vec(n+1,vector<ll>(n+1));
// vector<vector<ll>>dp(n+1,vector<ll>(n+1,-1));
//  rep(i,0,n){
//     rep(j,0,n){
//        vec[i][j]=(i+1)*(j+1);
//     }
//  }
// ll ans=s(vec,n,n-1,n-1,dp);
// cout<<(ans*2022)%mod<<endl;

// ll val=0;
// int x=0;
// ll i=1;
// ll j=1;
// rep(k,1,2*n){
// if(x==0){
//    val=(val+(1LL*i*j));
//    j++;
//    x=!x;
// }else{
//     val=(val+(1LL*i*j));
//    i++;
//    x=!x;
// }
// }
ll ans=((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
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
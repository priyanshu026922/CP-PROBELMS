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
typedef map<char, int> mci;
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
#define repi(i, a, b) for (int i = (a); i <=(b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define ff first
#define ss second

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool cmp(pair<ll,ll>&a,pair<ll,ll>&b){
  if(a.first!=b.first){
    return a.ff>b.ff;
  }
  return a.ss<b.ss;
}


ll next_prime(ll n ){
   
    for (ll i=n;;i++){
         bool isPrime=true;
         for (ll j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
         }
         if(isPrime)return i;

    }
}


void solve(){
   ll n,m;
   cin>>n>>m;
   vvi a(n,vi(m));
   int sum=0;
   int countN=0;
   int mini=INT_MAX;
   bool zero=false;
     rep(i,0,n){
        rep(j,0,m){
            cin>>a[i][j];
            sum+=abs(a[i][j]);
            if(a[i][j]==0){
                zero =true;
            }
            if(a[i][j]<0){
                countN++;
            }
            mini=min(mini,abs(a[i][j]));
        }
     }
     if(zero){
        cout<<sum<<endl;
        return;
     }
     if(countN%2==0){
        cout<<sum<<endl;
        return;
     }
    //  bool neg=true;
    //  rep(i,0,n){
    //     rep(j,0,m){
    //      if(a[i][j]==mini&&neg){
    //         sum-=a
    //      }
    //         sum+=abs(a[i][j]);
          
    //     }
    // }
     cout<<sum-2*mini<<endl;



}

int main() {
    fastio();
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}
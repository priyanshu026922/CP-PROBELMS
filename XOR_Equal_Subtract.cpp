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

 unordered_map<int,int> freq;

    for (long long x : a) {
        int b = 63 - __builtin_clzll(x);  // highest set bit
        freq[b]++;
    }

    int ans = 0;
    for (auto &p : freq) ans = max(ans, p.second);

    cout << ans << "\n";
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

// void solve(){
// ll n;
// cin>>n;
// vll a(n);
// rep(i,0,n){
//     cin>>a[i];
// }
// vll m(n,0);
// rep(i,0,n){
//     rep(j,i+1,n){
//         ll b=a[i]^a[j];
//         ll c=abs(a[i]-a[j]);
//        if(b==c){
//          if(m[i]==0)m[j]=max(2LL,m[j]);
//          else m[j]=max(m[i]+1,m[j]);
//        }
//     }
// }

// ll maxi=LLONG_MIN;
// rep(i,0,n){
//     maxi=max(maxi,m[i]);
// }
// if(maxi==0){
//     cout<<"1"<<endl;
//     return;
// }
// cout<<maxi<<endl;
// }

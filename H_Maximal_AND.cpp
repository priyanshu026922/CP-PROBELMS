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
ll n,k;
cin>>n>>k;
vll a(n);
rep(i,0,n){
    cin>>a[i];
}

sort(rbegin(a),rend(a));

vi bits(31,0); 
vi active(31,1);
rep(i,0,n){
    for(int j=0;j<=30;j++){
        if((a[i] & (1<<j)) == 0){
            bits[j]++;
            active[j]=0;
        }
    }
}

ll ans=0;

reverse(begin(bits),end(bits));
reverse(begin(active),end(active));
for(int i=0;i<=30;i++){
    if(active[i]){
        ans+=(1LL<<(30-i));
    }
    else if(k>=bits[i]){
       ans+=(1LL<<(30-i));
       k-=bits[i];
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
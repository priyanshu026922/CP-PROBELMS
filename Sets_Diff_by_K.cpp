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
 

long long power(long long base, long long exp, const long long m) {
    long long res = 1;
    base %= m;
    while (exp > 0) {
        if (exp & 1)
            res = (res * base) % m;
        base = (base * base) % m;
        exp >>= 1;
    }
    return res;
}

long long modularInverse(long long n, long long m) {
    return power(n, m - 2, m);
}

bool isPrime(ll n) {
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void solve(){
int n,k;
cin>>n>>k;
vi b(n);

vi s;
rep(i,0,n){
    cin>>b[i];
    if(b[i]==1)s.push_back(i+1);
}

for(int i=1;i<s.size();i++){
    if(abs(s[i]-s[i-1]<=k)){
        cout<<"No"<<endl;
        return;
    }
}
for(int i=1;i<=n;i++){
    if(b[i-1]==0){
        bool c=false;
        for(int j=max(1,i-k);j<=min(n,i+k);j++){
            if(b[j-1]==1){
                c=true;
                break;
            }
        }
        if(!c){
            cout<<"No"<<endl;
            return;
        }
    }
}
cout<<"Yes"<<endl;

}
 
 
int main() {
    fastio();
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
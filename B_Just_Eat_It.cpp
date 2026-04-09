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
 
const int MAXI=200001;

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll getSum(int l,int r,vll &a){
    ll sum=0;
    ll maxi=LLONG_MIN;
    rep(i,l,r){
        sum+=a[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

void solve(){
ll n;
cin>>n;

vll a(n);
rep(i,0,n){
    cin>>a[i];
}
ll s=sumv(a);

ll maxiL=getSum(0,n-1,a);
ll maxiR=getSum(1,n,a);
if(maxiL>=s||maxiR>=s){
    cout<<"NO"<<endl;
    return;
}

cout<<"YES"<<endl;
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
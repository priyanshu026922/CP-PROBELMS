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

vll a(n);
rep(i,0,n){
    cin>>a[i];
}

ll gcd1=0,gcd2=0;
rep(i,0,n){
   if(i&1){
    gcd1=__gcd(gcd1,a[i]);//odd position
   }else{
    gcd2=__gcd(gcd2,a[i]);//even postion
   }
}

bool  t=true;
for(int i=0;i<n;i+=2){
    if(a[i]%gcd1==0){
        t=false;
        break;
    }
}

if(t){
    cout<<gcd1<<endl;
    return;
}

bool t1=true;
for(int i=1;i<n;i+=2){
    if(a[i]%gcd2==0){
        t1=false;
        break;
    }
}

if(t1){
    cout<<gcd2<<endl;
    return;
}


    cout<<"0"<<endl;

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
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
ll n;
cin>>n;
vll a(n);
rep(i,0,n){
    cin>>a[i];
}
ll off=0;
ll countE=0;
ll countO=0;
rep(i,0,n){
if(a[i]%2==0)countE++;
else countO++;
}

if(countE==n){
cout<<"0"<<endl;
return;
}
vll odd;
ll sum=0;
ll sumo=0;
ll mini=INT_MAX;
rep(i,0,n){
if(a[i]%2==0){
    sum+=a[i];
}else{
    odd.push_back(a[i]);
    sumo+=a[i];
    mini=min(mini,a[i]);
}
}


ll val=0;
if(countO%2==1){
val=countO/2+1;
}else{
    val=countO/2;
}

sort(rbegin(odd),rend(odd));
ll sumNew=0;
rep(i,0,val){
    sumNew+=odd[i];
}

// ll maxi=INT_MIN;
// rep(i,0,n){
//     if(a[i]%2==1){
//        maxi=max(maxi,a[i]);
//     }
// }
cout<<sum+sumNew<<endl;


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
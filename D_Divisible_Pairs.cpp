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
ll n,x,y;
cin>>n>>x>>y;
vll a(n);
rep(i,0,n){
    cin>>a[i];
} 
map<pair<ll,ll>,ll>mp;
vll ax(n);
vll ay(n);
rep(i,0,n){
    ax[i]=a[i]%x;
    ay[i]=a[i]%y;
}
ll cnt=0;
mp[{ax[n-1],ay[n-1]}]=1;
for(int i=n-2;i>=0;i--){
    ll val1=ax[i];
    ll val2=ay[i];
    ll z=(x-val1)%x;
    if(mp.find({z,val2})!=mp.end()){
        cnt+=mp[{z,val2}];
    }
    mp[{val1,val2}]++;
}
cout<<cnt<<endl;

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
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
 
//  bool isPos(ll x,ll y){
//     return __gcd(x,y)==1;
//  }

void solve(){

int n;
cin>>n;

vll a(n);
rep(i,0,n){
    cin>>a[i];
}



ll maxi=maxe(a);
ll mini=mine(a);
vll b(n);
b=a;
sort(begin(b),end(b));
unordered_map<ll,ll>mp1;
unordered_map<ll,ll>mp2;
rep(i,0,n){
 if(i+1<n) mp1[b[i]]=b[i+1];
if(i-1>=0)  mp2[b[i]]=b[i-1];
}
rep(i,0,n){
    if(a[i]==mini||a[i]==maxi){
        cout<<"-1"<<" ";
        continue;
    }

    else {
        
          ll x=(a[i]+mp2[a[i]])/2;
          ll y=((mp1[a[i]]+a[i])/2)-x;
        //   ll y=((maxi+a[i])/2)-x;
          cout<<y<<" ";
    }
}
cout<<endl;






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
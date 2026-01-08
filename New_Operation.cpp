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
int n;
cin>>n;
vi a(n);
rep(i,0,n){
    cin>>a[i];
}
vi b(n);
b=a;

sort(begin(b),end(b));
ll mini=0;
rep(i,0,n){
    ll x=1LL<<(n-i-1);
    mini+=(x*b[i]);
}
sort(rbegin(a),rend(a));
ll maxi=0;
rep(i,0,n){
  ll y=1LL<<(i);
   maxi+=(y*a[i]);

}
cout<<mini<<" "<<maxi<<endl;
// int sum=0;
vi s(n,0);
s[n-1]=a[n-1];
for(int i=n-2;i>=0;i--){
   s[i]=a[i]+s[i+1];
}
vi p(n,0);
p[0]=a[0];
for(int i=1;i<n;i++){
    p[i]=p[i-1]+a[i];
}


// int val1=0;
// int val2=0;
// int maxi=INT_MIN;
// int mini=INT_MAX;
// rep(i,0,n){
//     sum+=a[i];
//     val1=sum+2*(s[i]-a[i]);
//     val2=(sum-a[i])+2*(s[i]);
//      maxi=max(maxi,val1);
//      mini=min(mini,val1);
//       maxi=max(maxi,val2);
//      mini=min(mini,val2);
// }

//    cout<<mini<<" "<<maxi<<endl;
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
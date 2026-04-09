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
string s;
cin>>s;
int n=s.length();
vi pref(n,0);
vi suff(n,0);
int cnt=(s[0]=='v')?1:0;
int last=0;

rep(i,1,n){
    if(s[i]=='o'){
        pref[i]=last+(cnt-1>=0?cnt-1:0);
        cnt=0;
        last=pref[i];
    }else{
         cnt++;
    }
}

// rep(i,0,n){
//     cout<<pref[i]<<" ";
// }
// cout<<endl;

last=0;
cnt=(s[n-1]=='v')?1:0;
repr(i,n-2,0){
     if(s[i]=='o'){
        suff[i]=last+(cnt-1>=0?cnt-1:0);
        cnt=0;
        last=suff[i];
    }else{
         cnt++;
    }
}

// rep(i,0,n){
//     cout<<suff[i]<<" ";
// }

ll ans=0;
rep(i,0,n){
    if(s[i]=='o'){
       ans+=(1LL*pref[i]*suff[i]);
    }
}
cout<<ans<<endl;
}
 
 
int main() {
    fastio();
    int t=1;
    while (t--) {
        solve();
    }
    return 0;
}
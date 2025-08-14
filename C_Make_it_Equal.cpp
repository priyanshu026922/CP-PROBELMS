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
typedef map<char, int> mci;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define maxe(v) (*max_element(all(v)))
#define mine(v) (*min_element(all(v)))
#define sumv(v) (accumulate(all(v), 0LL))
#define sortasc(v) sort(all(v))
#define sortdesc(v) sort(rall(v))
#define lb(v, x) (lower_bound(all(v), x) - (v).begin())
#define ub(v, x) (upper_bound(all(v), x) - (v).begin())
#define ispresent(v, x) (binary_search(all(v), x))
#define freqmap(mp, v) for (auto &el : v) mp[el]++


#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repi(i, a, b) for (int i = (a); i <=(b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define ff first
#define ss second

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
ll n,k;
cin>>n>>k;
vi s(n);
rep(i,0,n){
    cin>>s[i];
}
vi t(n);
rep(i,0,n){
    cin>>t[i];
}
unordered_map<ll,ll>mp;
 if (k == 0) {
      sortasc(s);
    sortasc(t);
      if (s == t){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
      return;
    }

    for(ll x:s){
        ll u=x%k;
        if(u<0){
            u+=k;

        }
        ll v=min(u,k-u);
mp[v]++;
    }
    for(ll x:t){
        ll u=x%k;
         if(u<0){
            u+=k;

        }
        ll v=min(u,k-u);
mp[v]--;
    }
    bool pos=true;
    for(auto it:mp){
        if(it.second!=0){
            pos=false;
            break;
        }
    }
    if(pos){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;


}

int main() {
    fastio();
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}



 
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
int n,k;
cin>>n>>k;
vi a(n);
rep(i,0,n){
    cin>>a[i];
}
sort(begin(a),end(a));

mii mp;
rep(i,0,n){
mp[a[i]]++;
}

int num=0;
for(auto it:mp){
    if(it.first!=num){
       break;
    }
    num++;
}
// cout<<miss<<endl;

if(num==k){
  cout<<"0"<<endl;
  return;
}
else if(num>k){
    cout<<mp[k]<<endl;
}
else{ //num<k
    int miss=0;
    rep(i,0,k){
        if(mp.find(i)==mp.end()){
            miss++;
        }
    }
    cout<<max(miss,mp[k])<<endl;
}


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
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

bool cmp(pair<ll,ll>&a,pair<ll,ll>&b){
  if(a.first!=b.first){
    return a.ff>b.ff;
  }
  return a.ss<b.ss;
}

void solve() {
int n,k;
cin>>n>>k;
vi a(n);
rep(i,0,n){
    cin>>a[i];
}
int count=0;
int i=0;
while(i<=n-k){
    bool h=true;
    for(int j=i;j<i+k;j++){
        if(a[j]==1){
            h=false;
        break;
    }
}
    if(h){
        count++;
        i+=k+1;
    }else{
        i++;
    }
}
cout<<count<<endl;
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
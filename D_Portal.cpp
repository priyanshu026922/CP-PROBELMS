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
ll n,x,y;
cin>>n>>x>>y;
vll p(n);
rep(i,0,n){
    cin>>p[i];
}
int mini=INT_MAX;
int ind=-1;
rep(i,x,y){
    if(mini>p[i]){
        mini=p[i];
        ind=i;
    }
}
vector<int>ans;
rep(i,ind,y){
  ans.push_back(p[i]);
}
rep(i,x,ind){
    ans.push_back(p[i]);
}

vector<int>req;
rep(i,0,x){
    req.push_back(p[i]);
}
rep(i,y,n){
    req.push_back(p[i]);
}

int m=ans.size();
int z=req.size();

    if(req.empty()){
        rep(i,0,m) cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }

    // ✅ correct min and max calculation (ans not sorted)
    ll mini1 = *min_element(ans.begin(), ans.end());
    ll maxi1 = *max_element(ans.begin(), ans.end());

    ll first = req.front();   // safe now
    ll last  = req.back();    // safe now

    if(last < mini1){
        rep(i,0,m){
            req.push_back(ans[i]);
        }
        rep(i,0,req.size()){
            cout<<req[i]<<" ";
        }
        cout<<endl;
        return;
    }

    if(maxi1 < first){
        rep(i,0,z){
            ans.push_back(req[i]);
        }
        rep(i,0,ans.size()){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }

    // ✅ optional: if no condition satisfied, print original array
    rep(i,0,n){
        cout<<p[i]<<" ";
    }
    cout<<endl;

}
 
 
int main() {
    fastio();
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
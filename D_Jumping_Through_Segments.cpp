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

bool isPos(vector<pair<ll,ll>>&vec,ll mid){
    ll start=0;
    ll end=0;
    for(int i=0;i<vec.size();i++){

        ll s=max(start,vec[i].first);
        ll e=min(end,vec[i].second);
        if(s>e)return false;

        start=max(start-mid,vec[i].first);
        end=min(end+mid,vec[i].second);
        // ll s=start-mid;
        // ll e=end+mid;

        // if(e<vec[i].first||s>vec[i].second){
        //     return false;
        // }

        // start=s;
        // end=e;
    }

    return true;
}

void solve(){
ll n;
cin>>n;

vector<pair<ll,ll>>vec(n);
rep(i,0,n){
    ll l,r;
    cin>>l>>r;
    vec[i]={l,r};
}

ll l=0;
ll r=1e9;
while(l<=r){
    ll mid=l+(r-l)/2;

    if(isPos(vec,mid)){

        r=mid-1;
    }else{
        l=mid+1;
    }
}

cout<<l<<endl;

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
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
vector<vector<int>>pref(32,vector<int>(200001,0));
ll getVal(ll l,ll r){
    int ans=0;
    for(int i=0;i<30;i++){
        if(pref[i][r+1]-pref[i][l]==0){
            ans+=(1<<i);
        }
    }
    return ans;
}

void solve(){
int n;
cin>>n;
vll a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}

int q;
cin>>q;

vpll v(q);
rep(i,0,q){
    ll l,k;
    cin>>l>>k;
    v[i]={l,k};
}



rep(j,0,32){
    rep(i,0,n){
        if(1<<j&(a[i])){
            pref[j][i+1]=pref[j][i];
        }else{
            pref[j][i+1]=pref[j][i]+1;
        }
    }
}



rep(i,0,q){
    ll l=v[i].first;
    ll k=v[i].second;
    l--;
    if(a[l]<k){
        cout<<"-1"<<" ";
        continue;
    }
    ll ans=-1;
    ll low=l;
    ll high=n-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        ll a=getVal(l,mid);
        if(a>=k){
            low=mid+1;
            ans=mid;
        }else{
            high=mid-1;
        }

    }
    cout<<ans+1<<" ";

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
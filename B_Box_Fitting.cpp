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

int isPos(vll &w,int n,int mid,int W){
    priority_queue<ll>pq;
    for(int i=0;i<mid;i++){
        pq.push(W-w[i]);
    }
    for(int i=mid;i<n;i++){
       
        int x=pq.top();
        pq.pop();
        if(x<w[i]){
            return false;
        }
        pq.push(x-w[i]);
    }
    return true;
}

void solve(){
ll n,W;
cin>>n>>W;
vll w(n);
rep(i,0,n){
    cin>>w[i];
}
sort(rbegin(w),rend(w));

ll l=1;
ll r=n;

ll ans=n;
while(l<=r){
    ll mid=l+(r-l)/2;
    if(isPos(w,n,mid,W)){
        ans=mid;
        r=mid-1;
    }else{
        l=mid+1;
    }
}

cout<<ans<<endl;
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
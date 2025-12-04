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
int n,k;
cin>>n>>k;

vi c(n);
rep(i,0,n){
    cin>>c[i];
}

vvi col(k+1);
for(int i=1;i<=k;i++){
   col[i].push_back(0);
}
rep(i,0,n){
    col[c[i]].push_back(i+1);
}
for(int i=1;i<=k;i++){
   col[i].push_back(n+1);
}

int ans=INT_MAX;
priority_queue<int>jumps[k+1];
for(int i=1;i<=k;i++){

    for(int j=0;j<col[i].size()-1;j++){
         jumps[i].push(col[i][j+1]-col[i][j]-1);
    }

    int maxi=jumps[i].top();
    jumps[i].pop();
    if(maxi%2==0){
      jumps[i].push(maxi / 2);
	  jumps[i].push((maxi/ 2) - 1);
    }else{
       jumps[i].push(maxi / 2);
	   jumps[i].push(maxi / 2);
    }
    ans=min(ans,jumps[i].top());
}

cout<<ans<<endl;


 
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
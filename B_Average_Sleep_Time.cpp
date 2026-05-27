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

void dfs(int node,vvi &adj,vi &color,int c){
    color[node]=c;
    for(auto &it:adj[node]){
        if(color[it]==-1){
            dfs(it,adj,color,!c);
        }
    }
}

void solve(){
double n,k;
cin>>n>>k;
vi a(n);
rep(i,0,n){
    cin>>a[i];
}
double sum=0.0;
double m=n-k+1;
int i=0;
int j=0;
double s=0.0;
while(j<m){
    sum += (double)a[j];
    j++;
}
s=sum;
while(j<n){
  
    sum+=a[j];
    sum-=a[i];
    j++;
    i++;
    s+=sum;
}

double ans = s/m;
cout << fixed << setprecision(6) << ans<<endl;

}
 
 
int main() {
    fastio();
    int t=1;
    while (t--) {
        solve();
    }
    return 0;
}
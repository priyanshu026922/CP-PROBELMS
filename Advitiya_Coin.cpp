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


ll solve(int i,int state,vll &p,ll n,ll k){
    if(i==n){
       if(state==0) return 0;
       return LLONG_MIN/2;
    }
    
     ll ans=solve(i+1,state,p,n,k);
    if(state==1){//sell today
           if(solve(i+1,0,p,n,k)>-p[i])ans=max(ans,p[i]+(solve(i+1,0,p,n,k)));
    }
    else if(state==2){//buy today
            if(solve(i+1,0,p,n,k)>p[i])ans=max(ans,-p[i]+solve(i+1,0,p,n,k));
    }else{//start fresh transaction today
        ans=max(ans,p[i]-k+solve(i+1,2,p,n,k));
        ans=max(ans,-p[i]-k+solve(i+1,1,p,n,k));
    }
    return ans;
}

void s(){
ll n,k;
cin>>n>>k;
vll p(n);
rep(i,0,n){
    cin>>p[i];
}
ll ans=solve(0,0,p,n,k);
cout<<ans<<endl;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        s();
    }
    return 0;
}
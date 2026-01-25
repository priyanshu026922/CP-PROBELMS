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
 
int solveP(vi &a,int num,vi &pref){
    int ans=INT_MAX;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            int val=num/i;
            if(pref[val-1]!=-1&&pref[i-1]!=-1){
                ans=min(ans,pref[val-1]+pref[i-1]);
            }
        }
    }
    return ans==INT_MAX?-1:ans;
}

void solve(){
int n;
cin>>n;
vi a(n);
rep(i,0,n){
    cin>>a[i];
}
unordered_set<int>s;
rep(i,0,n){
    s.insert(a[i]);
}

vi pref(n,-1);
pref[0]=(s.count(1)>0?1:-1);
pref[1]=(s.count(2)>0?1:-1);
pref[2]=(s.count(3)>0?1:-1);

rep(i,3,n){
    if(s.count(i+1)>0){
        pref[i]=1;
        
    }else{
        pref[i]=solveP(a,i+1,pref);
    }
}
rep(i,0,n){
    cout<<pref[i]<<" ";
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
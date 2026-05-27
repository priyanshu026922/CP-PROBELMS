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
#define mod 998244353
 
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int countD(ll x){
    int cnt=0;
    while(x>0){
        cnt++;
        x/=10;
    }
    return cnt;
}

int countT(ll x){
    int cnt=0;
    while(x>0){

        int t=x%10;
        if(t==0)cnt++;
        else break;

        x/=10;
    }
    return cnt;
}

void solve(){
ll n,m;
cin>>n>>m;

vll a(n);
rep(i,0,n){
    cin>>a[i];
}

vi trailZ;
int cntD=0;
rep(i,0,n){
    cntD+=countD(a[i]);
    int c=countT(a[i]);
    trailZ.push_back(c);
}


sort(rbegin(trailZ),rend(trailZ));

// cout<<"CNTD Early::"<<cntD<<"--";
for(int i=0;i<trailZ.size();i+=2){
    cntD-=trailZ[i];
}

// cout<<"CNTD later::"<<cntD<<endl;

if(cntD>m){
    cout<<"Sasha"<<endl;
    return;
}

cout<<"Anna"<<endl;


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
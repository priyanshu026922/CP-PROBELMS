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

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){
ll n,x;
cin>>n>>x;
vll a(n);
rep(i,0,n){
    cin>>a[i];
}
vll b(n);
rep(i,0,n){
    cin>>b[i];
}
vll c(n);
rep(i,0,n){
    cin>>c[i];
}
int i=0;
int j=0;
int k=0;
int know=0;
while(i<n&&j<n&&k<n){
     if(know==x){
        cout<<"Yes"<<endl;
        return;
    }
    ll m=min(a[i],min(b[j],c[k]));
    if(m==a[i]){
          know=know|a[i];
          i++;
    }
    if(m==b[j]){
        know=know|b[j];
        j++;
    }
    if(m==c[k]){
        know=know|c[k];
        k++;
    }
   
    if(know>x){
        break;
    }
}
while(i<n){
    
    know=know|a[i];
    if(know==x){
        cout<<"Yes"<<endl;
        return;
    }
    i++;
}
while(j<n){
    
    know=know|b[j];
    if(know==x){
        cout<<"Yes"<<endl;
        return;
    }
    j++;
}
while(k<n){
    
    know=know|c[k];
    if(know==x){
        cout<<"Yes"<<endl;
        return;
    }
    k++;
}

cout<<"No"<<endl;

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
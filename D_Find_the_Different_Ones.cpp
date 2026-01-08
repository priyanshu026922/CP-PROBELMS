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
int n;
cin>>n;
vll a(n);
rep(i,0,n){
    cin>>a[i];
}

vi b(n);
b[0]=-1;
rep(i,1,n){
    if(a[i]!=a[i-1]){
        b[i]=i-1;
    }else{
        b[i]=b[i-1];
    }
}
// rep(i,0,n){
//     cout<<b[i]<<" ";
// }
// cout<<"END"<<endl;

int q;
cin>>q;
rep(i,0,q){
    int l,r;
    cin>>l>>r;
    
    int val1=b[l-1];
    int val2=b[r-1];
    if(val2==-1||val2+1<l){
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    else{
        cout<<val2+1<<" "<<r<<endl;
    }
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
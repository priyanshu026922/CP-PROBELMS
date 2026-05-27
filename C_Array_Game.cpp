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



void solve(){
ll n,k;
cin>>n>>k;

vll a(n);
rep(i,0,n){
    cin>>a[i];
}

if(k>=3){
    cout<<"0"<<endl;
    return;
}

unordered_set<ll>st;
rep(i,0,n){
    if(st.count(a[i])>0){
        cout<<"0"<<endl;
        return;
    }
    st.insert(a[i]);
}

sort(begin(a),end(a));

vector<ll>diff;
rep(i,0,n){
    rep(j,i+1,n){
        diff.push_back(abs(a[i]-a[j]));
    }
}

sort(begin(diff),end(diff));
ll x=diff[0];

ll mini=min(x,a[0]);
if(k==1){
    cout<<mini<<endl;
    return;
}

rep(i,0,diff.size()){
    auto it=lower_bound(begin(a),end(a),diff[i]);
    if(it!=a.end()){
        int ind=it-a.begin();

        if(a[ind]==diff[i]){
            cout<<"0"<<endl;
            return;
        }
         mini = min(mini, abs(diff[i]-a[ind]));

        if(ind>0){
            mini = min(mini, abs(diff[i]-a[ind-1]));
        }
    }else{
         mini=min(mini,abs(diff[i]-a[n-1]));
    }
}
cout<<mini<<endl;
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
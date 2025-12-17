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
ll n;
cin>>n;
vll a(n);
rep(i,0,n){
    cin>>a[i];
}

if(a[n-2]>a[n-1]){
    cout<<"-1"<<endl;
    return;
}
else if(a[n-1]>=0){
    cout<<n-2<<endl;
    for(int i=1;i<=n-2;i++){
        cout<<i<<" "<<n-1<<" "<<n<<endl;
    }
}else{
    if(is_sorted(begin(a),end(a))){
        cout<<"0"<<endl;

    }else{
        cout<<"-1"<<endl;
    }
}

// unordered_map<ll,ll>mp;
// set<ll>s;
// s.insert(a[n-1]);
// s.insert(a[n-2]);
// vector<pair<ll,pair<ll,ll>>>vec;
// mp[a[n-1]]=n-1;
// mp[a[n-2]]=n-2;
// ll count=0;
// for(int i=n-3;i>=0;i--){
//   ll val=a[i+1];
//     if(a[i]<=val)continue;
//   auto it = lower_bound(s.begin(), s.end(),0LL);

// //   if(mp.find(val)==mp.end()){
//       mp[val]=i;
// //   }

//   if(it!=s.end()){
//        ll x=*it;
//        ll ind=mp[x];
//        a[i]=val-x;
//        vec.push_back({i+1,{i+2,ind+1}});
//        count++;
//   }else{
//     cout<<"-1"<<endl;
//     return;
//   }
}



 
 
int main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
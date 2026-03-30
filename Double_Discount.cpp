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

// bool cmp(pair<int,int>&p1,pair<int,int>&p2){
//     if(p1.second==p2.second){
//         return p1.first<p2.first;
//     }

//     return p1.second<p2.second;
// }

void solve(){
int n,k;
cin>>n>>k;
vi a(n);
rep(i,0,n){
    cin>>a[i];
}
vi b(n);
rep(i,0,n){
    cin>>b[i];
}
vpii vec(n);
rep(i,0,n){
    vec[i]={a[i],b[i]};
}

sort(begin(vec),end(vec));


// cout<<"||||||"<<endl;
// rep(i,0,n){
//     cout<<vec[i].first<<" :::"<<vec[i].second<<" ????";
// }
// cout<<endl;
// cout<<"|||||"<<endl;


int maxi=0;
for(int i=n-1;i>=0;i--){
    int val=k-(vec[i].first-min(100,vec[i].first/2));
    if(val<0)continue;

    for(int j=i-1;j>=0;j--){
       if(vec[j].first<=val){
         maxi=max(maxi,vec[i].second+vec[j].second);
       }
    }
}
cout<<maxi<<endl;



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
#include <bits/stdc++.h>
using namespace std;
using std::cin;
using std::cout;
 
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
string s;
cin>>s;
// set<ll>st;

// rep(i,0,n){
//     if(s[i]=='0')st.insert(i+1);
// }

// int sum=0;
// for(int k=1;k<=n;k++){
//     // char c=s[i];
//     int j=k;
//     int x=1;
//     int c=0;
// //    if(st.count(j)>0) sum+=j;
//         while(st.count(j)>0){
//             c++;
//             st.erase(j);
//             x++;
//             j*=x;
//         }
//     sum+=(c*(k));
//     cout<<sum<<"--"<<endl;
// }

// //    cout<<sum<<endl;
ll ans=0;
vector<bool>remove(n+1,false);

for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){
        if(s[j-1]=='1')break;
        if(remove[j])continue;
        else{
            remove[j]=true;
            ans+=i;
        }
    }
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
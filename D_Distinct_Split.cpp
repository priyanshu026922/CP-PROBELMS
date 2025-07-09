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
typedef map<char, int> mci;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define maxe(v) (*max_element(all(v)))
#define mine(v) (*min_element(all(v)))
#define sumv(v) (accumulate(all(v), 0LL))
#define sortasc(v) sort(all(v))
#define sortdesc(v) sort(rall(v))
#define lb(v, x) (lower_bound(all(v), x) - (v).begin())
#define ub(v, x) (upper_bound(all(v), x) - (v).begin())
#define ispresent(v, x) (binary_search(all(v), x))
#define freqmap(mp, v) for (auto &el : v) mp[el]++


#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define ff first
#define ss second


void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool cmp(pair<ll,ll>&a,pair<ll,ll>&b){
  if(a.first!=b.first){
    return a.ff>b.ff;
  }
  return a.ss<b.ss;
}

void solve() {
  int n;
   cin>>n;
   string s;
   cin>>s;
   mci m1;
   for(int i=0;i<n;i++){
    m1[s[i]]++;
   }
   mci m2;
   int maxi=INT16_MIN;
for(int i=n-1;i>=0;i--){
int x=m1.size();
int y=m2.size();
maxi=max(maxi,x+y);
m1[s[i]]--;
if(m1[s[i]]==0){
    m1.erase(s[i]);
}
m2[s[i]]++;
}
cout<<maxi<<endl;
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
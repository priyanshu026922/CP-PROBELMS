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

void solve() {
int n;
cin>>n;
vi a(n);
rep(i,0,n){
    cin>>a[i];
}

vi nge(n,-1);
vi pse(n,-1);
stack<int>s1;
repr(i,n-1,0){
while(!s1.empty()&&a[s1.top()]<=a[i]){
    s1.pop();
}
nge[i]=s1.empty()?-1:s1.top();
s1.push(i);
}

stack<int>s2;
rep(i,0,n){
while(!s2.empty()&&a[s2.top()]>=a[i]){
    s2.pop();
}
pse[i]=s2.empty()?-1:s2.top();
s2.push(i);
}

//   rep(i,0,n){
//     cout<<nge[i]<<" ";
//   }
//   cout<<endl;
//     rep(i,0,n){
//     cout<<pse[i]<<" ";
//   }
string s="";
rep(i,0,n){
    if(nge[i]==-1||pse[i]==-1){
        s.push_back('1');
    }
    else{
        s.push_back('0');
    }
}
cout<<s<<endl;
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
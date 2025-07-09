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

// ------------------ Looping ------------------
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define ff first
#define ss second

// ------------------ Fast I/O ------------------
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// ------------------ Solve Function ------------------
void solve() {
    ll n;
    cin>>n;
   ll minu=LLONG_MAX;
    vector<ll>v;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<ll>a(m);
        for(int j=0;j<m;j++){
            cin>>a[j];
        }
       ll mini=*min_element(all(a));
        minu=min(mini,minu);
        a.erase(find(all(a),mini));
        v.push_back(*min_element(all(a)));
       
    }

    cout<<minu+(ll)accumulate(all(v),0ll)-*min_element(all(v))<<endl;

}


    

// ------------------ Main Function ------------------
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
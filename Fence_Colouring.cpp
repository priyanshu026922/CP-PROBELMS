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
#define repi(i, a, b) for (int i = (a); i <=(b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define ff first
#define ss second

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// void solve() {
//     int n;
//     cin >> n;
//     vi a(n);
//     rep(i,0,n) cin >> a[i];

//     // If already all 1's
//     bool allOne = all_of(all(a), [](int x){ return x == 1; });
//     if (allOne) {
//         cout << 0 << "\n";
//         return;
//     }

//     // Count non-1 elements (option 2: no global paint)
//     int op2 = 0;
//     rep(i,0,n) if (a[i] != 1) op2++;

//     // Find most frequent value (option 1: global paint)
//     mii mp;
//     rep(i,0,n) mp[a[i]]++;
//     int val = -1, maxi = INT_MIN;
//     for (auto &it : mp) {
//         if (it.second > maxi) {
//             maxi = it.second;
//             val = it.first;
//         }
//     }
//     int mismatches = 0;
//     rep(i,0,n) if (a[i] != val) mismatches++;
//     int op1 = 1 + mismatches;

//     cout << min(op1, op2) << "\n";
// }
void solve() {
int n;
cin>>n;
vi a(n);
rep(i,0,n){
    cin>>a[i];
}

mii mp;
int d=0;
rep(i,0,n){
    mp[a[i]]++;
    if(a[i]!=1)d++;
}

int maxi=INT_MIN;
int val=-1;
int count=0;
for(auto it:mp){
    if(it.second>maxi){
        maxi=it.second;
        val=it.first;
    }
}
int mismatches = 0;
    rep(i,0,n) if (a[i] != val) mismatches++;
    int op1 = 1 + mismatches;

    cout << min(op1, d) << "\n";
}

int main() {
    fastio();
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}



 
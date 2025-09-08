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
int n;
cin>>n;
vi b(n);
rep(i,0,n){
    cin>>b[i];
}
vector<vector<int>>ind(n+1);
vi freq(n+1,0);
rep(i,0,n){
    freq[b[i]]++;
    ind[b[i]].push_back(i);
}

vi a(n);
int x=0;

for(int i=1;i<=n;i++){
    if(freq[i]==0)continue;
    if(freq[i]%i){
        cout<<"-1\n";
        return;
    }
   for (int j = 0; j < freq[i]; j++) {
            if (j % i == 0)
                x++;
            a[ind[i][j]] = x;
        }
}
for(auto it:a){
cout<<it<<" ";
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
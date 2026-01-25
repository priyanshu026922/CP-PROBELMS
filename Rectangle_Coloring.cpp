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

#include <bits/stdc++.h>
using namespace std;

void solve(){
ll l,w,r,g,b;
cin>>l>>w>>r>>g>>b;

ll lens[4] = {l, w, l, w};
ll col[3] = {r, g, b};//3 different types of color

ll ans = 6;

    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if (j == i) continue;
                for(int k = 0; k < 3; k++)
                {
                    if (k == i || k == j) continue;

                    for(int a1 = 0; a1 < 4; a1++)//represents the one side
                    {
                        for(int a2 = 0; a2 < 4; a2++)//represents the other side
                        {
                            if (a2 == a1) continue;
                            for(int c = 0; c < 4; c++)
                            {
                                if (c == a1 || c == a2) continue;
                                for(int d = 0; d < 4; d++)
                                {
                                    if (d == a1 || d == a2 || d == c) continue;

                                    if (lens[a1] + lens[a2] == col[i] && lens[c] == col[j] && lens[d] == col[k])
                                    {
                                        ans = 4;
                                    }
                                }
                            }
                        }
                    }

                }
            }
        }

for (int mask = 1; mask < (1 << 4); mask++){
            ll sm = 0;
            for (int i = 0; i < 4; i++)
            {
                if (mask & (1 << i)) sm += lens[i];
            }
            
            if (sm == r || sm == g || sm == b)
            {
                ans = min(ans, 5LL);
            }
}

        cout << ans << '\n';
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
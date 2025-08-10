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

bool cmp(pair<ll,ll>&a,pair<ll,ll>&b){
  if(a.first!=b.first){
    return a.ff>b.ff;
  }
  return a.ss<b.ss;
}
bool fair(ll n){
    ll num=n;
    while(num>0){
        ll x=num%10;
        if(x>0&&n%x!=0){
            return false;  
        }
        num/=10;
    }
    return true;
}

//T.C===O(2520*18)===APPROX(10^5)----------->[CORRECT]


//AT MAX WE CHECK FOR +2520 operations------>

///BECAUSE if we find a number by every digit[1........9] --then it is 2520;
//2520----2*2520-----3*2520---->these all are the numbers divisible bu every digit
//this numbers are taking 2520 operations to find a fair number 


//so any other number would be taking at max 2520 operations only*************************

void solve(){
  ll n;
  cin>>n;
  while(!fair(n)){ 
    n+=1;
  }
cout<<n<<endl;
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
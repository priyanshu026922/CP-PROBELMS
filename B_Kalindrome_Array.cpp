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

bool isPalindrome(vi &a){
      int i=0;
    int j=a.size()-1;
    int ans1=-1;
    int ans2=-1;
    while(i<=j){
        if(a[i]!=a[j]){
          return false;
        }
        i++;
        j--;
    }
return true;
}

void solve(){
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int i=0;
    int j=a.size()-1;
    int ans1=-1;
    int ans2=-1;
    while(i<=j){
        if(a[i]!=a[j]){
            ans1=a[i];
            ans2=a[j];
            break;
        }
        i++;
        j--;
    }

    vi a1;
    vi a2;
    rep(i,0,n){
        if(a[i]!=ans1)a1.push_back(a[i]);
    }
    
     rep(i,0,n){
        if(a[i]!=ans2)a2.push_back(a[i]);
    }

    if(isPalindrome(a1)||isPalindrome(a2)){
        cout<<"YES"<<endl;
        return ;
    }

    cout<<"NO"<<endl;
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
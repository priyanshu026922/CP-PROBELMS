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
int n,m;
cin>>n>>m;

if(m==1){
    //if we take suppose x==1 && y==2,
    //f(0)=x=1,
    //f(1)=y=2,
    //we want f(k)=M,
    //so k must be 0 i.e x=1 and y>x.....min val pos is [2]
    cout<<"1 2"<<endl;
    return;
}

if(m<=n){
    cout <<1<<" "<<m<<endl;;
    return;
}

int p=4;
while(p<=m){
    int t=p-1;
  

    int l=(m-n+p-3)/(p-2); //ceil value

    int r=(m-1)/(p-1);//floor value

    if(l<=r){//valid D exists
        int x=m-l*(p-1);
        int y=x+l;

        cout<<x<<" "<<y<<endl;
        return;
    }
    p*=2;
}
cout<<"-1"<<endl;
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
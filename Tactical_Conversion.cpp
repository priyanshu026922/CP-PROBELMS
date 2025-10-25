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

// bool cmp(pair<int,int>&p1,pair<int,int>&p2){
//     if(p1.first==p2.first){
//         return p1.second < p2.second; 
//     }
//    return p1.first > p2.first;
// }

void solve(){
int n;
cin>>n;
string s;
cin>>s;
int last=-1;
rep(i,0,n){
    if(s[i]=='1'){
       last=i;
       break;
    }
}

bool t1=true;
rep(i,last+1,n){
    if(s[i]=='1'){
       if(abs(i-last)<=1){
          t1=false;
       }
       last=i;
    }
}
// bool t2=true;
// int last2=s[n-1]=='1'?n-2:-1;
// repr(i,n-2,0){
//     if(s[i]=='1'){
//         if(abs(i-last2)<=1){
//              t2=false;

//         }
//         last2=i;
//     }
// }

if(t1){
    cout<<"Yes"<<endl;
    return;
}
cout<<"No"<<endl;
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
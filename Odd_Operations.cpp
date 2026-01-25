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



void solve(){
ll n;
cin>>n;

if(n%2!=0){
    cout<<"0"<<endl;
    return;
}

if(n<10){
    cout<<"-1"<<endl;
    return;
}



// if(n%10==0){
//     cout<<"1"<<endl;
//     return;
// }


bool cntodd=false;
ll p=n;
while(p>0){
   int x=p%10;
  if(x%2!=0){
     cntodd=true;
     break;
  }
   p/=10;
}


if(cntodd){
     cout<<"1"<<endl;
     return;
}

string s=to_string(n);
bool t=false;
ll last=n%10;
for(char ch:s){
    int d=ch-'0';
    if(d>last){
        t=true;
        break;
    }
}

if(t){
    cout<<"2"<<endl;
    return;
}

cout<<"3"<<endl;

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
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

void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 

int main() {
    fastio();
    ll n,q;
    cin>>n>>q;
    vll a(n),b(n);
    rep(i,0,n){
        cin>>a[i];
    }
     rep(i,0,n){
        cin>>b[i];
    }
    ll sum=0;
       rep(i,0,n){
         sum+=min(a[i],b[i]);
       }
   
       rep(i,0,q){
        char ch;int x, y;
        cin>>ch>>x>>y;
          if(ch=='A'){
           sum-=min(a[x-1],b[x-1]);
           a[x-1]=y;
           sum+=(min(a[x-1],b[x-1]));
          }else{
             sum-=min(a[x-1],b[x-1]);
           b[x-1]=y;
           sum+=(min(a[x-1],b[x-1]));
          }
          cout<<sum<<endl;
       }

}

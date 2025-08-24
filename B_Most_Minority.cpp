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
//x==1
//y==0
void solve(int x,int y,int j,vi &p,int n, int m, vector<vector<char>>&s){
   if(x==0||y==0){
    rep(i,0,n){
         p[i]+=1;
    }
    return;
   }else if(x<y){
      rep(i,0,n){
        if(s[i][j]==0){
              p[i]+=1;
        }
      }
      return;
   }else{
     rep(i,0,n){
        if(s[i][j]==1){
              p[i]+=1;
        }
      }
   }
}
int main() {
    fastio();
   int n,m;
   cin>>n>>m;
   vi p(n);
   vector<vector<char>>s(n,vector<char>(m));
   rep(i,0,n){
    rep(j,0,m){
         char c;
        cin >> c;
        s[i][j] = c -'0';
    }
   }
   rep(j,0,m){
    int x=0;
    int y=0;
    rep(i,0,n){
      if(s[i][j]==0)x++;
      else y++;
    }
    solve(x,y,j,p,n,m,s);
   }
 int q=maxe(p);
 rep(i,0,n){
    if(p[i]==q){
        cout<<i+1<<" ";
    }
 }
  
   



}

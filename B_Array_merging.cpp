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

void solve() {
   int n;
   cin>>n;
   vi a(n);
   rep(i,0,n){
    cin>>a[i];
   }
   vi b(n);
   rep(i,0,n){
    cin>>b[i];
   }
  mii m1;
   int mans1=INT32_MIN;
   int count1=1;
   int no_1=-1;
   rep(i,0,n-1){
    if(a[i]==a[i+1]){
      no_1=a[i];
        count1++;
    }else{
    if(count1>mans1){
        m1[no_1]=count1;
    }
        count1=1;
    }
   }

   if(a[n-1]==a[n-2]){
   if(count1>mans1){
        m1[no_1]+=1;
    }
   }


   int mans2=INT32_MIN;
   int count2=1;
   int no_2=-1;
   rep(i,0,n-1){
    if(b[i]==b[i+1]){
        count2++;
    }else{
       if(count2>mans2){
        m1[no_2]+=count2;
    }
        count2=1;;
    }
   }

   if(b[n-1]==b[n-2]){
    if(count2>mans2){
        m1[no_2]+=1;
    }
   }

//    int maxi=INT32_MIN;
//    int count3=0,count4=0;
//     rep(i,0,n){
//         if(a[i]==b[0]){
//          count3++;
//         }
//         if(b[i]==b[0]){
//             count4++;
//         }
//     }

//     maxi=count3+count4;

// cout<<max(mans1,max(mans2,maxi))<<endl; 
int maxi=INT32_MIN;
for(auto &i:m1){
  maxi=max(maxi,i.second);
}
cout<<maxi<<endl;
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
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

bool cmp(pair<ll,ll>&p1,pair<ll,ll>&p2){
    if(p1.first==p2.first){
        return p1.second<p2.second;
    }

    return p1.first>p2.first;
}

void solve(){

int n;
cin>>n;

vll a(n);
rep(i,0,n){
    cin>>a[i];
}

vll b(n);
rep(i,0,n){
    cin>>b[i];
}

vll c(n);
rep(i,0,n){
    cin>>c[i];
}

vpll a1(n),a2(n),a3(n);

rep(i,0,n){
    a1[i]={a[i],i};
    a2[i]={b[i],i};
    a3[i]={c[i],i};
}
sort(begin(a1),end(a1),cmp);
sort(begin(a2),end(a2),cmp);
sort(begin(a3),end(a3),cmp);
ll sum=0;
ll count=0;
ll maxi=LLONG_MIN;
unordered_set<ll>s;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
          if(a1[i].second!=a2[j].second&&a2[j].second!=a3[k].second&&a1[i].second!=a3[k].second){
            maxi=max(maxi,a1[i].first+a2[j].first+a3[k].first);
          }
       }
     } 
    }
    cout<<maxi<<endl;
 }

// int i=0,j=0,k=0;
// sort(begin(a1),end(a1),cmp);
// sort(begin(a2),end(a2),cmp);
// sort(begin(a3),end(a3),cmp);
// ll sum=0;
// unordered_set<ll>s;
// int count=0;
// bool b1=false;
// bool b2=false;
// bool b3=false;
// while(count<3&&i<n&&j<n&&k<n){
//  if(a1[i].first>=a2[j].first&&a1[i].first>=a3[k].first){
//         if(!s.count(a1[i].second)&&!b1){
//             sum+=a1[i].first;
//             s.insert(a1[i].second);
//             count++;
//             b1=true;
//         }
//      i++;
//  }
//  else if(a2[j].first>=a1[i].first&&a2[j].first>=a3[k].first){
//         if(!s.count(a2[j].second)&&!b2){
//             sum+=a2[j].first;
//             s.insert(a2[j].second);
//             count++;
//             b2=true;
//         }
//      j++;
//  }
//   else if(a3[k].first>=a1[i].first&&a3[k].first>=a2[j].first) {
//         if(!s.count(a3[k].second)&&!b3){
//             sum+=a3[k].first;
//             s.insert(a3[k].second);
//             count++;
//             b3=true;
//         }
//      k++;
//  }
// }
// cout<<sum<<endl;




int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
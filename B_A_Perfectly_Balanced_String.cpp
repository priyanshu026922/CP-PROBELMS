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
string s;
cin>>s;
int n=s.length();



// if(n==1){
//     cout<<"YES"<<endl;
//     return;
// }
set<char>st;
int i;
for(i=0;i<n;i++){
if(st.find(s[i])==st.end())st.insert(s[i]);
else {
    break;
}
}

int x=st.size();

rep(j,i,n){
    if(s[j]!=s[j-i]){
      cout<<"NO"<<endl;
      return;
    }
}
cout<<"YES"<<endl;
// unordered_map<char,int>mp;
// int i=0;
// rep(i,0,n){
//    if(mp.find(s[i])==mp.end()) mp[s[i]]=i;
//    else{
    
//     int y=mp[s[i]];
//     set<char>s1;
//     while(y<i){
//       s1.insert(s[y]);
//       y++;
//     }
//     if(s1.size()==x){
//         continue;
//     }
//     else{
//        cout<<"NO"<<endl;
//         return;
//     }
//     mp[s[i]]=i;
//    }
// }
// cout<<"YES"<<endl;
// set<char>st1;
// while(j<n){
//    st1.insert(s[j]);
//     // if(s[j]==s[i]&&st1.size()<x){
//     //     cout<<"NO"<<endl;
//     //     return;
//     // }
//     if(s[j]==s[i]&&st1.size()==x){
//         i++;
//         st.clear();
//     }
//     j++;
// }

// cout<<"YES"<<endl;
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
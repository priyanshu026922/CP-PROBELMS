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
int count1=0; //'01'
int count2=0;//'10'

rep(i,0,n-1){
    if(s[i]=='0'&&s[i+1]=='1'){
        count1++;
    }
    else if(s[i]=='1'&&s[i+1]=='0'){
        count2++;
    }
}
if(s.front()==s.back()&&count1>0){
    cout<<"Alice"<<endl;
}
else{
    cout<<"Bob"<<endl;
}

// if(count1==count2&&count1>0){
//     cout<<"Alice"<<endl;
//     return;
// }

// else if(count1>count2||count1<count2) {
//     int c1=0;
//     int c2=0;
//    rep(i,0,n-2){
//     if(s[i]=='0'&&s[i+1]=='1'){
//         c1++;
//     }
//     else if(s[i]=='1'&&s[i+1]=='0'){
//         c2++;
//     }
// }
   
// if(c1==c2&&c1>0){
//     cout<<"Alice"<<endl;
//     return;
// }

// int c3=0;
// int c4=0;
//   rep(i,1,n-1){
//     if(s[i]=='0'&&s[i+1]=='1'){
//         c3++;
//     }
//     else if(s[i]=='1'&&s[i+1]=='0'){
//         c4++;
//     }
// }
   
// if(c4==c3&&c3>0){
//     cout<<"Alice"<<endl;
//     return;
// }

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
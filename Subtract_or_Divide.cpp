#include <bits/stdc++.h>
using namespace std;


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



void s() {
long long n;
cin>>n;
if(n%2==1){
    cout<<(n/2)+1<<endl;
}
else{
    long long ans=n/2;
    n/=2;
    if(n%2==0)n--;
     ans+=(n/2)+1;
    cout<<ans<<endl;
}
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        s();
    }
    return 0;
}

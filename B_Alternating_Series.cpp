#include <bits/stdc++.h>
using namespace std;


void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
long long n;
cin>>n;
if (n % 2 != 0) {
     for (int i = 0; i < n; ++i) {
         if (i % 2 == 0) {
       cout << -1 << " ";
         } else {
         cout << 3 << " ";
      }
        }
    }
else{
    if(n==2){
        cout<<"-1"<<" "<<"2";
    }
    else{
        for(int i=0;i<n-2;i++){
            if(i%2==0){
                cout<<"-1"<<" ";
            }else{
                cout<<"3"<<" ";
            }
        }
        cout<<"-1"<<" "<<"2";
    }
}
   
cout<<endl;
}

int main() {
    fastio();
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}


//  int n;
//     cin >> n;
//     if (n % 2 != 0) {
//         for (int i = 0; i < n; ++i) {
//             if (i % 2 == 0) {
//                 cout << -1 << " ";
//             } else {
//                 cout << 3 << " ";
//             }
//         }
//     } else {
//         if (n == 2) {
//             cout << -1 << " " << 2;
//         } else {
//             for (int i = 0; i < n - 2; ++i) {
//                 if (i % 2 == 0) {
//                     cout << -1 << " ";
//                 } else {
//                     cout << 3 << " ";
//                 }
//             }
//             cout << -1 << " " << 2;
//         }
//     }
//     cout << endl;
 
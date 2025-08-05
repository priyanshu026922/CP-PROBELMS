#include <bits/stdc++.h>
using namespace std;
  int maxBalancedShipments(vector<int>& weight) {
        int n=weight.size();
      stack<int>s;
        s.push(weight[0]);
        int i=1;
        int count=0;
        
    for(int i = 1; i < n; ++i) {
        if(!s.empty() && weight[i] < s.top()) {
            count++;
        }
        s.push(weight[i]);
    }
        return count;
    }


int main(){
    vector<int>v={7,3,8,7,6,5,4,1,3,5,4};
    int y=maxBalancedShipments(v);
    cout<<y<<endl;

}
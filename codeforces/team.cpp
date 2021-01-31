#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0,x,val;
    cin >> n;
    for(int i=0;i<n;i++){
        val=0;
        for(int j=0;j<3;j++){
            cin >> x;
            if(x==1){
                val++;
            }
        }
        if(val>=2){
            count++;
        }
    }
    cout << count;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,val,count=0,prev;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> val;
        if(i<=k  && val!=0){
            count++;
            if(i==k){
                prev=val;
            }
        }else{
            if(prev==val && val!=0){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}

#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ll long long
// For loop - REP(i,1,n)
#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;

int main() {
    // for making input and output more efficient 
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,val,i;
    cin >> n;
    ll ar[n+1] ={ 0};
    REP(i,1,n-1){
        cin >> val;
        ar[val] = 1;
    }
    REP(i,1,n){
        if(ar[i]==0){
            cout << i;
        }
    }

    return 0;
}

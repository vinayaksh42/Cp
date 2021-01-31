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
    string n;
    cin >> n;
    ll i,max=0,count=0;
    char prev;
    prev = n[0];
    if(prev==n[1]){
        count++;
    }
    ll x = n.length();
    REP(i,1,x){
        if(prev==n[i]){
            count++;
        }else{
            if(count > max){
                max=count;
            }
            count=1;
        }
        prev = n[i];
    }
    if(max < count){
        max = count;
    }
    cout << max;
    return 0;
}
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h> 
 
using namespace std;
 
#define int long long
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<double,double> pdd;
typedef vector<int> v32;
typedef vector<p32> vp32;
#define MOD = 1000000007
double eps = 1e-12;
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(int i = s; i >= 0; i--)
#define rforsn(i,s,e) for(int i = s; i >= e; i--)
#define ln "\n" 
#define pb push_back
#define ff first
#define sf second
#define MAX 2e18
#define MIN -2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<0<<ln;
    }else{
        int temp = n;
        bool flag = false;
        while(temp>=10){
            int m = (temp%10);
            if(m%2==0){
                flag = true;
            }
            temp/=10;
        }
        if(temp%2==0){
                flag = true;
            }
        if(!flag){
            cout<<"-1"<<ln;
        }else{
            if(temp%2==0){
                cout<<1<<ln;
            }else{
                cout<<2<<ln;
            }
        }
    }
}

signed main()
{
 fast_cin();
 int t; cin >> t;
 while(t--){
    solve();
 }
 return 0;
}
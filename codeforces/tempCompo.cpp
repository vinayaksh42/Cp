#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<double, double> pdd;
typedef vector<int> v32;
typedef vector<p32> vp32;
#define forn(i, e) for (int i = 0; i < e; i++)
#define forsn(i, s, e) for (int i = s; i < e; i++)
#define rforn(i, s) for (int i = s; i >= 0; i--)
#define rforsn(i, s, e) for (int i = s; i >= e; i--)
#define ln "\n"
#define pb push_back
#define ff first
#define ss second
#define fast_cin() cin.tie(nullptr)->sync_with_stdio(false);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int64_t)(x).size())

constexpr int64_t M = 1e9 + 7;
constexpr int64_t INF = 2e18;

void solve() {
    int a,b,ans;
    cin>>a>>b;
    ans=(min((a+b)/4,min(a,b)));
    cout<<ans<<ln;
}

signed main() {
    fast_cin();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
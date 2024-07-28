#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define inf 0x3f3f3f3f
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define test int t; cin>>t; while(t--)
#define ffl(i, a, n) for(ll i=a; i<n; i++)
#define rfl(i, a, n) for(ll i=a; i>=n; i--)
#define all(v) v.begin(), v.end()
#define rall(n) n.rbegin(), n.rend()
#define lb(v,x) (int)(lower_bound(all(v),x)-v.begin())
#define ub(v,x) (int)(upper_bound(all(v),x)-v.begin())
#define uni(v) v.resize(unique(all(v))-v.begin())
#define yes cout << "YES \n"
#define no cout << "NO \n"
#define ln "\n"

void problem() {
    int n; cin >> n;
    vi a(n);
    vi cnt(n+1, 0);
    
    for (auto &i: a) cin >> i;

    ffl (i, 0, n) {
        cnt[a[i]]++;
    }

    bool fl = false;
    ffl (i, 1, n+1) {
        fl |= (cnt[i] & 1);
    }

    (fl) ? yes : no;
}

int main() {
    fast;
    test{
        problem();
    }

    return 0;
}
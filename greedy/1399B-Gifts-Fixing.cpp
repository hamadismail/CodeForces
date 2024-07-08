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

/*ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}*/

int main() {
    fast;
    test{
        int n; cin >> n;
        vi a(n);
        vi b(n);
        for(auto &i: a) cin >> i;
        for(auto &i: b) cin >> i;

        int x = *min_element(all(a));
		int y = *min_element(all(b));
        ll cnt = 0;

        ffl(i, 0, n) {
            cnt += max(a[i]-x, b[i]-y);
            /* ans += min(a[i] - x , b[i] - y);
	       ans += max(a[i] - x , b[i] - y) - min(a[i] - x , b[i] - y); */
        }
        
        cout << cnt << ln;
    }
    return 0;
}

/* for(int i = 0 ; i < n ; ++i)
	cin>>a[i] ;
for(int i = 0 ; i < n ; ++i)
	cin>>b[i] ;
int x = *min_element(a , a + n) ;
int y = *min_element(b , b + n) ; */

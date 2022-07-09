#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define ld        long double
const ll M = 1e9+7;
const ll M2 = 998244353;

ll binexp(ll a, ll b)        { ll ans = 1; while(b){ if(b&1) ans = ans*a; a = a*a; b >>= 1; } return ans; }
ll binmul(ll a, ll b, ll m)        { a %= m; ll ans = 0; while(b){ if(b&1) ans = (ans+a)%m; a = (a+a)%m; b >>= 1; } return ans; }
ll binexpmod(ll a, ll b, ll m)        { a %= m; ll ans = 1; while(b){ if(b&1) ans = binmul(ans, a, m); a = binmul(a, a, m); b >>= 1; } return ans; }

#define T        ll no_of_testcases; cin>>no_of_testcases; f(curr_testcase, 1, no_of_testcases+1)
#define TC        cout<<"Case #"<<curr_testcase<<": ";
#define fast        ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define info        cout<<__DATE__<<" "<<__TIME__<<"\n";

ll gcd(ll x, ll y)        { if(y == 0) return x; return gcd(y, x%y); }
ll lcm(ll x, ll y)        { ll g = gcd(x, y); return x*y/g; }

#define f(i, m, n)        for(ll i = (ll)m; i < (ll)n; i++)
#define f_(i, n, m)        for(ll i = (ll)n; i >= (ll)m; i--)
#define fa(i, x)        for(auto i:x)

ll max(ll x, ll y)        { return x > y ? x : y; }
ll min(ll x, ll y)        { return x < y ? x : y; }

#define blackpink        " BLACKPINK is the revolution! "
#define hope        " Do smth instead of nothing. "
#define always_remember        " One must be an ocean to recieve a polluted stream without himself becoming impure. — Friedrich Nietzche "

#define inf        (ll)LLONG_MAX-(ll)INT_MAX
#define inf_        (ll)LLONG_MIN-(ll)INT_MIN
#define all(x)        x.begin(), x.end()
#define bp        __builtin_popcountll
#define bclz        __builtin_clzll
#define bctz        __builtin_ctzll
#define vll        vector<ll>
#define vbl        vector<bool>
#define pll        pair<ll, ll>
#define vpll        vector<pll>
#define vvll        vector<vll>
#define um        unordered_map
#define us        unordered_set
#define ms        multiset
#define ub        upper_bound
#define lb        lower_bound
#define pb        push_back
#define pf        push_front
#define pof        pop_front
#define pob        pop_back
#define mp        make_pair
#define ff        first
#define ss        second
#define in        insert
#define beg        begin

int32_t main(){ fast // BLACKPINK is the revolution!
    T{
        // ll n, m, k, l = 0, r = 0, last; bool flag = 0; cin>>n>>m>>k; vll a(n); fa(&i, a){ cin>>i; if(i > k) r++; } sort(all(a)); set<ll> s1;
        // ll curr, prev = 0;
        // f(i, 0, n){
        //     curr = a[i];
        //     if(curr > prev+1) break;
        //     l++;
        //     s1.in(curr);
        //     prev = curr;
        // }
        // last = *(--s1.end());
        // // fa(&i, s1) cout<<i<<" "; cout<<"\n";

        // cout<<(flag ? "YES" : "NO")<<"\n";

        ll n, m, k; cin>>n>>m>>k; vll a(n); fa(&i, a) cin>>i; bool flag = 0;
        sort(all(a)); set<ll> s1;
        for(ll i = 0, prev = 0, curr; i < n; i++){
            curr = a[i];
            if(i == 0 && curr != 0) break;
            else if(curr == prev || curr == prev+1) s1.in(curr);
            else break;
            prev = curr;
        }
        // fa(&i, s1) cout<<i<<" "; cout<<"\n";
        
    }
}

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

vvll g(510, vll(510)) /*grid*/, lev(510, vll(510));
vector<vbl> vis(510, vbl(510)); ll n, m, mx, ans;

ll bfs(){
    queue<pll> q; ans = 0;
    f(i, 0, n) f(j, 0, m) if(g[i][j] == mx) q.push(mp(i, j)), lev[i][j] = 0, vis[i][j] = true;
    vpll v1 = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,-1},{-1,1}};

    while(q.size()){

        ll i = q.front().ff, j = q.front().ss;

        fa(&it, v1){

            ll x = i+it.ff, y = j+it.ss; bool flag = x >= 0 && y >= 0 && x < n && y < m;
            
            if(flag && !vis[x][y]){
                q.push(mp(x, y));
                vis[x][y] = true;
                lev[x][y] = lev[i][j] + 1;
                ans = max(ans, lev[x][y]);
            }
        }
        q.pop();
    }
    return ans;
}
int32_t main(){ fast // BLACKPINK is the revolution!
    T{
        cin>>n>>m; fill(all(g), vll(g[0].size(), 0)), fill(all(lev), vll(lev[0].size(), inf)), fill(all(vis), vbl(vis[0].size(), false));

        mx = inf_; f(i, 0, n) f(j, 0, m) cin>>g[i][j], mx = max(mx, g[i][j]);
        cout<<bfs()<<"\n";
    }
}

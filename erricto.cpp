#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define ll0(x)        ll x = 0;
#define ld        long double
#define ld0(x)        ld x = 0;
const ll M = 1e9+7;
const ll M2 = 998244353;

ll binexp(ll a, ll b)        { ll ans = 1; while(b){ if(b&1) ans = ans*a; a = a*a; b >>= 1; } return ans; }
ll binmul(ll a, ll b, ll m)        { a %= m; ll ans = 0; while(b){ if(b&1) ans = (ans+a)%m; a = (a+a)%m; b >>= 1; } return ans; }
ll binexpmod(ll a, ll b, ll m)        { a %= m; ll ans = 1; while(b){ if(b&1) ans = binmul(ans, a, m); a = binmul(a, a, m); b >>= 1; } return ans; }

#define T        ll0(no_of_testcases) cin>>no_of_testcases; f(curr_testcase, 1, no_of_testcases+1)
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
#define mp        make_pair
#define ff        first
#define ss        second
#define in        insert
#define beg        begin
vector<vector<bool> > vis(10, vector<bool>(10));
vvll lev(10, vll(10));

ll bfs(ll i, ll j, ll k, ll l){
    queue<pll> q;
    q.push({i, j});
    vis[i][j] = true;
    vpll add = {{1,2},{2,1},{-1,2},{-2,1},{1,-2},{2,-1},{-1,-2},{-2,-1}};

    while(q.size()){
        auto i = q.front();
        ll x = i.ff, y = i.ss;
        q.pop();
        vis[x][y] = true;

        for(auto j:add){

            ll a = j.ff, b = j.ss;
            bool flag = x+a > 0 && x+a < 9 && y+b > 0 && y+b < 9;
            
            if(flag && vis[x+a][y+b] == false){
                q.push({x+a, y+b});
                vis[x+a][y+b] = true;
                lev[x+a][y+b] = lev[x][y] + 1;
            }
        }
    }
    return lev[k][l];
}

int32_t main(){ fast
    T{
        string s, t; cin>>s>>t;
        f(i, 0, 10) f(j, 0, 10) vis[i][j] = false, lev[i][j] = 0;
        cout<<bfs(s[0]-'a'+1, s[1]-'0', t[0]-'a'+1, t[1]-'0')<<"\n";
    }
}

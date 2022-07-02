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
ll lcm(ll x, ll y)        { ll g = gcd(x, y); return (x/g)*(y/g); }
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
string t; ll lt, l, r; us<char> st = {'a', 'e', 'i', 'o', 'u'};
int32_t main(){ fast
    T{
        auto _ = [](ll i, ll j)->bool{ ll ct = 0; f(k, i, j) if(st.find(t[k]) != st.end()) ct++;  return ct >= 2 ? true : false; };
        string s; cin>>s; ll ls = s.size(); bool flag = false;
        
        f(i, 0, ls){
            f(j, i, ls){
                lt = j-i+1;
                t = s.substr(i, lt);

                if(lt&1){ l = lt/2-1; r = l+2; }
                else{ l = lt/2-2; r = l+3; }

                while(r < lt){
                    string a = t.substr(0, l+1), b = t.substr(r, l+1);
                    if(a == b && _(r, lt)){ flag = true; break; }
                    l--, r++;
                }
                if(flag) break;
            }
            if(flag) break;
        }
        TC cout<<(flag ? "Spell!" : "Nothing.")<<"\n";
    }
}

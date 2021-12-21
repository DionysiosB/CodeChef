#include <cstdio>
#include <vector>
typedef long long ll;

std::pair<ll, ll> dfs(const std::vector<std::vector<ll> > &g, ll node){

    ll mx(0), cnt(1);
    for(ll p = 0; p < g[node].size(); p++){
        ll u = g[node][p];
        std::pair<ll, ll> cur = dfs(g, u);
        mx = (mx > cur.first) ? mx : cur.first;
        cnt += cur.second;
    }

    ll val = mx + cnt;
    return std::make_pair(val, cnt);
}



int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::vector<ll> > g(n + 1);
        for(ll p = 2; p <= n; p++){
            ll parent; scanf("%lld", &parent);
            g[parent].push_back(p);
        }

        std::pair<ll, ll> res = dfs(g, 1);
        printf("%lld\n", res.first);
    }

}

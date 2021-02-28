#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    ll t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        ll L = s.size();
        std::vector<ll> v(2 * L + 1, 0);
        ll cs(0);
        for(ll p = 0; p < L; p++){
            if(s[p] == 'a'){++cs;}
            else{--cs;}
            ++v[cs + L];
        }

        ll n; std::cin >> n;

        ll total(0);
        for(ll d = -L; d <= L; d++){
            ll cnt = v[d + L];
            if(cs == 0){total += n * cnt * (d > 0);}
            else if(cs > 0){
                if(d > 0){total += n * cnt;}
                else if(d + (n - 1) * cs > 0){total += cnt * (n - 1 + d / cs);}
            }
            else if(cs < 0 && d > 0){
                ll u = -cs; 
                ll lim = (d + u - 1) / u; lim = (lim < n) ? lim : n;
                total += cnt * lim;
            }
        }

        std::cout << total << std::endl;
    }

    return 0;
}

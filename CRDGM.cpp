#include <cstdio>
#include <vector>
#include <set>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n), b(n);
    ll total(0);
    for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); total += a[p];}
    for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}

    std::set<ll> s; s.insert(total);
    for(ll p = 0; p < n; p++){
        std::set<ll> t;
        for(std::set<ll>::iterator it = s.begin(); it != s.end(); it++){
            t.insert((*it) + (b[p] - a[p]));
        }

        for(std::set<ll>::iterator it = t.begin(); it != t.end(); it++){s.insert(*it);}
    }

    for(std::set<ll>::iterator it = s.begin(); it != s.end(); it++){printf("%lld\n", *it);}

    ll mx(0); std::vector<bool> v(n, 0);
    for(ll p = 0; p < n; p++){
        mx += (a[p] > b[p]) ? a[p] : b[p];
        v[p] = (a[p] > b[p]);
    }

    printf("%lld [", mx);
    for(ll p = 0; p < n; p++){
        printf("'");
        if(v[p]){printf("No ");}
        printf("Turn'");
        if(p < n - 1){printf(", ");} else{puts("]");}
    }

    return 0;
}

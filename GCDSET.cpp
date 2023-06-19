#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll l, r, g; scanf("%lld %lld %lld", &l, &r, &g);
        ll f = r/g - (l - 1) / g;
        if(f != 1){printf("%lld\n", f);}
        else if(l <= g && g <= r){puts("1");}
        else{puts("0");}
    }

}

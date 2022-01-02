#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll left, right; scanf("%lld %lld", &left, &right);

        ll cnt(0), start(1), fin(0);
        for(ll p = 1; p <= right - left + 1; p++){
            ll bmn = p * left + p * (p - 1) / 2;
            ll bmx = p * right - p * (p - 1) / 2;
            if(bmn > fin){
                cnt += (fin - start + 1);
                start = bmn;
            }
            fin = bmx;
        }

        cnt += (fin - start + 1);

        printf("%lld\n", cnt);
    }

}

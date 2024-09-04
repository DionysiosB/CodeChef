#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){

        long long mt, mn, sn; scanf("%lld %lld %lld", &mt, &mn, &sn);
        long long res(0);
        if(mt * mn <= sn){res = mt * mn * mn;}
        else{res = (sn / mn) * mn * mn + (sn % mn) * (sn % mn);}
        printf("%lld\n", res);
    }   

}

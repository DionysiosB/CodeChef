#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, d; scanf("%ld %ld", &n, &d);
        long risk(0), safe(0);
        for(long p = 0; p < n; p++){
            long age; scanf("%ld", &age);
            if(age <= 9 || age >= 80){++risk;}
            else{++safe;}
        }

        long res = (risk + d - 1) / d + (safe + d - 1) / d;
        printf("%ld\n", res);
    }

}

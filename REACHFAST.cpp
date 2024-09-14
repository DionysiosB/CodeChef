#include<cstdio>

int main(){

    long t; scanf("%ld", &t); 
    while(t--){
        long x, y, k; scanf("%ld %ld %ld", &x, &y, &k);
        long d = x - y; if(d < 0){d = -d;}
        printf("%ld\n", (d + k - 1) / k);
    }


}

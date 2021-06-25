#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long k, a, b; scanf("%ld %ld %ld", &k, &a, &b);
        long diff = b - a; if(diff < 0){diff = - diff;}
        long cnt(0);
        if(2 * diff == k){cnt = 0;}
        else{cnt = -1 + ((diff < k - diff) ? diff : (k - diff));}
        printf("%ld\n", cnt);
    }

    return 0;
}

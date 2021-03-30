#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, mn, mx; scanf("%ld %ld %ld", &n, &mn, &mx);
        long range = mx - mn + 1;
        long xodd = range / 2 + ((mx & 1) && (mn & 1));
        long xeven = range / 2 + ((mx % 2 == 0) && (mn % 2 == 0));
        std::vector<long> w(n + 1, 0), b(n + 1, 0);

        bool weven(0); long m(0);
        for(long p = 0; p < n; p++){
            scanf("%ld %ld", &w[p], &b[p + 1]);
            w[p] %= 2; b[p] %= 2;
            if(!w[p]){weven = true;}
        }

        for(long p = n; p >= 1; p--){m += b[p]; if(!w[p - 1]){break;}}
        m %= 2;

        if(weven){printf("%ld %ld\n", (m ? 0 : range), (m ? range : 0));}
        else{printf("%ld %ld\n", (m ? xodd : xeven), (m ? xeven : xodd));}
    }

    return 0;
}

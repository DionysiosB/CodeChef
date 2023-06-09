#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> odds, evens;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            (x % 2) ? odds.push_back(x) : evens.push_back(x);
        }

        if(odds.size() == 0 || evens.size() == 0){puts("-1"); continue;}
        for(long p = 0; p < odds.size(); p++){printf("%ld ", odds[p]);}
        for(long p = 0; p < evens.size(); p++){printf("%ld ", evens[p]);}
        puts("");
    }


}

#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long total(0);
        std::set<long> s;
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(s.count(a)){++total;}
            else{s.insert(a);}
        }
        printf("%ld\n", total);
    }

    return 0;
}

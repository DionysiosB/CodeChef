#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::set<long> s;
        bool ans(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(s.count(k - x)){ans = true;}
            s.insert(x);
        }

        puts(ans ? "Yes" : "No");
    }

}

#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s;
        bool ans(false);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(s.count(x)){ans = true;}
            s.insert(x);
        }

        puts(ans ? "Yes" : "No");
    }

}

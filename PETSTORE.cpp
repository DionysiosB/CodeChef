#include <cstdio>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, long> m;
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++m[x];}
        bool possible(true);
        for(std::map<long, long>::iterator it = m.begin(); possible && it != m.end(); it++){
            long value = it->second;
            if(value % 2){possible = false; break;}
        }

        puts(possible ? "YES" : "NO");
    }

}

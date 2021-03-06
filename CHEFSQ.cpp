#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long m; scanf("%ld", &m);
        std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}

        bool match(false);
        long ind(0);
        for(long p = 0; p < n; p++){
            if(a[p] == b[ind]){++ind;}
            //else{ind = 0;}
            if(ind == m){match = true; break;}
        }

        puts(match ? "Yes" : "No");
    }

    return 0;
}

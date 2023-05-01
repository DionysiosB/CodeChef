#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 4){puts("NO"); continue;}
        std::vector<long> a, b;
        for(long p = 1; p <= n; p++){
            if(p % 4 == 0 || p % 4 == 1){a.push_back(p);}
            else{b.push_back(p);}
        }

        puts("YES");
        for(long p = 0; p < a.size(); p++){printf("%ld ", a[p]);};puts("");
        for(long p = b.size() - 1; p >= 0; p--){printf("%ld ", b[p]);};puts("");
    }

}

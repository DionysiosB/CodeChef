#include<cstdio>
#include<vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<bool> a(m, 0);
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            cnt += (x != m);
            if(x < m){a[x] = 1;}
        }

        bool possible(true);
        for(long p = 1; p < m; p++){if(!a[p]){possible = false; break;}}
        printf("%ld\n", possible ? cnt : -1L);
    }

}

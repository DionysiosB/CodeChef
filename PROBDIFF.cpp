#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::vector<long> f(4); for(long p = 0; p < 4; p++){scanf("%ld", &f[p]);}
        sort(f.begin(), f.end());
        if(f[0] == f[3]){puts("0");}
        else if(f[0] == f[2] || f[1] == f[3]){puts("1");}
        else{puts("2");}
    }

}

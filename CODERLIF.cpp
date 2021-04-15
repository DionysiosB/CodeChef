#include <cstdio>

int main(){

    const long N(30);
    const long M(5);

    long t; scanf("%ld", &t);
    while(t--){
        long cur(0);
        bool boring(false);
        for(long p = 0; p < N; p++){
            long x; scanf("%ld", &x);
            if(x){++cur;} else{cur = 0;}
            if(cur > M){boring = true;}
        }

        puts(boring ? "#coderlifematters" : "#allcodersarefun");
    }

    return 0;
}

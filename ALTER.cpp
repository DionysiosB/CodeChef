#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long A, B, P, Q; scanf("%ld %ld %ld %ld", &A, &B, &P, &Q);
        if((P % A) || (Q % B)){puts("NO"); continue;}
        P /= A; Q /=B;
        if((P == Q) || (P == Q - 1) || (P == Q + 1)){puts("YES");}
        else{puts("NO");}
    }

}

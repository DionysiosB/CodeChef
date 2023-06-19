#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                if(n % 2){printf("%d ", (row == col) ? -1 : 1);}
                else{printf("-1 ");}
            }
            puts("");
        }
    }

}

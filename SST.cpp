#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        if(2 * a > b){puts("FIRST");}
        else if(2 * a < b){puts("SECOND");}
        else{puts("ANY");}
    }   

}

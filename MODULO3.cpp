#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        if(a % 3 == 0 || b % 3 == 0){puts("0");}
        else if(a % 3 == b % 3){puts("1");}
        else{puts("2");}
    }   

}

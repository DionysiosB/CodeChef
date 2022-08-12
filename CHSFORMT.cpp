#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        if(a + b < 3){puts("1");}
        else if(a + b <= 10){puts("2");}
        else if(a + b <= 60){puts("3");}
        else{puts("4");}
    }

}

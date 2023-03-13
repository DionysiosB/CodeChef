#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if(d >= a + b + c){puts("1");}
        else if(d >= a + b){puts("2");}
        else{puts("3");}
    }

}

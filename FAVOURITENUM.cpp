#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        if(n % 14 == 0){puts("Alice");}
        else if(n % 2 && n % 9 == 0){puts("Bob");}
        else{puts("Charlie");}
    }

}

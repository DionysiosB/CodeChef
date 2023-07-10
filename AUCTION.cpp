#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        if(a > b && a > c){puts("Alice");}
        else if(b > a && b > c){puts("Bob");}
        else if(c > a && c > b){puts("Charlie");}
    }   

}

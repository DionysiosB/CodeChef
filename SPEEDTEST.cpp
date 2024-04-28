#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, x, b, y; scanf("%ld %ld %ld %ld", &a, &x, &b, &y);
        long res = a * y - b * x;
        if(res > 0){puts("Alice");}
        else if(res < 0){puts("Bob");}
        else{puts("Equal");}

    }   

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c, d; scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        if(a - c < b - d){puts("First");}
        else if(b - d < a - c){puts("Second");}
        else{puts("Any");}

    }   

}

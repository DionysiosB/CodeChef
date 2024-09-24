#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        if(x < 4){puts("MILD");}
        else if(x < 7){puts("MEDIUM");}
        else{puts("HOT");}
    }

}

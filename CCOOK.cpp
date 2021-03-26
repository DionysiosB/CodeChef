#include <iostream>

int main(){

    const long N = 5;
    long t; scanf("%ld", &t);
    while(t--){
        long cnt(0); for(long p = 0; p < N; p++){long x; scanf("%ld", &x); cnt += x;}
        if(cnt == 0){puts("Beginner");}
        else if(cnt == 1){puts("Junior Developer");}
        else if(cnt == 2){puts("Middle Developer");}
        else if(cnt == 3){puts("Senior Developer");}
        else if(cnt == 4){puts("Hacker");}
        else if(cnt == 5){puts("Jeff Dean");}
        else{puts("Unknown");}
    }

    return 0;
}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long minus(0), ones(0), zeros(0), others(0);
        while(n--){
            long x; scanf("%ld", &x); 
            if(x == -1){++minus;}
            else if(x == 0){++zeros;}
            else if(x == 1){++ones;}
            else{++others;}
        }

        if(others > 1){puts("no");}
		else if(minus && others){puts("no");}
		else if(minus > 1 && !ones){puts("no");}
		else{puts("yes");}
    }

    return 0;
}

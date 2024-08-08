#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        n %= 4;
        if(!k && !n){puts("Off");}
        else if(!k){puts("On");}
        else if(k && !n){puts("On");}
        else {puts("Ambiguous");}
    }   

}

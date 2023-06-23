#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long s, wa, wb, wc; scanf("%ld %ld %ld %ld", &s, &wa, &wb, &wc);
        if(wa + wb + wc <= s){puts("1");}
        else if(wa + wb <= s || wb + wc <= s){puts("2");}
        else{puts("3");}
    }

}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long sa, sb, sc; scanf("%ld %ld %ld", &sa, &sb, &sc);
        if(sa < sb && sa < sc){puts("Draw");}
        else{puts(sc < sb ? "Alice" : "Bob");}
    }

}

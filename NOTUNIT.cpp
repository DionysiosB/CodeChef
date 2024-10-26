#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        if((a % 2 == 0) && (a + 2 <= b)){printf("%ld %ld\n", a, a + 2);}
        else if((a % 3 == 0) && (a + 3 <= b)){printf("%ld %ld\n", a, a + 3);}
        else if(a + 3 <= b){printf("%ld %ld\n", a + 1, a + 3);}
        else{puts("-1");}
    }

}

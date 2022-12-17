#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int a, b, a1, b1, a2, b2; scanf("%d %d %d %d %d %d", &a, &b, &a1, &b1, &a2, &b2);
        if(a > b){int tmp = a; a = b; b = tmp;}
        if(a1 > b1){int tmp = a1; a1 = b1; b1 = tmp;}
        if(a2 > b2){int tmp = a2; a2 = b2; b2 = tmp;}

        if(a == a1 && b == b1){puts("1");}
        else if(a == a2 && b == b2){puts("2");}
        else{puts("0");}
    }

}

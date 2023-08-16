#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        if(x <= 100){}
        else if(x <= 1000){x -= 25;}
        else if(x <= 5000){x -= 100;}
        else{x -= 500;}
        printf("%ld\n", x);
    }   

}

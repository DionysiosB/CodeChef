#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        bool res((a % b == 0) || (b % a) == 0);
        long w = (a < b) ? (b / a) : (a / b); 
        while(res && w > 1){
            if(w % 2){res = false;}
            w /= 2;
        }

        puts(res ? "YES" : "NO");
    }   

}

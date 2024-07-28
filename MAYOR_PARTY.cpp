#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        printf("%ld\n",  (a + c) > b ? (a + c) : b);
    }   

}

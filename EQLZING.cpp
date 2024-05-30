#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        puts( ((a - b) % 2) ? "No" : "Yes");
    }   

}

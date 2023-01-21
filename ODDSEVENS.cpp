#include<cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int x, y; scanf("%d %d", &x, &y);
        puts((x + y) % 2 ? "Alice" : "Bob");
    }

}

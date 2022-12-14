#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int cnt(0);
        for(int p = 0; p < 7; p++){int x; scanf("%d", &x); cnt +=x;}
        puts(cnt > 3 ? "YES" : "NO");
    }

}

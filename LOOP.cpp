#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, m; scanf("%ld %ld %ld", &a, &b, &m);
        long dist = (a < b) ? (b - a) : (a - b);
        dist = (2 * dist < m) ? dist : (m - dist);
        printf("%ld\n", dist);
    }   

}

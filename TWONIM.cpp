#include <cstdio>

int main() {

    int t; scanf("%d", &t);
    while (t--){
        int n; scanf("%d", &n);
        int acc(0);
        for(int p = 0; p < n; p++){int x; scanf("%d", &x); acc ^= x;}
        puts( ((acc == 0) || (n % 2 == 0)) ? "First" : "Second");
    }
    return 0;
}

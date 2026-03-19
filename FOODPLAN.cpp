#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        double diff = 0.9 * n - m;
        if(diff == 0.0){puts("EITHER");}
        else{puts(diff < 0 ? "ONLINE" : "DINING");}
    }

}

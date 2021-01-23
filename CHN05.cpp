#include<cstdio>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n,m; scanf("%d %d", &n, &m);
        if(n == 1){puts("0");}
        else if(n == 2){printf("%d\n", m);}
        else{printf("%d\n", (n - 1) + 2 * (m - 1));}
    }

    return 0;
} 

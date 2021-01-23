#include <cstdio>
 
int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d",&n);
        double total(1.0);
        for(int p = 1; p < n; p++){total += 1.0 / (p + 1);}
        total *= n;
        printf("%.2lf\n", total);
    }

    return 0;
}

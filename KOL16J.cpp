#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        std::vector<bool> a(n + 1, 0);
        bool possible(true), outOfOrder(false);
        for(int p = 1; p <= n; p++){
            int x; scanf("%d", &x);
            if(x != p){outOfOrder = true;}
            if(x > n || a[x]){possible = false;}
            a[x] = 1;
        }

        puts((possible && outOfOrder) ? "yes" : "no");
    }

    return 0;
}

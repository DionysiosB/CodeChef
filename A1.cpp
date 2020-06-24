#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        int n, m; scanf("%d %d\n", &n, &m);
        std::vector<bool> v(m + 1, 0); 
        v[0] = true;

        while(n--){
            int x; scanf("%d\n", &x);
            for(int p = m; p >= x; p--){v[p] = v[p - x] | v[p];}
        }

        puts(v[m] ? "Yes" : "No");
    }

    return 0;
}

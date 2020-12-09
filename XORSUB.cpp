#include <cstdio>
#include <vector>

int main(){

    const int N = 1025;
    int t; scanf("%d", &t);
    while(t--){
        int n, k; scanf("%d %d", &n, &k);
        std::vector<bool> a(N, 0); a[k] = 1;
        for(int p = 0; p < n; p++){
            int x; scanf("%d", &x);
            for(int u = 0; u < a.size(); u++){
                if(!a[u]){continue;}
                a[u ^ x] = 1;
            }
        }

        for(int p = a.size() - 1; p >= 0; p--){if(a[p]){printf("%d\n", p); break;}}
    }

    return 0;
}

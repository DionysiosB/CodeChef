#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
    sort(v.rbegin(), v.rend());
    long res(0);
    for(long p = 0; p < n; p++){
        long rev = (p + 1) * v[p];
        res = (rev > res) ? rev : res;
    }

    printf("%ld\n", res);

}

#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int t; scanf("%d", &t);
    while(t--) {
        int64_t n, k, l; scanf("%lld %lld %lld", &n, &k, &l);
        --l;
        std::vector<int64_t> a(n, 1);

        int64_t d = 0;
        while(l > 0){a[d] = l % k + 1; ++d; l /= k;}
        for(int p = n - 1; p >= 0; p--){printf("%lld ", a[p]);}
        puts("");
    }

    return 0;
}

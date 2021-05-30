#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > a(n);
    for(long p = 0; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        a.push_back(std::make_pair(x, -1));
        a.push_back(std::make_pair(y, 1));
    }

    sort(a.begin(), a.end());
    long cur(0), mn(0);
    for(long p = 0; p < a.size(); p++){cur += a[p].second; mn = (mn < cur) ? mn : cur;}
    printf("%ld\n", -mn);

    return 0;
}

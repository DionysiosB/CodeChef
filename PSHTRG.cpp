#include <cstdio>
#include <vector>

long mix(long x, long y){return (x > y) ? x : y;}

void build(std::vector<long> &t, const std::vector<long> &a){
    const long n = a.size();
    for(long p = 0; p < n; p++){t[n + p] = a[p];}
    for(long p = n - 1; p > 0; p--){t[p] = mix(a[2 * p], a[2 * p + 1]);}
}

void update(std::vector<long> &t, long pos, long value){

    const long n = t.size() / 2;
    t[pos + n] = value;
    for(long p = (pos + n) / 2; p > 0; p /= 2){t[p] = mix(t[2 * p], t[2 * p + 1];} 


}






int main(){

    long n, q; scanf("%ld %ld", &n, &q);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> f(2 * n); build(a, f);



    return 0;
}

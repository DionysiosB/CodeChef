#include <cstdio>
#include <vector>

int main(){

    const long N = 1e5 + 7;
    const double P = 0.45;
    const double C = 0.1;

    std::vector<double> pr(N, 0);
    std::vector<double> cumpr(N, 0);
    for(long p = 1; p < N; p++){pr[p] = P + C * pr[p - 1];}
    for(long p = 1; p < N; p++){cumpr[p] = cumpr[p - 1] + pr[p];}

    long t; scanf("%ld", &t);
    while(t--){long d; scanf("%ld", &d); printf("%.8lf\n", cumpr[d]);}

    return 0;
}

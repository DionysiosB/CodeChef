#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); 
        long mx(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            mx = (mx > a[p]) ? mx : a[p];
        }

        long first(-1), last(-1);
        for(long p = 0; p < n; p++){
            if(a[p] < mx){continue;}
            if(first < 0){first = p;}
            last = p;
        }

        long diff = last - first;
        long res = ((n / 2) < diff) ? 0 : ((n/2) - diff);
        printf("%ld\n", res);
    }

}

#include <cstdio>
#include <vector>

long digitSum(long x){
    long sum(0);
    while(x > 0){sum += x % 10; x /= 10;}
    return sum;
}


int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        
        long mxd(0);
        for(long p = 0; p < n; p++){
            for(long q = p + 1; q < n; q++){
                long sd = digitSum(a[p] * a[q]);
                mxd = (mxd > sd) ? mxd : sd;
            }
        }
        
        printf("%ld\n", mxd);
    }
    
    return 0;
}

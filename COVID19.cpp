#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end()); a.push_back(1e9 + 7);
        long mn(n), mx(0), cnt(1);
        for(long p = 1; p < a.size(); p++){
            if(a[p - 1] + 2 >= a[p]){++cnt;}
            else{
                mn = (mn < cnt) ? mn : cnt; 
                mx = (mx > cnt) ? mx : cnt; 
                cnt = 1;
            }
        }

        printf("%ld %ld\n", mn, mx);
    }

}

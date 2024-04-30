#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<long> s(n);
        for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
        long cnt(0);
        for(long p = 0; p < n; p++){long d; scanf("%ld", &d); cnt += (s[p] == d);}
        std::cout << cnt << std::endl;
    }   

}

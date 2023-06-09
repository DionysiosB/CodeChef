#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        std::vector<long> z(n + 1, 0), a(n + 1, 0);
        for(long p = 1; p <= n; p++){a[p] = a[p - 1] + (s[p - 1] == '1');}
        for(long p = n - 1; p >= 0; p--){z[p] = z[p + 1] + (s[p] == '0');}
        long mn(1e9 + 7);
        for(long p = 0; p <= n; p++){
            long cur = a[p] + z[p];
            mn = (mn < cur) ? mn : cur;
        }
        
        std::cout << mn << std::endl;
    }

}

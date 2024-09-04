#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<long> s(n); for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
        std::string vrd; std::cin >> vrd;
        long ans(107);
        for(long p = 0; p < n; p++){
            if(vrd[p] == '1'){continue;}
            ans = (ans < s[p]) ? ans : s[p];
        }

        std::cout << ans << std::endl;
    }   

}

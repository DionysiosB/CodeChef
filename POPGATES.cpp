#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, k; std::cin >> n >> k;
        std::vector<std::string> v(n); for(long p = 0; p < n; p++){std::cin >> v[p];}
        long cnt(0);
        for(long p = n - 1; p >= n - k; p--){
            if(v[p] == "H" && !cnt){cnt = 1 - cnt;}
            else if(v[p] == "T" && cnt){cnt = 1 - cnt;}
        }
        long a(0), b(0);
        for(long p = n - k - 1; p >= 0; p--){a += (v[p] == "H"); b += (v[p] == "T");}
        std::cout << (cnt ? b : a) << std::endl;
    }

}

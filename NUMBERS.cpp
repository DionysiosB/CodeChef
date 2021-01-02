#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::pair<long, std::string> > a(n);
        for(long p = 0; p < n; p++){
            std::string s; std::cin >> s;
            long num; std::cin >> num;
            a[p] = std::make_pair(num, s);
        }

        sort(a.begin(), a.end());
        long n
        for(long p = 0; p < n - 1; p++){

        }

    }

    return 0;
}

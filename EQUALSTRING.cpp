#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n; 
        std::string a, b; std::cin >> a >> b;
        bool v[26] = {0};
        for(long p = 0; p < n; p++){if(a[p] != b[p]){v[b[p] - 'a'] = 1;}}
        long cnt(0); for(long p = 0; p < 26; p++){cnt += v[p];}
        std::cout << cnt << std::endl;
    }

}

#include <iostream>
#include <vector>

int main(){

    const int N = 256;
    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<bool> a(N, 0);
        for(long p = 0; p < s.size(); p++){a[s[p]] = 1;}
        int count(0);
        for(long p = 0; p < N; p++){count += a[p];}

        std::cout << count << std::endl;
    }

    return 0;
}

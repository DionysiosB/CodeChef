#include <iostream>
#include <vector>

int main(){

    const int N = 256;
    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<bool> a(N, 0);

        long left(0), maxLength(0);
        for(long p = 0; p < s.size(); p++){
            while(a[s[p]]){a[s[left]] = 0; ++left;}
            a[s[p]] = 1;
            long length = p - left + 1;
            maxLength = (maxLength > length) ? maxLength : length;
        }

        std::cout << maxLength << std::endl;
    }

    return 0;
}

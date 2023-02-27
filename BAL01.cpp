#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += ((s[p] == '1') - (s[p] == '0'));}
        for(long p = 0; p < s.size(); p++){
            if(s[p] != '?'){continue;}
            if(cnt > 0){s[p] = '0'; --cnt;}
            else{s[p] = '1'; ++cnt;}
        }

        std::cout << s << std::endl;
    }

}

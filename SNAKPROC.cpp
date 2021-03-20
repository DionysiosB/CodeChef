#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long L; std::cin >> L;
        std::string s; std::cin >> s;
        bool cnt(0), valid(true);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'H'){
                if(cnt){valid = false; break;}
                cnt = 1;
            }
            else if(s[p] == 'T'){
                if(!cnt){valid = false; break;}
                cnt = 0;
            }
        }

        if(cnt){valid = false;}
        std::cout << (valid ? "Valid" : "Invalid") << std::endl;
    }

    return 0;
}

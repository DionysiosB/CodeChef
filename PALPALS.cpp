#include <iostream>

int main(){

    const int N = 26;
    long t; std::cin >> t; 
    while(t--){
        std::string s; std::cin >> s;
        long cnt[N] = {0};
        for(long p = 0; p < s.size(); p++){++cnt[s[p] - 'a'];}
        int palin(0);
        for(long p = 0; p < N; p++){
            if(cnt[p] == 0){continue;}
            palin += (cnt[p] / 2) - (cnt[p] % 2);
        }

        std::cout << (palin >= 0 ? "YES" : "NO") << std::endl;

    }

}

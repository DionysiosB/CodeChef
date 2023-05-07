#include <iostream>

int main(){

    const int N = 26;
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long k, x; scanf("%ld %ld", &k, &x);
        long cnt[N] = {0};
        long res(0);
        for(long p = 0; p < s.size(); p++){
            long idx = s[p] - 'a';
            if(cnt[idx] < x){++res; ++cnt[idx];}
            else if(cnt[idx] >= x){
                if(k > 0){--k;}
                else{break;}
            }
        }

        std::cout << res << std::endl;
    }

}

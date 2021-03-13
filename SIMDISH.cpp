#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::vector<std::string> a(4); for(long p = 0; p < 4; p++){std::cin >> a[p];}
        std::vector<std::string> b(4); for(long p = 0; p < 4; p++){std::cin >> b[p];}
        long cnt(0);
        for(long p = 0; p < a.size(); p++){
            for(long q = 0; q < b.size(); q++){
                cnt += (a[p] == b[q]);
            }
        }

        puts(cnt >= 2 ? "similar" : "dissimilar");
    }

    return 0;
}

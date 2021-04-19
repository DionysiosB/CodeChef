#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false); long t; std::cin >> t; while(t--){
        long n, m; std::cin >> n >> m;
        long godd(0), rodd(0), geven(0), reven(0);
        for(long row = 0; row < n; row++){
            std::string s; std::cin >> s;
            for(long col = 0; col < m; col++){
                if((row + col) % 2){rodd += (s[col] == 'R'); godd += (s[col] == 'G');}
                else{reven += (s[col] == 'R'); geven += (s[col] == 'G');}
            }
        }

        long candA = 5 * rodd + 3 * geven;
        long candB = 5 * reven + 3 * godd;
        long cost = (candA < candB) ? candA : candB;
        std::cout << cost << std::endl;
    }

    return 0;
}

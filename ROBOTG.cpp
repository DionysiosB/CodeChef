#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        int n, m; std::cin >> n >> m;
        std::string s; std::cin >> s;
        bool possible(false);
        for(int row = 0; row < n; row++){
            if(possible){break;}
            for(int col = 0; col < m; col++){
                if(possible){break;}
                int x(col), y(row);
                bool safe(true);
                for(int p = 0; p < s.size(); p++){
                    if(s[p] == 'U'){++y;}
                    if(s[p] == 'D'){--y;}
                    if(s[p] == 'R'){++x;}
                    if(s[p] == 'L'){--x;}
                    if(x < 0 || x >= m || y < 0 || y >= n){safe = false; break;}
                }
                if(safe){possible = true; break;}
            }
        }

        std::cout << (possible ? "safe" : "unsafe") << std::endl;
    }

    return 0;
}

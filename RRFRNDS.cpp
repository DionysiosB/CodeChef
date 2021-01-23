#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false); cin.tie(0);
    int n; std::cin >> n;
    std::vector<std::vector<bool> > g(n, std::vector<bool>(n, 0));

    for(int p = 0; p < n; p++){
        std::string s; std::cin >> s;
        for(long q = 0; q < s.size(); q++){if(s[q] == '1'){g[p][q] = 1;}}
    }

    int64_t count(0);
    for(int x = 0; x < n; x++){
        for(int y = x + 1; y < n; y++){
            if(g[x][y]){continue;}
            for(int p = 0; p < n; p++){if(g[x][p] && g[y][p]){++count; break;}}
        }
    }

    std::cout << (2 * count) << std::endl;

    return 0;
}

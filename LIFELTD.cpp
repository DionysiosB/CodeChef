#include <iostream>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::vector<std::string> m(3);
        for(long row = 0; row < 3; row++){std::cin >> m[row];}
        std::string res("no");
        for(long row = 0; row <= 1; row++){
            for(long col = 0; col <= 1; col++){
                if(m[row][col] == 'l' && m[row + 1][col] == 'l' && m[row + 1][col + 1] == 'l'){res = "yes"; break;}
            }
        }
        std::cout << res << std::endl;
    }

    return 0;
}

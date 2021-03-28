#include <iostream>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        bool v[5] = {0};
        while(n--){
            std::string s; std::cin >> s; 
            if(s == "cakewalk"){v[0] = 1;}
            else if(s == "simple"){v[1] = 1;}
            else if(s == "easy"){v[2] = 1;}
            else if(s == "easy-medium" || s == "medium"){v[3] = 1;}
            else if(s == "hard" || s == "medium-hard"){v[4] = 1;}
        }

        std::cout << ((v[0] && v[1] && v[2] && v[3] && v[4]) ? "Yes" : "No") << std::endl;
    }

    return 0;
}

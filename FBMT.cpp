#include <iostream>
#include <map>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::map<std::string, long> m;
        while(n--){
            std::string s; std::cin >> s;
            ++m[s];
        }

        if(m.size() == 0){std::cout << "Draw" << std::endl;}
        else if(m.size() == 1){std::cout << (m.begin()->first) << std::endl;}
        else if(m.begin()->second > m.rbegin()->second){std::cout << (m.begin()->first) << std::endl;}
        else if(m.begin()->second < m.rbegin()->second){std::cout << (m.rbegin()->first) << std::endl;}
        else{std::cout << "Draw" << std::endl;}
    }

    return 0;
}

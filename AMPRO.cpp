#include <iostream>
#include <vector>

int main(){

    std::vector<std::string> v;
    while(true){
        std::string s; std::cin >> s;
        if(s.size() > 0){v.push_back(s);}
        else{break;}
    }

    for(long p = 0; p + 1 < v.size(); p++){
        if('a' <= v[p][0] && v[p][0] <= 'z'){v[p][0] += 'A' - 'a';}
        std::cout << v[p][0];
        if(v[p].size() > 1){std::cout << ".";} else{std::cout << " ";}
    }

    if('a' <= v.back()[0] && v.back()[0] <= 'z'){v.back()[0] += 'A' - 'a';}
    std::cout << v.back() << std::endl;

    return 0;
}

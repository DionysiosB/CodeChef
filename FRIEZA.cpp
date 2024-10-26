#include <iostream>

bool good(char x){return (x == 'f' || x == 'r' || x == 'i' || x == 'e' || x == 'z' || x == 'a');}


int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long cg(good(s[0])), cb(!good(s[0]));
        bool prev(good(s[0]));
        for(long p = 1; p < s.size(); p++){
            bool cur = good(s[p]);
            if(prev && cur){++cg;}
            else if(cur){std::cout << cb; cb = 0; cg = 1;}
            else if((!prev) && (!cur)){++cb;}
            else if(!cur){std::cout << cg; cg = 0; cb = 1;}
            prev = cur;
        }
        if(cg){std::cout << cg << std::endl;}
        else{std::cout << cb << std::endl;;}
    }

}

#include<iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long left(0), right(0);
        bool white(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'W'){white = true;}
            else if(white){++right;}
            else{++left;}
        }

        std::cout << ((left == right) ? "Chef" : "Aleksa") << std::endl;
    }

    return 0;
}

#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        int first  = (10 * (s[0] - '0') + (s[1] - '0'));
        int second = (10 * (s[3] - '0') + (s[4] - '0'));
        if(first <= 12 && second <= 12){puts("BOTH");}
        else if(first <= 12){puts("MM/DD/YYYY");}
        else if(second <= 12){puts("DD/MM/YYYY");}
    }

}

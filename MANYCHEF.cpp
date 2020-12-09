#include <iostream>
 
int main(){

    int t; std::cin >> t;

    while(t--){
        std::string s; std::cin >> s;
        for(int p = s.size() - 4; p >= 0; p--){
            if((s[p] == 'C' || s[p] == '?') && (s[p+1] == 'H' || s[p+1] == '?') && (s[p+2] == 'E' || s[p+2] == '?') && (s[p+3] == 'F' || s[p+3] == '?')&& p+3 < s.size()){
                s[p] = 'C'; s[p + 1] = 'H'; s[p + 2] = 'E'; s[p + 3] = 'F'; p -= 3;
            }
            else if(s[p + 3] == '?'){s[p+3] = 'A';}
        }

        for(int p = 0; p < 4; p++){if(s[p] == '?'){s[p] = 'A';}}

        std::cout << s << std::endl;
    }

    return 0;
}

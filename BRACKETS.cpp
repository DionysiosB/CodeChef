#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long mxb(0), balance(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '('){++balance;}
            else{--balance;}
            mxb = (mxb > balance) ? mxb : balance;
        }

        for(long p = 0; p < mxb; p++){std::cout << "(";}
        for(long p = 0; p < mxb; p++){std::cout << ")";}
        std::cout << std::endl;
    }

    return 0;
}

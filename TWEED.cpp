#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::string s; std::cin >> n >> s;
        long a; std::cin >> a;
        if((n == 1) && (s == "Dee") && (a % 2 == 0)){std::cout << "Dee" << std::endl;}
        else{std::cout << "Dum" << std::endl;}
        while(--n){std::cin >> a;}
    }

    return 0;
}

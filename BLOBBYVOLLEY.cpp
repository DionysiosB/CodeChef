#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;
        char prev = 'A'; long alice(0), bob(0);
        for(long p = 0; p < n; p++){
            if(s[p] == prev){
                if(s[p] == 'A'){++alice;}
                else if(s[p] == 'B'){++bob;}
            }
            prev = s[p];
        }

        std::cout << alice << " " << bob << std::endl;
    }

}

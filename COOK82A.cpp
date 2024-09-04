#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long a, b, c, d; 
        for(long p = 0; p < 4; p++){
            std::string s; long x; 
            std::cin >> s >> x;
            if(s == "RealMadrid"){a = x;}
            else if(s == "Malaga"){b = x;}
            else if(s == "Barcelona"){c = x;}
            else if(s == "Eibar"){d = x;}
        }

        bool lose = (a < b) && (c > d);
        std::cout << (lose ? "Barcelona" : "RealMadrid") << std::endl;
    }   

}

#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        bool running(0), error(false);
        while(n--){
            std::string s; std::cin >> s;
            if(s == "start" || s == "restart"){running = 1;}
            else if(s == "stop"){
                if(!running){error = true;}
                else{running = 0;}
            }
        }

        std::cout << (error ? "404" : "200") << std::endl;
    }

}

#include <iostream>

int main(){

    std::string s, t; std::cin >> s >> t;
    if(s == "R" || t == "R"){std::cout << "R" << std::endl;}
    else if(s == "B" || t == "B"){std::cout << "B" << std::endl;}
    else{std::cout << "G" << std::endl;}
}

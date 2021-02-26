#include <iostream>

int main(){

    const std::string chef = "chef";
    const std::string a = "ch";
    const std::string b = "he";
    const std::string c = "ef";
    const std::string d = "che";
    const std::string e = "hef";
    const std::string f = "chef";

    long n; std::cin >> n;
    long cnt(0);
    while(n--){
        std::string s; std::cin >> s;
        cnt += (s.find(a) != std::string::npos) || (s.find(b) != std::string::npos) || (s.find(c) != std::string::npos) || (s.find(d) != std::string::npos) || (s.find(e) != std::string::npos) || (s.find(f) != std::string::npos);
    }

    std::cout << cnt << std::endl;

    return 0;
}

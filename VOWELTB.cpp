#include <iostream>

int main(){

    std::string s; std::cin >> s;
    puts((s[0] == 'a' || s[0] == 'A' || s[0] == 'e' || s[0] == 'E' || s[0] == 'i' || s[0] == 'I' || s[0] == 'o' || s[0] == 'O' || s[0] == 'u' || s[0] == 'U') ? "Vowel" : "Consonant");

    return 0;
}

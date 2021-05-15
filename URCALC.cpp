#include <iostream>

int main(){

    double a, b; std::string s; std::cin >> a >> b >> s;
    if(s[0] == '+'){printf("%.7lf\n", a + b);}
    else if(s[0] == '-'){printf("%.7lf\n", a - b);}
    else if(s[0] == '*'){printf("%.7lf\n", a * b);}
    else if(s[0] == '/'){printf("%.7lf\n", a / b);}

    return 0;
}

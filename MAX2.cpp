#include <iostream>

int main(){

    long n; std::string s;
    std::cin >> n >> s;
    int res(0);
    for(long p = s.size() - 1; p >= 0; p--){
        if(s[p] == '0'){++res;}
        else{break;}
    }

    printf("%d\n", res);

}

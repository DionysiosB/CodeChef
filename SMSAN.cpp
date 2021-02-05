#include <iostream>
long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    std::string a("love");
    std::string b("babe");
    std::string c("sweety");
    std::string d("life");

    long cnt(0), total(0);
    while(true){
        std::string s; std::cin >> s;
        if(s.size() <= 0){break;}
        ++total;
        cnt += (s == a) || (s == b) || (s == c) || (s == d);
    }

    long g = gcd(total, cnt);
    total /= g; cnt /= g;
    printf("%ld/%ld\n", cnt, total);

    return 0;
}

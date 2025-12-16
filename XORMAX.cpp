#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
        long na(0), za(0), nb(0), zb(0);
        for(long p = 0; p < a.size(); p++){
            za += (a[p] == '0');
            na += (a[p] == '1');
            zb += (b[p] == '0');
            nb += (b[p] == '1');
        }

        long u = (na < zb ? na : zb);
        long v = (nb < za ? nb : za);
        for(long p = 0; p < a.size(); p++){std::cout << (p < u + v ? '1' : '0');}
        std::cout << std::endl;
    }

}

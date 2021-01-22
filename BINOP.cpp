#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
        long n = a.size();
        long zeroone(0), onezero(0);
        bool haszero(false), hasone(false);

        for(long p = 0; p < n; p++){
            if(a[p] == '0'){haszero = true;}
            else if(a[p] == '1'){hasone = true;}

            if(a[p] == '0' && b[p] == '1'){++zeroone;}
            else if(a[p] == '1' && b[p] == '0'){++onezero;}
        }

        if(((!haszero) || (!hasone)) && (zeroone > 0 || onezero > 0)){std::cout << "Unlucky Chef" << std::endl; continue;}
        std::cout << "Lucky Chef" << std::endl;
        long total = (zeroone > onezero) ? zeroone : onezero;
        std::cout << total << std::endl;
    }

    return 0;
}

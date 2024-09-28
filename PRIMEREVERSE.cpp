#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long za(0), zb(0);
        for(long p = 0; p < n; p++){
            if(a[p] == '0'){++za;}
            if(b[p] == '0'){++zb;}
        }

        std::cout << (za == zb ? "YES" : "NO") << std::endl;
    }

}

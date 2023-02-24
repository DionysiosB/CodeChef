#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long z(0), x(0), y(0), w(0);
        for(long p = 0; p < n; p++){
            if(a[p] == '0' && b[p] == '0'){++z;}
            else if(a[p] == '1' && b[p] == '0'){++x;}
            else if(a[p] == '0' && b[p] == '1'){++y;}
            else if(a[p] == '1' && b[p] == '1'){++w;}
        }

        long f = (x < y) ? x : y; x -= f; y -= f;
        x += y + z; 
        long g = (x < w) ? x : w; x -= g; w -= g;
        long h = w / 2;
        long res = f + g + h;
        std::cout << res << std::endl;
    }

}

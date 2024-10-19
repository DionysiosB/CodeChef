#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long res(0);
        for(long p = 0; p < n; p++){
            if(a[p] == b[p]){++res;}
            else if(b[p] == 'N'){continue;}
            else if(p + 1 < n){b[p + 1] = 'N';}
        }

        std::cout << res << std::endl;
    }

}

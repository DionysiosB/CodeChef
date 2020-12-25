#include <iostream>
#include <vector>
#include <algorithm>

unsigned long long gcd(unsigned long long a, unsigned long long b){return (a == 0) ? b : gcd(b % a, a);}

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        unsigned long long n; int k; std::cin >> n >> k;
        std::vector<unsigned long long> num(k), den(k);
        for(int p = 0; p < k; p++){
            num[p] = n - k + 1 + p;
            den[p] = p + 1;
        }

        for(int a = 0; a < k; a++){
            for(int b = 0; b < k; b++){
                unsigned long long g = gcd(num[a], den[b]);
                num[a] /= g; den[b] /= g;
            }
        }

        unsigned long long choose(1);
        for(int p = 0; p < k; p++){choose *= num[p];}
        std::cout << choose << std::endl;
    }

    return 0;
}

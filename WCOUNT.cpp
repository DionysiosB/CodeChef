#include <iostream>
#include <vector>
 
int64_t gcd(int64_t a, int64_t b){return (b == 0) ? a : gcd(b, a % b);}
 
int main(){
 
    const int N = 256;
    const int64_t MOD = 1e9 + 7;
    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<int64_t> count(N, 0);
        for(int64_t p = 0; p < s.size(); p++){++count[s[p]];}
 
        std::vector<int64_t> num(s.size(), 1);
        for(int64_t p = 0; p < num.size(); p++){num[p] = p + 1;}
 
        std::vector<int64_t> den;
        for(int64_t p = 0; p < N; p++){
            if(count[p] <= 0){continue;}
            for(int64_t q = 1; q <= count[p]; q++){den.push_back(q);}
        }
 
        for(int64_t a = 0; a < num.size(); a++){
            for(int64_t b = 0; b < den.size(); b++){
                int64_t g = gcd(num[a], den[b]);
                num[a] /= g; den[b] /= g;
            }
        }
 
        int64_t total(1);
        for(int64_t p = 0; p < num.size(); p++){total *= num[p]; total %= MOD;}
        std::cout << total << std::endl;
    }
 
    return 0;
} 

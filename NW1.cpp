#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    const int N = 7;
    while(t--){
        long n; std::string s; std::cin >> n >> s;
        std::vector<long> a(N, 0);
        long start(0);
        if(s == "mon"){start = 0;}
        else if(s == "tue"){start = 1;}
        else if(s == "wed"){start = 2;}
        else if(s == "thu"){start = 3;}
        else if(s == "fri"){start = 4;}
        else if(s == "sat"){start = 5;}
        else if(s == "sun"){start = 6;}
        for(long p = 0; p < n; p++){++a[(start + p) % N];}
        for(long p = 0; p < N; p++){std::cout << a[p] << " ";}
        std::cout << std::endl;
    }

    return 0;
}

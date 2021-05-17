#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    const long N = 26;
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::vector<long> v(N, 0);
        for(long p = 0; p < s.size(); p++){++v[s[p] - 'a'];}

        std::vector<long> w;
        for(long p = 0; p < N; p++){
            if(v[p] <= 0){continue;}
            else{w.push_back(v[p]);}
        }

        sort(w.begin(), w.end());
        bool dynamic(true);
        for(long p = 2; p < w.size(); p++){if(w[p] != w[p - 1] + w[p - 2]){dynamic = false; break;}}

        std::cout << (dynamic ? "Dynamic" : "Not") << std::endl;
    }

    return 0;
}

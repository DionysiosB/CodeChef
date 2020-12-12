#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    const int N = 26;
    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long n = s.size();

        std::vector<long> count(N, 0);
        bool possible(true);
        for(long p = 0; p < n; p++){
            ++count[s[p] - 'a'];
            if(count[s[p] - 'a'] > (n + 1) / 2){possible = false; break;}
        }

        if(!possible){std::cout << "-1" << std::endl; continue;}

        std::vector<std::pair<long, int> > v; 
        for(int p = 0; p < N; p++){
            if(count[p] <= 0){continue;}
            v.push_back(std::make_pair(count[p], p));
        }
        std::sort(v.rbegin(), v.rend());

        std::string f(s); int pos(0);
        for(int p = 0; p < v.size(); p++){
            char letter = 'a' + v[p].second;
            for(long k = 0; k < v[p].first; k++){
                f[pos] = letter;
                pos += 2; if(pos >= n){pos = 1;}
            }
        }

        std::cout << f << std::endl;
    }

    return 0;
}

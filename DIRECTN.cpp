#include <iostream>
#include <set>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        long cnt(0);
        std::string s; std::cin >> s;
        std::set<long> t;
        bool res(false);
        for(long p = 0; p < s.size(); p++){
            cnt += (s[p] == 'R') - (s[p] == 'L');
            cnt = (4 + (cnt % 4)) % 4;
            if(t.count(cnt + 2) || t.count(cnt - 2)){res = true;}
            t.insert(cnt);
        }
        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}

#include <iostream>
#include <map>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::map<std::string, std::pair<long, long> > cnt;
        while(n--){std::string s; int x; std::cin >> s >> x; x ? (cnt[s].first++) : (cnt[s].second++);}

        long res(0);
        for(std::map<std::string, std::pair<long, long> >::iterator it = cnt.begin(); it != cnt.end(); it++){
            std::pair<long, long> tmp = it->second;
            res += (tmp.first > tmp.second) ? tmp.first : tmp.second;
        }

        std::cout << res << std::endl;
    }

}

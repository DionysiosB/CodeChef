#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long k, x; scanf("%ld %ld", &k, &x);

        std::map<long, long> fact;
        long rem(x);
        for(long p = 2; p * p <= x; p++){
            if(p * p > rem){break;}
            while(rem % p == 0){++fact[p]; rem /= p;}
        }

        if(rem > 1){++fact[rem];}

        std::vector<long> div;
        for(std::map<long, long>::iterator it = fact.begin(); it != fact.end(); it++){
            long key = it->first;
            long mult = it->second;

            long tmp = 1;
            while(mult >= k){tmp *= key; --mult;}
            if(tmp > 1){div.push_back(tmp);}
            for(long u = 0; u < mult; u++){div.push_back(key);}
        }

        sort(div.rbegin(), div.rend());

        std::multiset<long> w;
        for(long p = 0; p < k; p++){w.insert(1);}
        for(long p = 0; p < div.size(); p++){
            long mn = *w.begin();
            w.erase(w.find(mn));
            mn *= div[p];
            w.insert(mn);
        }

        long ans(0);
        for(std::set<long>::iterator it = w.begin(); it != w.end(); it++){ans += *it;}
        printf("%ld\n", ans);
    }

}

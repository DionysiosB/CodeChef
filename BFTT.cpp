#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        std::vector<long> a; while(x){a.push_back(x % 10); x /= 10;} 
        long cnt(0); for(long p = 0; p < a.size(); p++){cnt += (a[p] == 3);}
        bool carry(1);
        for(long p = 0; p < a.size(); p++){
            if(carry){
                carry = 0;
                if(a[p] == 3){--cnt; a[p] = 4;}
                else if(a[p] == 2){++cnt; a[p] = 3; continue;}
                else{++a[p]; if(a[p] > 9){a[p] = 0; carry = 1;}}
            }

            if(cnt >= 3){continue;}
            if(a[p] > 3){carry = 1;}
            ++cnt; a[p] = 3;
        }

        if(carry){printf("1");}
        for(long p = a.size() - 1; p >= 0; p--){printf("%ld", a[p]);}
        puts("");
    }

    return 0;
}

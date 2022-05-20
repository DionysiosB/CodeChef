#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        std::set<long> s;
        long bro(0), self(0);
        while(n--){
            long f; scanf("%ld", &f);
            if(s.count(f)){++bro;}
            else{s.insert(f); ++self;}
        }

        if(bro < x){self -= (x - bro);}
        printf("%ld\n", self);
    }

}

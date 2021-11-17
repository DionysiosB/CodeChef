#include <cstdio>
#include <set>

int main(){
    
    long n; scanf("%ld", &n);
    std::set<long> s; for(long p = 0; p < n; p++){long x; scanf("%ld", &x); s.insert(x);}
    if(s.size() <= 1){puts("0");}
    else{printf("%ld\n", *(++s.rbegin()));}

    return 0;
}

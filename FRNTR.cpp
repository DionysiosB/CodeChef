#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    std::vector<long> available, needed;
    for(long p = 0; p < t; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        if(p < t / 2){available.push_back(x - y);}
        else{needed.push_back(y);}
    }

    sort(available.begin(), available.end());
    sort(needed.begin(), needed.end());
    
    long ind(0);
    for(long p = 0; p < available.size(); p++){
        if(available[p] >= needed[ind]){++ind;}
    }

    printf("%ld\n", ind);

    return 0;
}

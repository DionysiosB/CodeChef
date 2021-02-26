#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > b(n + 1, std::vector<long>(m + 1, 1));
        for(long row = 1; row <= n; row++){for(long col = 1; col <= m; col++){scanf("%ld", &b[row][col]);}}

        bool possible(true);
        for(long row = 1; row <= n; row++){
            if(!possible){break;}
            for(long col = 1; col <= m; col++){
                if(!possible){break;}
                if((b[row][col] > 0) && (b[row][col] < b[row - 1][col] || b[row][col] < b[row][col - 1])){possible = false;}
                else if(b[row][col] < 0){b[row][col] = (b[row - 1][col] > b[row][col - 1]) ? b[row - 1][col] : b[row][col - 1];}
            }
        }

        if(possible){for(long row = 1; row <= n; row++){for(long col = 1; col <= m; col++){printf("%ld ", b[row][col]);} puts("");}}
        else{puts("-1");}
    }

    return 0;
}

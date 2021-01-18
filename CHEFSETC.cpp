#include <cstdio>

int main(){
    
    const int N = 4;
    long t; scanf("%ld", &t);

    while(t--){
        long a[N]; for(long p = 0; p < N; p++){scanf("%ld", a + p);}

        bool possible(false);
        for(long p = 1; p < (1 << N); p++){
            long x = p; 
            long total(0);
            for(long d = 0; d < N; d++){total += (x % 2) * a[d]; x /= 2;}
            if(total == 0){possible = true; break;}
        }

        puts(possible ? "Yes" : "No");
    }

    return 0;
}

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long f(0), t(0);
        bool possible(true);
        while(n--){
            long x; scanf("%ld", &x);
            if(x == 5){++f;}
            else if(x == 10){
                if(f > 0){--f;}
                else{possible = false;}
                ++t;
            }
            else if(x == 15){
                if(t > 0){--t;}
                else if(f > 1){f -= 2;}
                else{possible = false;}
            }
        }

        puts(possible ? "YES" : "NO");
    }

}

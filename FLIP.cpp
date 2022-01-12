#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;

        long cnt(0); bool diff(false);
        for(long p = 0; p < a.size(); p += 2){
            if(a[p] == b[p]){cnt += diff; diff = 0;}
            else{diff = true;}
        }
        cnt += diff; diff = false;
        for(long p = 1; p < a.size(); p += 2){
            if(a[p] == b[p]){cnt += diff; diff = 0;}
            else{diff = true;}
        }
        cnt += diff;

        printf("%ld\n", cnt);
    }

}

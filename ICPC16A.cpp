#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long x1, y1, x2, y2; std::cin >> x1 >> y1 >> x2 >> y2;
        if(x1 != x2 && y1 != y2){puts("sad");}
        else if(x1 == x2){puts(y1 < y2 ? "up" : "down");}
        else if(y1 == y2){puts(x1 < x2 ? "right" : "left");}
        else{puts("here");}
    }

    return 0;
}

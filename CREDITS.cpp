#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        int x; scanf("%d", &x);
        if(x < 35){puts("Underload");}
        else if(x <= 65){puts("Normal");}
        else{puts("Overload");}
    }   

}

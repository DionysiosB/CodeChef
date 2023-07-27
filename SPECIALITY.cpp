#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        if(x > y && x > z){puts("Setter");}
        else if(y > x && y > z){puts("Tester");}
        else if(z > x && z > y){puts("Editorialist");}
    }   

}

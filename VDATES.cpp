#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long d, l, r; scanf("%ld %ld %ld", &d, &l, &r);
        if(d < l){puts("Too Early");}
        else if(d <= r){puts("Take second dose now");}
        else{puts("Too Late");}
    }

}

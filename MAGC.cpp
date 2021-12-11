#include <cstdio>

int main(){

    long a, b; scanf("%ld %ld", &a, &b);
    if(a != 1 && b != 1){puts("1");}
    else if(a != 2 && b != 2){puts("2");}
    else if(a != 3 && b != 3){puts("3");}
    else{puts("Error");}

    return 0;
}

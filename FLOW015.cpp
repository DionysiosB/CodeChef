#include<cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long yr; scanf("%ld",&yr);
        long normaldays = (yr - 1) * 365;
        long leapdays = (yr - 1) / 4 - (yr - 1) / 100 + (yr - 1) / 400;
        long totaldays = normaldays + leapdays;
        long firstday = totaldays % 7;
        if(firstday == 0){puts("monday");}
        else if(firstday == 1){puts("tuesday");}
        else if(firstday == 2){puts("wednesday");}
        else if(firstday == 3){puts("thursday");}
        else if(firstday == 4){puts("friday");}
        else if(firstday == 5){puts("saturday");}
        else if(firstday == 6){puts("sunday");}
    }

    return 0;
}

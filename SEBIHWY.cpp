#include<cstdio>
#include<cmath>

int main(){

    int t; scanf("%d",&t);
    while(t--){
        double s,sg,fg,d,t; scanf("%lf %lf %lf %lf %lf",&s, &sg, &fg, &d, &t);
        double s1 = s + 180 * d / t;
        double a = std::abs(s1 - sg);
        double b = std::abs(s1 - fg);
        if(a < b){puts("SEBI");}
        else if(a > b){printf("FATHER");}
        else if(a == b){puts("DRAW");}
    }
}

#include<cstdio>

int main(){

    int t; scanf("%d",&t);
    while(t--){
        double ds,dt,d; scanf("%lf %lf %lf", &ds, &dt, &d);
        double min;
        if(ds >= dt + d){min=ds-dt-d;}
        else if(dt > ds + d){min=dt-ds-d;}
        else if((ds+dt) >= d){min=0.0;}
        else min = d - (ds+dt);
        printf("%.7lf\n", min);
    }
    return 0;
} 

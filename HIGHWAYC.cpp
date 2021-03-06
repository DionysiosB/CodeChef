#include <cstdio>
#include <vector>

int main(){

    const double EPS = 1e-6;
    long t; scanf("%ld", &t);
    while(t--){
        long n; double s, y; scanf("%ld %lf %lf", &n, &s, &y);
        std::vector<double> v(n); for(long p = 0; p < n; p++){scanf("%lf", &v[p]);}
        std::vector<double> d(n); for(long p = 0; p < n; p++){scanf("%lf", &d[p]);}
        std::vector<double> a(n); for(long p = 0; p < n; p++){scanf("%lf", &a[p]);}
        std::vector<double> c(n); for(long p = 0; p < n; p++){scanf("%lf", &c[p]);}

        double dur = y / s;

        double t(0);
        for(long p = 0; p < n; p++){
            if(!d[p]){a[p] = -a[p];}
            double ta = (-a[p] - EPS)/v[p] - dur;
            double tb = (-a[p] + c[p] + EPS)/v[p];
            if(t > ta){t = (t > tb) ? t : tb;}
            t += dur;
        }

        printf("%.5lf\n", t);
    }

    return 0;
}

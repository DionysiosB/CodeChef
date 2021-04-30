#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<double, double> > a(n);
        for(long p = 0; p < n; p++){scanf("%lf %lf", &a[p].first, &a[p].second);}
        sort(a.begin(), a.end());

        std::vector<double> left(n, -1);
        for(long p = 1; p < n; p++){
            if(a[p - 1].second < a[p].second){left[p] = (a[p].first - a[p - 1].first) / (a[p].second - a[p - 1].second);}
            if(left[p - 1] > 0 && left[p] < 0){left[p] = left[p - 1];}
            else if(left[p - 1] > 0 && left[p] > 0){left[p] = left[p] < left[p - 1] ? left[p] : left[p - 1];}
        }

        std::vector<double> right(n, -1);
        for(long p = n - 2; p >= 0; p--){
            if(a[p].second > a[p + 1].second){right[p] = (a[p + 1].first - a[p].first) / (a[p].second - a[p + 1].second);}
            if(right[p] < 0 && right[p + 1] > 0){right[p] = right[p + 1];}
            else if(right[p] > 0 && right[p + 1] > 0){right[p] = right[p] < right[p + 1] ? right[p] : right[p + 1];}
        }

        double res = (left.back() < right[0]) ? left.back() : right[0];
        for(long p = 0; p + 1 < n; p++){
            double cand = left[p] > right[p + 1] ? left[p] : right[p + 1];
            res = (res < cand) ? res : cand;
        }

        if(res < 0){puts("-1");}
        else{printf("%.7lf\n", res);}
    }

    return 0;
}

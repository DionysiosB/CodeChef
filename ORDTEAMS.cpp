#include <cstdio>
#include <vector>
#include <algorithm>

struct member{long x, y, z, s;};
bool comp(member a, member b){return a.s < b.s;}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::vector<member> v(3);
        for(long p = 0; p < 3; p++){
            scanf("%ld %ld %ld", &v[p].x, &v[p].y, &v[p].z);
            v[p].s = v[p].x + v[p].y + v[p].z;
        }

        sort(v.begin(), v.end(), comp);
        bool possible(true);
        for(long p = 1; p < 3; p++){
            if(v[p - 1].x <= v[p].x && v[p - 1].y <= v[p].y && v[p - 1].z <= v[p].z && v[p - 1].s < v[p].s){continue;}
            else{possible = false; break;}
        }

        puts(possible ? "yes" : "no");
    }

    return 0;
}

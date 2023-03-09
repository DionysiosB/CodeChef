#include<cstdio>
#include<vector>
#include<algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, L; scanf("%ld %ld %ld", &n, &k, &L);
        std::vector<long> s(n); for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
        long f = s[n - 1];
        sort(s.rbegin(), s.rend());

        if(k > 0 && L > 1){
            f += k * (L - 1);
            puts(f > s[0] ? "Yes" : "No");
        }
        else{
            bool win = (f == s[0]) && (s.size() == 1 || s[0] > s[1]);
            puts(win ? "Yes" : "No");
        }

    }


}

#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t;
    while(t--){
        int n; std::cin >> n;
        bool follow(true), lastCookie(false);
        for(int p = 0; p < n; p++){
            std::string s; std::cin >> s;
            if(lastCookie && (s == "cookie")){follow = false;}
            lastCookie = (s == "cookie");
        }

        follow &= (lastCookie == 0);
        puts(follow ? "YES" : "NO");
    }

    return 0;
}

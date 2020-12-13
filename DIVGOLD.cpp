#include <iostream>
#include <algorithm>

int main(){

    int t; std::cin >> t;
    while(t--){
        int n; std::cin >> n; 
        std::string s; std::cin >> s;
        std::string t(s); std::sort(t.begin(), t.end());
        std::string w("");

        int ind(-1);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == t[p]){w += s[p];}
            else{w += t[p]; ind = p; break;}
        }

        for(int p = ind; p < s.size(); p++){
            if(ind >= 0 && s[p] == t[ind]){continue;}
            w += s[p];
        }
                
        std::cout << w << std::endl;
    }

    return 0;
}

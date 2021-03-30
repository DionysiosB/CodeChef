#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        for(long p = 0; p < s.size(); p++){
            if(p > 0 && s[p - 1] == 's' && s[p] == 'm'){s[p - 1] = 'x';}
            else if(p + 1 < s.size() && s[p] == 'm' && s[p + 1] == 's'){s[p + 1] = 'x';}
        }

        long snakes(0), mongs(0);
        for(long p = 0; p < s.size(); p++){
            snakes += (s[p] == 's');
            mongs += (s[p] == 'm');
        }

        if(snakes == mongs){std::cout << "tie" << std::endl;}
        else if(snakes > mongs){std::cout << "snakes" << std::endl;}
        else if(snakes < mongs){std::cout << "mongooses" << std::endl;}
    }


    return 0;
}

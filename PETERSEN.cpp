#include <iostream>
#include <map>

bool edge(int x, int y){
    if(x > y){int t = x; x = y; y = t;}
    if((x != y) && ((y - x) % 5 == 0)){return true;}
    if((x < 5) && (y < 5) && (y - x == 1 || y - x == 4)){return true;}
    if((x >= 5) && (y >= 5) && (y - x == 2 || y - x == 3)){return true;}
    return false;
}

int main(){

    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;

        bool possible(true);
        int node = (s[0] - 'A');
        std::string path(""); path += '0' + node;
        for(long p = 1; p < s.size(); p++){
            int num = s[p] - 'A';
            if(edge(num, node)){path += ('0' + num); node = num;}
            else if(edge(num + 5, node)){path += ('5' + num); node = num + 5;}
            else{possible = false; break;}
        }

        if(possible){std::cout << path << std::endl; continue;}

        possible = true;
        node = (s[0] - 'A') + 5;
        path = '0' + node;
        for(long p = 1; p < s.size(); p++){
            int num = s[p] - 'A';
            if(edge(num, node)){path += ('0' + num); node = num;}
            else if(edge(num + 5, node)){path += ('5' + num); node = num + 5;}
            else{possible = false; break;}
        }

        if(possible){std::cout << path << std::endl; continue;}
        else{std::cout << "-1" << std::endl;}
    }

    return 0;
}

#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    const ll MOD = 1e9 + 7;
    ll t; std::cin >> t;
    while(t--){
        ll n; std::cin >> n;
        std::vector<std::string> m(n); for(ll p = 0; p < n; p++){std::cin >> m[p];}
        bool w(1);
        for(ll row = 0; row < n; row++){
            for(ll col = 0; col < n; col++){
                if(m[row][col] == 'G'){
                    if(row > 0 && m[row - 1][col] != '.'){w = 0;}
                    if(row + 1 < n && m[row + 1][col] != '.'){w = 0;}
                    if(col > 0 && m[row][col - 1] != '.'){w = 0;}
                    if(col + 1 < n && m[row][col + 1] != '.'){w = 0;}
                }
                else if(m[row][col] == 'B'){
                    if(row > 0 && m[row - 1][col] != 'B'){w = 0;}
                    if(row + 1 < n && m[row + 1][col] != '.'){w = 0;}
                    if(col > 0 && m[row][col - 1] != '.'){w = 0;}
                    if(col + 1 < n && m[row][col + 1] != '.'){w = 0;}


                }


            }
        }

    }

    return 0;
}

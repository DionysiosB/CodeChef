#include <iostream>
 
int main(){

    int t; std::cin >> t;
    while(t--){
        std::string a, b, c, d, e, f, g;
        std::cin >> a >> b >> c >>d >> e >> f;
        puts(((a == c && a == e) ||(a == c && a == f) ||(a == d && a == e) ||(a == d && a == f) ||(b == c && b == e) ||(b == c && b == f) ||(b == d && b == e) || (b == d && b == f)) ? "YES" : "NO");
    }
 
    return 0;
}

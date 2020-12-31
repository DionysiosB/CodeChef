#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

struct post{
    bool sp;
    long pl;
    std::string st;
};

bool postCompare(post a, post b){
    if((a.sp == true) && (b.sp == false)){return true;}
    else if((a.sp == false) && (b.sp == true)){return false;}
    return (a.pl > b.pl);
}

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    std::set<long> special; while(n--){long a; std::cin >> a; special.insert(a);}
    std::vector<post> v(m);
    for(long p = 0; p < m; p++){
        long f, pop; std::string title;
        std::cin >> f >> pop >> title;
        if(special.count(f) > 0){v[p].sp = 1;}
        else{v[p].sp = 0;}
        v[p].pl = pop;
        v[p].st = title;
    }

    std::sort(v.begin(), v.end(), postCompare);
    for(long p = 0; p < v.size(); p++){std::cout << v[p].st << std::endl;}

    return 0;
}

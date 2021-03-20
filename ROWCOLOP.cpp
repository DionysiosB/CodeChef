#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, q; std::cin >> n >> q;
    std::vector<long> row(n, 0), col(n, 0);
    while(q--){
        std::string act; long w, num; std::cin >> act >> w >> num;
        if(act == "RowAdd"){row[w - 1] += num;}
        else if(act == "ColAdd"){col[w - 1] += num;}
    }

    long mr(0), mc(0);
    for(long p = 0; p < n; p++){
        mr = (mr > row[p]) ? mr : row[p];
        mc = (mc > col[p]) ? mc : col[p];
    }

    std::cout << (mr + mc) << std::endl;

    return 0;
}

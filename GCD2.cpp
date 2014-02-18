#include<cstdio>
#include<vector>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}


long findRemainder(std::vector<int> largeNum, long div){
    long rem(0);
    for(int k = 0; k < largeNum.size(); k++){rem = (10 * rem + largeNum[k]) % div;}
    return rem;
}

int main(){

    int numCases(0); scanf("%d\n", &numCases);
    while(numCases--){

        long first(0); scanf("%ld ", &first);

        std::vector<int> second; char temp; 
        while(scanf("%c", &temp)){
            if(temp == '\n'){break;}
            second.push_back(temp - '0');
        }

        if(first == 0){for(int k = 0; k < second.size(); k++){printf("%d", second[k]);}; puts("");}
        else if(first == 1){puts("1");}
        else{printf("%ld\n", gcd(first, findRemainder(second, first)));}

    }
    return 0;
}

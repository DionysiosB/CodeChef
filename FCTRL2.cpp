#include <iostream>
using namespace std;

double factorial(int n){
    if(n < 0){return 0;}
    if(n <= 1){return 1;}

    double output = 1;
    while(n >= 1){output *= (n--);}
    return output;

}


int main(int argc, char * argv[]){

    size_t N; cin >> N;

    int inputNumber = 0;
    cout.precision(200);

    for(size_t k = 0; k < N ; k++){
        cin  >> inputNumber;
        cout << factorial(inputNumber) << endl;
    }
    return 0;
}

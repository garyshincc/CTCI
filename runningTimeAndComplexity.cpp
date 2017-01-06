#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numInputs;
    cin >> numInputs;
    int number;
    bool isPrime = true;
    for (int i = 0; i < numInputs; i++){
        isPrime = true;
        cin >> number;
        if (number < 2 || (number > 2 && !(number&1))) {
            isPrime = false;
        }
        else{
            for(int j = 2; j < (int) sqrt(number) +1; j++){
                if (!(number % j)){
                    j = number;
                    isPrime = false;
                }
            }
        }
        if(isPrime){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not prime" << endl;
        }
        
    }
    return 0;
}
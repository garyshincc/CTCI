#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getFactorial(int inputnum);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int inputnum;
    
    cin >> inputnum;
    
    cout << getFactorial(inputnum);
    
    
    return 0;
}

int getFactorial(int inputnum){
    if (inputnum == 0){
        return 1;
    }
    return (inputnum * getFactorial(inputnum-1));
}



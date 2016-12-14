#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    int greatestPowerOfTwo = 0;
    
    while(n >= pow(2,greatestPowerOfTwo)){
        greatestPowerOfTwo++;
    }
    vector < int > binary(greatestPowerOfTwo);
    
    while(greatestPowerOfTwo > 0){
        greatestPowerOfTwo--;
        if ((n >= pow(2,greatestPowerOfTwo))){
            binary[greatestPowerOfTwo] = 1;
            n -= pow(2,greatestPowerOfTwo);
        }
        else{
            binary[greatestPowerOfTwo] = 0;
        }
        
    }
    
    int greatestConsecNumber = 0;
    for(int i = 0; i < binary.size(); i++){
        if(binary[i] == 1){
            int consec = 0;
            while(binary[i+consec] != 0 && consec < binary.size()-i){
                consec++;
            }
            if(greatestConsecNumber < consec){
                greatestConsecNumber = consec;
            }
        }
    }
       
    cout << greatestConsecNumber;
    return 0;
}

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
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    int numswaps;
    bool swapped;
    int temp;
    // going up i is num sorted on the bottom
    for (int i = 0; i < n; i++){
        swapped = false;
        // bubbling up from i to n-1, j starts at i
        for (int j = 0; j < n-1; j++){
            // if current is bigger than the next one
            if(a[j+1] < a[j]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                numswaps++;
                swapped = true;
            }
        }
        
        if (!swapped){
            break;
        }
    }
    
    
    
    
    cout << "Array is sorted in " << numswaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
    return 0;
}


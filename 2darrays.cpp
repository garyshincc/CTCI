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
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int totalsum = INT_MIN;
    int tempsum = 0;
    int tempi = 0;
    int tempj = 0;
    int topi = 0;
    int topj = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            // i, j will be the top left of each hourglass
            tempsum = INT_MIN;
            int hourtopsum = 0;
            for(int hourtop = 0; hourtop < 3; hourtop++){
                hourtopsum += arr[i][j+hourtop];
            }
            
            int hourmid = arr[i+1][j+1];
            
            int hourbottomsum = 0;
            for(int hourbottom = 0; hourbottom < 3; hourbottom++){
                hourbottomsum += arr[i+2][j+hourbottom];
            }
            
            tempsum = hourtopsum + hourmid + hourbottomsum;
            tempi = i;
            tempj = j;
            if(totalsum < tempsum){
                totalsum = tempsum;
                topi = tempi;
                topj = tempj;
            }
        }
    }
    cout << totalsum;
    return 0;
}

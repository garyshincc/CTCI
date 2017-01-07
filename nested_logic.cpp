#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int dayExpected, monthExpected, yearExpected, dayActual, monthActual, yearActual;
    
    cin >> dayActual >> monthActual >> yearActual >> dayExpected >> monthExpected >> yearExpected;

    if(yearActual > yearExpected){
        // years late oh boy
        cout << 10000 << endl;
    }
    else{
        // same year or earlier
        if(monthActual > monthExpected && yearExpected == yearActual){
            // months late
            cout << abs(500 * (monthActual - monthExpected)) << endl;
        }
        else {
            // same month and same year
            if(dayActual > dayExpected && yearActual == yearExpected && monthActual == monthExpected){
                // days late
                cout << abs(15 * (dayActual - dayExpected)) << endl;
            }
            else{
                // same day or earlier
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
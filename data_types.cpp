#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	
    int inputInt;
    double inputDouble;

    cin >> inputInt;
    cin >> inputDouble;
    
    cout << i + inputInt << endl;
    cout << setprecision(1) << fixed << inputDouble + d << endl;
    string inputString;
    cout << s;
    while(!cin.eof()){
        cin >> inputString;
        cout << inputString;
        if (cin.peek() != ' ' || '\n'){
            cout << " ";
        }
    }   
    cout << endl;
   return 0;
}

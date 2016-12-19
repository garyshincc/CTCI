#include <iostream>
#include <string>

using namespace std;


int main(){
    string S;
    cin >> S;
    int i;
    try {
        i = stoi(S);
        cout << i << endl;
    } 
    catch (const std::exception& e) {
        cout << "Bad String" << endl;
    }
    return 0;
}
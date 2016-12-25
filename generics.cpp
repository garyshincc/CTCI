#include <iostream>
#include <vector>

using namespace std;

template<typename Element>

void printArray(vector<Element> list) {
    for (int i = 0; i < list.size(); i++)
        cout << list[i] << endl;
}

int main() {
  
    vector<int> vInt{1, 2, 3};
    vector<string> vString{"Hello", "World"};
    
    printArray<int>(vInt);
    printArray<string>(vString);
    
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

unordered_map < string , int >::iterator it;
int main() {

	int numEntries;
	cin >> numEntries;
    unordered_map < string, int > namenumpairs;
    string name;
    int num;
	for (int i = 0; i < numEntries; i++){
		cin >> name >> num;
        namenumpairs.insert( pair < string, int > (name,num));
	}
	string searchName;
	while (!cin.eof()){

		cin >> searchName;
		it = namenumpairs.find(searchName);
		if(it == namenumpairs.end()){
			cout << "Not found" << endl;
		}
		else{
			cout << searchName << "=" << it->second << endl;
		}
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;

int main(){
	string inputLine;
	getline(cin, inputLine);
	stringstream ss(inputLine);
	string outputstring = "";
	string temp;
	while(ss >> temp){
		if(ss.peek() != EOF){
			outputstring += temp + "\%20";
		}
		else{
			outputstring += temp;
		}
	}
	cout << outputstring << endl;
	return 0;
}
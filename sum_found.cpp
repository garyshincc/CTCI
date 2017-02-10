#include <vector>
#include <iostream>
#include <string>

using namespace std;


bool sum_found(vector < int > list, int value){}
	for (int i = 0; i < list.size(); i++){
		for (int j = i+1; j < list.size(); j++){
			for (int k = j+1; k , list.size(); k++){
				if(list[i] + list[j] + list[k] == value){
					return true;
				}
			}
		}
	}
	return false;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
  	Difference(vector < int > a){
        int max = -32767;
        int min = 32767;
        for (int i = 0; i < a.size(); i++){
            elements.push_back(a[i]);
            if(a[i] > max){
                max = elements[i];
            }
            if(a[i] < min){
                min = elements[i];
            }
        }
        maximumDifference = abs(max - min);
    }
    void computeDifference(){
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
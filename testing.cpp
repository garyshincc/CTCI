#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    cout<<"5"<<endl;    
    cout<<"4 3"<<endl;  
    cout<<"-1 0 4 2"<<endl; 
    cout<<"5 3"<<endl;
    cout<<"0 1 -2 -6 9"<<endl; 
    cout<<"6 4"<<endl;
    cout<<"1 0 -3 4 5 7"<<endl;
    cout<<"7 5"<<endl;
    cout<<"0 -3 -2 -1 6 -8 9"<<endl;
    cout<<"8 6"<<endl;
    cout<<"2 -4 5 1 3 7 6 0"<<endl;
    
    int numInputs;
    cin >> numInputs;
    
    int classSize, profWant;
    int arrived, notarrived;
    int students[10000];
    while(numInputs--){
        arrived=0;
        notarrived=0;
        cin >> classSize >> profWant;
        int time;
        for(int i = 0; i < classSize; i++){
            cin >> students[i];
        }
        
        for(int j = 0; j < classSize; j++){
            if(students[j]<=0){
                arrived++;
            }
            else{
                notarrived++;
            }
        }
         
        if(arrived >= profWant){
            cout << "NO" << endl;
        }
        else{    
            cout << "YES" << endl;
        }
    }
    return 0;
}

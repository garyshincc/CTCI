
#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map <string, int>::iterator it;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    // variable declaration of unordered map
    unordered_map <string, int> map;
    for(int i = 0; i < magazine.size(); i++){
        it = map.find(magazine[i]);
        if(it == map.end()){
            map.insert(pair <string,int>(magazine[i],1));
        }
        else{
            map[magazine[i]]++;
        }
    }
    for(int i = 0; i < ransom.size(); i++){
        it = map.find(ransom[i]);
        if(it == map.end()){
            return false;
        }
        else if(it->second == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }

    vector < int > numwords (m);
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

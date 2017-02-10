#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
}; 

vector<Player> comparator(vector<Player> players) {
    // sort in terms of points,
    // if points are tied, then sort in terms of name alphabet
    bool swapped = false;
    vector < Player > answer(players.size());
    Player temp;
    for (int i = 0; i < players.size(); i++){
        swapped = false;
        for (int j = 0; j < players.size() - 1; j++){
            // if greater
            if (players[j+1].score > players[j].score){
                temp = players[j+1];
                players[j+1] = players[j];
                players[j] = temp;
                swapped = true;
            }
            // if tied
            if (players[j+1].score == players[j].score){
                if(players[j+1].name < players[j].name){
                    temp = players[j+1];
                    players[j+1] = players[j];
                    players[j] = temp;
                    swapped = true;
                }
            }
            
            
        }
        if(!swapped){
            return players;
        }
    }
    return players;
}

int main() {
    
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    
    vector< Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}
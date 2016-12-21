#include <iostream>
#include <vector>
using namespace std;

class Solution {
    //Write your code here
    private:
        vector < char > queue;
        vector < char > stack;
    public:
        void pushCharacter(char pushChar){
            stack.push_back(pushChar);
        }
        void enqueueCharacter(char queueChar){
            queue.insert(queue.end(), queueChar);
        }
        char popCharacter(){
            char myChar = stack[stack.size()-1];
            stack.pop_back();
            return myChar;
        }
        char dequeueCharacter(){
            char myChar = queue[0];
            queue.erase(queue.begin());
            return myChar;
        }
};
int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
    // create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
#include <iostream>
#include<stack>  //HERE TRICK IS TO USE STACK AND QUEUE LIBRARIES
#include<queue>

using namespace std;

class Solution
{
    private:
    queue<char> q;
    stack<char> s;

    public:
    char popCharacter()
    {
        char a = s.top();
        s.pop();
        return a;
    }

    void pushCharacter(char ch)
    {  s.push(ch);  }

    char dequeueCharacter()
    {
        char a = q.front();
        q.pop();
        return a;
    }

    void enqueueCharacter(char ch)
    {  q.push(ch);  }

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

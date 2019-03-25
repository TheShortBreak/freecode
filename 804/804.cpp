#include <iostream>
#include <vector>
#include <set>

using namespace std;

int uniqueMorseRepresentations(vector<string>& words) {
   set<string> m;   
   const char* mos[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
   for (string& word : words)
   {
       string s;
       for (char& c : word)
       {
          s.append(mos[c- 'a']);
       }
       m.insert(s);
   }
   return m.size();
}

int main()
{
    vector<string> words = {"gin", "zen", "gig", "msg"};
    cout << uniqueMorseRepresentations(words) << endl;
}

#include <string>
#include <iostream>
using namespace std;

string toLowerCase(string str) {
   for (auto& c : str)        
   {
      if (c >= 'A' && c <= 'Z') 
          c = c - ('A' - 'a');
   }
return str;
}
int main()
{
   cout << toLowerCase("Hello") << endl;
   cout << toLowerCase("here") << endl;
   cout << toLowerCase("LOWCASE") << endl;
}

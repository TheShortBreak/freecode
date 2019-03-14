#include <stdio.h>
#include <string>
#include <set>

using namespace std;

int numJewelsInStones(string J, string S) {
  int num = 0;
  for (char c : S)
  {	
     for (char d : J) 
     {
	if (c == d)
	{
            num++;
	    break;
	}
     }
  } 
  return num;
}

int main()
{
   printf("%d\n", numJewelsInStones("aA", "aAAbcd"));
   printf("%d\n", numJewelsInStones("z", "ZZ"));
}

// 4 ms	9.8 MB


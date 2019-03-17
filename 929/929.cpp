#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;
int numUniqueEmails(vector<string>& emails) {
    set<string> ans; 
    for (string& str : emails)
    {
        string tmp = "";
        for (char& c : str)
        {
           if (c == '+')
           {
              break;
           }

           if (c == '.')
           {
              continue;
           }
           tmp += c;
        }
        size_t pos = str.find('@');
        if (pos == std::string::npos)
            continue;
        tmp += str.substr(pos);
        
        ans.insert(tmp);
    }
    return ans.size();
}

int main()
{
   //vector<string> emails = {"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
   vector<string> emails = {""};
   printf("size %zd", numUniqueEmails(emails)); 
}

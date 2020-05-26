#include<string>
#include<map>
using namespace std;
bool scramble(const std::string& s1, const std::string& s2){
map<char, int> hash1;
map<char, int> hash2;
for(int i=0;i<s1.length();i++)
{
  hash1[s1[i]]++;
}
for(int i=0;i<s2.length();i++)
{
  hash2[s2[i]]++;
}
for(auto i:hash2)
    {
      if(i.second>hash1[i.first])
      return false;
     }
     return true;
}

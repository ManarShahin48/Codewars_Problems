#include<vector>
#include<map>
using namespace std;
std::vector<int> deleteNth(std::vector<int> arr, int n)
{
  map<int, int> hash;
  vector<int> newarr;
   for(int i = 0;i < arr.size(); i++)
    {
       hash[arr[i]]++;
       if (hash[arr[i]] <= n)
            newarr.push_back(arr[i]); 
    }
   
    
 return newarr;
}

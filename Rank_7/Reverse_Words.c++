#include <string>
using namespace std;
std::string reverse_words(std::string str)
{

    auto i=str.begin();
    auto j=str.end();
    while(i<j)
    {
        auto k=find(i , j,' ');
        reverse(i,k); 
        i=k+1;
     }
     return str;
        
}

#include <iomanip>
using namespace std;
std::string seriesSum(int n)
{
if(n==0)
return"0.00";
  double i, sum = 0.0; 
    for (i = 0; i <n; i++) 
    sum+=1/(1+i*3) ;
    stringstream suum;
    suum << fixed << setprecision(2)<< sum;
    return suum.str();
  
}

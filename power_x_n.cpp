#include <vector>
#include <string>
#include <map>

using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        double INF = std::numeric_limits<double>::infinity();
        if(n==0 || x==1){
          return 1;
        }else
        if(x==0){
          return 0;
        }
        else if(x==-1){
            if(n%2==0)
                return 1;
            else
                return -1;
        }
        else{
          if(x>0){
          if((n==INT_MAX && x>1)){
            return INF;
          }
          if((n==INT_MAX && (x<1 && x>0))){
            return 0;
          }
          if((n==INT_MIN && x>0 && x<1)){
            return INF;
          }
          if((n==INT_MIN && x>1)){
            return 0;
          }
          }else{
            double x1=std::abs(x);
            if((n==INT_MAX && x1>1)){
            return -1*INF;
          }
          if((n==INT_MAX && (x1<1 && x1>0))){
            return 0;
          }
          if((n==INT_MIN && x1>0 && x1<1)){
            return -1*INF;
          }
          if((n==INT_MIN && x1>1)){
            return 0;
          }
          }
          if(n>0)
            return x*myPow(x, n-1);
          else
            return myPow(x,n+1)/x;
        }
    }
};
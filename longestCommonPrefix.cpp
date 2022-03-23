#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int min_length=INT_MAX;
        map<int, string> a;
        for(int i=0; i<strs.size();i++){
           int strl = strs[i].size();
            if(strl<min_length){
                min_length=strl;
            }
            a[strl]= strs[i];
        }
        string cmps(a[min_length]);
        
        while(cmps!=""){
        int count = 0;
            for(string i:strs){
                if(cmps.compare(i.substr(0,cmps.size()))==0)
                {
                    count++;
                }
                else
                {
                    cmps=(cmps.substr(0,cmps.size()-1));
                    break;
                }
            }
            if(count==strs.size())
                return cmps;
        }
        return "";
        //return a[min_length];
    }
};
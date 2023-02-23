#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int,int>& b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int, int> freq;
        std::vector<std::pair<int,int>> valueMap;
        map<int, int>::iterator it;
        for(int i:nums){
            it = freq.find(i);
            if(it!=freq.end()){
                freq[i] = it->second + 1;
            }
            else{
                freq.insert(std::pair<int, int>(i,1));
            }
        }

        for(it = freq.begin();it!=freq.end();it++){
             valueMap.push_back(std::pair<int, int>(it->first, it->second));
        }
        sort(valueMap.begin(), valueMap.end(), cmp);
        vector<int> res;
        for(int i = 0; i<k; i++){
            res.push_back(valueMap[i].first);
        }
    return res;
    }
};
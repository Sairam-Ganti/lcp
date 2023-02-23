#include <vector>
#include <string>
#include <map>

using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        std::istringstream ss(s);
        int len = 0;
        vector<std::string> tokens;
        std::string i;
        while (std::getline(ss, i, ' ')) {
        if(!i.empty()){
            tokens.push_back(i);
        }
        }
        len = tokens[tokens.size()-1].length();
        return len;
    }
};
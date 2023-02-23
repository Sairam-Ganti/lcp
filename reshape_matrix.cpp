#include <vector>
#include <string>
#include <map>

using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      if(r*c != mat.size()*mat[0].size()){
          return mat;
          }
      vector<int> elems;
      vector<vector<int>> res;
      for(vector<int> i:mat){
        for(int k:i){
        elems.push_back(k);
        //insert(elems.end(),i.begin(), i.end());
      }
      }
      for(int i=0;i<r;i++){
        vector<int> col;
        for(int j=0;j<c;j++){
            col.push_back(elems[i*c+j]);
        }
        res.push_back(col);
      }  
    return res;
    }
};
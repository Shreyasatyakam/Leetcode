class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mpp;
        vector<int> result;
        for(int i=0;i<arr.size();i++){
            int x=target-arr[i];
            if(mpp.find(x)!=mpp.end()){
                result.push_back(mpp[target-arr[i]]);
                result.push_back(i);
                return result;

            }
            mpp[arr[i]]=i;

        }
        return result;
       
    }  
};

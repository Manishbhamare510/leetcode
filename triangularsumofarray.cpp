class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        while(n--){
            for(int i=0;i<nums.size()-1;i++){
                int z=nums[i]+nums[i+1];
                if(z>=10){
                    nums[i]=z%10;
                }else{
                    nums[i]=z;
                }
            }
            nums.pop_back();
        }
        return nums[0];
    }
};

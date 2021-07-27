#MAXIMIZE SUM OF ARRAY AFTER K NEGATIONS
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int ans;
        //initial sum of nums
        int sum = accumulate(nums.begin(),nums.end(),0);
        //sort the vector
        sort(nums.begin(),nums.end());
        //applying k negations
        int count_k=0;
            for(int i=0;i<k;i++){
                if(nums[i]>=0){
                    break;
                }
                else{
                    nums[i] = 0 - nums[i];
                    count_k++;
                }
            }
        //sort again
        sort(nums.begin(),nums.end());
        //repeat
        if(count_k<k){
            if((k-count_k)%2){
                nums[0] = 0 - nums[0];
            }
        }
        ans = accumulate(nums.begin(),nums.end(),0);
        return ans;
    }
};
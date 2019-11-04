class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //allocate memory block for dp, store continous local max sum
        int arraySize = nums.size();
        int* maxSumArray = new int[arraySize];
        int maxItem=0;
        
        //find continuous local max
        for(int i=0; i<arraySize; i++){
            //initialize base case
            if(i==0) {
                maxSumArray[i]=nums[i];
                maxItem=nums[i];
            }
            else{
                //key building iteration step
                maxSumArray[i]=max(nums[i], maxSumArray[i-1]+nums[i]);
            }
        }
        
        //find max
        for(int i=0; i<arraySize; i++){
            if(maxSumArray[i]>maxItem) maxItem=maxSumArray[i];
        }
        return maxItem;
    }
};

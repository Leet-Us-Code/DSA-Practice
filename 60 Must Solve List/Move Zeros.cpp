// Hari

void moveZeroes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int pos = 0;
        int N = nums.size();
        for(int i = 0; i<N; i++){
            if(nums[i] != 0){
                nums[pos++] = nums[i];
            }
            else continue; // pos adds to index only non zero vals
        }
        
        while(pos < N){
            // add only 0s to fill the arr
            nums[pos++] = 0;
        }
    }

// Sid 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        for(; j < nums.size(); j++)
            nums[j] = 0;
    }
};

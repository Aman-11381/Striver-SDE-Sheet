// Problem Link
// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    void sortColors(vector<int>& nums) {
        int x=0, y=nums.size()-1;
        int i=0;
        
        while(i<=y) {
            if(nums[i]==1) i++;
            else if(nums[i]==2) {
                swap(nums[i], nums[y--]);
            }
            else {
                swap(nums[i], nums[x]);
                if(i==x) i++;
                x++;
            }
        }
    }
};
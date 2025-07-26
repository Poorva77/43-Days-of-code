//Day 1 of 43 days of code - #teachersDayChallenge
//Leetcode Problem #1295- Find numbers with even number of digits
//Approach: used floor division to count digits, then checked if digit count is even

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i=0; i<nums.size(); i++) {
            int num= nums[i];
            int digits=0;

            while(num>0) {
                num= num/10;
                digits++;
            }

            if(digits%2 ==0){
                count++;
            }
        }
        return count;
    }
};

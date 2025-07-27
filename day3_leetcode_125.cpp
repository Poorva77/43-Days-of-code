//Valid Palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            // Move left pointer 
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // Move right pointer 
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            // Compare lowercase versions of characters
            char leftChar = tolower(s[left]);
            char rightChar = tolower(s[right]);

            if (leftChar != rightChar) {
                return false; 
            }
            // Move both pointers inward
            left++;
            right--;
        }
        return true; 
    }
};

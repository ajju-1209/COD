/*744. Find Smallest Letter Greater Than Target(https://leetcode.com/problems/find-smallest-letter-greater-than-target/)*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=letters[0];
        for(auto i:letters)
        {
            if(i>target)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};

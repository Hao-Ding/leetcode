/* Given an array of integers, find two numbers such that they add up to a specific target number.
 *
 * The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
 *
 * You may assume that each input would have exactly one solution.
 *
 * Input: numbers={2, 7, 11, 15}, target=9
 * Output: index1=1, index2=2
 */

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i, j;
        vector<int> res;
        //res.reserve(2);
        for (i = 0; i < numbers.size() - 1; i++) {
            if (numbers.at(i) > target) {
                continue;
            }
            for (j = i + 1; j < numbers.size(); j++) {
                if (numbers.at(i) + numbers.at(j) == target) {
                    //res.at(0) = i + 1;
                    //res.at(1) = j + 1;
                    res.push_back(i + 1);
                    res.push_back(j + 1);
                    return res;
                }
            }
        }
        return res;
    }
};

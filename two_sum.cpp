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

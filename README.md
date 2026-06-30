class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            int complement = target - num;

            auto it = map.find(complement);

            if(it != map.end()) {
                return {it->second, i};
            }

            map[num] = i;
        }

        return {};
    }
};

<!---LeetCode Topics Start-->
# LeetCode Topics
## Linked List
|  |
| ------- |
| [0876-middle-of-the-linked-list](https://github.com/gargi2007maheshwari-png/Summer_Assignment_2401921530102/tree/master/0876-middle-of-the-linked-list) |
## Two Pointers
|  |
| ------- |
| [0876-middle-of-the-linked-list](https://github.com/gargi2007maheshwari-png/Summer_Assignment_2401921530102/tree/master/0876-middle-of-the-linked-list) |
## String
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/gargi2007maheshwari-png/Summer_Assignment_2401921530102/tree/master/0020-valid-parentheses) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/gargi2007maheshwari-png/Summer_Assignment_2401921530102/tree/master/0020-valid-parentheses) |
| [0155-min-stack](https://github.com/gargi2007maheshwari-png/Summer_Assignment_2401921530102/tree/master/0155-min-stack) |
## Design
|  |
| ------- |
| [0155-min-stack](https://github.com/gargi2007maheshwari-png/Summer_Assignment_2401921530102/tree/master/0155-min-stack) |
<!---LeetCode Topics End-->
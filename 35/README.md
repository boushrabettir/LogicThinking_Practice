# Search Insert Position

```C++
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        for(int i=0; i<nums.size(); i++) {
            if(target==nums[i] || target<nums[i]) {
                index = i;
                break;
           }
        }
        return index;
    }
};

```

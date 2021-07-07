class Solution {
public:
    // first occurance of element. Time: O(log n), Space: O(1)
    int firstOccurance(vector<int> nums, int target)
    {
        // normal binary search
        int low = 0, high = nums.size() - 1;

        // logic:
        while (low <= high)
        {
            // compute mid
            int mid = (low + high) / 2;

            //move left
            if (nums[mid] > target)
                high = mid - 1;

            // move right
            else if (nums[mid] < target)
                low = mid + 1;

            // extra case to handle equal targets
            else
            {
                // ensure whether mid is first occurance
                if (mid == 0 || nums[mid - 1] != nums[mid])
                    return mid;

                // if not go to left half
                else
                    high = mid - 1;
            }
        }

        // if not found
        return -1;
    }

    // last occurance of element. Time: O(log n), Space: O(1)
    int lastOccurance(vector<int> nums, int target)
    {
        // normal binary search
        int low = 0, high = nums.size() - 1;

        // logic:
        while (low <= high)
        {
            // compute mid
            int mid = (low + high) / 2;

            // move right
            if (target > nums[mid])
                low = mid + 1;

            // move left
            else if (target < nums[mid])
                high = mid - 1;

            // extra case to handle equal targets
            else
            {
                // ensure if mid is last occurance
                if (mid == nums.size() - 1 || nums[mid + 1] != nums[mid])
                    return mid;

                // otherwise go to right half
                else
                    low = mid + 1;
            }
        }

        // if not found
        return -1;
    }
    
    // find range of element
    vector<int> searchRange(vector<int>& nums, int target) {
        
        // first occurance
        int first = firstOccurance(nums, target);
        
        // if element doesn't exist
        if(first == -1)
            return {-1,-1};
        
        // last occurance
        int last = lastOccurance(nums, target);
        
        // return answer
        return {first, last};
    }
};

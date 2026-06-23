https://www.geeksforgeeks.org/problems/reverse-an-array/1

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size()-1;
        
        while (i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};



https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        
        for(int i = 0; i < arr.size() - 1; i++) {
            
            if(arr[i] > arr[i + 1]) {
                return false;
            }
        }
        
        return true;
    }
};



https://leetcode.com/problems/running-sum-of-1d-array/submissions/2042986365/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         for(int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i - 1];
        }

        return nums;
    }
};
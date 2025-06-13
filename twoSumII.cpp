class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p1=0;
        int p2=nums.size()-1;
        while(nums[p1]+nums[p2]!=target){
            if(nums[p1]+nums[p2]>target)
                p2--;
            else 
                p1++;
        }
        return {p1+1,p2+1};
    }
};

/*
How would I come up with this during an interview?
In an interview, whenever you're given a question where the input array is sorted, here are some super useful things to consider:

Binary Search
Two (or three) pointers
A sliding window
Traversing from the right
Make sure to write down a couple examples and try experimenting with these approaches.
 Even understanding that these approaches may aid in finding an answer with a sorted array, 
 you're showing your interviewer that you have a good understanding of the array datastructure.
  Be mindful of negative values and duplicates as you're experimenting!


*/
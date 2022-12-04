#include <iostream>
#include <vector>
#include <map>


class Solution
{
	public:
   	 	std::vector<int> twoSum(std::vector<int>& nums, int target) 
		{
   	    	std::map<int, int> myMap;
   	    	std::vector<int> result;
   	    	for(int i = 0; i < nums.size(); i++)
			{
   	    		if (myMap.find(nums[i]) == myMap.end()) 
				{
   	            	 myMap[target - nums[i]] = i;
   	        	} else {
   	            	result.push_back(myMap[nums[i]]);
   	            	result.push_back(i);
   	            	break;
				}
   	    	}
   	     return result;
   	    }
};

int main()
{
	std::string res;
	std::vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;
	std::vector<int> result = {};
	Solution myObj;
	for ( int i = 0; i < 1; i++ )
   		result = myObj.twoSum(nums, target);
	for (auto i : result)
		std::cout << result[i] << " ";
	return 0;
}

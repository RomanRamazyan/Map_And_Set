#include <iostream>
#include <vector>

class Solution {
	public:
   		int thirdMax(std::vector<int>& nums) 
   		{
   	    	int first = 0;
   	    	int second = 0;
   	    	int third = 0;
   	    	for(int i = 0; i < nums.size(); i++) 
   	 		{
   	        	if(nums[i] <= third or nums[i] == first or nums[i] == second)
   	 			{
   	            	continue;
   	         	}
   	         	if(nums[i] > first) 
   	 			{
   	            	third = second;
   	            	second = first;
   	            	first = nums[i];
   	         	}
   	         	else if(nums[i] > second) 
   	 			{
   	            	third = second;
   	            	second = nums[i];
   	         	}
   	         	else {
   	            	third = nums[i];
   	         	}
   	     	}
   	 		std::cout << "The first distinct maximum is: " << first << std::endl;
   	 		std::cout << "The second distinct maximum is: " << second << std::endl;
   	     	std::cout << "The third distinct maximum is: " << third << std::endl;
   	 		return 0;
   	 	}
};


int main()
{
	
	std::vector<int> nums = { 1, 2 };
	Solution myObj;
	myObj.thirdMax(nums);
	return 0;
}

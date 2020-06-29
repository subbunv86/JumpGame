// JumpGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
	class Solution {
	public:
		bool canJump(vector<int>& nums)
		{
			int nSize = nums.size();
			if (nSize == 1)
				return true;
			if (nSize > 1)
			{
				int nPos=0;
				int i = 0;
				while  (i <= nSize-1)
				{
					nPos =max(nPos,i + nums[i]);
					if (nPos >= nSize - 1)
						return true;
					if ((nums[i] == 0) && (i >= nPos))
						return false;
					i++;
				}
				
			}
			return false;
		}
	};
	int main()
	{
		vector<int> nums = {3, 0, 8, 2, 0, 0, 1};
	Solution slnObj;
    std::cout << slnObj.canJump(nums);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
int main()
{
	int *pArr = new int[10]{3,5,1,11,99,66,22,2,8,6};
	for(int i = 0; i < 10; i++)
	{
		if(i == 0 || i == 5)
		{
			continue;
		}
		std::cout << "新数组:" << pArr[i] << std::endl;
	}
	delete[] pArr;
	pArr = nullptr;
	return 0;
}

#include <iostream>
int main()
{
	int a[3][5]
	{
	{11,22,56,34,21,},
	{33,21,24,52,1,},
	{2,4,55,21,13}
	};
	for(int i = 0; i < 3; i++)
	{
		for(int s = 0; s < 5; s++)
		{
			std::cout << a[i][s] << " ";
		}
		std::cout << std::endl;
	}
	
	return 0;
}

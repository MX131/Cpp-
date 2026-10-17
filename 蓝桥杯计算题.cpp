#include <iostream>
int main()
{
	int n,A,ren;
	std::cin >> n >> A;
	ren = (n/A);
	std::cout << "答：每列为" << ren << "人。" << std::endl;
	
	if(n % A !=0)
	{
		std::cout << "剩余人数：" << (n % A) << std::endl;	
	}	
	
	return 0;
}

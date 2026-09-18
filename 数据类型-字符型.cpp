#include <iostream>
#include <windows.h>
int main()
{
    char ASCll= 'c';
//原厂示范（是/否正常运行打印）	
	std::cout << ASCll << std::endl;
//第一种转换
	std::cout << ASCll+1 << std::endl;
//第二种强制转换
	std::cout << static_cast<int>(ASCll) << std::endl;
//数字转换
	std::cout << static_cast<char>(66) << std::endl;
	Sleep(2333);
	std::cout << "听个响：" << "\a";
	Sleep(2000);
	std::cout << "\a";
	
	
	
	
	
	return 0;
}

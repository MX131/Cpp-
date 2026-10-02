#include <iostream>
int main()
{
	// ! '非' 取反
	bool cout1 = !(114514 >= 1991);
	bool cout2 = !(718 >= 911);
	std::cout << cout1 << std::endl;
	std::cout << cout2 << std::endl;
	
	// && '与' 当有一个 假，全为假
	bool cout3 = 1==1 && 2==2;
	bool cout4 = 1==1 && 2==9;
	std::cout << cout3 << std::endl;
	std::cout << cout4 << std::endl;
	
	// || '或' 当有一个 真，即全真
	bool cout5 = !(1!=1) || !(6!=9);
	bool cout6 = 3>=9 || 2>9;
	std::cout << cout5 << std::endl;
	std::cout << cout6 << std::endl;
	
	return 0;
}

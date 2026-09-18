#include <iostream>
using std::cout;
using std::endl;
int main()
{
	//转义字符\n（换行）
	cout << "你M的 \n 不看后视镜啊" << endl;
	cout << "*******************" << endl;
	//转义字符\t（制表符）
	cout << "方程式类型\t现代原型车类型\tGT类型" << endl;
	cout << "红牛RB23\t法拉利499p\t法拉利296 GT3 evo" << endl;
	cout << "*******************" << endl;
	//转义字符\\与\'与\" （\'在C＋＋代码中直接写'是可以的，但是在别的IDE和其他语言编程中部分是不可行的）
	cout << "\\     \'     \"  " << endl;
	cout << "*******************" << endl;
	cout << "\a\a";
	
	
	
	return 0;
}

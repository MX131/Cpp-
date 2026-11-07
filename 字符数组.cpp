#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main()
{
	char a[5]{'a','b','c','d','\0'}; //反杠0 看我怎么用，一个一个打印就不加了，整体就 要
	char b[]{"no2"}; //中文一个占用太多了，char底层只占1字节，我不敢塞 太多 
	std::string c[]{"浮木","打火机"};
	cout << b << endl;
	cout << a << endl;
	for(std::string QQ : c)
	{
		cout << QQ;
	}
	return 0;
	// 他们说是C风格 
}

#include <iostream>
#include <string>
int main()
{
	bool yes = true; // 也可以是1
	bool no = false; // 也可以是0
	double a1 = 156.7891; 
	std::string name = "wenze xu";
	
	std::string bools = "我叫" + name + "，预计下次身高" + std::to_string(a1) + "cm，\n我今天认识了布尔的true（真）和false（假），分别的数字是" + std::to_string(yes) + "和" + std::to_string(no);
	std::cout << bools << std::endl;
	
	return 0;
}

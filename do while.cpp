#include <iostream>
#include <ctime> // 提供rand
#include <cstdlib> // 提供srand time 
int main()
{	
	srand(time(0)); //设置随机种子
	int random_baby = rand() % (2300 - 1 + 1) + 1; //生成一个随机2300~1的马力
	int hp;
	
	do
	{
		std::cout << "请输入你猜一下某一款赛车的马力值 (提示:2300间):";
		std::cin >> hp; 
		std::cout << "hp";
		
		if(hp < random_baby)
		{
			std::cout << "小了" << std::endl;
		}
		else if(hp > random_baby)
		{
			std::cout << "大了" << std::endl;
		}
	}while(hp != random_baby);
	std::cout << "对了" << std::endl;

	return 0;
}

#include <iostream>
#include <string>
int main()
{
	std::string Signed_driver;
	std::cout << "车手：“老板，就是能不能下个赛季多给点每场比赛的工资\n反正我这合同2年也快到期了” " << std::endl;
	std::cout << "请输入 可以的 或 不可以 :";
	std::cin >> Signed_driver;
	
	if(Signed_driver == "可以的")
	{
		std::cout << "太好了，下赛季我和队友绝对会尽量争取到冠军!"; 
	}
		else if(Signed_driver == "不可以")
	{
			std::cout << "那好吧，下赛季去梅赛德斯AMG哪里，正好他们邀请我 （提示:恭喜你损失了一位最强车手）" << std::endl;
	}
	
	return 0;
}

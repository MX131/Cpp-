#include <iostream>
int main()
{
	enum Rally_car
{
	Lynk_CO_07_GT =31,
	Hyundai_i20 =1,
	Ford_Fiesta	=43
};
	int cars;
	std::cout << "你最喜欢那个拉力赛车，不管是world Rally还是china Rally (31号车为领克，1号车为现代，43号车为福特) ";
	std::cin >> cars;
	
	switch(cars)
	{
	case Lynk_CO_07_GT:
		std::cout << "你居然爱领克07 GT Rally_car" << std::endl;
		break;
	case Hyundai_i20:
		std::cout << "你居然爱现代i20 Rally_car" << std::endl;
		break;
	case Ford_Fiesta:
		std::cout << "你居然爱福特嘉年华 Rally_car" << std::endl;
		break;
		
	default:
		std::cout << "未搜寻此车辆，错误！";
	}
	
	return 0;	
}

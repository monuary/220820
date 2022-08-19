//cpp는 디폴트 설정이 가능하다. int Func(int num=7)로 선언했을 경우, 뒤에서 Func()로 void로 뒀을 때 안에 int num=7이 전달된 것으로 간주된다.

#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main()
{
	std::cout << Adder() << std::endl;//디폴트 값이 적용된 예
	std::cout << Adder(5) << std::endl;//Adder(int num)이 적용되지 않는 한, Adder(5)는 num1=5로 한 Adder()의 디폴트 값으로 적용된다.
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}
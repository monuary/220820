//cpp�� ����Ʈ ������ �����ϴ�. int Func(int num=7)�� �������� ���, �ڿ��� Func()�� void�� ���� �� �ȿ� int num=7�� ���޵� ������ ���ֵȴ�.

#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main()
{
	std::cout << Adder() << std::endl;//����Ʈ ���� ����� ��
	std::cout << Adder(5) << std::endl;//Adder(int num)�� ������� �ʴ� ��, Adder(5)�� num1=5�� �� Adder()�� ����Ʈ ������ ����ȴ�.
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}
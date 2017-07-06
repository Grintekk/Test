#include <iostream>
using namespace std;

class Test
{
public:
	void printA()
	{
		cout << a << endl;
	}
	void setA(int a)
	{
		this->a = a;
	}
private:
	int a;
};

int main(int argc, char* argv[])
{
	Test test;
	test.setA(5);
	test.print();
	system("pause");
	return 0;
}
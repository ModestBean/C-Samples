#include <iostream>
using namespace std;
class Object
{
public :
	Object() {};
	
	Object(const Object& other) {
		cout << "�������캯��" << endl;
	}
	 Object const& operator=(const Object& other)
	{
		cout << "��ֵ����" << endl;
		return *this;
	}
};
int main()
{
	Object a;
	Object b;
	Object c;
	a = b = c;
	std::cin.get();
}
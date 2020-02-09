#include <iostream>
using namespace std;

class Rect
{
public:
	Rect(int inWidth, int inHeight) :width(inWidth), height(inHeight) {};
	int getSquare() const 
	{
		//width = 2; �޷����룬��ͼ�޸ĳ�Ա����
		return width * height;
	}
private:
	int width, height;
};

int main()
{
	Rect r(3, 4);
	int square = r.getSquare();
	cout << square <<  endl;
	cin.get();
	return 0;
}
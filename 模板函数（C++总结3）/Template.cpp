#include <iostream>
template <class T>
T add(T a, T b) {//��������ģ��
	return a + b;
}
int main() {
	int i1 = add(1, 2);
	float f2 = add(3.3f, 4.2f);
	std::cout << i1 << "||" << f2 << std::endl;
	std::cin.get();
	/*���н�� 3||7.5*/
}

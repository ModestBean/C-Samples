#include <iostream>
using namespace std;
class Object {
};
void pointer_print(const char* const src) {
	//src[0] = 'a'; const��char*֮ǰ���޷��޸�ָ��ָ����ڴ浥Ԫ����

	//char s[] = "AABBCC";
	//src = s;      const��char*֮���޷��޸�ָ���ָ��

	//ǰ���У������ۺ�

	cout << src << endl;
}
void object_reference(const Object& in) {
	Object b;
	//in = b; ����
}
//int main()
//{
//	//���ַ�����ֵ���ַ�����
//	char s[] = "Hello";
//	pointer_print(s);
//	//���󴫵�
//	Object a;
//	object_reference(a);
//
//	cin.get();
//	return 0;
//}
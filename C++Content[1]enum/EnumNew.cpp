#include <stdio.h>
//����ö������
enum  Week { Monday, Tuesday, Wednesday };
class Person {
public:
	Person(Week inArriveDate) {
		this->arriveDate = inArriveDate;
	}
	Week arriveDate;
};
//int main() {
//	Person p(Monday);
//	return 0;
//}
#include<iostream>
using namespace std;
enum  GameResult {//����ö������
	WIN, LOSE, CANEL
};
int main() {
	GameResult result;
	for (int i = WIN; i <= CANEL; i++) {
		result = GameResult(i);//ǿ������ת��
		if (result == WIN) {
			cout << "WIN";
		}
		if (result == LOSE) {
			cout << "LOSE";
		}
		if (result == CANEL) {
			cout << "CANEL";
		}
	}
	cout << endl;
	return 0;
}
#include<iostream>
using namespace std;
/*
�ʼǣ�
	1�����ܹ��������ط����и�ֵ��ֻ���ڳ�ʼ��ʱ��ֵ
	2��ö��Ԫ�ؾ���Ĭ��ֵ��Ĭ�������Ϊ0��1��2.......
	3��enum  GameResult{WIN=2,LOSE=1,CANEL};�Դ����������Ĭ��ֵ
	4������ֵ���ܹ�ֱ�Ӹ�ֵ��ö�ٱ��������Խ���ǿ������ת��

*/
enum  GameResult{//����ö������
	WIN,LOSE,CANEL
};
int main() {
	GameResult result;
	for (int i = WIN; i <= CANEL; i++) {
		result = GameResult(i);//ǿ������ת��
		if (result == WIN) {
			cout << "WIN";
		}
		if (result == LOSE) {
			cout << "LOSE" ;
		}
		if (result == CANEL) {
			cout << "CANEL";
		}
	}
	cout <<  endl;
	return 0;
}

#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	char data[100] = { '1', '2', '3' };
	// ��дģʽ���ļ�
	ofstream outfile;
	outfile.open("afile.txt");
	// ���ļ�д���û����������
	outfile << data << endl;
	// �رմ򿪵��ļ�
	outfile.close();
}
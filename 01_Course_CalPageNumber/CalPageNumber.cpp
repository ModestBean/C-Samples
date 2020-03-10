// @author ������ YinDou https://github.com/douysu
//
// �㷨�γ���ҵ��һ����
// ����ͳ�����⣺һ�����ҳ�����δ�1��ʼֱ��n�������ȫ��ҳ���зֱ�
// �õ����ٴ�����0,1,2,3,4,5,6,7,8,9
//
// @version1 20200310 YinDou ���������Ŀ
// �ο���https://www.w3xue.com/exp/article/20189/1964.html

#include <cmath>
#include <cstdio>

int main() {
    int count[10];
    int i, j, k, L;
    int n, len, m;
    while (scanf_s("%d", &n) != EOF) {
        m = n;
        L = ceil(log10(n + 1));
        for (i = 0; i < 10; i++) 
            count[i] = 0;
        for (j = 0; j < L; j++) {
            len = ceil(log10(m + 1));
            //�Ӹ�λ����λȡ��λ����ֵ 
            k = m / pow(10.0, len - 1);
            //��K*len����ֵ 0-9���ֵĴ��� 
            for (i = 0; i < 10; i++) 
                count[i] += k * (len - 1) * pow(10.0, len - 2);
            //�ڸ�λС����ֵK�����ֳ��ֵĴ��� 
            for (i = 0; i < k; i++) 
                count[i] += pow(10.0, len - 1);
            //�ڸ�λ��ֵK���ֵĴ��� 
            count[k] += m - k * pow(10.0, len - 1) + 1;
            //ȥ���Լ���ĸ�λ 
            m = m - k * pow(10.0, len - 1);
        }
        //ȥ��ǰ��0 
        for (i = 0; i < L; i++)
            count[0] -= pow(10.0, i);
        for (i = 0; i < 10; i++) 
            printf("%d\n", count[i]);
    }
         return 0;
}
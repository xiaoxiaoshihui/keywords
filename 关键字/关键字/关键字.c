#include  <stdio.h>
//C�����ṩ�Ĺؼ���
//1.C�����ṩ�ģ������Լ������ؼ���
//�������ֲ����ǹؼ���
//�����ؼ���auto break case char const continue default do  double else
//enum extern float for goto if int long register return short signed 
//sizeo static struct switch typedef union unsigned void volatile while
// auto ���Զ��� ��ÿ���ֲ���������auto���ε�
//
//int main() {
//	{
//		auto int a = 10; //�Զ������Զ�����
//		//auto ʡ�Ե���
//	}
//
//	return 0;
//}
//�Ĵ���			Խ�������Խ�� �ٶ�Խ�� �ռ�ԽС
//���ٻ���			
//�ڴ�
//Ӳ��
//����



//typedef ���Ͷ���  �ṹ��Ҳ���Դ�����
//�����ض��� ����������
//���� ���� С��
//typedef unsigned int u_int;
//
//int main() {
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//
//	return 0;
//}

//�ؼ���static - ��̬��
//1.static ���ξֲ����� �ı�ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
//2.static ����ȫ�ֱ���
//3.static ���κ���
//static�����ν����Ǹı��˱����Ĵ洢���� ��ʹ�ֲ��������������ں�ȫ�ֱ���һ���� �����������Ǿ��޵�
void test() {
	static int a = 1;//������ �������ڱ߳���
	a++;
	printf("%d ", a);
}

int main() {
	int i = 0;
	while (i < 10) {
		test();
		i++;
	}


	return 0;
}

//ջ�� �ֲ����� �����Ĳ���
//���� ��̬�ڴ����ģ���
//��̬�� ȫ�ֱ��� static���εľ�̬���� ���򲻽�����̬�����������ڲ�����
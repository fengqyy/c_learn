#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������2��+ָ�루1��

//�±����[] ,����ʹ��()
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("%d\n", arr[5]);//[]�±����ò�����
	//[] �������ǣ�arr  5

	return 0;
}


//�������ò�����
int add(int x, int y)
{
	return x + y;
}

int main()
{
	int ret = add(2, 3);//()�������ò�����
	//()�������ǣ�add 2 3
	//������һ��������
	return 0;
}

//sizeof ���Ǻ������ǲ�����
int mian()
{
	int a = 0;
	
	int n = sizeof(int);

	int n = sizeof a;

	return 0;
}


//�����������ԣ����ȼ��������
//https://zh.cppreference.com/w/c/language/operator_precedence

int main()
{
	//���ڲ�����
	int a = 1 + 2 * 3;//���ȼ�
	int b = 1 + 2 + 3;//���ȼ���ͬ������ԣ��������ң�������������

	return 0;
}


//����ʽ��ֵ
//����ʽ��ֵ֮ǰҪ��������ת������������  ����ת��

//��������  
//�з������������ǰ��ձ������������͵ķ���λ��������
//�޷�����������λֱ�Ӳ�0
int main()
{
	//char  -signed char

	char a = 5;
	//5-int-4���ֽ�-32bit
	//00000000000000000000000000000101
	//00000101  - a   �ضϺ�洢��a��
   
	char b = 127;
	//00000000000000000000000001111111
	//01111111  - b   �ضϺ�洢��b��
	
	char c = a + b;//������������
	//00000000000000000000000000000101  - a
	//00000000000000000000000001111111  - b 
	//00000000000000000000000010000100  - a+b
	//10000100  - c

	printf("%d\n", c);
	//%d �ǰ���10���Ƶ���ʽ��ӡ�з��ŵ�����
	//��������
	//11111111111111111111111110000100  ԭ��
	//10000000000000000000000001111011  ����
	//10000000000000000000000001111100  ����
	//-124

	return 0;
}


//����ת��


//�������ʽ
//ͨ�������������ԣ��޷�ȷ������ʽ��Ψһ����·��
//...




//ָ��

//�ڴ�
//���ڴ滮��һ�������ڴ浥Ԫ��ÿ���ڴ浥Ԫ�Ĵ�Сȡ1���ֽ�
//����λ���㣩
//�ڴ浥Ԫ�ı��==��ַ==ָ��


int main()
{
	int a = 10;

	printf("%p\n", &a);

	int* ptr = &a;//ָ�����
	
	*ptr = 0;//*�����ò�����/��ӷ��ʲ�����
	printf("%d\n", a);

	return 0;
}

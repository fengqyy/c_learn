#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������� + ��֧ѭ��




//ǿ������ת��
//int mian()
//{
//	
//	int n=(int)3.14;
//	printf("hello\n world\n");//3
//
//
//	return 0;
//}



//scanf  printf
//����   ���
//ͷ�ļ�

//printf  print format  -ָ��ĳ�ָ�ʽ�Ĵ�ӡ
//�����Զ����ϻ���
//int mian()
//{
//	printf("hello\n world\n");
//	printf("hello\n");
//	printf("world\n");
//	return 0;
//}

//ռλ��   %+ռλ��������
//printf("%d",100);
//%d����  %s�ַ���   
//�����ж��ռλ��
//ռλ����
//int main()
//{
//	printf("%d",100);
//	printf("%s says it is %d clock's","zhangsan",9);
//	return 0;
//}

//�����ʽ
//	�޶����
//int main()
//{
//	printf("%d\n",123);
//	printf("%5d\n", 123);//������߿ո���  �����
//	printf("%-5\n", 123);//�Ҷ���
//	
//	printf("%f\n",123.45);
//	printf("%12f\n", 123.45);
//	return 0;
//}
////	������ʾ������
//int main()
//{
//	printf("%+d",12);
//	printf("%+d", -12);
//
//	return 0;
//}
////	�޶�С��������λ      Ĭ��6λ
//int main()
//{
//
//	printf("%.2f\n", 123.45);
//	printf("%6.2f\n", 0.5);
//	printf("%*.*f\n",6,2, 0.5); //����ȥ
//	return 0;
//}
////	��������ַ���  %.[m]s
//int main()
//{
//
//	printf("%.5s\n", "hello world");
//	
//	return 0;
//}



//scanf   ��ȡ�û��ļ�������
//int main()
//{
//	int score = 0;
//
//	scanf("%d\n",&score);
//	printf("%d\n",score);
//	return 0;
//}

//�س���ȡ
//ͷ�ļ�
//ռλ��
//&
//�������
//scanf("%d %d %f %f",&a,&b,&c,&d);
//scanf �Զ����˿հ��ַ����ո��Ʊ�������з���
//����ԭ��
//int main()
//{
//	int x;
//	int y;
//	//����" -13.45e12# 0"
//	scanf("%d",&x);
//	scanf("%f", &y);
//
//	printf("%d\n",x);
//	printf("%d\n", y);
//
//	return 0;
//}

//��ѧ������
//e 

//scanf�ķ���ֵ
//��һ����������ʾ�ɹ���ȡ�ı�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0;
//	int r = scanf("%d %d %f", &a, &b, &f);
//
//	printf("a = %d\n", a);
//	printf("a = %d\n", b);
//	printf("a = %f\n", f);
//
//	printf("%d",r);//�ɹ���ȡ�ı�������
//	
//	return 0;
//}

//EOF //end of file  �ļ�������־  -1

//%c ������Կհ��ַ�
//int main()
//{
//
//	char ch = 0;
//	//����ո�
//	scanf("%c",&ch);//�ӿո� " %c"  
//	printf("%c", ch);
//	printf("xxxx\n");
//
//
//	return 0;
//}
//%s  �ǿհ��ַ����հ��ַ�
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);//abc def
//	printf("%s\n",arr);//abc\0
//
//	return 0;
//}

//scanf ����ȫ  Խ��
//%[m]s  �޶�����

//��ֵ���Է� *
//scanf("%d-%d-%d",&a,&b,&c);//Ҫ����"-"
//scanf("%d%*c%d%*c%d",&a,&b,&c);




//��֧��ѭ�����ϣ�
//C�����ǽṹ���ĳ����������
//˳��ṹ  ѡ��ṹ  ѭ���ṹ
//
// ѡ����䣨��֧��:if  switch
// ѭ����䣺while  do whlie  for
//  
// if���
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d������\n",num);
//
//	return 0;
//}
////
////else
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d������\n", num);
//	else
//		print("%d��ż��\n",num);
//	return 0;
//}
////
//int mian()
//{
//	int age = 0;
//	scanf("%d",&age);
//	if (age >= 18)
//	{
//		printf("����\n");
//		printf("����̸����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("��ò�Ҫ\n");
//	}
//	return 0;
//}
////
////Ƕ��if
////�ж�һ�������ǣ����� 0 ����
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("0\n");
//	else
//	{
//		if (num > 0)
//			printf("����\n");
//		else
//			printf("����\n");
//	}
//
//	return 0;
//}
////
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("0\n");
//	else if (num > 0)
//		printf("����\n");
//	else
//		printf("����\n");
//
//	return 0;
//}
////
//int mian()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 0)
//			printf("ż��\n");
//		else
//			printf("����\n");
//	}
//	else
//		printf("��������\n");
//
//	return 0;
//}
////
int main()
{
	int age = 0;
	scanf("%d",&age);
	if (age < 18)
		printf("����\n");
	else if( age<=44)
		printf("����\n");
	else if ( age <= 59)
		printf("������\n");
	else if ( age <= 89)
		printf("����\n");
	else
		printf("������\n");
	
	return 0;
}
//
//����else
//else ���������� if ƥ��
//
//������
//
// 
// 
//��ϵ������
//< > <=  >= == !=
//�棺1    �٣�0
//
// 3==a
//
// �����������������
// i<j<k
// 
// i<j && j<k
// 
// �߼�������
//  && || ��
//
// 
// 
//
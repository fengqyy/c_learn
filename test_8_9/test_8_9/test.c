#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ָ�루2��


//ָ������Ĵ�С

//int main()
//{
//	int  num = 10;
//	int* p = &num;
//
//	char ch = 'w';
//	int* pc = &ch;
//
//	printf("%zd\n", sizeof(p));
//	printf("%zd\n", sizeof(pc));
//	//X86������char*��ָ�������int*��ָ���������4���ֽ�
//	//ָ�������ŵ�ַ����Сȡ����һ����ַ��Ҫ���Ŀռ�
//	//��ַ��32��0/1��ɵĶ��������У�����ָ�������СΪ4���ֽ�
//	//X64  8���ֽ�
//
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(float*));
//	
//	return 0;
//}


//ָ��������͵�����
//int mian()
//{
//	int n = 0x11223344;
//	
//	//int* p = &n;//00 00 00 00
//	char* p = &n; //00 33 22 11
//
//	*p = 0;
//
//
//	return 0;
//}
//ָ�����;�����ָ���ڽ�����ʱ��Ȩ�ޣ�һ���ܷ��ʼ����ֽ�

//int mian()
//{
//	int n = 0x11223344;
//
//	int* p = &n;
//	char* pc = &n; 
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);//����4���ֽ�
//	
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//����1���ֽ�
//	
//	return 0;
//}
//ָ�����;�����ָ��Ĳ�����һ�����������ֽ�


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//�±����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//ָ�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//		
//		//printf("%d ", *(p+i));
//	}
//	
//	
//	return 0;
//}


//const����ָ��


//int main()
//{
//	const int n = 100;
//	//const���α�����ʹ��������������޸�
//	
//	//n = 20;//err
//
//	//int* p = &n;
//	//*p = 20;//���Ը�
//
//	printf("%d\n", n);
//
//	return 0;
//}

//const ����*���:���Ƶ���ָ��ָ������ݣ�����ͨ��ָ�����޸�ָ��ָ������ݣ���ָ�����������Ը�
//const ����*�ұߣ����Ƶ���ָ��������������޸�ָ�������ָ�򣬵�ָ��ָ������ݿ��Ը�
//int main()
//{
//	int m = 100;
//	int n = 10;

	//const int* p = &n;// int const * p = &n;
	//
	//*p = 0;//err
	// p = &m;//���Ը�
	
	 //int* const p = &n;

	 //*p = 0;//���Ը�
	 // p = &m;//err
//	
//	return 0;
//}



//ָ������

//ָ��Ӽ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//a b c d e f \0
//
//	char* p = &arr[0];
//	
//	while (*p !='\0')
//	{
//		print("%c ", *p);
//		p++;
//	}
//
//	return 0;
//}


//ָ��-ָ��
//ǰ������ָ��ָ��ͬһ��ռ�
//�õ��ľ���ֵ����ָ��֮��Ԫ�صĸ���
//int main()
//{
//	int arr[10] = { 0 };
//
//	int ret = &arr[9] - &arr[0];
//
//	printf("%d\n", ret);
//	return 0;
//}



//strlen
//strlen------string length
//���ܣ����ַ�������
//\0֮ǰ�ַ��ĸ���
//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//
//
// 
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int my_strlen(char*str)
//{
//	char* start = str;
//	while (*str != '\0')
//		str++;
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//


//ָ��Ĺ�ϵ����
//ָ��Ƚϴ�С����������ַ�Ƚϴ�С

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//int* p = &arr[0];
//	int*p=arr;//��������������Ԫ�صĵ�ַ
//	while (p < arr + sz)//ָ��Ĺ�ϵ����
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}



//Ұָ��
//ָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ�ģ�û����ȷ���Ƶģ�

//ָ��δ��ʼ��
//int main()
//{
//	int* p;//�ֲ��������������ʼ������õ�һ�����ֵ
//	*P = 20;
//
//
//	return 0;
//}


//ָ���Խ�����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	for (i = 0; i <= 11; i++)
//	{
//
//		*(p++) = i;
//		
//		//*p;
//		//p = p + 1;
//	}
//
//	return 0;
//}


//ָ��ָ��Ŀռ���ͷ�
int* test()
{
	int n = 100;
	//...
	return &n;
}//n����

int main()
{
	int* p = test();
	return 0;
}


//��ι��Ұָ��







#include <stdio.h>

//��������Ϸ
//�����Զ�����1~100�������
//��Ҳ����֣�����

//��������� rand
//int rand(void)
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	//RAND_MAX; //0x7fff ---> 32767
//	
//	srand((unsigned)time(NULL));
//
//	printf("%d\n", rand()); 
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	//α�����
//
//	//srand  ��ʼ������
//	// void srand (unsigned int seed);
//	
//	// time  ��ʱ�仯
//	// time_t time(time_t*timer);
// 	// ʱ���
//	//time_t;//int / long long
//	//time(NULL)
//
//	//�����������Χ  ȡģ
//	//rand()%100+1;  //1~100
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	printf("%d\n", rand() % 100 + 1);
//	//��100~200�������
//	//100 + rand()%(200 - 100 + 1);
//	//��������0~100֮�䣬����100
//
//	//����a~b�������
//	//a+rand()%(b-a+1);
//
//
//
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("******************");
//	printf("******1.play******");
//	printf("******0.exit******");
//	printf("******************");
//}
//
//
//void game()
//{
//
//	int guess = 0;
//	//���������
//	int r = rand() % 100 + 1;//ѭ��λ
//
//	//������       
//	
//	
//	while(1)
//	{
//		printf("���������֣�");
//
//		if (guess > r)
//		{
//			printf("�´���\n");//��
//		}
//		else if (guess < r)
//		{
//			printf("��С��\n");//С
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//	{
//		int input = 0;
//		srand((unsigned int)time(NULL));
//
//		do
//		{
//			menu();
//			switch (input)
//			{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳�\n");
//				break;
//			default:
//				printf("��������\n");
//				break;
//			}
//		} while (input);
//
//
//		return 0;
//	}	
//
//
//
//void game()
//{
//
//	int guess = 0;
//	//���������
//	int r = rand() % 100 + 1;//ѭ��λ
//
//	//������       
//	//���ƴ���
//	int count = 0;
//	while (count)
//	{
//		printf("�㻹��%d�λ���\n",count);
//		printf("���������֣�");
//
//		if (guess > r)
//		{
//			printf("�´���\n");//��
//		}
//		else if (guess < r)
//		{
//			printf("��С��\n");//С
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//		
//		count--;
//	}
//	if (count == 0)
//	{
//		pritnf("ʧ�ܣ���ȷ���ǣ�%d\n",r);
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("��������\n");
//			break;
//		}
//	} while (input);
//
//
//	return 0;
//}



//����
//1�������ͬ����Ԫ�صļ���
//2��һά����
//		���鴴��     type arr_name[����ֵ]       int arr[20]
//      �����ʼ��    int arr[4]={1,2,3,4};//��ȫ��ʼ��
//					 int arr[6]={1,2,3};//����ȫ��ʼ��   Ĭ��0
//					 int arr[]={1,2,3};//ʡ�Դ�С
					//int arr[4] = { 1,2,3,4,5 };//����

//		���������
//char ch[8] = { 'a','b','c' }; //������ char [8]


//3��һά�����ʹ��
		//������±꣬���㿪ʼ
		//�±����ò�����  []
		
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

			//type arr_name[����ֵ]    ����ֵ
			//C99  ��׼֮ǰ�����Сֻ��ʹ�ó���ָ��������ʹ�ñ�����֮�����ʹ�ã��䳤���飩


//���������
//int main()
//{
//	int arr[5];
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	return 0;
//}


//�������ڴ��еĴ洢
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("*aar[%d]=%p\n",arr[i], & arr[i]);//%p  ��ӡ��ַ
//		//������ţ���ַ�ɵ͵���
//	}
//
//	return 0;
//}



//sizeof ����Ԫ�ظ���

//int main()
//{
//	int arr[10] = { 1,2,3 };
//	printf("%d\n",sizeof(arr));//sizeof(������)������������ռ�ڴ�ռ�Ĵ�С����λ�ֽ�
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//Ԫ�ظ���
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		for (i = 0; i < sz; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	
//		return 0;
//}

//int a = 10;
//sizeof(int);
//sizeof(a);
//sizeof a;
//size_t ���� ���޷�����������



//��ά����Ĵ���
	//����
	//�﷨   type arr_name[][]  int arr[3][5]	
	//��ʼ�� int arr[3][5]={}��
	//		��ȫ/����ȫ��ʼ��
	
//int main()
//{
//
//	int arr[3][3] = { {1,2},{1,2,3},{1} };
//	//�п���ʡ�ԣ��в���
//
//	return 0;
//}
	
	//��ά�����ʹ��
	//		�±�
	//		
	//      ����
	//		���
	//				
	//		��ַ    ������ţ��ɵ͵���
	//		
	
	
	
	
	
	//	C99  �䳤����	
	// 
	// ֮ǰ����������Ĵ�Сʹ�ó������������ʽָ��
	//		int arr[10]  int arr[10+1]  int arr[]={1,3}
	// 
	// C99�У���������Ĵ�С�Ǳ���
	//		int  n=0;
	//		scanf("%d",&n);
	//		int arr[n];
	//�䳤���鲻�ܳ�ʼ��
	//����Ĵ�С����ָ��

//vs code    gcc        



//��ϰ

//1������ַ��������ƶ������м���

//welcome to bit!!!!!!!
//*********************

//˼·����������滻������

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{

	char arr1[] = "yangtianxiang";
	char arr2[] = "*************";

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;

		Sleep(1000);//���ߣ���λms
		system("cls");//systemִ��ϵͳ���cls���
	}
	return 0;
}











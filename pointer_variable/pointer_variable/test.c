#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����*���ʵ�ַ�Ķ����ĸ��ֽ�
//int main()
//{
//	printf("%d\n", sizeof(int*));//4 32λƽ̨
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(double*));//4
//	return 0;
//}

//ָ���ܷ��ʵļ����ֽ�
//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int main()
//{
//	//int a = 0x11223344;
//	//int* pa = &a;//ָ����� ָ����Ǳ���
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;//ֻ�ܷ���һ���ֽ�
//	printf("a=%d\n", a);
//	printf("pa=%p\n", pa);
//	printf("pa=%p\n", &a);
//	return 0;
//}


//�������͵�ַ��1��Ч��
//ָ�����;�����ָ����һ���߶�Զ��ָ��Ĳ�����
//int main()
//{
//	int a = 0;
//	int* pa = &a;//�ĸ��ֽ�
//	char* pc = &a;//һ���ֽ�
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//+1�൱���ĸ��ֽ�
//	printf("%p\n", pc);
//	printf("%p", pc + 1);//+1�൱��1���ֽ�
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;//�ĸ��ֽ� ��Ԫ�صĵ�ַ
//	char* p = arr;//charһ���ֽ�
//	//printf("%d\n", sizeof(arr));//һ��Ԫ�����ĸ��ֽ� 40
//	//printf("%d\n", &arr);
//	//printf("%p\n", p);
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = 1;//һ���ֽ�һ���ֽڵ��ߣ���ʮ���ֽ�
//	}
//	return 0;
//}

//Ұָ��
//ָ��δ����ʼ��
//int main()
//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}

//ָ��Խ��
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//      *p=i
//		p++;
//      *p++=i;//����++����ʹ����++
//	}
//	return 0;
//}

//ָ��ָ��Ŀռ��ͷ�
//int* test()//�ֲ�������ִ��return��������ͻ�ԭ
//{
//	int a = 10;
//	return &a;//�������������a�ĵ�ַ�ͷ��ػ���ϵͳ
//}
//int main()
//{
//	int* p=test();
//	*p = 20;//�����ַ�Ǳ��˵ĵ�ַ��������test��a�ĵ�ַ
//	return 0;
//}

//ָ��+-����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//int* p = arr;
//	int* p = &arr[9];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		p = p - 1;//p++     
//	}
//	return 0;
//}

//ָ��-ָ�� ��ַ-��ַ=�������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);// 9
//	                   //��Ԫ�صĵ�ַ
//	return 0;
//}

//���ַ����ĳ���
//int My_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[10] = { "chongqing" };//9
//	int len=My_strlen(arr);//һ��Ԫ�صĵ�ַ
//	printf("%d", len);
//}

//��������ĵ�ַֻ�����ֱ�ʾ
//1.&arr-&�������������������׸�Ԫ�صĵ�ַ����������ʾ�������飬&��������ȡ����������ĵ�ַ
//sizeof(arr)-sizeof(������)����������ʾ�������飬sizeof(������)�Ǽ�����������Ĵ�С
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", arr);//������Ԫ�صĵ�ַ
//	printf("%d\n", arr+1);
//
//	printf("%d\n", &arr[0]);//������Ԫ�صĵ�ַ
//	printf("%d\n", &arr[0]+1);
//
//	printf("%d\n", &arr);//��������ĵ�ַ
//	printf("%d\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p=====%p\n",p+i, &arr[i]);
//		*(p + i) = i;
//		printf("%d=====%d\n", *(p + i), arr[i]);
//	}
//	return 0;
//}

//����ָ��
//int main()
//{
//	int a=10;
//	int* p = &a;//pһ��ָ��
//	int** ppa = &p;//ppa����ָ��
//	**ppa = 20;
//	*p = 30;
//	printf("%d", a);
//	return 0;
//}

//��ʼ������ʹ�ӡ����ĵ���
//void InitBoard(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	int tem = 0;
//	while (left < right)
//	{
//		tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//InitBoard(arr, sz);//��ʼ��
//	Print(arr, sz);//��ӡ
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//������A������B�е����ݽ����û�
//void Swatch(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	int tem = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tem = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tem;
//	}
//}
//void print(int arr[] ,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//}
//
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swatch(arr1, arr2, sz);
//	print(arr1,sz);
//	print(arr2, sz);
//}

//int i;//ȫ�ֱ���-����ʼ��-Ĭ����0
////�ֲ�����-����ʼ��-Ĭ�������ֵ
//int main()
//{
//	i--;
//	//i=-1;
//	//10000000. . .00000001ԭ��
//	//11111111. . .11111110����
//	//11111111. . .11111111������sizeof(i)=4���
//	if (i > sizeof(i))//sizeof()-�������/������ռ�ڴ�Ĵ�С��>=0,�޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//��һ����������1�ĸ���
//��λ����
//int Return(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//a
//		//000000000. . .000000001
//		if (1 == ((a >> i) & 1))
//			count++;
//	}
//	//printf("%d", count);
//	return count;
//}

//unsigned �Ѹ����Ĳ���ת�����޷�����
//-1
//100000000. . .00000001ԭ��
//111111111. . .11111110����
//111111111. . .11111111����
//unsigned ��int nת�����޷�����
//111111111. . .11111111�����λ1���Ƿ���λ-��
//int Return(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if (n % 2==1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int Return(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//����һ��1
//		//13 n
//		//1101 n
//		//0001 1
//		//1100 n-1
//		//1101
//		//1100 n&(n-1)
//		count++;
//	}
//	return count;
//}

//�����������������м�λ��ͬ
//int Return(int n, int m)
//{
//	int count=0;
//	int tem = n ^ m;//��λ�����ͬΪ0������λ1
//	while (tem)
//	{
//		tem = tem & (tem - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0,b=0;
//	scanf("%d %d", &a,&b);
//	int count=Return(a,b);
//	printf("%d", count);
//	return 0;
//}

//��ӡһ��������������ż��
//void print(int n)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//��ά����
//int main()
//{
//	int arr[2][3] = { {1,2,3},{2,3,4} };
//	return 0;
//}

//ָ������-����-���ָ�������
//int main()
//{
//	int a = 10; int* pa = &a;
//	int b = 20; int* pb = &b;
//	int c = 30; int* pc = &c;
//	int i = 0;
//	int* arr[3] = { &a,&b,&c };
//	int* arr[3] = { pa, pb, pc };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p\n", arr[i]);
//	}
//	return 0;
//}

//����ָ��-ָ��-ָ�������ָ��
//int main()
//{
//	//int* p = NULL;//P������ָ��-ָ�����ε�ָ��-���Դ�����͵ĵ�ַ
//	//char* pc = NULL;//Pc���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	                //����ָ��-ָ�������ָ��-���Դ������ĵ�ַ
//	//int arr[10] = { 0 };
//	////arr ��Ԫ�صĵ�ַ
//	////arr[0]
//	////&arr ����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10]= & arr;//[]��*�����ȼ���
//	//p��ָ������� *��ָ�� p��������ָ�루*p���ǽ����ò�����
//	//pָ��������10��Ԫ����int��
//	int* pa[10];//ָ�����飬�Ǵ��ָ�������
//	int(*p2)[10];//����ָ�룬�Ǵ�������ָ��
//	return 0;
//}

//int main()
//{
//	char* arr[5];//ָ�����飬���ָ��ĵ�ַ
//	char* (*arr)[5] = &arr;//&arr�ĵ�ַ������
//	return 0;
//}

//��ӡһά����Ԫ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//����
//	int* p = arr;//��Ԫ�صĵ�ַ
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	//������ָ��
//	int (*pa)[10] = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));//������pa �ٽ����� *pa==arr
//	}
//	return 0;
//}

//��ӡ��ά����
//�������������ʽ
//void print1(int arr[3][5], int x, int y)//������ʽ
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)//������ָ�����
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//(*p)����p
//		    //������ �ٽ�����
//			printf("%d ", *(*(p + i) + j);
//			printf("%d ", *(p[i] + j));
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);//arr-������-��Ԫ�ص�ַ
//	print2(arr, 3, 5);//��ַ
//	//arr�����һά���飬arr����һά����ĵ�ַ������Ԫ��
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//	printf("%d ", p[i]);
//	//	printf("%d ", *(p+i));
//	//}
//	return 0;
//}

//����ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int (*p)(int, int)=Add;
//	printf("%d\n",Add(a, b));
//	//printf("%d\n",(*p)(10, 10));
//	return 0;
//}
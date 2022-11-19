#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//类型*访问地址的都是四个字节
//int main()
//{
//	printf("%d\n", sizeof(int*));//4 32位平台
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(double*));//4
//	return 0;
//}

//指针能访问的几个字节
//指针类型决定了指针进行解引用操作的时候能够访问空间的大小
//int main()
//{
//	//int a = 0x11223344;
//	//int* pa = &a;//指针变量 指针就是变量
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;//只能访问一个字节
//	printf("a=%d\n", a);
//	printf("pa=%p\n", pa);
//	printf("pa=%p\n", &a);
//	return 0;
//}


//各种类型地址加1的效果
//指针类型决定了指针走一步走多远（指针的步长）
//int main()
//{
//	int a = 0;
//	int* pa = &a;//四个字节
//	char* pc = &a;//一个字节
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//+1相当加四个字节
//	printf("%p\n", pc);
//	printf("%p", pc + 1);//+1相当加1个字节
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;//四个字节 首元素的地址
//	char* p = arr;//char一个字节
//	//printf("%d\n", sizeof(arr));//一个元素是四个字节 40
//	//printf("%d\n", &arr);
//	//printf("%p\n", p);
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = 1;//一个字节一个字节的走，走十个字节
//	}
//	return 0;
//}

//野指针
//指针未被初始化
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	*p = 20;
//	return 0;
//}

//指针越界
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		//当指针指向的范围超过数组arr的范围时，p就是野指针
//      *p=i
//		p++;
//      *p++=i;//后置++，先使用再++
//	}
//	return 0;
//}

//指针指向的空间释放
//int* test()//局部变量，执行return这个函数就还原
//{
//	int a = 10;
//	return &a;//出了这个函数，a的地址就返回还给系统
//}
//int main()
//{
//	int* p=test();
//	*p = 20;//这个地址是别人的地址，不再是test中a的地址
//	return 0;
//}

//指针+-整数
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

//指针-指针 地址-地址=数组个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);// 9
//	                   //首元素的地址
//	return 0;
//}

//求字符串的长度
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
//	int len=My_strlen(arr);//一个元素的地址
//	printf("%d", len);
//}

//整个数组的地址只有两种表示
//1.&arr-&数组名，数组名不是首个元素的地址，数组名表示整个数组，&数组名，取出整个数组的地址
//sizeof(arr)-sizeof(数组名)，数组名表示整个数组，sizeof(数组名)是计算整个数组的大小
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", arr);//数组首元素的地址
//	printf("%d\n", arr+1);
//
//	printf("%d\n", &arr[0]);//数组首元素的地址
//	printf("%d\n", &arr[0]+1);
//
//	printf("%d\n", &arr);//整个数组的地址
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

//二级指针
//int main()
//{
//	int a=10;
//	int* p = &a;//p一级指针
//	int** ppa = &p;//ppa二级指针
//	**ppa = 20;
//	*p = 30;
//	printf("%d", a);
//	return 0;
//}

//初始化数组和打印数组的倒叙
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
//	//InitBoard(arr, sz);//初始化
//	Print(arr, sz);//打印
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//将数组A和数组B中的内容进行置换
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

//int i;//全局变量-不初始化-默认是0
////局部变量-不初始化-默认是随机值
//int main()
//{
//	i--;
//	//i=-1;
//	//10000000. . .00000001原码
//	//11111111. . .11111110反码
//	//11111111. . .11111111补码与sizeof(i)=4相比
//	if (i > sizeof(i))//sizeof()-计算变量/类型所占内存的大小，>=0,无符号数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//求一个数二进制1的个数
//按位与求
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

//unsigned 把负数的补码转换能无符号数
//-1
//100000000. . .00000001原码
//111111111. . .11111110补码
//111111111. . .11111111补码
//unsigned 把int n转换成无符号数
//111111111. . .11111111的最高位1不是符号位-号
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
//		n = n & (n - 1);//减少一个1
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

//求两个二进制数中有几位不同
//int Return(int n, int m)
//{
//	int count=0;
//	int tem = n ^ m;//按位异或，相同为0，相异位1
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

//打印一个二进制数中奇偶数
//void print(int n)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
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

//二维数组
//int main()
//{
//	int arr[2][3] = { {1,2,3},{2,3,4} };
//	return 0;
//}

//指针数组-数组-存放指针的数组
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

//数组指针-指针-指向数组的指针
//int main()
//{
//	//int* p = NULL;//P是整型指针-指向整形的指针-可以存放整型的地址
//	//char* pc = NULL;//Pc是字符指针-指向字符的指针-可以存放字符的地址
//	                //数组指针-指向数组的指针-可以存放数组的地址
//	//int arr[10] = { 0 };
//	////arr 首元素的地址
//	////arr[0]
//	////&arr 数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10]= & arr;//[]比*的优先级高
//	//p是指针变量名 *是指针 p就是数组指针（*p不是解引用操作）
//	//p指向的数组的10个元素是int型
//	int* pa[10];//指针数组，是存放指针的数组
//	int(*p2)[10];//数组指针，是存放数组的指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];//指针数组，存放指针的地址
//	char* (*arr)[5] = &arr;//&arr的地址存起来
//	return 0;
//}

//打印一维数组元素
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//常规
//	int* p = arr;//首元素的地址
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	//用数组指针
//	int (*pa)[10] = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));//解引用pa 再解引用 *pa==arr
//	}
//	return 0;
//}

//打印二维数组
//传参是数组的形式
//void print1(int arr[3][5], int x, int y)//数组形式
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
////传参是指针的形式
//void print2(int(*p)[5], int x, int y)//用数组指针接收
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//(*p)就是p
//		    //解引用 再解引用
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
//	//print1(arr, 3, 5);//arr-数组名-首元素地址
//	print2(arr, 3, 5);//传址
//	//arr想象成一维数组，arr就是一维数组的地址，三个元素
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

//函数指针
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
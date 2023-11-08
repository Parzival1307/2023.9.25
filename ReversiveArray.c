#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";//0,1,2,3,4,5,6,/0
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//7
//	int right = sz - 2;//Function "sizeof" includes '/0'
//	//int right=strlen(arr)-1;Function need "#include<string.h>", and don't include '/0'
//	printf("%c\n", arr[right]);
//	while (left<right)
//	{
//		char tmp = 0;
//		tmp = arr[left];//swap
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//
//	}
//	int i = 0;
//	printf("%s\n", arr);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//
//	}
//
//	return 0;
//}
//void Reverse(char* str,int left,int right)
//{
//	if (left>=right)
//	{
//
//	}
//	else//left<right
//	{
//					char tmp = 0;
//					tmp = str[left];//swap
//					str[left] = str[right];
//					str[right] = tmp;
//		Reverse(str, left + 1, right - 1);
//	}
//		//swap
//}
//#include<string.h>
//int main()
//{
//	int left = 0;
//	char arr[] = "abcdefg";
//	int right = strlen(arr) - 1;
//	Reverse(arr,left,right);
//	printf("%s", arr);
//
//	return 0;
//}
#include<string.h>
void reverse(char* str)
{
	int len = strlen(str);
	if (str != str + len - 1)
	{
		char tmp = *str;
		*str = *(str + len - 1);
		*(str + len - 1) = '\0';
		reverse(str + 1);
		*(str + len - 1) = tmp;
	}
	
}
int main()
{
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s", arr);
	return 0;
}
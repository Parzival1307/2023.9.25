#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void reverse(int* str, int sz,int left,int right)
{
	
	if (left <= right)
	{
		int tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		reverse(str, sz,left+1,right-1);
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);

	}
	printf("\n");

}
void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}


}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	print(arr, sz);

	reverse(arr,sz,left,right);
	print(arr, sz);

	init(arr,sz);
	print(arr, sz);

	return 0;
}
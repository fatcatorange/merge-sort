// merge sort.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
void merge(int array[],int left,int right)
{
	if (left == right)
	{
		return;
	}
	int mid = (right+left )/ 2;
	merge(array,left,mid);
	merge(array, mid+1, right);
	int i,now=0;
	int temp[10];
	int nowl = left;
	int nowr = mid+1;
	for (i=left;i<=right;i++)
	{
		if (nowr>right||(array[nowl] < array[nowr]&&nowl<=mid))
		{
			temp[now] = array[nowl];
			nowl++;
			now++;
			continue;
		}
		if (nowl>mid||array[nowr] < array[nowl])
		{
			temp[now] = array[nowr];
			nowr++;
			now++;
			continue;
		}
	}
	now = left;
	for (i = 0; i <= right-left; i++)
	{
		
		array[now] = temp[i];
		now++;
		
	}
}
int main()
{
    int array[10] = {3,1,4,2,5,7,6,9,0,8};
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] <<" ";
	}
	cout << endl;
	merge(array,0,9);
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] <<" ";
	}
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

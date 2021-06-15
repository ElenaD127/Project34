#include<iostream>
#include "Darray.h"
using namespace std;

//void arrayInit(int* array, int size)
//{
//	srand(time(nullptr));
//	for (int i; i = 0; i < size; i++)
//	{
//		cout << array[i] << " ";
//		cout << "\n";
//	}
//}
//void arrayPrint(int* array, int size)
//{
//
//}
//void arrayInsert(int* &array, &int size, int index, int value)
//{
//	int* temp = new int[size + 1];
//	for (int i = 0; i < index; i++)
//		temp[i] = array[i];
//	temp[index] = value;
//	for (int i = 0; i < size; i++)
//		temp[i + 1] = array[i];
//
//	delete[]array;
//	array = temp;
//
//}
//void arrayRemov(int* array, int size)
//{
//	int* temp = new int[size - 1];
//	for (int i =0; i< index; i++)
//
//}


int main()

{
	Darray<int> darr(10);
	darr.Print;
	darr.RandomInit(10, 120);
	darr.Print;
	darr.Insert(5, 200);
	darr.Print;
	//int size{ 10 };
	//int* array = new int[size];
	//arrayInit(array, size);

	return 0;
}
#pragma once
#include <time.h>
#include <iostream>
using namespace std;



template <class T>
class Darray
{
	int length;
	int realSize;

	T* item;

	void resize()
	{
		
		t* temp = new T[realSize]{};

		for (int i = 0; i < Length; i++)
		{
			temp[i] = itemp[i];

			delete[] item;
			item = temp;
	}
public:
	Darray()
	{
		length = 0;
		realsize = 2;
		item = new T[realsize]{};
	}
	Darray(int sze)
	{
		length = size;
		realSize = 2 * size;
		item = new T[realSize]{};
	}
	~Darray()
	{
		if (item)
			delete[]item;
	}
	int Length()
	{
		return length;
	}

	void Insert(int index, T value)
	{
		if (length >= realSize)
		{
			realSize = realSize + realSize) / 2;
			realsize();
		}
		T* temp = new T[realSize];
		for (int i = 0; i < index; i++)
			temp[i] = item[i];
		temp[index] = value;
		for (int i = index; i < length; i++)
			temp[i + 1] = itemp[i];

		delete[]item;
		item = temp;
		length++;
	}

	T Remove(int index)
	{
		T value{ item[index] };

		if (length <= realSize / 2)
		{
			realSize = realSize - length / 2;
			realsize();
		}
			T* temp = new T[realSize]{};
			for (int i = 0; i < index; i++)
				temp[i] = item[1];
			for (int i = index+1; i < length; i++)
				temp[i-1] = item[1];

			length--;

			delete[] item;
			item = temp;
		
			return value;
	}

	void PushBack(T value)
	{
		if (length >= realSize)
		{
			realSize = realSize + realSize) / 2;
			realsize();
		}
		item[length++] = value;
	}

	T PopBack()
	{
		T value{ item[--length] };
		if (length <= realSize / 2)
		{
			realSize = realSize - length / 2;
			realsize();
		}
		return value;
	}

	T& At(int index)
	{
		return item[index];
	}

	T& operator[] (int index)
	{
		return item[index];
	}

	Darray(const Darray<T>& array)
	{
		if (&array == this)
			return;
		if (&array == nullptr)
		{
			this->length = 0;
			this->realsize = 2;
			item = new T[realsize]{};
			return;
		}
		this->realsize = array.realsize;
		this->length = array.length;

		item = new T[realsize]{};

		for (int i = 0; i < length; i++)
		{
			item[i] = array.item[i];
		}
	}

		Darray <T> operator= (const Darray <T> arary)

		{
			if (&array == this)
				return;
			if (item)
				delete[]item;
			if (&array == nullptr)
			{
				this->length = 0;
				this->realsize = 2;
				item = new T[realsize]{};
				return;
			}
			this->realsize = array.realsize;
			this->length = array.length;

			item = new T[realsize]{};

			for (int i = 0; i < length; i++)
			{
				item[i] = array.item[i];
			}
		}


	void RandomInit(int begin, int end)
	{
		srand(time(nullptr));
		for (int i = 0; i < length; i++)
			item[i] = begin + rand() % (end - begin + 1);
	}

	void Print()
	{
		for (int i = 0; i < length; i++)
			cout << item[i] << [];
		cout << "\n";
	}



};



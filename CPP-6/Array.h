#pragma once
template <typename T> class Array
{
private:
	T* arrayPtr;
	unsigned int size;

public:
	Array(int size)
	{
		arrayPtr = new T[size];
		this->size = size;
	}
	~Array()
	{
		delete[] arrayPtr;
	}

	void changeSize(int newSize)
	{
		T* newArray = new T[newSize];
		int temp = (size > newSize) ? newSize : size;
		for (int i = 0; i < temp; i++)
		{
			newArray[i] = arrayPtr[i];
		}
		size = newSize;
		delete[] arrayPtr;
		arrayPtr = newArray;
	}

	int getSize()
	{
		return this->size;
	}

	T& operator[](int index) 
	{
		if ((index < 0) || (index >= size))
		{
			throw std::out_of_range("out of range");
		}
		return arrayPtr[index];
	}
};


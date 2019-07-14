#pragma once
#include <list>
#include <iostream>

template<typename T> class MySet
{
private:
	std::list<T> menge;

public:
	void add(T element)
	{
		menge.push_front(element);
	}

	void del(T element)
	{
		menge.remove(element);
	}

	void print()
	{
		for (T e : menge)
		{
			std::cout << e << std::endl;
		}
	}

	MySet<T> operator &&(MySet<T> mege2)
	{
		MySet<T> temp;
		for (T e : menge)
		{
			for (T e2 : mege2.menge)
			{
				if (e == e2)
				{
					temp.add(e);
				}
			}
		}
		return temp;
	}
};


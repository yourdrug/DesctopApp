#pragma once

template <typename T>
ref class myVector
{
private:

	array <T> ^data;
	size_t size;
	size_t capacity;

	void copy(const myVector<T>% other)
	{
		if (this != % other)
		{
			size = other.size;
			capacity = other.capacity;
			data = gcnew array <T>(capacity);
			for (size_t i = 0; i < size; i++)
			{
				data[i] = other.data[i];
			}
		}
	}
	void resize()
	{
		capacity *= 2;
		array<T>^ buffer = gcnew array<T>(capacity);
		for (size_t i = 0; i < size; i++)
		{
			buffer[i] = data[i];
		}
		destroy();
		//data = new T[capacity];
		data = buffer;

	}
	void destroy()
	{
		delete[] data;
	}

public:

	myVector()
	{
		size = 0;
		capacity = 8;
		data = gcnew array<T>(capacity);
	}
	myVector(const myVector<T>% other)
	{
		copy(other);
	}
	myVector<T>% operator=(const myVector<T>% other)
	{
		if (this != % other)
		{
			destroy();
			copy(other);
		}
		return *this;
	}

	myVector(const T)
	{
		size_t Size = 0;
		while (Data[Size] != NULL)
		{
			Size++;
		}
		size_t Capacity = 8;
		while (Capacity < Size)
		{
			Capacity *= 2;
		}
		size = Size;
		capacity = Capacity;
		data = gcnew T[capacity];
		for (size_t i = 0; i < size; i++)
		{
			data[i] = Data[i];
		}

	}

	size_t getSize()
	{
		return size;
	}
	size_t getCapacity()
	{
		return capacity;
	}

	int IndexOf(const T% other)
	{
		for (size_t i = 0; i < size; i++)
		{
			if (data[i] == other)
			{
				return i;
			}
			
		}
	}
	void push_back(const T% toAdd)
	{
		if (size == capacity)
		{
			resize();
		}
		data[size++] = toAdd;

	}
	void pop_back()
	{
		size--;
	}
	const bool isEmpty()
	{
		return size == 0;
	}

	T% operator[](const size_t index)
	{
		if (!(index > size))
		{
			return data[index];
		}
		
	}
	
	void removeThisIndex(const int index)
	{
		if (index < size) {
			for (int i = index; i < size - 1; i++) {
				data[i] = data[i + 1];
			}
			size--;
		}
	}

	void clear()
	{
		size = 0;
	}

	T% at(const int index)
	{
		return data[index];
	}
	/*
	void qSort(int left, int right, bool (*comp)(T, T, bool), bool up_or_down) //Быстрая сортировка
	{
		int i = left, j = right;
		T p = this->at((i + j) / 2),
			temp;

		while (i <= j)
		{
			while (comp(% (this->at(i)), % p, up_or_down)) i++;
			while (comp(% (this->at(j)), % p, !up_or_down)) j--;
			if (i <= j)
			{
				temp = this->at(i);
				this->at(i) = this->at(j);
				this->at(j) = temp;
				i++; j--;
			}
		}

		if (j > left) qSort(left, j, comp, up_or_down);
		if (i < right) qSort(i, right, comp, up_or_down);
	}
	int begin()
	{
		if (!(this->isEmpty()))
		{
			return 0;
		}
	}
	int end()
	{
		if (!(this->isEmpty()))
		{
			return --size;
		}
	}
	*/
};
#pragma once

#include <cstring>
#include <iostream>

namespace KURSWF {

	class string
	{
	private:
		int length;
		int capacity;
		char* str;

	public:
		string()
		{
			length = 0;
			str = 0;
		}
		string(const char* temp) :
			length(strlen(temp)), str(new char[length + 1])
		{

			strcpy_s(str, length + 1, temp);
		}
		string(const string& temp) :
			length(strlen(temp.str)), str(new char[length + 1])
		{
			strcpy_s(str, length + 1, temp.str);
		}

		char* allocate()
		{
			return new char[capacity];
		}

		char* reallocate()
		{
			capacity = capacity + capacity / 2 + 1;
			char* temp_str = allocate();
			strcpy_s(temp_str, capacity * sizeof(char), str);
			destroy();
			return temp_str;
		}

		char* reallocate(int new_length)
		{
			capacity = new_length;
			char* temp_str = allocate();
			strcpy_s(temp_str, capacity * sizeof(char), str);
			destroy();
			return temp_str;
		}

		void destroy()
		{
			delete[] str;
		}

		bool IsEmpty()
		{
			return str[0] == '\0' && length == 0;
		}

		int GetLength()
		{
			if (length > -1)
			{
				return length;
			}
		}
		char* c_str()
		{
			return str;
		}

		void push_back(const char element)
		{
			if (capacity <= length + 1)
			{
				str = reallocate();
			}
			str[length++] = element;
			str[length] = '\0';
		}

		//string toLower()
		//{
		//	string temp;
		//	for (int i = 0; i < length; i++)
		//	{
		//		temp += tolower(str[i]);
		//	}
		//	return temp;
		//}

		//bool StartWith(string smallString)
		//{
		//	if (smallString.GetLength() <= this->GetLength() &&
		//		strncmp(smallString.c_str(), this->c_str(), smallString.GetLength()) == 0)
		//		return true;
		//}

		operator const char* () const
		{
			return str;
		}

		string& operator=(const string temp)
		{
			length = temp.length;
			str = new char[length + 1];
			strcpy_s(str, length + 1, temp.str);
			return *this;
		}

		/*int operator-(const string& temp)
		{
			//return length - temp.length;
		}

		string& operator+=(const string& temp)
		{
			int new_length = length + temp.length;
			char* new_str = new char[new_length + 1];
			strcpy_s(new_str, new_length + 1, str);
			strcat_s(new_str, new_length + 1, temp.str);
			delete[]str;
			str = new_str;
			length = new_length;
			return *this;
		}

		string& operator+=(const char ch)
		{
			push_back(ch);
			return *this;
		}
		*/
		string& operator+(const string& temp)
		{
			int new_length = length + temp.length;
			char* new_str = new char[new_length + 1];
			strcpy_s(new_str, new_length + 1, str);
			strcat_s(new_str, new_length + 1, temp.str);
			delete[]str;
			str = new_str;
			length = new_length;
			return *this;
		}

		bool operator==(const string& temp)
		{
			return length == temp.length && strcmp(str, temp.str) == 0;
		}

		friend std::ostream& operator<<(std::ostream& out, const string& temp)
		{
			out << temp.str;
			return out;
		}

		friend std::istream& operator>>(std::istream& in, string& temp)
		{
			char* string = new char[128];
			in >> string;
			delete[]temp.str;
			temp.length = strlen(string);
			temp.str = new char[temp.length + 1];
			strcpy_s(temp.str, temp.length + 1, string);
			delete[] string;
			return in;
		}

		~string()
		{
			length = 0;
			delete[]str;
			str = 0;
		}
	};
}
#pragma once

#include "Music.h"
#include "myVector.h"

enum Access
{
	BLOCKED = -1,
	WAITING,
	SUCCESFULL
};

enum Role
{
	USER = 0,
	ADMIN,
	MAINADMIN
};


namespace KURSWF {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	ref class User
	{
	private:
		String^ login;
		String^ salt;
		String^ hash_password;
		int role; //2 - ������� �����, 1 - �����, 0 - ����
		int access;//1 - ������ ����, 0 - � ���������, -1 - ������������
	
	public:
		void SetLogin(String^ login)
		{
			this->login = login;
		}
		void SetSalt(String^ salt)
		{
			this->salt = salt;
		}
		void SetHashPassword(String^ hash_password)
		{
			this->hash_password = hash_password;
		}
		void SetRole(int role)
		{
			this->role = role;
		}
		void SetAccess(int access)
		{
			this->access = access;
		}

		String^ GetLogin()
		{
			return this->login;
		}
		String^ GetSalt ()
		{
			return this->salt;
		}
		String^ GetHashPassword()
		{
			return this->hash_password;
		}
		int GetRole()
		{
			return this->role;
		}
		int GetAccess()
		{
			return this->access;
		}

		String^ GetCorRole()
		{
			int role = GetRole();
			switch (role)
			{
			case 0: return "������������"; break;
			case 1: return "�����"; break;
			case 2: return "������� �����"; break;
			}
		}
		String^ GetCorAccess()
		{
			switch (this->GetAccess())
			{
			case -1: return "������������"; break;
			case 0: return "� ���������"; break;
			case 1: return "������ ��������"; break;
			}
		}

		void ShowMusic(DataGridView^ temp_grid, myVector <Music^>^ vec_of_music);

		void ButtonFindMusic(DataGridView^ temp_grid, String^ temp);

		void FilterMusic(String^ temp_rate, String^ temp_year, String^ temp_genre, myVector <Music^>^ first_list, myVector <Music^>^ filtred_list);

		void FindMusic(DataGridView^ temp_grid, String^ text_string);
	};
}


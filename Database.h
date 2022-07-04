#pragma once

#include <iostream>
//#include <string>
#include <fstream>
#include <sstream>
#include "Music.h"
#include "User.h"
#include "sha256.h"
#include "myVector.h"
#include "Admin.h"
#include "string.h"

namespace KURSWF {
	
	const string FILE_OF_DATA = "MyMusic.txt";
	const string FILE_OF_USERS = "MyUsers.txt";
	const int SALT_SIZE = 16; // длина соли
	const int SYMBOLS_SIZE = 62; // набор символов, из которых генерируется соль

	using namespace System;
	ref class Database
	{

	public:
		myVector<Music^>^ vec_of_music = gcnew  myVector<Music^>();
		myVector<User^>^ vec_of_user = gcnew  myVector<User^>();

		static std::string MyToString(String^ temp)
		{
			using namespace Runtime::InteropServices;
			const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(temp)).ToPointer();
			return string(ptr);
		}
		void ReadFileMusic();
		void WriteFileMusic();
		void ReadFileUser();
		void WriteFileUser();
		void WriteEndFileMusic(Music^ music_temp);
		void WriteEndFileUser(User^ user_temp);
		String^ generateSalt(int salt_size);
		std::string getSymbolsForSalt();
		String^ GetHashPass(String^ password, User^ temp);
	};

}
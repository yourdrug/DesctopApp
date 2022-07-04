#include "Database.h"

namespace KURSWF {

	void Database::ReadFileMusic()
	{
		std::ifstream file(FILE_OF_DATA, std::ios::in); // Открыли файл для чтения
		if (file.is_open())
		{
			std::string line;
			while (std::getline(file, line))
			{
				Music^ music_temp = gcnew Music();
				std::istringstream iss(line);
				std::string token;
				int i = 0;
				while (std::getline(iss, token, '\t'))
				{
					switch (i) {
					case 0:
					{
						String^ temp_name = gcnew String(token.c_str());
						music_temp->SetName(temp_name);
						break;
					}
						
					case 1:
					{
						String^ temp_songwriter = gcnew String(token.c_str());
						music_temp->SetSongwriter(temp_songwriter);
						break;
					}
						
					case 2:
					{
						String^ temp_genre = gcnew String(token.c_str());
						music_temp->SetGenre(temp_genre);
						break;
					}
						
					case 3: music_temp->SetRate(atof(token.c_str())); break;
					case 4: music_temp->SetYear(atoi(token.c_str())); break;
					}
					i++;
				}
				vec_of_music->push_back(music_temp);
			}
		}


		else
		{
			MessageBox::Show("Файл с музыкой открыть не удалось!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		file.close(); //Закрыли файл
	}

	void Database::WriteFileMusic()
	{
		std::ofstream fout(FILE_OF_DATA, std::ios::out); // Открыли файл для записи
		for (int i = 0; i < vec_of_music->getSize(); i++) {
			fout << Database::MyToString(vec_of_music[i]->GetName()) << "\t"
				<< Database::MyToString(vec_of_music[i]->GetSongwriter()) << "\t"
				<< Database::MyToString(vec_of_music[i]->GetGenre()) << "\t"
				<< vec_of_music[i]->GetRate() << "\t"
				<< vec_of_music[i]->GetYear() << "\t";
			fout << std::endl;
		}
		fout.close();
	}

	void Database::ReadFileUser()
	{
		std::ifstream file(FILE_OF_USERS, std::ios::in);
		if (file.is_open())
		{
			std::string line;
			while (std::getline(file, line))
			{
				User^ user_temp = gcnew User();
				std::istringstream iss(line);
				std::string token;
				int i = 0;
				while (std::getline(iss, token, '\t'))
				{
					switch (i) {
					case 0: { String^ temp_login = gcnew String(token.c_str());
						user_temp->SetLogin(temp_login); break;
					}
					case 1: {
						String^ temp_salt = gcnew String(token.c_str());
						user_temp->SetSalt(temp_salt); break;
					}
					case 2: {
						String^ temp_hash_password = gcnew String(token.c_str());
						user_temp->SetHashPassword(temp_hash_password); break;
					}
					case 3: user_temp->SetRole(atoi(token.c_str())); break;
					case 4: user_temp->SetAccess(atoi(token.c_str())); break;
					}
					i++;
				}
				vec_of_user->push_back(user_temp);
			}			
		}

		else
		{
			MessageBox::Show("Файл с пользователями открыть не удалось!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	void Database::WriteFileUser()
	{
		std::ofstream fout(FILE_OF_USERS, std::ios::out); // Открыли файл для записи
		for (int i = 0; i < vec_of_user->getSize(); i++) {
			fout << Database::MyToString(vec_of_user[i]->GetLogin()) << "\t"
				<< Database::MyToString(vec_of_user[i]->GetSalt()) << "\t"
				<< Database::MyToString(vec_of_user[i]->GetHashPassword()) << "\t"
				<< vec_of_user[i]->GetRole() << "\t"
				<< vec_of_user[i]->GetAccess() << "\t";
			fout << std::endl;
		}
		fout.close();
	}

	void Database::WriteEndFileMusic(Music^ music_temp)
	{
		std::ofstream fadd(FILE_OF_DATA, std::ios::app); // Открыли файл для дозаписи

		fadd << Database::MyToString(music_temp->GetName()) << "\t"
			<< Database::MyToString(music_temp->GetSongwriter()) << "\t"
			<< Database::MyToString(music_temp->GetGenre()) << "\t"
			<< music_temp->GetRate() << "\t"
			<< music_temp->GetYear() << "\t";
		fadd << std::endl;
		fadd.close();
	}

	void Database::WriteEndFileUser(User^ user_temp)
	{
		std::ofstream fadd(FILE_OF_USERS, std::ios::app); // Открыли файл для doзаписи
			fadd << Database::MyToString(user_temp->GetLogin()) << "\t"
				<< Database::MyToString(user_temp->GetSalt()) << "\t"
				<< Database::MyToString(user_temp->GetHashPassword()) << "\t"
				<< user_temp->GetRole() << "\t"
				<< user_temp->GetAccess() << "\t";
			fadd << std::endl;
			fadd.close();		
	}

	String^ Database::generateSalt(int salt_size)
	{
		std::string symbols = getSymbolsForSalt();
		srand(time(NULL));
		std::string salt;
		salt.reserve(salt_size);

		for (int i = 0; i < salt_size; i++)
		{
			salt.push_back(symbols[rand() % SYMBOLS_SIZE]);
		}
		String^ big_string_salt = gcnew String(salt.c_str());
		return big_string_salt;
	}

	std::string Database::getSymbolsForSalt()
	{
		std::string symbols;
		symbols.reserve(SYMBOLS_SIZE);
		char little_letter = 'a';
		char big_letter = 'A';
		char number = '0';
		int i = 0;
		for (int k = 0; k < 26; k++)
		{
			symbols.push_back(little_letter++);
			symbols.push_back(big_letter++);
			if (k < 10)
				symbols.push_back(number++);
		}

		return symbols;
	}

	String^ Database::GetHashPass(String^ password, User^ temp)
	{
		std::string temp_pass;
		temp_pass = sha256(sha256(Database::MyToString(password) + Database::MyToString(temp->GetSalt())) + sha256(Database::MyToString(password)));
		String^ hash_password = gcnew String(temp_pass.c_str());
		return hash_password;
	}

}
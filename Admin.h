#pragma once
#include "User.h"

namespace KURSWF {
	ref class Admin: public User
	{
	public:
		void ApplyUser(myVector <User^>^ vec_of_user, int selRowNum, myVector <User^>^ new_vec_users);

		void BlockUser(myVector <User^>^ vec_of_user, int selRowNum);

		void UnBlockUser(myVector <User^>^ vec_of_user, int selRowNum);

		void ChangeRole(myVector <User^>^ vec_of_user, int selRowNum);

		void RedactMusicGrid(DataGridView^ temp_grid, int indexOfElem, myVector <Music^>^ vec_of_music);

		void DeleteMusic(int indexOfElem, myVector <Music^>^ vec_of_music);

		void ShowUsers(DataGridView^ temp_grid, myVector <User^>^ vec_of_users);

		void FilterUsers(myVector <User^>^ list_users, myVector <User^>^ filtred_list, String^ role_text, String^ access_text);

		void MySetUser(myVector <User^>^ temp, myVector <User^>^ vec_of_user, int first_index);

		void FindUsers(DataGridView^ temp_grid, String^ text_string);

	};
}

#include "Admin.h"

namespace KURSWF {

	void Admin::ApplyUser(myVector <User^>^ vec_of_user, int selRowNum, myVector <User^>^ new_vec_users)
	{
		System::Windows::Forms::DialogResult res = MessageBox::Show("Разрешить доступ пользователю?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (res == System::Windows::Forms::DialogResult::Yes)
		{
			int temp_index = vec_of_user->IndexOf(new_vec_users[selRowNum]);
			vec_of_user[temp_index]->SetAccess(SUCCESFULL);
		}
	}

	void Admin::UnBlockUser(myVector <User^>^ vec_of_user, int selRowNum)
	{
		System::Windows::Forms::DialogResult res = MessageBox::Show("Разблокировать пользователя?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (res == System::Windows::Forms::DialogResult::Yes)
		{
			if (vec_of_user[selRowNum]->GetRole() == MAINADMIN)
			{
				MessageBox::Show("Не хватает прав для измения!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			if (vec_of_user[selRowNum]->GetRole() == ADMIN)
			{
				if (GetRole() != MAINADMIN)
				{
					MessageBox::Show("Не хватает прав для измения!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}

				else
				{
					vec_of_user[selRowNum]->SetAccess(SUCCESFULL);
				}
			}

			if (vec_of_user[selRowNum]->GetRole() == USER)
			{
				vec_of_user[selRowNum]->SetAccess(SUCCESFULL);
			}

		}
	}

	void Admin::BlockUser(myVector <User^>^ vec_of_user, int selRowNum)
	{
		System::Windows::Forms::DialogResult res = MessageBox::Show("Заблокировать пользователя?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (res == System::Windows::Forms::DialogResult::Yes)
		{
			if (vec_of_user[selRowNum]->GetRole() == MAINADMIN)
			{
				MessageBox::Show("Не хватает прав для измения!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			if (vec_of_user[selRowNum]->GetRole() == ADMIN)
			{
				if (GetRole() != MAINADMIN)
				{
					MessageBox::Show("Не хватает прав для измения!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				else
				{
					vec_of_user[selRowNum]->SetAccess(BLOCKED);
				}
			}

			if (vec_of_user[selRowNum]->GetRole() == USER)
			{
				vec_of_user[selRowNum]->SetAccess(BLOCKED);
			}
		}
	}

	void Admin::ChangeRole(myVector <User^>^ vec_of_user, int selRowNum)
		{
			if (GetRole() == MAINADMIN)
			{
				if (vec_of_user[selRowNum]->GetRole() == ADMIN)
				{
					System::Windows::Forms::DialogResult mainadmin_res = MessageBox::Show("Назначить этого админа пользователем?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (mainadmin_res == System::Windows::Forms::DialogResult::Yes)
					{
						vec_of_user[selRowNum]->SetRole(USER);
					}
				}

				else if (vec_of_user[selRowNum]->GetRole() == USER)
				{
					System::Windows::Forms::DialogResult res = MessageBox::Show("Назначить этого пользователя админом?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (res == System::Windows::Forms::DialogResult::Yes)
					{

						vec_of_user[selRowNum]->SetRole(ADMIN);
					}
				}
			}

			if (GetRole() == ADMIN)
			{
				if (vec_of_user[selRowNum]->GetRole() == USER)
				{
					System::Windows::Forms::DialogResult res = MessageBox::Show("Назначить этого пользователя админом?", "Внимание", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
					if (res == System::Windows::Forms::DialogResult::Yes)
					{
						vec_of_user[selRowNum]->SetRole(ADMIN);
					}
				}

				else if (vec_of_user[selRowNum]->GetRole() == (ADMIN || MAINADMIN))
				{

					MessageBox::Show("Не хватает прав для изменений!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}

			else if (GetLogin() == vec_of_user[selRowNum]->GetLogin())
			{

				MessageBox::Show("Вы не можете изменять свою же запись!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

	void Admin::RedactMusicGrid(DataGridView^ temp_grid, int indexOfElem, myVector <Music^>^ vec_of_music)
		{
			vec_of_music->at(indexOfElem)->SetName(Convert::ToString(temp_grid->Rows[indexOfElem]->Cells[0]->Value));
			vec_of_music->at(indexOfElem)->SetSongwriter(Convert::ToString(temp_grid->Rows[indexOfElem]->Cells[1]->Value));
			vec_of_music->at(indexOfElem)->SetGenre(Convert::ToString(temp_grid->Rows[indexOfElem]->Cells[2]->Value));
			vec_of_music->at(indexOfElem)->SetRate(Convert::ToDouble(temp_grid->Rows[indexOfElem]->Cells[3]->Value));
			vec_of_music->at(indexOfElem)->SetYear(Convert::ToInt64(temp_grid->Rows[indexOfElem]->Cells[4]->Value));
		}

	void Admin::DeleteMusic(int indexOfElem, myVector <Music^>^ vec_of_music)
		{
			vec_of_music->removeThisIndex(indexOfElem);
		}

	void Admin::ShowUsers(DataGridView^ temp_grid, myVector <User^>^ vec_of_users)
		{
			temp_grid->Rows->Clear();
			temp_grid->Columns->Clear();

			temp_grid->Columns->Add("ColumnLogin", "Логин");
			temp_grid->Columns->Add("ColumnRole", "Роль");
			temp_grid->Columns->Add("ColumnAccess", "Доступ");

			temp_grid->TopLeftHeaderCell->Value = "Номер";
			temp_grid->ColumnCount = 3;
			temp_grid->RowCount = vec_of_users->getSize();

			for (int i = 0; i < temp_grid->RowCount; i++)
			{
				temp_grid->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
				temp_grid->Rows[i]->Cells[0]->Value = vec_of_users[i]->GetLogin();
				temp_grid->Rows[i]->Cells[1]->Value = vec_of_users[i]->GetCorRole();
				temp_grid->Rows[i]->Cells[2]->Value = vec_of_users[i]->GetCorAccess();
				for (int j = 0; j < temp_grid->ColumnCount; j++)
				{
					temp_grid->Rows[i]->Cells[j]->ReadOnly = true;
				}
			}

			temp_grid->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
			temp_grid->AutoResizeColumns();
			temp_grid->ClearSelection();

		}

	void Admin::FindUsers(DataGridView^ temp_grid, String^ text_string)
	{
		for (int i = 0; i < temp_grid->Rows->Count; i++)
		{
			for (int j = 0; j < temp_grid->Columns->Count; j++)
			{
				String^ temp_string = gcnew String(temp_grid->Rows[i]->Cells[j]->Value->ToString());
				if (temp_string->ToLower()->StartsWith(text_string->ToLower()) && text_string != "")
				{
					temp_grid->Rows[i]->Cells[j]->Style->BackColor = Color::CornflowerBlue;
				}

				else
				{
					temp_grid->Rows[i]->Cells[j]->Style->BackColor = Color::White;
				}
			}
		}
	}

	void Admin::FilterUsers(myVector <User^>^ list_users, myVector <User^>^ filtred_list, String^ role_text, String^ access_text)
		{
			if (access_text != "" && role_text != "")
			{
				for (int i = 0; i < list_users->getSize(); i++)
				{
					if (list_users[i]->GetCorAccess() == access_text && list_users[i]->GetCorRole() == role_text)
					{
						filtred_list->push_back(list_users[i]);
					}
				}
			}

			else if (access_text == "" && role_text != "")
			{
				for (int i = 0; i < list_users->getSize(); i++)
				{
					if (list_users[i]->GetCorRole() == role_text)
					{
						filtred_list->push_back(list_users[i]);
					}
				}
			}

			else if (access_text != "" && role_text == "")
			{
				for (int i = 0; i < list_users->getSize(); i++)
				{
					if (list_users[i]->GetCorAccess() == access_text)
					{
						filtred_list->push_back(list_users[i]);
					}
				}
			}

			else
			{
				MessageBox::Show("Введите хотя бы один параметр!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}


		}

	void Admin::MySetUser(myVector <User^>^ temp, myVector <User^>^ vec_of_user, int first_index)
		{
			temp[first_index] = gcnew User();
			temp[first_index]->SetLogin(vec_of_user[first_index]->GetLogin());
			temp[first_index]->SetSalt(vec_of_user[first_index]->GetSalt());
			temp[first_index]->SetHashPassword(vec_of_user[first_index]->GetHashPassword());
			temp[first_index]->SetRole(vec_of_user[first_index]->GetRole());
			temp[first_index]->SetAccess(vec_of_user[first_index]->GetAccess());
		}
}
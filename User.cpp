#include "User.h"

namespace KURSWF {
	
	void User::ShowMusic(DataGridView^ temp_grid, myVector <Music^>^ vec_of_music)
	{
		temp_grid->Rows->Clear();
		temp_grid->Columns->Clear();

		temp_grid->Columns->Add("ColumnName", "Название");
		temp_grid->Columns->Add("ColumnSongwriter", "Исполнитель");
		temp_grid->Columns->Add("ColumnGenre", "Жанр");
		temp_grid->Columns->Add("ColumnRate", "Рейтинг");
		temp_grid->Columns->Add("ColumnYear", "Год выпуска");

		temp_grid->TopLeftHeaderCell->Value = "Номер";
		temp_grid->ColumnCount = 5;
		temp_grid->RowCount = vec_of_music->getSize();

		for (int i = 0; i < temp_grid->RowCount; i++)
		{
			temp_grid->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			temp_grid->Rows[i]->Cells[0]->Value = vec_of_music->at(i)->GetName();
			temp_grid->Rows[i]->Cells[1]->Value = vec_of_music->at(i)->GetSongwriter();
			temp_grid->Rows[i]->Cells[2]->Value = vec_of_music->at(i)->GetGenre();
			temp_grid->Rows[i]->Cells[3]->Value = vec_of_music->at(i)->GetRate();
			temp_grid->Rows[i]->Cells[4]->Value = vec_of_music->at(i)->GetYear();
		}

		for (int i = 0; i < temp_grid->RowCount; i++)
		{
			for (int j = 0; j < temp_grid->ColumnCount; j++)
			{
				temp_grid->Rows[i]->Cells[j]->ReadOnly = true;
			}
		}
		temp_grid->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		temp_grid->AutoResizeColumns();
		temp_grid->ClearSelection();
	}

	void User::FilterMusic(String^ temp_rate, String^ temp_year, String^ temp_genre, myVector <Music^>^ first_list, myVector <Music^>^ filtred_list)
	{

		double rate;
		if (temp_rate != "" && temp_rate != "Введите рейтинг")
		{
			rate = Convert::ToDouble(temp_rate);
		}
		int year;
		if (temp_year != "")
		{
			year = Convert::ToInt64(temp_year);
		}
		if (temp_rate != "" && temp_year != "" && temp_genre != "")
		{
			for (int i = 0; i < first_list->getSize(); i++)
				if (first_list[i]->GetGenre() == temp_genre && first_list[i]->GetRate() == rate && first_list[i]->GetYear() == year)
				{
					filtred_list->push_back(first_list[i]);
				}
		}

		else if (temp_rate == "" && temp_year != "" && temp_genre != "")
		{
			for (int i = 0; i < first_list->getSize(); i++)
				if (first_list[i]->GetGenre() == temp_genre && first_list[i]->GetYear() == year)
				{
					filtred_list->push_back(first_list[i]);
				}
		}

		else if (temp_year == "" && temp_genre != "" && temp_rate != "")
		{
			for (int i = 0; i < first_list->getSize(); i++)
				if (first_list[i]->GetGenre() == temp_genre && first_list[i]->GetRate() == rate)
				{
					filtred_list->push_back(first_list[i]);
				}
		}

		else if (temp_genre == "" && temp_rate != "" && temp_year != "")
		{
			for (int i = 0; i < first_list->getSize(); i++)
				if (first_list[i]->GetRate() == rate && first_list[i]->GetYear() == year)
				{
					filtred_list->push_back(first_list[i]);
				}
		}

		else if (temp_rate == "" && temp_year == "" && temp_genre != "")
		{
			for (int i = 0; i < first_list->getSize(); i++)
				if (first_list[i]->GetGenre() == temp_genre)
				{
					filtred_list->push_back(first_list[i]);
				}

		}

		else if (temp_rate == "" && temp_genre == "" && temp_year != "")
		{
			for (int i = 0; i < first_list->getSize(); i++)
				if (first_list[i]->GetYear() == year)
				{
					filtred_list->push_back(first_list[i]);
				}
		}

		else if (temp_year == "" && temp_genre == "" && temp_rate != "")
		{
			for (int i = 0; i < first_list->getSize(); i++)
				if (first_list[i]->GetRate() == rate)
				{
					filtred_list->push_back(first_list[i]);
				}
		}

		else
		{
			MessageBox::Show("Введите хотя бы один параметр!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	void User::ButtonFindMusic(DataGridView^ temp_grid, String^ temp)
	{
		String^ string_num = gcnew String(temp);
		int numberOfRedatc;
		if (temp != "")
		{
			numberOfRedatc = Convert::ToInt64(string_num);
			numberOfRedatc--;
		}
		
		try {
			for (int i = 0; i < temp_grid->RowCount; i++)
			{
				for (int j = 0; j < temp_grid->ColumnCount; j++)
				{
					temp_grid->Rows[numberOfRedatc]->ReadOnly = false;
				}
			}

			temp_grid->Rows[numberOfRedatc]->DefaultCellStyle->BackColor = Color::CornflowerBlue;

		}
		catch (...)
		{
			MessageBox::Show("Записи с таким номером не существует!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	void User::FindMusic(DataGridView^ temp_grid, String^ text_string)
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
};
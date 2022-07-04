#include "MenuForm.h"

namespace KURSWF
{
	void MenuForm::buttonMenuAcc_Click(System::Object^ sender, System::EventArgs^ e) {
		AccountsMenu^ temp = gcnew AccountsMenu(myDataBase, thisAdmin);
		temp->Owner = this;
		temp->Show();
		MenuForm::Hide();
	}

	void MenuForm::buttonAddMusic_Click(System::Object^ sender, System::EventArgs^ e) {
		myVector<Music^>^ temp = gcnew myVector<Music^>(*(myDataBase->vec_of_music));
		music_stack->Push(temp);

		AddMusic^ temp_form = gcnew AddMusic(myDataBase);
		temp_form->Show();
		temp_form->Owner = this;
		MenuForm::Hide();
	}

	void MenuForm::buttonReadct_Click(System::Object^ sender, System::EventArgs^ e) {

	inputNumber->Visible = true;
	Findbutton->Visible = true;
	saveButton->Visible = true;

	comboBoxGenre->Visible = false;
	buttonApply->Visible = false;
	textBoxRate->Visible = false;
	textBoxYear->Visible = false;
	saveButton->Text = "Сохранить";
	flag = true;
	inputNumber->Text = "";
	isRedact = true;
	MessageBox::Show("Введите номер записи, которую хотите отредактировать и нажмите найти!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	
	void MenuForm::refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		thisAdmin->ShowMusic(dataGridView1, myDataBase->vec_of_music);
}
	
	void MenuForm::Findbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		thisAdmin->ButtonFindMusic(dataGridView1, inputNumber->Text);
}
	
	void MenuForm::onlyNumber(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (flag)
	{
		char number = e->KeyChar;
		if (!Char::IsDigit(number) && number != 8)
		{
			e->Handled = true;
		}
	}
}
	
	void MenuForm::saveButton_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ string_num = gcnew String(inputNumber->Text);
	int indexOfElem;
	if (string_num != "") {
		indexOfElem = Convert::ToInt64(string_num);
		indexOfElem--;
		inputNumber->Text = "";
		if (isRedact) {
			myVector<Music^>^ temp = gcnew myVector<Music^>(*(myDataBase->vec_of_music));
			for (int i = 0; i < temp->getSize(); i++)
			{
				temp[i] = gcnew Music();
				temp[i]->SetMusic(myDataBase->vec_of_music[i]);
			}
			music_stack->Push(temp);
			thisAdmin->RedactMusicGrid(dataGridView1, indexOfElem, myDataBase->vec_of_music);
		}
		else
		{
			myVector<Music^>^ temp = gcnew myVector<Music^>(*(myDataBase->vec_of_music));
			music_stack->Push(temp);
			thisAdmin->DeleteMusic(indexOfElem, myDataBase->vec_of_music);
		}
		myDataBase->WriteFileMusic();
		thisAdmin->ShowMusic(dataGridView1, myDataBase->vec_of_music);
	}

	else
	{
		MessageBox::Show("Введите номер записи", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
	
	void MenuForm::buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {

	inputNumber->Visible = true;
	Findbutton->Visible = false;
	saveButton->Visible = false;
	flag = false;

	comboBoxGenre->Visible = false;
	buttonApply->Visible = false;
	textBoxRate->Visible = false;
	textBoxYear->Visible = false;

}
	
	void MenuForm::inputNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!flag)
	{
		myVector<Music^>^ search_vec = gcnew myVector<Music^>();
		String^ text_string = gcnew String(inputNumber->Text);
		if (text_string != "")
		{
			thisAdmin->FindMusic(dataGridView1, text_string);
		}

		else
		{
			thisAdmin->ShowMusic(dataGridView1, myDataBase->vec_of_music);
		}
	}
}
	
	void MenuForm::buttonFilter_Click(System::Object^ sender, System::EventArgs^ e) {
	inputNumber->Visible = false;
	Findbutton->Visible = false;
	saveButton->Visible = false;

	comboBoxGenre->Visible = true;
	buttonApply->Visible = true;
	textBoxRate->Visible = true;
	textBoxYear->Visible = true;
}
	
	void MenuForm::buttonDel_Click(System::Object^ sender, System::EventArgs^ e) {


	inputNumber->Visible = true;
	Findbutton->Visible = false;
	saveButton->Visible = true;

	comboBoxGenre->Visible = false;
	buttonApply->Visible = false;
	textBoxRate->Visible = false;
	textBoxYear->Visible = false;
	flag = true;
	isRedact = false;
	saveButton->Text = "Удалить";
}
	
	void MenuForm::MenuForm_Activated(System::Object^ sender, System::EventArgs^ e) {
	thisAdmin->ShowMusic(dataGridView1, myDataBase->vec_of_music);
}
	
	void MenuForm::buttonApply_Click(System::Object^ sender, System::EventArgs^ e) {

		if (comboBoxGenre->Text == "Выберете жанр")
		{
			comboBoxGenre->Text = "";
		}
		if (textBoxYear->Text == "Введите год")
		{
			textBoxYear->Text = "";
		}
		if (textBoxRate->Text == "Введите рейтинг")
		{
			textBoxRate->Text = "";
		}

	myVector <Music^>^ filtred_list = gcnew myVector <Music^>();
	thisAdmin->FilterMusic(textBoxRate->Text, textBoxYear->Text, comboBoxGenre->Text, myDataBase->vec_of_music, filtred_list);
	if (filtred_list->getSize() > 0)
	{
		thisAdmin->ShowMusic(dataGridView1, filtred_list);
	}

	else if(comboBoxGenre->Text != "" || textBoxRate->Text != "" || textBoxYear->Text != "")
	{
		MessageBox::Show("Совпадений не найдено!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	comboBoxGenre->ForeColor = Color::Gray;
	textBoxRate->ForeColor = Color::Gray;
	textBoxYear->ForeColor = Color::Gray;

	comboBoxGenre->Text = "Выберете жанр";
	textBoxRate->Text = "Введите рейтинг";
	textBoxYear->Text = "Введите год";
}
	
	void MenuForm::textBoxRate_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	textBoxRate->MaxLength = 3;
	char number = e->KeyChar;
	if (!Char::IsDigit(number) && number != 8 && number != 44)
	{
		e->Handled = true;
	}
}
	
	void MenuForm::textBoxYear_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if (!Char::IsDigit(number) && number != 8)
	{
		e->Handled = true;
	}
}

	void MenuForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		myDataBase->WriteFileMusic();
		Owner->Show();
		this->Close();
	}

	void MenuForm::comboBoxGenre_Enter(System::Object^ sender, System::EventArgs^ e) {
		comboBoxGenre->Text = "";
		comboBoxGenre->ForeColor = Color::Black;
	}

	void MenuForm::textBoxRate_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBoxRate->Text = "";
		textBoxRate->ForeColor = Color::Black;
	}

	void MenuForm::textBoxYear_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBoxYear->Text = "";
		textBoxYear->ForeColor = Color::Black;
	}

	void MenuForm::pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!music_stack->isEmpty())
		{
			myDataBase->vec_of_music = music_stack->Pop();
			thisAdmin->ShowMusic(dataGridView1, myDataBase->vec_of_music);
		}

		else
		{
			MessageBox::Show("Стек пуст", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	void MenuForm::pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
		myDataBase->WriteFileMusic();
	}
};

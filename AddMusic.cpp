#include "AddMusic.h"


namespace KURSWF {

	void AddMusic::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		if (songName->Text == "")
		{
			MessageBox::Show("¬ведите название песни!", "¬нимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else if (fieldSongwriter->Text == "")
		{
			MessageBox::Show("¬ведите исполнител€ песни!", "¬нимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else if (comboBoxGenre->Text == "")
		{
			MessageBox::Show("¬ведите жанр песни или выберете из списка!", "¬нимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else if (textBoxYear->Text == "")
		{
			MessageBox::Show("¬ведите год выпуска песни!", "¬нимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else if (Convert::ToInt64(textBoxYear->Text) < 1800)
		{
			MessageBox::Show("¬ведите год выпуска песни!", "¬нимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else
		{
			Music^ temp = gcnew Music();
			temp->SetName(songName->Text);
			temp->SetSongwriter(fieldSongwriter->Text);
			temp->SetGenre(comboBoxGenre->Text);
			temp->SetRate(Convert::ToDouble(trackBarRate->Value) / 10);
			temp->SetYear(Convert::ToInt32(textBoxYear->Text));
			myDataBase->vec_of_music->push_back(temp);
			myDataBase->WriteEndFileMusic(temp);

			Owner->Show();
			this->Close();

		}

	}

	void AddMusic::trackBarRate_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label7->Text = Convert::ToString(Convert::ToDouble(trackBarRate->Value) / 10);
	}

	void AddMusic::onlyNumbers(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		textBoxYear->MaxLength = 4;
		char number = e->KeyChar;

		if (!Char::IsDigit(number) && number != 8)
		{
			e->Handled = true;
		}
	}
}

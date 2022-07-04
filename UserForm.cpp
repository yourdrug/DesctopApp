#include "UserForm.h"

namespace KURSWF
{
    void UserForm::buttonSort_Click(System::Object^ sender, System::EventArgs^ e) {
        inputText->Visible = false;
        comboBoxGenre->Visible = false;
        textBoxRate->Visible = false;
        textBoxYear->Visible = false;
        buttonApply->Visible = false;
    }

    void UserForm::buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
        inputText->Visible = true;
        comboBoxGenre->Visible = false;
        textBoxRate->Visible = false;
        textBoxYear->Visible = false;
        buttonApply->Visible = false;
    }

    void UserForm::buttonFilter_Click(System::Object^ sender, System::EventArgs^ e) {
        comboBoxGenre->Visible = true;
        textBoxRate->Visible = true;
        textBoxYear->Visible = true;
        buttonApply->Visible = true;
        inputText->Visible = false;
    }

    void UserForm::buttonAddMusic_Click(System::Object^ sender, System::EventArgs^ e) {
        myVector<Music^>^ temp = gcnew myVector<Music^>(*(myDatabase->vec_of_music));
        music_stack->Push(temp);
        AddMusic^ f = gcnew AddMusic(myDatabase);
        f->Owner = this;
        f->Show();
        UserForm::Hide();

    }

    void UserForm::buttonApply_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
        thisUser->FilterMusic(textBoxRate->Text, textBoxYear->Text, comboBoxGenre->Text, myDatabase->vec_of_music, filtred_list);
        if (filtred_list->getSize() > 0)
        {
            thisUser->ShowMusic(dataGridViewMus, filtred_list);
        }
        else
        {
            MessageBox::Show("Нет совпадений!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }

        comboBoxGenre->ForeColor = Color::Gray;
        textBoxRate->ForeColor = Color::Gray;
        textBoxYear->ForeColor = Color::Gray;

        comboBoxGenre->Text = "Выберете жанр";
        textBoxRate->Text = "Введите рейтинг";
        textBoxYear->Text = "Введите год";
    }

    void UserForm::textBoxRate_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        textBoxRate->MaxLength = 3;
        char number = e->KeyChar;
        if (!Char::IsDigit(number) && number != 8 && number != 44)
        {
            e->Handled = true;
        }
    }

    void UserForm::textBoxYear_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        char number = e->KeyChar;
        if (!Char::IsDigit(number) && number != 8)
        {
            e->Handled = true;
        }
    }

    void UserForm::refresh_Click(System::Object^ sender, System::EventArgs^ e) {
        thisUser->ShowMusic(dataGridViewMus, myDatabase->vec_of_music);
    }

    void UserForm::inputText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        myVector<Music^>^ search_vec = gcnew myVector<Music^>();
        String^ text_string = gcnew String(inputText->Text);
        if (text_string != "")
        {
            thisUser->FindMusic(dataGridViewMus, text_string);
        }

        else
        {
            thisUser->ShowMusic(dataGridViewMus, myDatabase->vec_of_music);
        }

    }

    void UserForm::UserForm_Activated(System::Object^ sender, System::EventArgs^ e) {
        thisUser->ShowMusic(dataGridViewMus, myDatabase->vec_of_music);
    }

    void UserForm::pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
        myDatabase->WriteFileMusic();
    }

    void UserForm::pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!music_stack->isEmpty())
        {
            myDatabase->vec_of_music = music_stack->Pop();
            thisUser->ShowMusic(dataGridViewMus, myDatabase->vec_of_music);
        }

        else
        {
            MessageBox::Show("Стек пуст", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    }

    void UserForm::comboBoxGenre_Enter(System::Object^ sender, System::EventArgs^ e) {
        comboBoxGenre->Text = "";
        comboBoxGenre->ForeColor = Color::Black;
    }

    void UserForm::textBoxRate_Enter(System::Object^ sender, System::EventArgs^ e) {
        textBoxRate->Text = "";
        textBoxRate->ForeColor = Color::Black;
    }

    void UserForm::textBoxYear_Enter(System::Object^ sender, System::EventArgs^ e) {
        textBoxYear->Text = "";
        textBoxYear->ForeColor = Color::Black;

    }

    void UserForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
        Owner->Show();
        this->Close();
    }

}
#include "CheckIn.h"

namespace KURSWF
{
	void CheckIn::buttonCheckIn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ temp_login = gcnew String(idField->Text);
		if (Auth::isLoginBusy(temp_login, myDatabase))
		{
			MessageBox::Show("Данное ID уже занято!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else if (temp_login == "" /* && temp_login->IsNullOrWhiteSpace(idField->Text)*/)
		{
			MessageBox::Show("Введите логин!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else if (field_pass->Text->Length < 4)
		{
			MessageBox::Show("Пароль должен быть от 4 символов!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (field_pass->Text != textBox1->Text)
		{
			MessageBox::Show("Пароли должны совпадать!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else {
			Auth::CheckIn(myDatabase, temp_login, field_pass->Text);
			MessageBox::Show("Ваш аккаунт добавлен на рассмотрение!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Owner->Show();
			this->Close();
		}
	}
}
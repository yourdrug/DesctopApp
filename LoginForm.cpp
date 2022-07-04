#include "LoginForm.h"
#include <Windows.h>
using namespace KURSWF; // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LoginForm);
	return 0;
}

void LoginForm::buttonLogIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	{
		if (Auth::LogIn(myDatabase, loginField->Text, textBox4->Text))
		{
			thisUser = Auth::SetUser(myDatabase, loginField->Text);
			if (Auth::isGetAccess(thisUser) == SUCCESFULL)
			{
				if (Auth::isAdmin(thisUser))
				{
					thisAdmin = Auth::SetAdmin(myDatabase, loginField->Text);
					MenuForm^ f2 = gcnew MenuForm(thisAdmin, myDatabase);
					f2->Show();
					f2->Owner = this;
					LoginForm::Hide();
					loginField->Text = "";
					textBox4->Text = "";
				}

				else
				{
					UserForm^ f1 = gcnew UserForm(thisUser, myDatabase);
					f1->Show();
					f1->Owner = this;
					LoginForm::Hide();
					loginField->Text = "";
					textBox4->Text = "";
				}
			}
			else if (Auth::isGetAccess(thisUser) == WAITING)
			{
				MessageBox::Show("Ваша запись еще не одобрена!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			else if (Auth::isGetAccess(thisUser) == BLOCKED)
			{
				MessageBox::Show("Ваша запись заблокирована!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		else
		{
			MessageBox::Show("Неверный логин или пароль!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}


	}

}

void LoginForm::buttonCheckIn_Click(System::Object^ sender, System::EventArgs^ e) {

	CheckIn^ form = gcnew CheckIn(myDatabase);
	form->Show();
	form->Owner = this;
	LoginForm::Hide();

}

void LoginForm::textBox4_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		buttonLogIn->PerformClick();
	}
}
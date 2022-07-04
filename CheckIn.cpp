#include "CheckIn.h"

namespace KURSWF
{
	void CheckIn::buttonCheckIn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ temp_login = gcnew String(idField->Text);
		if (Auth::isLoginBusy(temp_login, myDatabase))
		{
			MessageBox::Show("������ ID ��� ������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else if (temp_login == "" /* && temp_login->IsNullOrWhiteSpace(idField->Text)*/)
		{
			MessageBox::Show("������� �����!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else if (field_pass->Text->Length < 4)
		{
			MessageBox::Show("������ ������ ���� �� 4 ��������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (field_pass->Text != textBox1->Text)
		{
			MessageBox::Show("������ ������ ���������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else {
			Auth::CheckIn(myDatabase, temp_login, field_pass->Text);
			MessageBox::Show("��� ������� �������� �� ������������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Owner->Show();
			this->Close();
		}
	}
}
#include "AccountsMenu.h"

namespace KURSWF
{
    void AccountsMenu::refresh_Click(System::Object^ sender, System::EventArgs^ e)
    {
        thisAdmin->ShowUsers(dataGridViewAcc, myDataBase->vec_of_user);
    }

    void AccountsMenu::buttonApplyUser_Click(System::Object^ sender, System::EventArgs^ e)
    {
        apply_user = true;

        comboBoxAccess->Visible = false;
        comboBoxRole->Visible = false;
        search_textBox->Visible = false;
        buttonApply->Visible = false;       
        unblock_user = false;
        block_user = false;
        change_role = false;
       
        new_vec_users->clear();
        for (int i = 0; i < myDataBase->vec_of_user->getSize(); i++)
        {
            
            if (myDataBase->vec_of_user[i]->GetAccess() == 0)
            {
                new_vec_users->push_back(myDataBase->vec_of_user[i]);
            }
        }

        if (new_vec_users->getSize() == 0)
        {
            MessageBox::Show("Новых заявок нет.", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
        else
        {
            thisAdmin->ShowUsers(dataGridViewAcc, new_vec_users);
            MessageBox::Show("Нажмите на ячейку доступа пользователя для изменения.", "Инструкция", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    }
    void AccountsMenu::buttonBlock_Click(System::Object^ sender, System::EventArgs^ e) {

        block_user = true;

        comboBoxAccess->Visible = false;
        comboBoxRole->Visible = false;
        search_textBox->Visible = false;
        buttonApply->Visible = false;
        unblock_user = false;
        apply_user = false;
        change_role = false;

        MessageBox::Show("Нажмите на пользователя, чтобы заблокировать его.", "Инструкция", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    
    void AccountsMenu::buttonChangeRole_Click(System::Object^ sender, System::EventArgs^ e) {

        change_role = true;
        
        search_textBox->Visible = false;
        buttonApply->Visible = false;
        comboBoxAccess->Visible = false;
        comboBoxRole->Visible = false;
        unblock_user = false;
        apply_user = false;
        block_user = false;

        MessageBox::Show("Нажмите на пользователя, чтоб поменять его роль!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }

    void AccountsMenu::buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
        search_textBox->Visible = true;
        comboBoxAccess->Visible = false;
        comboBoxRole->Visible = false;
        buttonApply->Visible = false;
    }
    void AccountsMenu::buttonFilter_Click(System::Object^ sender, System::EventArgs^ e) {
        search_textBox->Visible = false;
        comboBoxAccess->Visible = true;        
        comboBoxRole->Visible = true;
        buttonApply->Visible = true;
    }
    void AccountsMenu::search_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        String^ text_string = gcnew String(search_textBox->Text);
        thisAdmin->FindMusic(dataGridViewAcc, text_string);
    }
    void AccountsMenu::buttonApply_Click(System::Object^ sender, System::EventArgs^ e) {
        myVector <User^>^ filtred_list = gcnew myVector <User^>();
        thisAdmin->FilterUsers(myDataBase->vec_of_user, filtred_list, comboBoxRole->Text, comboBoxAccess->Text);
        thisAdmin->ShowUsers(dataGridViewAcc, filtred_list);
        if (filtred_list->getSize() == 0)
        {
            MessageBox::Show("Не найдена ни одна запись!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    }

    void AccountsMenu::buttonUnblocked_Click(System::Object^ sender, System::EventArgs^ e) {



        unblock_user = true;

        comboBoxAccess->Visible = false;
        comboBoxRole->Visible = false;
        search_textBox->Visible = false;
        buttonApply->Visible = false;        
        apply_user = false;
        block_user = false;
        change_role = false;

        MessageBox::Show("Нажмите на пользователя,чтоб разблокировать его", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    void AccountsMenu::dataGridViewAcc_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
    {
        int selRowNum = dataGridViewAcc->CurrentCell->RowIndex;
        if (apply_user)
        {           
            myVector<User^>^ temp = gcnew myVector<User^>(*(myDataBase->vec_of_user));
            int temp_index = myDataBase->vec_of_user->IndexOf(new_vec_users[selRowNum]);

            for (int i = 0; i < temp->getSize(); i++)
            {
                thisAdmin->MySetUser(temp, myDataBase->vec_of_user, i);
            }
            //thisAdmin->MySetUser(temp, myDataBase->vec_of_user, temp_index, selRowNum);
            user_stack->Push(temp);

            thisAdmin->ApplyUser(myDataBase->vec_of_user, selRowNum, new_vec_users);
            thisAdmin->ShowUsers(dataGridViewAcc, myDataBase->vec_of_user);
            apply_user = false;
        }

        if (block_user)
        {
            myVector<User^>^ temp = gcnew myVector<User^>(*(myDataBase->vec_of_user));

            for (int i = 0; i < temp->getSize(); i++)
            {
                thisAdmin->MySetUser(temp, myDataBase->vec_of_user, i);
            }
            
            user_stack->Push(temp);
            thisAdmin->BlockUser(myDataBase->vec_of_user, selRowNum);
            thisAdmin->ShowUsers(dataGridViewAcc, myDataBase->vec_of_user);
            block_user = false;
        }

        if (unblock_user)
        {
            myVector<User^>^ temp = gcnew myVector<User^>(*(myDataBase->vec_of_user));

            for (int i = 0; i < temp->getSize(); i++)
            {
                thisAdmin->MySetUser(temp, myDataBase->vec_of_user, i);
            }

            user_stack->Push(temp);
            thisAdmin->UnBlockUser(myDataBase->vec_of_user, selRowNum);
            thisAdmin->ShowUsers(dataGridViewAcc, myDataBase->vec_of_user);
            unblock_user = false;
        }

        if (change_role)
        {
            myVector<User^>^ temp = gcnew myVector<User^>(*(myDataBase->vec_of_user));

            for (int i = 0; i < temp->getSize(); i++)
            {
                thisAdmin->MySetUser(temp, myDataBase->vec_of_user, i);
            }

            user_stack->Push(temp);
            thisAdmin->ChangeRole(myDataBase->vec_of_user, selRowNum);
            thisAdmin->ShowUsers(dataGridViewAcc, myDataBase->vec_of_user);
            change_role = false;
        }

    }
}
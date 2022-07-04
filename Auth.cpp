#include "Auth.h"

namespace KURSWF {

	User^ Auth::SetUser(Database^ db, String^ login)
	{
		User^ signed_user = gcnew User();
		for (int i = 0; i < db->vec_of_user->getSize(); i++)
		{
			if (db->vec_of_user[i]->GetLogin() == login)
			{
				signed_user->SetLogin(login);
				signed_user->SetAccess(db->vec_of_user[i]->GetAccess());
				signed_user->SetRole(db->vec_of_user[i]->GetRole());
				return signed_user;
			}
		}
	}

	Admin^ Auth::SetAdmin(Database^ db, String^ login)
	{
		Admin^ signed_user = gcnew Admin();
		for (int i = 0; i < db->vec_of_user->getSize(); i++)
		{
			if (db->vec_of_user[i]->GetLogin() == login)
			{
				signed_user->SetLogin(login);
				signed_user->SetAccess(db->vec_of_user[i]->GetAccess());
				signed_user->SetRole(db->vec_of_user[i]->GetRole());
				return signed_user;
			}
		}
	}

	bool Auth::LogIn(Database^ db, String^ login, String^ password)
	{
		for (int i = 0; i < db->vec_of_user->getSize(); i++)
		{
			if (db->vec_of_user[i]->GetLogin() == login)
			{
				if (db->GetHashPass(password, db->vec_of_user[i]) == db->vec_of_user[i]->GetHashPassword())
				{
					return true;
				}
			}
		}
		return false;
	}

	bool Auth::isAdmin(User^ temp)
	{
		if (temp->GetRole() == ADMIN || temp->GetRole() == MAINADMIN)
		{
			return true;
		}
	}

	int Auth::isGetAccess(User^ temp)
	{
		if (temp->GetAccess() == SUCCESFULL)
		{
			return SUCCESFULL;
		}

		if (temp->GetAccess() == BLOCKED)
		{
			return BLOCKED;
		}

		if (temp->GetAccess() == WAITING)
		{
			return WAITING;
		}
	}

	void Auth::CheckIn(Database^ db, String^ login, String^ password)
	{
		Role temp_role = USER;
		Access temp_access = WAITING;
		User^ temp = gcnew User();
		temp->SetLogin(login);
		temp->SetSalt(db->generateSalt(SALT_SIZE));
		temp->SetHashPassword(db->GetHashPass(password, temp));
		temp->SetAccess(temp_access);
		temp->SetRole(temp_role);
		db->vec_of_user->push_back(temp);
		db->WriteEndFileUser(temp);
	}

	bool Auth::isLoginBusy(String^ login, Database^ db)
	{
		for (int i = 0; i < db->vec_of_user->getSize(); i++)
		{
			if (db->vec_of_user[i]->GetLogin() == login)
			{
				return  true;
			}
		}
		return false;
	}
}
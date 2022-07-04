#pragma once
#include "User.h"
#include "Database.h"

namespace KURSWF {
	using namespace System;
	ref class Auth
	{
	public:

		static User^ SetUser(Database^ db, String^ login);
		static Admin^ SetAdmin(Database^ db, String^ login);
		static bool LogIn(Database^ db, String^ login, String^ password);
		static bool isAdmin(User^ temp);
		static int isGetAccess(User^ temp);
		static void CheckIn(Database^ db, String^ id, String^ password);
		static bool isLoginBusy(String^ id, Database^ db);
	};

}
#pragma once

namespace KURSWF {
	using namespace System;
	ref class Music
	{
	private:
		String^ name;
		String^ songwriter;
		String^ genre;
		double rate;
		int year;
		
	public:
		void SetName(String^ name)
		{
			this->name = name;
		}
		void SetSongwriter(String^ songwriter)
		{
			this->songwriter = songwriter;
		}
		void SetGenre(String^ genre)
		{
			this->genre = genre;
		}
		void SetRate(double rate)
		{
			this->rate = rate;
		}
		void SetYear(int year)
		{
			this->year = year;
		}

		void SetMusic(Music^ temp)
		{
			this->SetName(temp->GetName());
			this->SetSongwriter(temp->GetSongwriter());
			this->SetGenre(temp->GetGenre());
			this->SetRate(temp->GetRate());
			this->SetYear(temp->GetYear());
		}

		String^ GetName()
		{
			return this->name;
		}
		String^ GetSongwriter()
		{
			return this->songwriter;
		}
		String^ GetGenre()
		{
			return this->genre;
		}
		double GetRate()
		{
			return this->rate;
		}
		int GetYear()
		{
			return this->year;
		}
	};
}

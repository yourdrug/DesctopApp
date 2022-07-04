#pragma once
#include "Music.h"
#include "Database.h"


namespace KURSWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddMusic
	/// </summary>
	public ref class AddMusic : public System::Windows::Forms::Form
	{
	public:
		Database^ myDataBase = gcnew Database();
		AddMusic(Database ^db)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			myDataBase = db;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddMusic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonAdd;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ songName;
	private: System::Windows::Forms::TextBox^ fieldSongwriter;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TrackBar^ trackBarRate;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxYear;
	private: System::Windows::Forms::ComboBox^ comboBoxGenre;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


	protected:













	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddMusic::typeid));
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->songName = (gcnew System::Windows::Forms::TextBox());
			this->fieldSongwriter = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trackBarRate = (gcnew System::Windows::Forms::TrackBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBoxGenre = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarRate))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->buttonAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAdd->FlatAppearance->BorderSize = 0;
			this->buttonAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->buttonAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->buttonAdd->Location = System::Drawing::Point(332, 470);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(209, 46);
			this->buttonAdd->TabIndex = 8;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &AddMusic::buttonAdd_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(804, 495);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 24);
			this->label4->TabIndex = 11;
			this->label4->Text = L"ver 1.0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 495);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"U.S. LCC";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(20, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(368, 40);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Введите название песни";
			// 
			// songName
			// 
			this->songName->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->songName->Location = System::Drawing::Point(415, 69);
			this->songName->Name = L"songName";
			this->songName->Size = System::Drawing::Size(431, 39);
			this->songName->TabIndex = 15;
			// 
			// fieldSongwriter
			// 
			this->fieldSongwriter->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fieldSongwriter->Location = System::Drawing::Point(415, 143);
			this->fieldSongwriter->Name = L"fieldSongwriter";
			this->fieldSongwriter->Size = System::Drawing::Size(431, 39);
			this->fieldSongwriter->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(20, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(337, 40);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Введите исполнителя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(20, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 40);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Выберете жанр";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(17, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(318, 40);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Установите рейтинг";
			// 
			// trackBarRate
			// 
			this->trackBarRate->LargeChange = 1;
			this->trackBarRate->Location = System::Drawing::Point(415, 300);
			this->trackBarRate->Maximum = 100;
			this->trackBarRate->Name = L"trackBarRate";
			this->trackBarRate->Size = System::Drawing::Size(216, 56);
			this->trackBarRate->TabIndex = 20;
			this->trackBarRate->TickFrequency = 1000;
			this->trackBarRate->Scroll += gcnew System::EventHandler(this, &AddMusic::trackBarRate_Scroll);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(651, 278);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 24);
			this->label7->TabIndex = 21;
			this->label7->Text = L"0";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->comboBoxGenre);
			this->panel3->Controls->Add(this->textBoxYear);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->trackBarRate);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->fieldSongwriter);
			this->panel3->Controls->Add(this->songName);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->buttonAdd);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(878, 528);
			this->panel3->TabIndex = 6;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 43;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &AddMusic::pictureBox2_Click);
			// 
			// comboBoxGenre
			// 
			this->comboBoxGenre->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxGenre->FormattingEnabled = true;
			this->comboBoxGenre->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"РОК", L"Хип-хоп", L"Рэп", L"Поп", L"Джаз",
					L"Классика", L"Электро", L"Блюз", L"Танцевальная", L"Кантри"
			});
			this->comboBoxGenre->Location = System::Drawing::Point(415, 224);
			this->comboBoxGenre->Name = L"comboBoxGenre";
			this->comboBoxGenre->Size = System::Drawing::Size(198, 38);
			this->comboBoxGenre->TabIndex = 42;
			// 
			// textBoxYear
			// 
			this->textBoxYear->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxYear->Location = System::Drawing::Point(415, 385);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(199, 39);
			this->textBoxYear->TabIndex = 23;
			this->textBoxYear->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddMusic::onlyNumbers);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(20, 380);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(320, 40);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Введите год выпуска";
			// 
			// AddMusic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(878, 528);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AddMusic";
			this->Text = L"AddMusic";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarRate))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

private: System::Void trackBarRate_Scroll(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void onlyNumbers(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Close();
}
};
}

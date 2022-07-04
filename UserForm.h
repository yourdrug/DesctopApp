#pragma once
#include "Database.h"
#include "AddMusic.h"
#include "Music.h"
#include "Stack.h"

namespace KURSWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	//
    public:
        User^ thisUser = gcnew User();
        Database^ myDatabase = gcnew Database();
        Stack<myVector<Music^>^>^ music_stack = gcnew Stack<myVector<Music^>^>();
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    public:
        
		UserForm(User^ temp, Database ^db)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			myDatabase = db;
            thisUser = temp;
            label1->Text = thisUser->GetLogin();

            comboBoxGenre->ForeColor = Color::Gray;
            textBoxRate->ForeColor = Color::Gray;
            textBoxYear->ForeColor = Color::Gray;

            comboBoxGenre->Text = "Выберете жанр";
            textBoxRate->Text = "Введите рейтинг";
            textBoxYear->Text = "Введите год";
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBoxYear;
    private: System::Windows::Forms::TextBox^ textBoxRate;
    private: System::Windows::Forms::Button^ buttonApply;
    private: System::Windows::Forms::ComboBox^ comboBoxGenre;
    private: System::Windows::Forms::TextBox^ inputText;
    private: System::Windows::Forms::DataGridView^ dataGridViewMus;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ buttonExit;
    private: System::Windows::Forms::Button^ buttonFilter;
    private: System::Windows::Forms::Button^ buttonSearch;
    private: System::Windows::Forms::Button^ buttonAddMusic;
    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ refresh;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
            this->textBoxRate = (gcnew System::Windows::Forms::TextBox());
            this->buttonApply = (gcnew System::Windows::Forms::Button());
            this->comboBoxGenre = (gcnew System::Windows::Forms::ComboBox());
            this->inputText = (gcnew System::Windows::Forms::TextBox());
            this->dataGridViewMus = (gcnew System::Windows::Forms::DataGridView());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->buttonExit = (gcnew System::Windows::Forms::Button());
            this->buttonFilter = (gcnew System::Windows::Forms::Button());
            this->buttonSearch = (gcnew System::Windows::Forms::Button());
            this->buttonAddMusic = (gcnew System::Windows::Forms::Button());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->refresh = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMus))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F));
            this->label1->Location = System::Drawing::Point(1001, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(71, 33);
            this->label1->TabIndex = 25;
            this->label1->Text = L"label1";
            // 
            // textBoxYear
            // 
            this->textBoxYear->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->textBoxYear->Location = System::Drawing::Point(799, 509);
            this->textBoxYear->Name = L"textBoxYear";
            this->textBoxYear->Size = System::Drawing::Size(175, 38);
            this->textBoxYear->TabIndex = 70;
            this->textBoxYear->Visible = false;
            this->textBoxYear->Enter += gcnew System::EventHandler(this, &UserForm::textBoxYear_Enter);
            this->textBoxYear->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserForm::textBoxYear_KeyPress_1);
            // 
            // textBoxRate
            // 
            this->textBoxRate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->textBoxRate->Location = System::Drawing::Point(573, 510);
            this->textBoxRate->Name = L"textBoxRate";
            this->textBoxRate->Size = System::Drawing::Size(186, 38);
            this->textBoxRate->TabIndex = 69;
            this->textBoxRate->Visible = false;
            this->textBoxRate->Enter += gcnew System::EventHandler(this, &UserForm::textBoxRate_Enter);
            this->textBoxRate->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserForm::textBoxRate_KeyPress_1);
            // 
            // buttonApply
            // 
            this->buttonApply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonApply->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonApply->FlatAppearance->BorderSize = 0;
            this->buttonApply->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonApply->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonApply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonApply->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonApply->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonApply->Location = System::Drawing::Point(573, 569);
            this->buttonApply->Name = L"buttonApply";
            this->buttonApply->Size = System::Drawing::Size(186, 41);
            this->buttonApply->TabIndex = 68;
            this->buttonApply->Text = L"Применить";
            this->buttonApply->UseVisualStyleBackColor = false;
            this->buttonApply->Visible = false;
            this->buttonApply->Click += gcnew System::EventHandler(this, &UserForm::buttonApply_Click_1);
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
            this->comboBoxGenre->Location = System::Drawing::Point(332, 511);
            this->comboBoxGenre->Name = L"comboBoxGenre";
            this->comboBoxGenre->Size = System::Drawing::Size(198, 38);
            this->comboBoxGenre->TabIndex = 67;
            this->comboBoxGenre->Visible = false;
            this->comboBoxGenre->Enter += gcnew System::EventHandler(this, &UserForm::comboBoxGenre_Enter);
            // 
            // inputText
            // 
            this->inputText->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->inputText->Location = System::Drawing::Point(334, 507);
            this->inputText->Name = L"inputText";
            this->inputText->Size = System::Drawing::Size(198, 39);
            this->inputText->TabIndex = 64;
            this->inputText->Visible = false;
            this->inputText->TextChanged += gcnew System::EventHandler(this, &UserForm::inputText_TextChanged);
            // 
            // dataGridViewMus
            // 
            this->dataGridViewMus->AllowUserToAddRows = false;
            this->dataGridViewMus->AllowUserToResizeColumns = false;
            this->dataGridViewMus->AllowUserToResizeRows = false;
            this->dataGridViewMus->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridViewMus->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnKeystroke;
            this->dataGridViewMus->Location = System::Drawing::Point(331, 85);
            this->dataGridViewMus->MultiSelect = false;
            this->dataGridViewMus->Name = L"dataGridViewMus";
            this->dataGridViewMus->RowHeadersWidth = 51;
            this->dataGridViewMus->RowTemplate->Height = 24;
            this->dataGridViewMus->Size = System::Drawing::Size(800, 394);
            this->dataGridViewMus->TabIndex = 63;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(1104, 589);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(62, 24);
            this->label4->TabIndex = 62;
            this->label4->Text = L"ver 1.0";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(12, 589);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(73, 24);
            this->label5->TabIndex = 61;
            this->label5->Text = L"U.S. LCC";
            // 
            // buttonExit
            // 
            this->buttonExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonExit->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonExit->FlatAppearance->BorderSize = 0;
            this->buttonExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonExit->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonExit->Location = System::Drawing::Point(78, 309);
            this->buttonExit->Name = L"buttonExit";
            this->buttonExit->Size = System::Drawing::Size(228, 41);
            this->buttonExit->TabIndex = 60;
            this->buttonExit->Text = L"Выход";
            this->buttonExit->UseVisualStyleBackColor = false;
            this->buttonExit->Click += gcnew System::EventHandler(this, &UserForm::buttonExit_Click);
            // 
            // buttonFilter
            // 
            this->buttonFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonFilter->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonFilter->FlatAppearance->BorderSize = 0;
            this->buttonFilter->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonFilter->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonFilter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonFilter->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonFilter->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonFilter->Location = System::Drawing::Point(78, 235);
            this->buttonFilter->Name = L"buttonFilter";
            this->buttonFilter->Size = System::Drawing::Size(228, 41);
            this->buttonFilter->TabIndex = 58;
            this->buttonFilter->Text = L"Фильтры";
            this->buttonFilter->UseVisualStyleBackColor = false;
            this->buttonFilter->Click += gcnew System::EventHandler(this, &UserForm::buttonFilter_Click);
            // 
            // buttonSearch
            // 
            this->buttonSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonSearch->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonSearch->FlatAppearance->BorderSize = 0;
            this->buttonSearch->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonSearch->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonSearch->Location = System::Drawing::Point(78, 160);
            this->buttonSearch->Name = L"buttonSearch";
            this->buttonSearch->Size = System::Drawing::Size(228, 41);
            this->buttonSearch->TabIndex = 56;
            this->buttonSearch->Text = L"Поиск";
            this->buttonSearch->UseVisualStyleBackColor = false;
            this->buttonSearch->Click += gcnew System::EventHandler(this, &UserForm::buttonSearch_Click);
            // 
            // buttonAddMusic
            // 
            this->buttonAddMusic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonAddMusic->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonAddMusic->FlatAppearance->BorderSize = 0;
            this->buttonAddMusic->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonAddMusic->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonAddMusic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonAddMusic->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonAddMusic->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonAddMusic->Location = System::Drawing::Point(78, 85);
            this->buttonAddMusic->Name = L"buttonAddMusic";
            this->buttonAddMusic->Size = System::Drawing::Size(228, 41);
            this->buttonAddMusic->TabIndex = 54;
            this->buttonAddMusic->Text = L"Добавить";
            this->buttonAddMusic->UseVisualStyleBackColor = false;
            this->buttonAddMusic->Click += gcnew System::EventHandler(this, &UserForm::buttonAddMusic_Click);
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(21, 309);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(51, 41);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox8->TabIndex = 53;
            this->pictureBox8->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(21, 235);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(51, 41);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox7->TabIndex = 52;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(21, 160);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(51, 41);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 48;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(20, 85);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(52, 41);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 47;
            this->pictureBox2->TabStop = false;
            // 
            // refresh
            // 
            this->refresh->Cursor = System::Windows::Forms::Cursors::Hand;
            this->refresh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refresh.Image")));
            this->refresh->Location = System::Drawing::Point(946, 9);
            this->refresh->Name = L"refresh";
            this->refresh->Size = System::Drawing::Size(31, 30);
            this->refresh->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->refresh->TabIndex = 71;
            this->refresh->TabStop = false;
            this->refresh->Click += gcnew System::EventHandler(this, &UserForm::refresh_Click);
            // 
            // pictureBox9
            // 
            this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(78, 12);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(31, 30);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox9->TabIndex = 73;
            this->pictureBox9->TabStop = false;
            this->pictureBox9->Click += gcnew System::EventHandler(this, &UserForm::pictureBox9_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(21, 12);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(31, 30);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 72;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &UserForm::pictureBox3_Click);
            // 
            // UserForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->ClientSize = System::Drawing::Size(1178, 622);
            this->Controls->Add(this->pictureBox9);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->refresh);
            this->Controls->Add(this->textBoxYear);
            this->Controls->Add(this->textBoxRate);
            this->Controls->Add(this->buttonApply);
            this->Controls->Add(this->comboBoxGenre);
            this->Controls->Add(this->inputText);
            this->Controls->Add(this->dataGridViewMus);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->buttonExit);
            this->Controls->Add(this->buttonFilter);
            this->Controls->Add(this->buttonSearch);
            this->Controls->Add(this->buttonAddMusic);
            this->Controls->Add(this->pictureBox8);
            this->Controls->Add(this->pictureBox7);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
            this->Name = L"UserForm";
            this->Text = L"UserForm";
            this->Activated += gcnew System::EventHandler(this, &UserForm::UserForm_Activated);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMus))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSort_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAddMusic_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFilter_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void inputText_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void UserForm_Activated(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxRate_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void textBoxYear_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void buttonApply_Click_1(System::Object^ sender, System::EventArgs^ e); 
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBoxGenre_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxRate_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxYear_Enter(System::Object^ sender, System::EventArgs^ e);
};
}

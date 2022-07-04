#pragma once
#include "Database.h";
#include "AddMusic.h" 
#include "AccountsMenu.h"
#include "Stack.h"

namespace KURSWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Сводка для MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		Admin^ thisAdmin = gcnew Admin();
		Database^ myDataBase = gcnew Database();
		Stack<myVector<Music^>^>^ music_stack = gcnew Stack<myVector<Music^>^>();
		bool flag = true;
		bool isRedact;
	private: System::Windows::Forms::ComboBox^ comboBoxGenre;


	private: System::Windows::Forms::Button^ buttonApply;
	private: System::Windows::Forms::TextBox^ textBoxRate;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::TextBox^ textBoxYear;

	public:
		
		MenuForm(Admin^ temp, Database ^my_database)
		{			
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			thisAdmin = temp;
			label1->Text = thisAdmin->GetLogin();
			myDataBase = my_database;

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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}








	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Button^ buttonAddMusic;
	private: System::Windows::Forms::Button^ buttonReadct;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::Button^ buttonDel;
	private: System::Windows::Forms::Button^ buttonFilter;
	private: System::Windows::Forms::Button^ buttonMenuAcc;
	private: System::Windows::Forms::Button^ buttonExit;







	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ refresh;
	private: System::Windows::Forms::TextBox^ inputNumber;
	private: System::Windows::Forms::Button^ Findbutton;
	private: System::Windows::Forms::Button^ saveButton;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonAddMusic = (gcnew System::Windows::Forms::Button());
			this->buttonReadct = (gcnew System::Windows::Forms::Button());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->buttonDel = (gcnew System::Windows::Forms::Button());
			this->buttonFilter = (gcnew System::Windows::Forms::Button());
			this->buttonMenuAcc = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->refresh = (gcnew System::Windows::Forms::PictureBox());
			this->inputNumber = (gcnew System::Windows::Forms::TextBox());
			this->Findbutton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->comboBoxGenre = (gcnew System::Windows::Forms::ComboBox());
			this->buttonApply = (gcnew System::Windows::Forms::Button());
			this->textBoxRate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(11, 63);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 41);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(12, 211);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(51, 41);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(12, 286);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(51, 41);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 137);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(51, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(12, 435);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(51, 41);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 22;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(12, 360);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(51, 41);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 23;
			this->pictureBox7->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F));
			this->label1->Location = System::Drawing::Point(1051, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 33);
			this->label1->TabIndex = 24;
			this->label1->Text = L"label1";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(12, 509);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(51, 41);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 25;
			this->pictureBox8->TabStop = false;
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
			this->buttonAddMusic->Location = System::Drawing::Point(69, 63);
			this->buttonAddMusic->Name = L"buttonAddMusic";
			this->buttonAddMusic->Size = System::Drawing::Size(228, 41);
			this->buttonAddMusic->TabIndex = 26;
			this->buttonAddMusic->Text = L"Добавить";
			this->buttonAddMusic->UseVisualStyleBackColor = false;
			this->buttonAddMusic->Click += gcnew System::EventHandler(this, &MenuForm::buttonAddMusic_Click);
			// 
			// buttonReadct
			// 
			this->buttonReadct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->buttonReadct->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonReadct->FlatAppearance->BorderSize = 0;
			this->buttonReadct->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->buttonReadct->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->buttonReadct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonReadct->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonReadct->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->buttonReadct->Location = System::Drawing::Point(69, 137);
			this->buttonReadct->Name = L"buttonReadct";
			this->buttonReadct->Size = System::Drawing::Size(228, 41);
			this->buttonReadct->TabIndex = 27;
			this->buttonReadct->Text = L"Редактировать";
			this->buttonReadct->UseVisualStyleBackColor = false;
			this->buttonReadct->Click += gcnew System::EventHandler(this, &MenuForm::buttonReadct_Click);
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
			this->buttonSearch->Location = System::Drawing::Point(69, 211);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(228, 41);
			this->buttonSearch->TabIndex = 28;
			this->buttonSearch->Text = L"Поиск";
			this->buttonSearch->UseVisualStyleBackColor = false;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MenuForm::buttonSearch_Click);
			// 
			// buttonDel
			// 
			this->buttonDel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->buttonDel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDel->FlatAppearance->BorderSize = 0;
			this->buttonDel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->buttonDel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->buttonDel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDel->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->buttonDel->Location = System::Drawing::Point(69, 286);
			this->buttonDel->Name = L"buttonDel";
			this->buttonDel->Size = System::Drawing::Size(228, 41);
			this->buttonDel->TabIndex = 29;
			this->buttonDel->Text = L"Удалить";
			this->buttonDel->UseVisualStyleBackColor = false;
			this->buttonDel->Click += gcnew System::EventHandler(this, &MenuForm::buttonDel_Click);
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
			this->buttonFilter->Location = System::Drawing::Point(69, 360);
			this->buttonFilter->Name = L"buttonFilter";
			this->buttonFilter->Size = System::Drawing::Size(228, 41);
			this->buttonFilter->TabIndex = 30;
			this->buttonFilter->Text = L"Фильтры";
			this->buttonFilter->UseVisualStyleBackColor = false;
			this->buttonFilter->Click += gcnew System::EventHandler(this, &MenuForm::buttonFilter_Click);
			// 
			// buttonMenuAcc
			// 
			this->buttonMenuAcc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->buttonMenuAcc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMenuAcc->FlatAppearance->BorderSize = 0;
			this->buttonMenuAcc->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->buttonMenuAcc->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->buttonMenuAcc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMenuAcc->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMenuAcc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->buttonMenuAcc->Location = System::Drawing::Point(69, 435);
			this->buttonMenuAcc->Name = L"buttonMenuAcc";
			this->buttonMenuAcc->Size = System::Drawing::Size(228, 41);
			this->buttonMenuAcc->TabIndex = 31;
			this->buttonMenuAcc->Text = L"Меню аккаунтов";
			this->buttonMenuAcc->UseVisualStyleBackColor = false;
			this->buttonMenuAcc->Click += gcnew System::EventHandler(this, &MenuForm::buttonMenuAcc_Click);
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
			this->buttonExit->Location = System::Drawing::Point(69, 509);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(228, 41);
			this->buttonExit->TabIndex = 32;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MenuForm::buttonExit_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(7, 660);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 24);
			this->label5->TabIndex = 33;
			this->label5->Text = L"U.S. LCC";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1104, 660);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 24);
			this->label4->TabIndex = 34;
			this->label4->Text = L"ver 1.0";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnKeystroke;
			this->dataGridView1->Location = System::Drawing::Point(322, 63);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(800, 487);
			this->dataGridView1->TabIndex = 36;
			// 
			// refresh
			// 
			this->refresh->Cursor = System::Windows::Forms::Cursors::Hand;
			this->refresh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refresh.Image")));
			this->refresh->Location = System::Drawing::Point(998, 12);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(31, 30);
			this->refresh->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refresh->TabIndex = 37;
			this->refresh->TabStop = false;
			this->refresh->Click += gcnew System::EventHandler(this, &MenuForm::refresh_Click);
			// 
			// inputNumber
			// 
			this->inputNumber->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputNumber->Location = System::Drawing::Point(325, 570);
			this->inputNumber->Name = L"inputNumber";
			this->inputNumber->Size = System::Drawing::Size(198, 39);
			this->inputNumber->TabIndex = 38;
			this->inputNumber->Visible = false;
			this->inputNumber->TextChanged += gcnew System::EventHandler(this, &MenuForm::inputNumber_TextChanged);
			this->inputNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MenuForm::onlyNumber);
			// 
			// Findbutton
			// 
			this->Findbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->Findbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Findbutton->FlatAppearance->BorderSize = 0;
			this->Findbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->Findbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->Findbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Findbutton->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Findbutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->Findbutton->Location = System::Drawing::Point(551, 570);
			this->Findbutton->Name = L"Findbutton";
			this->Findbutton->Size = System::Drawing::Size(175, 39);
			this->Findbutton->TabIndex = 39;
			this->Findbutton->Text = L"Найти";
			this->Findbutton->UseVisualStyleBackColor = false;
			this->Findbutton->Visible = false;
			this->Findbutton->Click += gcnew System::EventHandler(this, &MenuForm::Findbutton_Click);
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(125)));
			this->saveButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveButton->FlatAppearance->BorderSize = 0;
			this->saveButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->saveButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->saveButton->Location = System::Drawing::Point(756, 569);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(175, 39);
			this->saveButton->TabIndex = 40;
			this->saveButton->Text = L"Сохранить";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Visible = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &MenuForm::saveButton_Click);
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
			this->comboBoxGenre->Location = System::Drawing::Point(325, 574);
			this->comboBoxGenre->Name = L"comboBoxGenre";
			this->comboBoxGenre->Size = System::Drawing::Size(198, 38);
			this->comboBoxGenre->TabIndex = 41;
			this->comboBoxGenre->Visible = false;
			this->comboBoxGenre->Enter += gcnew System::EventHandler(this, &MenuForm::comboBoxGenre_Enter);
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
			this->buttonApply->Location = System::Drawing::Point(564, 632);
			this->buttonApply->Name = L"buttonApply";
			this->buttonApply->Size = System::Drawing::Size(186, 41);
			this->buttonApply->TabIndex = 44;
			this->buttonApply->Text = L"Применить";
			this->buttonApply->UseVisualStyleBackColor = false;
			this->buttonApply->Visible = false;
			this->buttonApply->Click += gcnew System::EventHandler(this, &MenuForm::buttonApply_Click);
			// 
			// textBoxRate
			// 
			this->textBoxRate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxRate->Location = System::Drawing::Point(564, 573);
			this->textBoxRate->Name = L"textBoxRate";
			this->textBoxRate->Size = System::Drawing::Size(186, 38);
			this->textBoxRate->TabIndex = 45;
			this->textBoxRate->Visible = false;
			this->textBoxRate->Enter += gcnew System::EventHandler(this, &MenuForm::textBoxRate_Enter);
			this->textBoxRate->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MenuForm::textBoxRate_KeyPress);
			// 
			// textBoxYear
			// 
			this->textBoxYear->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxYear->Location = System::Drawing::Point(790, 572);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(175, 38);
			this->textBoxYear->TabIndex = 46;
			this->textBoxYear->Visible = false;
			this->textBoxYear->Enter += gcnew System::EventHandler(this, &MenuForm::textBoxYear_Enter);
			this->textBoxYear->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MenuForm::textBoxYear_KeyPress);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(31, 30);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 47;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MenuForm::pictureBox3_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(69, 9);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(31, 30);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 48;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MenuForm::pictureBox9_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->ClientSize = System::Drawing::Size(1178, 693);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->textBoxYear);
			this->Controls->Add(this->textBoxRate);
			this->Controls->Add(this->buttonApply);
			this->Controls->Add(this->comboBoxGenre);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->Findbutton);
			this->Controls->Add(this->inputNumber);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonMenuAcc);
			this->Controls->Add(this->buttonFilter);
			this->Controls->Add(this->buttonDel);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->buttonReadct);
			this->Controls->Add(this->buttonAddMusic);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			this->Activated += gcnew System::EventHandler(this, &MenuForm::MenuForm_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MenuForm_Activated(System::Object^ sender, System::EventArgs^ e); //активация окна
private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e); //обновить окно

private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e); //нажатие на отмену действия
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e); //нажатие на кнопку сохранения

private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e); //нажатие на кнопку выхода

private: System::Void buttonMenuAcc_Click(System::Object^ sender, System::EventArgs^ e); //кнопка меню аккаунтов
private: System::Void buttonAddMusic_Click(System::Object^ sender, System::EventArgs^ e); // кнопка добавления музыки
private: System::Void buttonReadct_Click(System::Object^ sender, System::EventArgs^ e); //редактировать запись
private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e); //кнопка поиска в меню
private: System::Void buttonDel_Click(System::Object^ sender, System::EventArgs^ e); //кнопка удалить в меню
private: System::Void buttonFilter_Click(System::Object^ sender, System::EventArgs^ e); //кнопка фильтр в меню

private: System::Void Findbutton_Click(System::Object^ sender, System::EventArgs^ e); //в разделе редактирования кнопка найти
private: System::Void onlyNumber(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e); //ввод только чисел

private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e);   //в разделе редактирования кнопка сохранить
																						//в разделе удаления это кнопка удалить

private: System::Void inputNumber_TextChanged(System::Object^ sender, System::EventArgs^ e);//в разделе удаления и редактирования для ввода номера 
																						//в разделе поиска для ввода строк

private: System::Void buttonApply_Click(System::Object^ sender, System::EventArgs^ e); //кнопка применить в фильтрах

private: System::Void textBoxRate_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e); //для валидности ввода
private: System::Void textBoxYear_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

private: System::Void comboBoxGenre_Enter(System::Object^ sender, System::EventArgs^ e); //для фильтра
private: System::Void textBoxRate_Enter(System::Object^ sender, System::EventArgs^ e); //при нажатии на текстбоксы надписи-подсказки 
private: System::Void textBoxYear_Enter(System::Object^ sender, System::EventArgs^ e); //будут исчезать

};
}

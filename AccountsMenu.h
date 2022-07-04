#pragma once
#include "Database.h"
#include "Stack.h"

namespace KURSWF {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Сводка для AccountsMenu
    /// </summary>
    public ref class AccountsMenu : public System::Windows::Forms::Form
    {
    public:
        Stack<myVector<User^>^>^ user_stack = gcnew Stack<myVector<User^>^>();

        myVector <User^>^ new_vec_users = gcnew myVector <User^>();
        Database^ myDataBase = gcnew Database();
        Admin^ thisAdmin = gcnew Admin();

        bool apply_user = false;
        bool block_user = false;
        bool change_role = false;    
        bool unblock_user = false;
    
    private: System::Windows::Forms::ComboBox^ comboBoxRole;
    public:
    private: System::Windows::Forms::ComboBox^ comboBoxAccess;
    private: System::Windows::Forms::Button^ buttonApply;
    private: System::Windows::Forms::PictureBox^ pictureBox14;
    private: System::Windows::Forms::PictureBox^ pictureBox15;
    private: System::Windows::Forms::PictureBox^ pictureBox16;
    private: System::Windows::Forms::Button^ buttonUnblocked;



           
    public: AccountsMenu(Database^ db, Admin^ temp)
        {
            InitializeComponent();
            //
            //TODO: добавьте код конструктора
            //
            
            thisAdmin = temp;
            label1->Text = thisAdmin->GetLogin();
            myDataBase = db;
        }

    protected:
        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        ~AccountsMenu()
        {
            if (components)
            {
                delete components;
            }
        }

    protected:

    private: System::Windows::Forms::TextBox^ search_textBox;

    private: System::Windows::Forms::PictureBox^ refresh;
    private: System::Windows::Forms::DataGridView^ dataGridViewAcc;


    private: System::Windows::Forms::Button^ buttonFilter;
    private: System::Windows::Forms::Button^ buttonBlock;

    private: System::Windows::Forms::Button^ buttonSearch;
    private: System::Windows::Forms::Button^ buttonReturn;

    private: System::Windows::Forms::Button^ buttonApplyUser;


    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ buttonChangeRole;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::PictureBox^ pictureBox10;
    private: System::Windows::Forms::PictureBox^ pictureBox11;
    private: System::Windows::Forms::PictureBox^ pictureBox12;
    private: System::Windows::Forms::PictureBox^ pictureBox13;

    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AccountsMenu::typeid));
            this->search_textBox = (gcnew System::Windows::Forms::TextBox());
            this->refresh = (gcnew System::Windows::Forms::PictureBox());
            this->dataGridViewAcc = (gcnew System::Windows::Forms::DataGridView());
            this->buttonFilter = (gcnew System::Windows::Forms::Button());
            this->buttonBlock = (gcnew System::Windows::Forms::Button());
            this->buttonSearch = (gcnew System::Windows::Forms::Button());
            this->buttonReturn = (gcnew System::Windows::Forms::Button());
            this->buttonApplyUser = (gcnew System::Windows::Forms::Button());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->buttonChangeRole = (gcnew System::Windows::Forms::Button());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->comboBoxRole = (gcnew System::Windows::Forms::ComboBox());
            this->comboBoxAccess = (gcnew System::Windows::Forms::ComboBox());
            this->buttonApply = (gcnew System::Windows::Forms::Button());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->buttonUnblocked = (gcnew System::Windows::Forms::Button());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAcc))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
            this->SuspendLayout();
            // 
            // search_textBox
            // 
            this->search_textBox->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->search_textBox->Location = System::Drawing::Point(468, 579);
            this->search_textBox->Name = L"search_textBox";
            this->search_textBox->Size = System::Drawing::Size(198, 39);
            this->search_textBox->TabIndex = 58;
            this->search_textBox->Visible = false;
            this->search_textBox->TextChanged += gcnew System::EventHandler(this, &AccountsMenu::search_TextChanged);
            // 
            // refresh
            // 
            this->refresh->Cursor = System::Windows::Forms::Cursors::Hand;
            this->refresh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refresh.Image")));
            this->refresh->Location = System::Drawing::Point(986, 9);
            this->refresh->Name = L"refresh";
            this->refresh->Size = System::Drawing::Size(31, 30);
            this->refresh->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->refresh->TabIndex = 57;
            this->refresh->TabStop = false;
            this->refresh->Click += gcnew System::EventHandler(this, &AccountsMenu::refresh_Click);
            // 
            // dataGridViewAcc
            // 
            this->dataGridViewAcc->AllowUserToAddRows = false;
            this->dataGridViewAcc->AllowUserToResizeColumns = false;
            this->dataGridViewAcc->AllowUserToResizeRows = false;
            this->dataGridViewAcc->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridViewAcc->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnKeystroke;
            this->dataGridViewAcc->Location = System::Drawing::Point(337, 53);
            this->dataGridViewAcc->MultiSelect = false;
            this->dataGridViewAcc->Name = L"dataGridViewAcc";
            this->dataGridViewAcc->RowHeadersWidth = 51;
            this->dataGridViewAcc->RowTemplate->Height = 24;
            this->dataGridViewAcc->Size = System::Drawing::Size(756, 506);
            this->dataGridViewAcc->TabIndex = 56;
            this->dataGridViewAcc->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AccountsMenu::dataGridViewAcc_CellContentClick);
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
            this->buttonFilter->Location = System::Drawing::Point(71, 357);
            this->buttonFilter->Name = L"buttonFilter";
            this->buttonFilter->Size = System::Drawing::Size(228, 41);
            this->buttonFilter->TabIndex = 53;
            this->buttonFilter->Text = L"Фильтры";
            this->buttonFilter->UseVisualStyleBackColor = false;
            this->buttonFilter->Click += gcnew System::EventHandler(this, &AccountsMenu::buttonFilter_Click);
            // 
            // buttonBlock
            // 
            this->buttonBlock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonBlock->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonBlock->FlatAppearance->BorderSize = 0;
            this->buttonBlock->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonBlock->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonBlock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonBlock->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonBlock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonBlock->Location = System::Drawing::Point(71, 130);
            this->buttonBlock->Name = L"buttonBlock";
            this->buttonBlock->Size = System::Drawing::Size(228, 41);
            this->buttonBlock->TabIndex = 52;
            this->buttonBlock->Text = L"Заблокировать";
            this->buttonBlock->UseVisualStyleBackColor = false;
            this->buttonBlock->Click += gcnew System::EventHandler(this, &AccountsMenu::buttonBlock_Click);
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
            this->buttonSearch->Location = System::Drawing::Point(71, 280);
            this->buttonSearch->Name = L"buttonSearch";
            this->buttonSearch->Size = System::Drawing::Size(228, 41);
            this->buttonSearch->TabIndex = 51;
            this->buttonSearch->Text = L"Поиск";
            this->buttonSearch->UseVisualStyleBackColor = false;
            this->buttonSearch->Click += gcnew System::EventHandler(this, &AccountsMenu::buttonSearch_Click);
            // 
            // buttonReturn
            // 
            this->buttonReturn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonReturn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonReturn->FlatAppearance->BorderSize = 0;
            this->buttonReturn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonReturn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonReturn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonReturn->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonReturn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonReturn->Location = System::Drawing::Point(71, 518);
            this->buttonReturn->Name = L"buttonReturn";
            this->buttonReturn->Size = System::Drawing::Size(228, 41);
            this->buttonReturn->TabIndex = 50;
            this->buttonReturn->Text = L"Вернуться";
            this->buttonReturn->UseVisualStyleBackColor = false;
            this->buttonReturn->Click += gcnew System::EventHandler(this, &AccountsMenu::buttonReturn_Click);
            // 
            // buttonApplyUser
            // 
            this->buttonApplyUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonApplyUser->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonApplyUser->FlatAppearance->BorderSize = 0;
            this->buttonApplyUser->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonApplyUser->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonApplyUser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonApplyUser->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonApplyUser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonApplyUser->Location = System::Drawing::Point(71, 53);
            this->buttonApplyUser->Name = L"buttonApplyUser";
            this->buttonApplyUser->Size = System::Drawing::Size(228, 41);
            this->buttonApplyUser->TabIndex = 49;
            this->buttonApplyUser->Text = L"Принять заявку";
            this->buttonApplyUser->UseVisualStyleBackColor = false;
            this->buttonApplyUser->Click += gcnew System::EventHandler(this, &AccountsMenu::buttonApplyUser_Click);
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(-61, 474);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(37, 41);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox8->TabIndex = 48;
            this->pictureBox8->TabStop = false;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F));
            this->label1->Location = System::Drawing::Point(1032, 6);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(71, 33);
            this->label1->TabIndex = 47;
            this->label1->Text = L"label1";
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(-61, 325);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(37, 41);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox7->TabIndex = 46;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(-61, 400);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(37, 41);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox6->TabIndex = 45;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(-61, 102);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(37, 41);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 44;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(-61, 251);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(37, 41);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox5->TabIndex = 43;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(-61, 176);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(37, 41);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 42;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(-62, 28);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(38, 41);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 41;
            this->pictureBox2->TabStop = false;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(1060, 632);
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
            this->label5->Location = System::Drawing::Point(12, 632);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(73, 24);
            this->label5->TabIndex = 61;
            this->label5->Text = L"U.S. LCC";
            // 
            // buttonChangeRole
            // 
            this->buttonChangeRole->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonChangeRole->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonChangeRole->FlatAppearance->BorderSize = 0;
            this->buttonChangeRole->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonChangeRole->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonChangeRole->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonChangeRole->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonChangeRole->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonChangeRole->Location = System::Drawing::Point(71, 436);
            this->buttonChangeRole->Name = L"buttonChangeRole";
            this->buttonChangeRole->Size = System::Drawing::Size(228, 41);
            this->buttonChangeRole->TabIndex = 63;
            this->buttonChangeRole->Text = L"Изменить роль";
            this->buttonChangeRole->UseVisualStyleBackColor = false;
            this->buttonChangeRole->Click += gcnew System::EventHandler(this, &AccountsMenu::buttonChangeRole_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(12, 53);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(47, 41);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 64;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(12, 130);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(47, 41);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox9->TabIndex = 65;
            this->pictureBox9->TabStop = false;
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(12, 280);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(47, 41);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox10->TabIndex = 66;
            this->pictureBox10->TabStop = false;
            // 
            // pictureBox11
            // 
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(12, 357);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(47, 41);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox11->TabIndex = 67;
            this->pictureBox11->TabStop = false;
            // 
            // pictureBox12
            // 
            this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
            this->pictureBox12->Location = System::Drawing::Point(12, 436);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(47, 41);
            this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox12->TabIndex = 68;
            this->pictureBox12->TabStop = false;
            // 
            // pictureBox13
            // 
            this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
            this->pictureBox13->Location = System::Drawing::Point(12, 518);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(47, 41);
            this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox13->TabIndex = 69;
            this->pictureBox13->TabStop = false;
            // 
            // comboBoxRole
            // 
            this->comboBoxRole->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->comboBoxRole->FormattingEnabled = true;
            this->comboBoxRole->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Главный админ", L"Админ", L"Пользователь" });
            this->comboBoxRole->Location = System::Drawing::Point(351, 579);
            this->comboBoxRole->Name = L"comboBoxRole";
            this->comboBoxRole->Size = System::Drawing::Size(198, 38);
            this->comboBoxRole->TabIndex = 70;
            this->comboBoxRole->Visible = false;
            // 
            // comboBoxAccess
            // 
            this->comboBoxAccess->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->comboBoxAccess->FormattingEnabled = true;
            this->comboBoxAccess->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Доступ разрешен", L"Заблокирован", L"В обработке" });
            this->comboBoxAccess->Location = System::Drawing::Point(608, 579);
            this->comboBoxAccess->Name = L"comboBoxAccess";
            this->comboBoxAccess->Size = System::Drawing::Size(251, 38);
            this->comboBoxAccess->TabIndex = 71;
            this->comboBoxAccess->Visible = false;
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
            this->buttonApply->Location = System::Drawing::Point(918, 579);
            this->buttonApply->Name = L"buttonApply";
            this->buttonApply->Size = System::Drawing::Size(175, 39);
            this->buttonApply->TabIndex = 72;
            this->buttonApply->Text = L"Применить";
            this->buttonApply->UseVisualStyleBackColor = false;
            this->buttonApply->Visible = false;
            this->buttonApply->Click += gcnew System::EventHandler(this, &AccountsMenu::buttonApply_Click);
            // 
            // pictureBox14
            // 
            this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
            this->pictureBox14->Location = System::Drawing::Point(12, 205);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(47, 41);
            this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox14->TabIndex = 74;
            this->pictureBox14->TabStop = false;
            // 
            // buttonUnblocked
            // 
            this->buttonUnblocked->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(125)));
            this->buttonUnblocked->Cursor = System::Windows::Forms::Cursors::Hand;
            this->buttonUnblocked->FlatAppearance->BorderSize = 0;
            this->buttonUnblocked->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
            this->buttonUnblocked->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
            this->buttonUnblocked->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonUnblocked->Font = (gcnew System::Drawing::Font(L"Ink Free", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonUnblocked->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
                static_cast<System::Int32>(static_cast<System::Byte>(46)));
            this->buttonUnblocked->Location = System::Drawing::Point(71, 205);
            this->buttonUnblocked->Name = L"buttonUnblocked";
            this->buttonUnblocked->Size = System::Drawing::Size(228, 41);
            this->buttonUnblocked->TabIndex = 73;
            this->buttonUnblocked->Text = L"Разблокировать";
            this->buttonUnblocked->UseVisualStyleBackColor = false;
            this->buttonUnblocked->Click += gcnew System::EventHandler(this, &AccountsMenu::buttonUnblocked_Click);
            // 
            // pictureBox15
            // 
            this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
            this->pictureBox15->Location = System::Drawing::Point(12, 6);
            this->pictureBox15->Name = L"pictureBox15";
            this->pictureBox15->Size = System::Drawing::Size(31, 30);
            this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox15->TabIndex = 75;
            this->pictureBox15->TabStop = false;
            this->pictureBox15->Click += gcnew System::EventHandler(this, &AccountsMenu::pictureBox15_Click);
            // 
            // pictureBox16
            // 
            this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
            this->pictureBox16->Location = System::Drawing::Point(71, 6);
            this->pictureBox16->Name = L"pictureBox16";
            this->pictureBox16->Size = System::Drawing::Size(31, 30);
            this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox16->TabIndex = 77;
            this->pictureBox16->TabStop = false;
            this->pictureBox16->Click += gcnew System::EventHandler(this, &AccountsMenu::pictureBox16_Click);
            // 
            // AccountsMenu
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->ClientSize = System::Drawing::Size(1134, 665);
            this->Controls->Add(this->pictureBox16);
            this->Controls->Add(this->pictureBox15);
            this->Controls->Add(this->pictureBox14);
            this->Controls->Add(this->buttonUnblocked);
            this->Controls->Add(this->buttonApply);
            this->Controls->Add(this->comboBoxAccess);
            this->Controls->Add(this->comboBoxRole);
            this->Controls->Add(this->pictureBox13);
            this->Controls->Add(this->pictureBox12);
            this->Controls->Add(this->pictureBox11);
            this->Controls->Add(this->pictureBox10);
            this->Controls->Add(this->pictureBox9);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->buttonChangeRole);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->search_textBox);
            this->Controls->Add(this->refresh);
            this->Controls->Add(this->dataGridViewAcc);
            this->Controls->Add(this->buttonFilter);
            this->Controls->Add(this->buttonBlock);
            this->Controls->Add(this->buttonSearch);
            this->Controls->Add(this->buttonReturn);
            this->Controls->Add(this->buttonApplyUser);
            this->Controls->Add(this->pictureBox8);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->pictureBox7);
            this->Controls->Add(this->pictureBox6);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox2);
            this->Name = L"AccountsMenu";
            this->Text = L"AccountsMenu";
            this->Load += gcnew System::EventHandler(this, &AccountsMenu::AccountsMenu_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAcc))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: System::Void buttonReturn_Click(System::Object^ sender, System::EventArgs^ e) {
        myDataBase->WriteFileUser();
        Owner->Show();
        this->Close();
    }
private: System::Void AccountsMenu_Load(System::Object^ sender, System::EventArgs^ e) {
    thisAdmin->ShowUsers(dataGridViewAcc, myDataBase->vec_of_user);
}
private: System::Void buttonApplyUser_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridViewAcc_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void buttonBlock_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void search_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonChangeRole_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonApply_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFilter_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonUnblocked_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) {
    if (!user_stack->isEmpty())
    {
        myDataBase->vec_of_user = user_stack->Pop();
        thisAdmin->ShowUsers(dataGridViewAcc, myDataBase->vec_of_user);
    }

    else
    {
        MessageBox::Show("Стек пуст", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
}
private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) {
    myDataBase->WriteFileUser();
}
};
}

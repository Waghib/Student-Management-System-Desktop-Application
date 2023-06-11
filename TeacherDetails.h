#pragma once
#include "AddTeacher.h"
#include "EditTeacher.h"


namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;

	/// <summary>
	/// Summary for TeacherDetails
	/// </summary>
	public ref class TeacherDetails : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		TeacherDetails(void)
		{
			this->ControlBox = false;
			this->MinimizeBox = false;
			this->MaximizeBox = false;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		OracleConnection^ orcc1 = gcnew OracleConnection(str1);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeacherDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ editTeacher;

	private: System::Windows::Forms::Button^ addNewTeacher;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ teacherDataGrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TeacherDetails::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->editTeacher = (gcnew System::Windows::Forms::Button());
			this->addNewTeacher = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->teacherDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->teacherDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(751, 88);
			this->panel1->TabIndex = 1;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(531, 9);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(71, 71);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 1;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 48, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->label1->Location = System::Drawing::Point(84, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(416, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TEACHER DETAILS";
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->editTeacher);
			this->panel3->Controls->Add(this->addNewTeacher);
			this->panel3->Location = System::Drawing::Point(551, 88);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 433);
			this->panel3->TabIndex = 3;
			// 
			// editTeacher
			// 
			this->editTeacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->editTeacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editTeacher->ForeColor = System::Drawing::SystemColors::Control;
			this->editTeacher->Location = System::Drawing::Point(39, 148);
			this->editTeacher->Name = L"editTeacher";
			this->editTeacher->Size = System::Drawing::Size(123, 42);
			this->editTeacher->TabIndex = 1;
			this->editTeacher->Text = L"Edit teacher";
			this->editTeacher->UseVisualStyleBackColor = false;
			this->editTeacher->Click += gcnew System::EventHandler(this, &TeacherDetails::editTeacher_Click);
			// 
			// addNewTeacher
			// 
			this->addNewTeacher->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->addNewTeacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addNewTeacher->ForeColor = System::Drawing::SystemColors::Control;
			this->addNewTeacher->Location = System::Drawing::Point(39, 100);
			this->addNewTeacher->Name = L"addNewTeacher";
			this->addNewTeacher->Size = System::Drawing::Size(123, 42);
			this->addNewTeacher->TabIndex = 0;
			this->addNewTeacher->Text = L"Add new";
			this->addNewTeacher->UseVisualStyleBackColor = false;
			this->addNewTeacher->Click += gcnew System::EventHandler(this, &TeacherDetails::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->teacherDataGrid);
			this->panel2->Location = System::Drawing::Point(-1, 88);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(554, 433);
			this->panel2->TabIndex = 4;
			// 
			// teacherDataGrid
			// 
			this->teacherDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->teacherDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->teacherDataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->teacherDataGrid->Location = System::Drawing::Point(0, 0);
			this->teacherDataGrid->Name = L"teacherDataGrid";
			this->teacherDataGrid->Size = System::Drawing::Size(554, 433);
			this->teacherDataGrid->TabIndex = 2;
			this->teacherDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TeacherDetails::teacherDataGrid_CellContentClick);
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			// 
			// TeacherDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 521);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"TeacherDetails";
			this->Text = L"TeacherDetails";
			this->Load += gcnew System::EventHandler(this, &TeacherDetails::TeacherDetails_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->teacherDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
		//function to fetch data from the database and display in data grid view
		public: void UpdateDataGrid()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT t.t_id, t.f_name, t.l_name, t.username, t.reg_date, t.gender, t.blood_grp, t.address, e.email, p.contact_no FROM Teachers t LEFT JOIN Teacher_Email e ON t.username = e.username LEFT JOIN Teacher_Phone p ON t.t_id = p.id", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			teacherDataGrid->DataSource = dataTable;
		}
#pragma endregion
		private:
			AddTeacher^ addTeacherForm = nullptr;
			EditTeacher^ EditTeacherForm = nullptr;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (addTeacherForm == nullptr || addTeacherForm->IsDisposed)
		{
			addTeacherForm = gcnew AddTeacher();
			addTeacherForm->FormClosed += gcnew FormClosedEventHandler(this, &TeacherDetails::addTeacherFormClosed);
			addTeacherForm->Show();
			addNewTeacher->Enabled = false;
		}
	}
	private:
	   void addTeacherFormClosed(Object^ sender, FormClosedEventArgs^ e)
	   {
		   addTeacherForm = nullptr;
		   addNewTeacher->Enabled = true;
		   UpdateDataGrid();
	   }

	private: System::String^ selectedUsername;
	private: System::Void editTeacher_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (selectedUsername == "")
		{
			MessageBox::Show("Please select a teacher you want to edit!");
		}
		else
		{
			if (EditTeacherForm == nullptr || EditTeacherForm->IsDisposed)
			{
				EditTeacherForm = gcnew EditTeacher(selectedUsername);
				EditTeacherForm->FormClosed += gcnew FormClosedEventHandler(this, &TeacherDetails::editTeacherFormClosed);
				EditTeacherForm->Show();
				editTeacher->Enabled = false;
			}
		}
	}
	private:
		void editTeacherFormClosed(Object^ sender, FormClosedEventArgs^ e)
		{
			EditTeacherForm = nullptr;
			editTeacher->Enabled = true;
			UpdateDataGrid();
		}
	private: System::Void TeacherDetails_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		UpdateDataGrid();
	}
	private: System::Void teacherDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		if (e->RowIndex >= 0)
		{
			DataGridViewRow^ selectedRow = teacherDataGrid->Rows[e->RowIndex];
			selectedUsername = selectedRow->Cells["username"]->Value->ToString();
		}
	}
};
}

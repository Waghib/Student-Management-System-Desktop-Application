#pragma once

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;

	/// <summary>
	/// Summary for StudentDetailsByTeacher
	/// </summary>
	public ref class StudentDetailsByTeacher : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		StudentDetailsByTeacher(String ^ username)
		{
			this->ControlBox = false;
			this->MinimizeBox = false;
			this->MaximizeBox = false;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->selectedUsername = username;
		}
		OracleConnection^ orcc1 = gcnew OracleConnection(str1);
	private:
		String^ selectedUsername;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentDetailsByTeacher()
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
	private: System::Windows::Forms::Panel^ stdPanelByTeacher;
	private: System::Windows::Forms::DataGridView^ studentDataGrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::Panel^ panel2;








	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDetailsByTeacher::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->stdPanelByTeacher = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->studentDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentDataGrid))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Controls->Add(this->stdPanelByTeacher);
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
			// stdPanelByTeacher
			// 
			this->stdPanelByTeacher->Location = System::Drawing::Point(0, 88);
			this->stdPanelByTeacher->Name = L"stdPanelByTeacher";
			this->stdPanelByTeacher->Size = System::Drawing::Size(644, 432);
			this->stdPanelByTeacher->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 48, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->label1->Location = System::Drawing::Point(84, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STUDENT DETAILS";
			// 
			// studentDataGrid
			// 
			this->studentDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->studentDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->studentDataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->studentDataGrid->Location = System::Drawing::Point(0, 0);
			this->studentDataGrid->Name = L"studentDataGrid";
			this->studentDataGrid->Size = System::Drawing::Size(644, 429);
			this->studentDataGrid->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->studentDataGrid);
			this->panel2->Location = System::Drawing::Point(3, 88);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(644, 429);
			this->panel2->TabIndex = 3;
			// 
			// StudentDetailsByTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 521);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentDetailsByTeacher";
			this->Text = L"Student Details";
			this->Load += gcnew System::EventHandler(this, &StudentDetailsByTeacher::StudentDetailsByTeacher_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentDataGrid))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		void updateStudent()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT DISTINCT s.S_id, s.f_name, s.l_name, s.username, se.email, sp.contact_no, s.Reg_date, s.gender, s.blood_grp, s.address, s.paid_status FROM students s, class c, class_schedule_days csd, teachers t, student_email se, student_phone sp Where s.class_id = c.Class_id and c.Class_id = csd.Class_id and csd.Teacher_id = t.T_id and s.username = se.username and s.S_id = sp.id and t.username = '" + selectedUsername + "' ORDER BY s.S_id", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			studentDataGrid->DataSource = dataTable;
		}

#pragma endregion
	private: System::Void StudentDetailsByTeacher_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		updateStudent();
	}
};
}

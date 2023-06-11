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
	/// Summary for ClassByStudent
	/// </summary>
	public ref class ClassByStudent : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		ClassByStudent(String^ username)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Selectedusername = username;
		}
		OracleConnection^ orcc1 = gcnew OracleConnection(str1);
	private:
		String^ Selectedusername;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClassByStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ stdPanelByTeacher;
	private: System::Windows::Forms::DataGridView^ studentDataGrid;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClassByStudent::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->stdPanelByTeacher = (gcnew System::Windows::Forms::Panel());
			this->studentDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->stdPanelByTeacher->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(735, 88);
			this->panel1->TabIndex = 6;
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(506, 9);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(71, 71);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 1;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 48, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->label2->Location = System::Drawing::Point(94, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(406, 76);
			this->label2->TabIndex = 0;
			this->label2->Text = L"CLASS SCHEDULE";
			// 
			// stdPanelByTeacher
			// 
			this->stdPanelByTeacher->Controls->Add(this->studentDataGrid);
			this->stdPanelByTeacher->Location = System::Drawing::Point(0, 90);
			this->stdPanelByTeacher->Name = L"stdPanelByTeacher";
			this->stdPanelByTeacher->Size = System::Drawing::Size(644, 392);
			this->stdPanelByTeacher->TabIndex = 7;
			// 
			// studentDataGrid
			// 
			this->studentDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->studentDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->studentDataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->studentDataGrid->Location = System::Drawing::Point(0, 0);
			this->studentDataGrid->Name = L"studentDataGrid";
			this->studentDataGrid->Size = System::Drawing::Size(644, 392);
			this->studentDataGrid->TabIndex = 2;
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			// 
			// ClassByStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 482);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->stdPanelByTeacher);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ClassByStudent";
			this->Text = L"ClassByStudent";
			this->Load += gcnew System::EventHandler(this, &ClassByStudent::ClassByStudent_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->stdPanelByTeacher->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
		void classesDetails()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT c.class_id, c.class_name, cs.start_time, cs.end_time, cs.loc, csd.week_days, t.f_name || ' ' || t.l_name AS Teacher_name FROM Class_schedule cs, Class_schedule_days csd, CLASS c, STUDENTS s, teachers t Where cs.Class_id = csd.Class_id AND cs_id = csd_id and cs.Class_id = c.Class_id and c.Class_id = s.class_id and cs.Teacher_id = t.T_id and s.username = '" + Selectedusername + "' ORDER BY cs.start_time", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			studentDataGrid->DataSource = dataTable;
		}
#pragma endregion
	private: System::Void ClassByStudent_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		classesDetails();
	}
};
}

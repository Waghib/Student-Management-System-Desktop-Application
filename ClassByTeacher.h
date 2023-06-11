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
	/// Summary for ClassByTeacher
	/// </summary>
	public ref class ClassByTeacher : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		ClassByTeacher(String^ username)
		{
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
		~ClassByTeacher()
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
	private: System::Windows::Forms::DataGridView^ classDataGrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClassByTeacher::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->stdPanelByTeacher = (gcnew System::Windows::Forms::Panel());
			this->classDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->stdPanelByTeacher->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->classDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(735, 88);
			this->panel1->TabIndex = 4;
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
			this->label2->Location = System::Drawing::Point(206, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(254, 76);
			this->label2->TabIndex = 0;
			this->label2->Text = L"CLASS LIST";
			// 
			// stdPanelByTeacher
			// 
			this->stdPanelByTeacher->Controls->Add(this->classDataGrid);
			this->stdPanelByTeacher->Location = System::Drawing::Point(0, 89);
			this->stdPanelByTeacher->Name = L"stdPanelByTeacher";
			this->stdPanelByTeacher->Size = System::Drawing::Size(644, 392);
			this->stdPanelByTeacher->TabIndex = 5;
			// 
			// classDataGrid
			// 
			this->classDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->classDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->classDataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->classDataGrid->Location = System::Drawing::Point(0, 0);
			this->classDataGrid->Name = L"classDataGrid";
			this->classDataGrid->Size = System::Drawing::Size(644, 392);
			this->classDataGrid->TabIndex = 2;
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			// 
			// ClassByTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 482);
			this->Controls->Add(this->stdPanelByTeacher);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ClassByTeacher";
			this->Text = L"ClassByTeacher";
			this->Load += gcnew System::EventHandler(this, &ClassByTeacher::ClassByTeacher_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->stdPanelByTeacher->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->classDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
		void updateClasses()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT DISTINCT c.Class_id, c.class_name, s.S_id, s.f_name, s.l_name, s.username, se.email, sp.contact_no FROM Class c, Teachers t, Class_schedule cs, Students s, student_email se, student_phone sp WHERE c.Class_id = cs.Class_id AND cs.Teacher_id = t.T_id AND c.Class_id = s.class_id AND s.username = se.username AND s.S_id = sp.id AND t.username = '" + selectedUsername + "' ORDER BY s.S_id", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			classDataGrid->DataSource = dataTable;
		}
#pragma endregion
	private: System::Void ClassByTeacher_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		updateClasses();
	}
};
}

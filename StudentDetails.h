#pragma once
#include "AddStudent.h"
#include "EditStudent.h"
//#include "AdminDashboard.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;

	/// <summary>
	/// Summary for StudentDetails
	/// </summary>
	public ref class StudentDetails : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		StudentDetails(void)
		{
			this->ControlBox = false;
			this->MinimizeBox = false;
			this->MaximizeBox = false;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::DataGridView^ StudentDataGrid;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
		   OracleConnection^ orcc1 = gcnew OracleConnection(str1);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;


	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::Panel^ stdMainPanel;



	private: System::Windows::Forms::Panel^ panel3;



	private: System::Windows::Forms::Button^ editStd;

	private: System::Windows::Forms::Button^ addStd;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDetails::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->stdMainPanel = (gcnew System::Windows::Forms::Panel());
			this->StudentDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->editStd = (gcnew System::Windows::Forms::Button());
			this->addStd = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->stdMainPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentDataGrid))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(751, 90);
			this->panel1->TabIndex = 0;
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
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->label1->Location = System::Drawing::Point(84, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STUDENT DETAILS";
			// 
			// stdMainPanel
			// 
			this->stdMainPanel->Controls->Add(this->StudentDataGrid);
			this->stdMainPanel->Location = System::Drawing::Point(0, 88);
			this->stdMainPanel->Name = L"stdMainPanel";
			this->stdMainPanel->Size = System::Drawing::Size(554, 433);
			this->stdMainPanel->TabIndex = 1;
			// 
			// StudentDataGrid
			// 
			this->StudentDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->StudentDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StudentDataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StudentDataGrid->Location = System::Drawing::Point(0, 0);
			this->StudentDataGrid->Name = L"StudentDataGrid";
			this->StudentDataGrid->Size = System::Drawing::Size(554, 433);
			this->StudentDataGrid->TabIndex = 2;
			this->StudentDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentDetails::StudentDataGrid_CellContentClick);
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->editStd);
			this->panel3->Controls->Add(this->addStd);
			this->panel3->Location = System::Drawing::Point(551, 88);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 433);
			this->panel3->TabIndex = 2;
			// 
			// editStd
			// 
			this->editStd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->editStd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editStd->ForeColor = System::Drawing::SystemColors::Control;
			this->editStd->Location = System::Drawing::Point(39, 147);
			this->editStd->Name = L"editStd";
			this->editStd->Size = System::Drawing::Size(123, 42);
			this->editStd->TabIndex = 1;
			this->editStd->Text = L"Edit student";
			this->editStd->UseVisualStyleBackColor = false;
			this->editStd->Click += gcnew System::EventHandler(this, &StudentDetails::editStd_Click);
			// 
			// addStd
			// 
			this->addStd->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->addStd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addStd->ForeColor = System::Drawing::SystemColors::Control;
			this->addStd->Location = System::Drawing::Point(39, 101);
			this->addStd->Name = L"addStd";
			this->addStd->Size = System::Drawing::Size(123, 42);
			this->addStd->TabIndex = 0;
			this->addStd->Text = L"Add new";
			this->addStd->UseVisualStyleBackColor = false;
			this->addStd->Click += gcnew System::EventHandler(this, &StudentDetails::addStd_Click);
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			// 
			// StudentDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 521);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->stdMainPanel);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentDetails";
			this->Text = L"StudentDetails";
			this->Load += gcnew System::EventHandler(this, &StudentDetails::StudentDetails_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->stdMainPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentDataGrid))->EndInit();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		//function to fetch data from the database and display in data grid view
		public: void UpdateDataGrid()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT s.s_id, s.f_name, s.l_name, s.username, s.reg_date, s.gender, s.blood_grp, s.address, s.paid_status, s.class_id, e.email, p.contact_no FROM Students s LEFT JOIN Student_Email e ON s.username = e.username LEFT JOIN Student_Phone p ON s.s_id = p.id", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			StudentDataGrid->DataSource = dataTable;
		}
#pragma endregion
		private:
			AddStudent^ addStudentForm = nullptr;
			EditStudent^ editStudentForm = nullptr;
	

	private: System::Void addStd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		if (addStudentForm == nullptr || addStudentForm->IsDisposed)
		{
			addStudentForm = gcnew AddStudent();
			addStudentForm->Owner = this;
			addStudentForm->FormClosed += gcnew FormClosedEventHandler(this, &StudentDetails::addStudentFormClosed);
			addStudentForm->Show();
			addStd->Enabled = false;
		}
}
	private:
	void addStudentFormClosed(Object^ sender, FormClosedEventArgs^ e)
	{
		addStudentForm = nullptr;
		addStd->Enabled = true;
		UpdateDataGrid();
	}
	private: System::String^ selectedUsername;
	private: System::Void editStd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (selectedUsername == "")
		{
			MessageBox::Show("Please select a student you want to edit!");

		}
		else
		{
			if (editStudentForm == nullptr || editStudentForm->IsDisposed) 
			{
			
				editStudentForm = gcnew EditStudent(selectedUsername);
				editStudentForm->FormClosed += gcnew FormClosedEventHandler(this, &StudentDetails::editStudentFormClosed);
				editStudentForm->Show();
				editStd->Enabled = false;
			}
		}
	}

	private:
	void editStudentFormClosed(Object^ sender, FormClosedEventArgs^ e) 
	{
		editStudentForm = nullptr; // Reset the editStudentForm variable to null when the form is closed
		editStd->Enabled = true; // Re-enable the Edit Student button
		UpdateDataGrid();
	}
	private: System::Void StudentDetails_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		UpdateDataGrid();
	}
	
	private: System::Void StudentDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		if (e->RowIndex >= 0)
		{
			DataGridViewRow^ selectedRow = StudentDataGrid->Rows[e->RowIndex];
			selectedUsername = selectedRow->Cells["username"]->Value->ToString();
		}
	}
};
}

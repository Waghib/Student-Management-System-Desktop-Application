#pragma once
#include "AddClass.h"
#include "ViewStudent.h"
#include "ScheduleClass.h"
#include "AddStudentToClass.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;

	/// <summary>
	/// Summary for ClassDetails
	/// </summary>
	public ref class ClassDetails : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		ClassDetails(void)
		{
			this->ControlBox = false;
			this->MinimizeBox = false;
			this->MaximizeBox = false;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ createClassBtn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ studentDataGrid;
	private: System::Windows::Forms::Button^ addStdBtn;

	public:
		OracleConnection^ orcc1 = gcnew OracleConnection(str1);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClassDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ topPanel;
	protected:

	protected:
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ classDataGrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::Button^ viewStudentBtn;
	private: System::Windows::Forms::Button^ scheduleClassBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClassDetails::typeid));
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->classDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->addStdBtn = (gcnew System::Windows::Forms::Button());
			this->createClassBtn = (gcnew System::Windows::Forms::Button());
			this->scheduleClassBtn = (gcnew System::Windows::Forms::Button());
			this->viewStudentBtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->studentDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->topPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->classDataGrid))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->topPanel->Controls->Add(this->bunifuImageButton1);
			this->topPanel->Controls->Add(this->label1);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(751, 88);
			this->topPanel->TabIndex = 2;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(530, 9);
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
			this->label1->Location = System::Drawing::Point(106, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(394, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CLASSES DETAILS";
			// 
			// classDataGrid
			// 
			this->classDataGrid->AllowUserToAddRows = false;
			this->classDataGrid->AllowUserToDeleteRows = false;
			this->classDataGrid->AllowUserToResizeColumns = false;
			this->classDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->classDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->classDataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->classDataGrid->Location = System::Drawing::Point(0, 0);
			this->classDataGrid->Name = L"classDataGrid";
			this->classDataGrid->ReadOnly = true;
			this->classDataGrid->Size = System::Drawing::Size(561, 193);
			this->classDataGrid->TabIndex = 3;
			this->classDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClassDetails::classDataGrid_CellContentClick);
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			// 
			// panel3
			// 
			this->panel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->addStdBtn);
			this->panel3->Controls->Add(this->createClassBtn);
			this->panel3->Controls->Add(this->scheduleClassBtn);
			this->panel3->Controls->Add(this->viewStudentBtn);
			this->panel3->Location = System::Drawing::Point(562, 89);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(189, 678);
			this->panel3->TabIndex = 4;
			// 
			// addStdBtn
			// 
			this->addStdBtn->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->addStdBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addStdBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->addStdBtn->Location = System::Drawing::Point(2, 176);
			this->addStdBtn->Name = L"addStdBtn";
			this->addStdBtn->Size = System::Drawing::Size(186, 49);
			this->addStdBtn->TabIndex = 6;
			this->addStdBtn->Text = L"Add student";
			this->addStdBtn->UseVisualStyleBackColor = false;
			this->addStdBtn->Click += gcnew System::EventHandler(this, &ClassDetails::addStdBtn_Click);
			// 
			// createClassBtn
			// 
			this->createClassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->createClassBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createClassBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->createClassBtn->Location = System::Drawing::Point(0, 64);
			this->createClassBtn->Name = L"createClassBtn";
			this->createClassBtn->Size = System::Drawing::Size(189, 51);
			this->createClassBtn->TabIndex = 5;
			this->createClassBtn->Text = L"Create new class";
			this->createClassBtn->UseVisualStyleBackColor = false;
			this->createClassBtn->Click += gcnew System::EventHandler(this, &ClassDetails::createClassBtn_Click);
			// 
			// scheduleClassBtn
			// 
			this->scheduleClassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->scheduleClassBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->scheduleClassBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->scheduleClassBtn->Location = System::Drawing::Point(3, 231);
			this->scheduleClassBtn->Name = L"scheduleClassBtn";
			this->scheduleClassBtn->Size = System::Drawing::Size(186, 49);
			this->scheduleClassBtn->TabIndex = 4;
			this->scheduleClassBtn->Text = L"Schedule class";
			this->scheduleClassBtn->UseVisualStyleBackColor = false;
			this->scheduleClassBtn->Click += gcnew System::EventHandler(this, &ClassDetails::button1_Click_1);
			// 
			// viewStudentBtn
			// 
			this->viewStudentBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(228)));
			this->viewStudentBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewStudentBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->viewStudentBtn->Location = System::Drawing::Point(2, 121);
			this->viewStudentBtn->Name = L"viewStudentBtn";
			this->viewStudentBtn->Size = System::Drawing::Size(186, 49);
			this->viewStudentBtn->TabIndex = 3;
			this->viewStudentBtn->Text = L"View students List";
			this->viewStudentBtn->UseVisualStyleBackColor = false;
			this->viewStudentBtn->Click += gcnew System::EventHandler(this, &ClassDetails::button1_Click);
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->Controls->Add(this->classDataGrid);
			this->panel1->Location = System::Drawing::Point(0, 88);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(561, 193);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->studentDataGrid);
			this->panel2->Location = System::Drawing::Point(4, 286);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(557, 259);
			this->panel2->TabIndex = 6;
			// 
			// studentDataGrid
			// 
			this->studentDataGrid->AllowUserToAddRows = false;
			this->studentDataGrid->AllowUserToDeleteRows = false;
			this->studentDataGrid->AllowUserToResizeColumns = false;
			this->studentDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->studentDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->studentDataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->studentDataGrid->Location = System::Drawing::Point(0, 0);
			this->studentDataGrid->Name = L"studentDataGrid";
			this->studentDataGrid->ReadOnly = true;
			this->studentDataGrid->Size = System::Drawing::Size(557, 259);
			this->studentDataGrid->TabIndex = 4;
			this->studentDataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClassDetails::studentDataGrid_CellContentClick);
			// 
			// ClassDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 557);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->topPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ClassDetails";
			this->Text = L"ClassDetails";
			this->Load += gcnew System::EventHandler(this, &ClassDetails::ClassDetails_Load);
			this->topPanel->ResumeLayout(false);
			this->topPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->classDataGrid))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		public: void UpdateDataGridClass()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT Class_id, class_name, Student_Count FROM class_student_count ", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			classDataGrid->DataSource = dataTable;
		}
		public: void UpdateDataGridStudent()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT s.s_id, s.f_name, s.l_name, s.username, s.reg_date, s.gender, s.blood_grp, s.address, s.paid_status, s.class_id, e.email, p.contact_no FROM Students s LEFT JOIN Student_Email e ON s.username = e.username LEFT JOIN Student_Phone p ON s.s_id = p.id", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			studentDataGrid->DataSource = dataTable;
		}
#pragma endregion
		private:
			String^ selectedClassId = "";
			int selectedStudentId = 0;
		
	private:
			AddClass^ addClassForm = nullptr;
			ViewStudent^ ViewStudentForm = nullptr;
			ScheduleClass^ ScheduleClassForm = nullptr;
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)	
	{
		if (selectedClassId == "")
		{
			MessageBox::Show("Please select a student id!");
		}
		else
		{
			if (ViewStudentForm == nullptr || ViewStudentForm->IsDisposed)
			{
				ViewStudentForm = gcnew ViewStudent(selectedClassId);
				ViewStudentForm->FormClosed += gcnew FormClosedEventHandler(this, &ClassDetails::ViewStudentFormClosed);
				ViewStudentForm->Show();
				viewStudentBtn->Enabled = false;
			}
		}
	}
	private:
		void ViewStudentFormClosed(Object^ sender, FormClosedEventArgs^ e)
		{
			ViewStudentForm = nullptr;
			viewStudentBtn->Enabled = true;
			UpdateDataGridClass();
		}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) // schedule class btn
	{
		if (ScheduleClassForm == nullptr || ScheduleClassForm->IsDisposed)
		{
			ScheduleClassForm = gcnew ScheduleClass();
			ScheduleClassForm->FormClosed += gcnew FormClosedEventHandler(this, &ClassDetails::ScheduleClassFormClosed);
			ScheduleClassForm->Show();
			scheduleClassBtn->Enabled = false;
		}
	}
	private:
		void ScheduleClassFormClosed(Object^ sender, FormClosedEventArgs^ e)
		{
			ScheduleClassForm = nullptr;
			scheduleClassBtn->Enabled = true;
			UpdateDataGridClass();
		}
	private: System::Void ClassDetails_Load(System::Object^ sender, System::EventArgs^ e)
	{
		UpdateDataGridClass();
		UpdateDataGridStudent();
	}
	
	private: System::Void createClassBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		if (addClassForm == nullptr || addClassForm->IsDisposed)
		{
			addClassForm = gcnew AddClass();
			addClassForm->FormClosed += gcnew FormClosedEventHandler(this, &ClassDetails::addClassFormClosed);
			addClassForm->Show();
			createClassBtn->Enabled = false;
		}
	}
	private:
		void addClassFormClosed(Object^ sender, FormClosedEventArgs^ e)
		{
			addClassForm = nullptr;
			createClassBtn->Enabled = true;
			UpdateDataGridClass();
		}

	private: System::Void classDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		if (e->RowIndex >= 0)
		{
			DataGridViewRow^ selectedRow = classDataGrid->Rows[e->RowIndex];
			selectedClassId = selectedRow->Cells["class_id"]->Value->ToString();
		}

	}
	private: System::Void studentDataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		if (e->RowIndex >= 0)
		{
			DataGridViewRow^ selectedRow = studentDataGrid->Rows[e->RowIndex];
			selectedStudentId = Convert::ToInt32(selectedRow->Cells["s_id"]->Value);
			String^ studentId = selectedStudentId.ToString();
		}
	}
		   private:
			   AddStudentToClass^ AddStudentToClassForm = nullptr;
	private: System::Void addStdBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (AddStudentToClassForm == nullptr || AddStudentToClassForm->IsDisposed)
		{
			AddStudentToClassForm = gcnew AddStudentToClass();
			AddStudentToClassForm->FormClosed += gcnew FormClosedEventHandler(this, &ClassDetails::AddStudentToClassFormClosed);
			AddStudentToClassForm->Show();
			addStdBtn->Enabled = false;
		}
	}
		   private:
			   void AddStudentToClassFormClosed(Object^ sender, FormClosedEventArgs^ e)
			   {
				   AddStudentToClassForm = nullptr;
				   addStdBtn->Enabled = true;
				   UpdateDataGridClass();
				   UpdateDataGridStudent();
			   }
};
}

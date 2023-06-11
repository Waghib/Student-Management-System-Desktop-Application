#pragma once
#include "MarkAttendance.h"
#include "AttendanceReport.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;

	/// <summary>
	/// Summary for AttendanceByTeacher
	/// </summary>
	public ref class AttendanceByTeacher : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		AttendanceByTeacher(String^ username)
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
		~AttendanceByTeacher()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ addAttendance;
	private: System::Windows::Forms::Button^ attendanceReport;


	private: System::Windows::Forms::Panel^ attendanceSidePanelTeacher;
	private: System::Windows::Forms::Panel^ panel1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ attendanceDataGrid;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AttendanceByTeacher::typeid));
			this->addAttendance = (gcnew System::Windows::Forms::Button());
			this->attendanceReport = (gcnew System::Windows::Forms::Button());
			this->attendanceSidePanelTeacher = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->attendanceDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->attendanceSidePanelTeacher->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->attendanceDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// addAttendance
			// 
			this->addAttendance->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->addAttendance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addAttendance->ForeColor = System::Drawing::SystemColors::Control;
			this->addAttendance->Location = System::Drawing::Point(21, 71);
			this->addAttendance->Name = L"addAttendance";
			this->addAttendance->Size = System::Drawing::Size(167, 63);
			this->addAttendance->TabIndex = 0;
			this->addAttendance->Text = L"Add Attendance";
			this->addAttendance->UseVisualStyleBackColor = false;
			this->addAttendance->Click += gcnew System::EventHandler(this, &AttendanceByTeacher::addAttendance_Click);
			// 
			// attendanceReport
			// 
			this->attendanceReport->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->attendanceReport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->attendanceReport->ForeColor = System::Drawing::SystemColors::Control;
			this->attendanceReport->Location = System::Drawing::Point(21, 155);
			this->attendanceReport->Name = L"attendanceReport";
			this->attendanceReport->Size = System::Drawing::Size(167, 63);
			this->attendanceReport->TabIndex = 1;
			this->attendanceReport->Text = L"Attendance Report";
			this->attendanceReport->UseVisualStyleBackColor = false;
			this->attendanceReport->Click += gcnew System::EventHandler(this, &AttendanceByTeacher::attendanceReport_Click);
			// 
			// attendanceSidePanelTeacher
			// 
			this->attendanceSidePanelTeacher->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->attendanceSidePanelTeacher->BackColor = System::Drawing::SystemColors::Control;
			this->attendanceSidePanelTeacher->Controls->Add(this->attendanceReport);
			this->attendanceSidePanelTeacher->Controls->Add(this->addAttendance);
			this->attendanceSidePanelTeacher->Location = System::Drawing::Point(551, 88);
			this->attendanceSidePanelTeacher->Name = L"attendanceSidePanelTeacher";
			this->attendanceSidePanelTeacher->Size = System::Drawing::Size(200, 433);
			this->attendanceSidePanelTeacher->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->panel1->Controls->Add(this->bunifuImageButton1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(751, 88);
			this->panel1->TabIndex = 6;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(589, 9);
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
			this->label1->Location = System::Drawing::Point(66, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(499, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ATTENDANCE DETAILS";
			// 
			// attendanceDataGrid
			// 
			this->attendanceDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->attendanceDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->attendanceDataGrid->Location = System::Drawing::Point(0, 88);
			this->attendanceDataGrid->Name = L"attendanceDataGrid";
			this->attendanceDataGrid->Size = System::Drawing::Size(553, 396);
			this->attendanceDataGrid->TabIndex = 7;
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			// 
			// AttendanceByTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 521);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->attendanceDataGrid);
			this->Controls->Add(this->attendanceSidePanelTeacher);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AttendanceByTeacher";
			this->Text = L"Attendance of Students";
			this->Load += gcnew System::EventHandler(this, &AttendanceByTeacher::AttendanceByTeacher_Load);
			this->attendanceSidePanelTeacher->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->attendanceDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
		void updateAttendance()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("select A_id, class_id, student_id, teacher_id, att_date, status from attendance_status", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			attendanceDataGrid->DataSource = dataTable;
		}
#pragma endregion
		private:
			MarkAttendance^ attendanceForm = nullptr;
			AttendanceReport^ reportForm = nullptr;

	private: System::Void addAttendance_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (attendanceForm == nullptr || attendanceForm->IsDisposed)
		{
			attendanceForm = gcnew MarkAttendance();
			attendanceForm->FormClosed += gcnew FormClosedEventHandler(this, &AttendanceByTeacher::attendanceFormClosed);
			attendanceForm->Show();
			addAttendance->Enabled = false;
		}
	}
	private:
		void attendanceFormClosed(Object^ sender, FormClosedEventArgs^ e)
		{
			attendanceForm = nullptr;
		    addAttendance->Enabled = true;
		    updateAttendance();
	    }
	private: System::Void attendanceReport_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		if (reportForm == nullptr || reportForm->IsDisposed)
		{
			reportForm = gcnew AttendanceReport(selectedUsername);
			reportForm->FormClosed += gcnew FormClosedEventHandler(this, &AttendanceByTeacher::AttendanceReportClosed);
			reportForm->Show();
			attendanceReport->Enabled = false;
		}
	}
	private:
		void AttendanceReportClosed(Object^ sender, FormClosedEventArgs^ e)
		{
			reportForm = nullptr;
			attendanceReport->Enabled = true;
		}
	private: System::Void AttendanceByTeacher_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		updateAttendance();
	}
};
}

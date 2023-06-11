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
	/// Summary for AttendanceByTeacher1
	/// </summary>
	public ref class AttendanceByTeacher1 : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		AttendanceByTeacher1(String^ username)
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
		~AttendanceByTeacher1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::DataGridView^ attendanceDataGrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;

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
			this->attendanceDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->attendanceDataGrid))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// attendanceDataGrid
			// 
			this->attendanceDataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->attendanceDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->attendanceDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->attendanceDataGrid->Location = System::Drawing::Point(3, 88);
			this->attendanceDataGrid->Name = L"attendanceDataGrid";
			this->attendanceDataGrid->Size = System::Drawing::Size(554, 400);
			this->attendanceDataGrid->TabIndex = 4;
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 48, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->label1->Location = System::Drawing::Point(93, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(499, 76);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ATTENDANCE DETAILS";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(760, 88);
			this->panel1->TabIndex = 7;
			// 
			// AttendanceByTeacher1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 521);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->attendanceDataGrid);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AttendanceByTeacher1";
			this->Text = L"AttendanceByStudent";
			this->Load += gcnew System::EventHandler(this, &AttendanceByTeacher1::AttendanceByTeacher1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->attendanceDataGrid))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
		void attendanceDetails()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT s.f_name || ' ' || s.l_name AS Name, s.username, COUNT(*) as Total_No_of_Classes, SUM(CASE WHEN a.status = 'P' THEN 1 ELSE 0 END) AS No_of_Classes_Attended, CONCAT(ROUND(SUM(CASE WHEN a.status = 'P' THEN 1 ELSE 0 END)/COUNT(*)*100, 2), '%') AS Attendance_Percentage FROM Attendance_status a, STUDENTS s Where a.Student_id = s.S_id and s.username = '" + selectedUsername + "' GROUP BY s.f_name, s.l_name, s.username", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			attendanceDataGrid->DataSource = dataTable;
		}
#pragma endregion
	private: System::Void AttendanceByTeacher1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		attendanceDetails();
	}
};
}

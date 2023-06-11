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
	/// Summary for AttendanceReport
	/// </summary>
	public ref class AttendanceReport : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		AttendanceReport(String^ username)
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
		~AttendanceReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ attendanceDataGrid;
	private: System::Windows::Forms::Button^ cancelButton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AttendanceReport::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->attendanceDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->attendanceDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel2->Controls->Add(this->label9);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(689, 100);
			this->panel2->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(58, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(566, 63);
			this->label9->TabIndex = 0;
			this->label9->Text = L"ATTENDANCE REPORT";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->cancelButton);
			this->panel1->Controls->Add(this->attendanceDataGrid);
			this->panel1->Location = System::Drawing::Point(0, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(689, 508);
			this->panel1->TabIndex = 4;
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cancelButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancelButton.Image")));
			this->cancelButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancelButton->Location = System::Drawing::Point(291, 430);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(103, 46);
			this->cancelButton->TabIndex = 37;
			this->cancelButton->Text = L"     Close";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &AttendanceReport::cancelButton_Click);
			// 
			// attendanceDataGrid
			// 
			this->attendanceDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->attendanceDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->attendanceDataGrid->Location = System::Drawing::Point(3, 0);
			this->attendanceDataGrid->Name = L"attendanceDataGrid";
			this->attendanceDataGrid->Size = System::Drawing::Size(686, 399);
			this->attendanceDataGrid->TabIndex = 8;
			// 
			// AttendanceReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 608);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AttendanceReport";
			this->Text = L"AttendanceReport";
			this->Load += gcnew System::EventHandler(this, &AttendanceReport::AttendanceReport_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->attendanceDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
		void attendanceReport()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT s.f_name || ' ' || s.l_name AS Name, s.S_id AS Roll_Number, COUNT(*) AS Total_No_of_Classes, SUM(CASE WHEN a.status = 'P' THEN 1 ELSE 0 END) AS No_of_Classes_Attended, CONCAT(ROUND(SUM(CASE WHEN a.status = 'P' THEN 1 ELSE 0 END) / COUNT(*) * 100, 2), '%') AS Attendance_Percentage FROM Attendance_status a, Teachers t, students s Where a.Teacher_id = t.T_id and a.Student_id = s.S_id and t.username = '" + selectedUsername + "' GROUP BY s.S_id, s.f_name, s.l_name ORDER BY s.S_id", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			attendanceDataGrid->DataSource = dataTable;
		}
#pragma endregion
	private: System::Void AttendanceReport_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		attendanceReport();
	}
private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
};
}

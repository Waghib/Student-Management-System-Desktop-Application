#pragma once
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
	/// Summary for ViewStudent
	/// </summary>
	public ref class ViewStudent : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		ViewStudent(String^ id)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->selectedClassId = id;
		}
		OracleConnection^ orcc1 = gcnew OracleConnection(str1);
	private:
		String^ selectedClassId;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ studentListDataGrid;



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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->studentListDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentListDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(152)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(228)));
			this->panel2->Controls->Add(this->label9);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(689, 100);
			this->panel2->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(135, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(407, 63);
			this->label9->TabIndex = 0;
			this->label9->Text = L"STUDENTS LIST";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->studentListDataGrid);
			this->panel3->Location = System::Drawing::Point(0, 100);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(489, 508);
			this->panel3->TabIndex = 6;
			// 
			// studentListDataGrid
			// 
			this->studentListDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->studentListDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->studentListDataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->studentListDataGrid->Location = System::Drawing::Point(0, 0);
			this->studentListDataGrid->Name = L"studentListDataGrid";
			this->studentListDataGrid->Size = System::Drawing::Size(489, 508);
			this->studentListDataGrid->TabIndex = 1;
			// 
			// ViewStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 608);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"ViewStudent";
			this->Load += gcnew System::EventHandler(this, &ViewStudent::ViewStudent_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentListDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
		public: void UpdateDataGrid()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT c.class_id, c.class_name AS Class_Name, s.f_name ||' ' || s.l_name AS Name, s.username, s.gender FROM STUDENTS s, class c WHERE s.class_id = c.class_id and s.class_id = '" + selectedClassId + "' ", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			studentListDataGrid->DataSource = dataTable;

		}
#pragma endregion
		private:
			AddStudentToClass^ AddStudentToClassForm = nullptr;
	private: System::Void ViewStudent_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		UpdateDataGrid();
	}
		  
};
}

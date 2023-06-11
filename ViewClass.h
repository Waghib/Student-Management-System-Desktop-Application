#pragma once
#include "AddClass.h"
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;

	/// <summary>
	/// Summary for ViewClass
	/// </summary>
	public ref class ViewClass : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		ViewClass(void)
		{
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
		~ViewClass()
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
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ classListDataGrid;

	private: System::Windows::Forms::Button^ createClassBtn;





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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->createClassBtn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->classListDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->classListDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->panel2->Controls->Add(this->label9);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(585, 100);
			this->panel2->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(184, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(302, 63);
			this->label9->TabIndex = 0;
			this->label9->Text = L"CLASS LIST";
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->Controls->Add(this->createClassBtn);
			this->panel1->Location = System::Drawing::Point(489, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 508);
			this->panel1->TabIndex = 4;
			// 
			// createClassBtn
			// 
			this->createClassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->createClassBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createClassBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->createClassBtn->Location = System::Drawing::Point(0, 69);
			this->createClassBtn->Name = L"createClassBtn";
			this->createClassBtn->Size = System::Drawing::Size(200, 51);
			this->createClassBtn->TabIndex = 2;
			this->createClassBtn->Text = L"Create new class";
			this->createClassBtn->UseVisualStyleBackColor = false;
			this->createClassBtn->Click += gcnew System::EventHandler(this, &ViewClass::createClassBtn_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->classListDataGrid);
			this->panel3->Location = System::Drawing::Point(0, 100);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(489, 508);
			this->panel3->TabIndex = 5;
			// 
			// classListDataGrid
			// 
			this->classListDataGrid->BackgroundColor = System::Drawing::SystemColors::Control;
			this->classListDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->classListDataGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->classListDataGrid->Location = System::Drawing::Point(0, 0);
			this->classListDataGrid->Name = L"classListDataGrid";
			this->classListDataGrid->Size = System::Drawing::Size(489, 508);
			this->classListDataGrid->TabIndex = 0;
			// 
			// ViewClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 608);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"ViewClass";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->classListDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
		public: void UpdateDataGrid()
		{
			OracleDataAdapter^ adapter = gcnew OracleDataAdapter("SELECT Class_id, class_name FROM class_student_count ", orcc1);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);
			classListDataGrid->DataSource = dataTable;
		}
#pragma endregion
		private:
			AddClass^ addClassForm = nullptr;

	private: System::Void createClassBtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (addClassForm == nullptr || addClassForm->IsDisposed)
		{
			addClassForm = gcnew AddClass();
			addClassForm->FormClosed += gcnew FormClosedEventHandler(this, &ViewClass::addClassFormClosed);
			addClassForm->Show();
			createClassBtn->Enabled = false;
		}
	}
	private:
		void addClassFormClosed(Object^ sender, FormClosedEventArgs^ e)
		{
			addClassForm = nullptr;
			createClassBtn->Enabled = true;
		}
};
}

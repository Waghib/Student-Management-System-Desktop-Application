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
	/// Summary for AddStudentToClass
	/// </summary>
	public ref class AddStudentToClass : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		AddStudentToClass(void)
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
		~AddStudentToClass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ studentId;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ classId;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudentToClass::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->studentId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->classId = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
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
			this->panel2->Size = System::Drawing::Size(358, 100);
			this->panel2->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(32, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(292, 49);
			this->label9->TabIndex = 0;
			this->label9->Text = L"ADD STUDENT";
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::Color::Brown;
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->cancelButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancelButton.Image")));
			this->cancelButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancelButton->Location = System::Drawing::Point(202, 310);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(103, 46);
			this->cancelButton->TabIndex = 35;
			this->cancelButton->Text = L"     Cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &AddStudentToClass::cancelButton_Click);
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addButton.Image")));
			this->addButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->Location = System::Drawing::Point(48, 310);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(103, 46);
			this->addButton->TabIndex = 34;
			this->addButton->Text = L"  Add";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &AddStudentToClass::addButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(44, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 20);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Student id :";
			// 
			// studentId
			// 
			this->studentId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->studentId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->studentId->ForeColor = System::Drawing::SystemColors::Control;
			this->studentId->Location = System::Drawing::Point(163, 150);
			this->studentId->Multiline = true;
			this->studentId->Name = L"studentId";
			this->studentId->Size = System::Drawing::Size(147, 25);
			this->studentId->TabIndex = 32;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(61, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Class id :";
			// 
			// classId
			// 
			this->classId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->classId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->classId->ForeColor = System::Drawing::SystemColors::Control;
			this->classId->Location = System::Drawing::Point(163, 218);
			this->classId->Multiline = true;
			this->classId->Name = L"classId";
			this->classId->Size = System::Drawing::Size(147, 25);
			this->classId->TabIndex = 30;
			// 
			// AddStudentToClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(358, 398);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->studentId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->classId);
			this->Controls->Add(this->panel2);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AddStudentToClass";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (classId->Text->Length > 0 && studentId->Text->Length > 0)
		{
			orcc1->Open();

			OracleCommand^ orcm1 = gcnew OracleCommand("UPDATE STUDENTS SET class_id = '" + classId->Text + "' WHERE S_id = " + studentId->Text, orcc1);
			orcm1->ExecuteNonQuery();

			MessageBox::Show("Student added to class successfully!");

			orcc1->Close();
			this->Close();
		}
		else
		{
			// Error: Missing required fields
			MessageBox::Show("Please fill all the required fields!");
		}
	}

	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
};
}

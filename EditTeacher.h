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
	/// Summary for EditTeacher
	/// </summary>
	public ref class EditTeacher : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		EditTeacher(String^ username)
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
		~EditTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ EditTeacherPanel;

	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::TextBox^ email;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ number;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ address;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ secondName;
	private: System::Windows::Forms::TextBox^ firstName;



















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditTeacher::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->EditTeacherPanel = (gcnew System::Windows::Forms::Panel());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->number = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->secondName = (gcnew System::Windows::Forms::TextBox());
			this->firstName = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->EditTeacherPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel2->Controls->Add(this->label9);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->ForeColor = System::Drawing::SystemColors::Control;
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
			this->label9->Location = System::Drawing::Point(46, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(597, 63);
			this->label9->TabIndex = 0;
			this->label9->Text = L"EDIT TEACHER DETAILS";
			// 
			// EditTeacherPanel
			// 
			this->EditTeacherPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->EditTeacherPanel->Controls->Add(this->cancelButton);
			this->EditTeacherPanel->Controls->Add(this->addButton);
			this->EditTeacherPanel->Controls->Add(this->email);
			this->EditTeacherPanel->Controls->Add(this->label11);
			this->EditTeacherPanel->Controls->Add(this->label10);
			this->EditTeacherPanel->Controls->Add(this->username);
			this->EditTeacherPanel->Controls->Add(this->number);
			this->EditTeacherPanel->Controls->Add(this->label5);
			this->EditTeacherPanel->Controls->Add(this->address);
			this->EditTeacherPanel->Controls->Add(this->label8);
			this->EditTeacherPanel->Controls->Add(this->label2);
			this->EditTeacherPanel->Controls->Add(this->label1);
			this->EditTeacherPanel->Controls->Add(this->secondName);
			this->EditTeacherPanel->Controls->Add(this->firstName);
			this->EditTeacherPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EditTeacherPanel->ForeColor = System::Drawing::SystemColors::Control;
			this->EditTeacherPanel->Location = System::Drawing::Point(0, 100);
			this->EditTeacherPanel->Name = L"EditTeacherPanel";
			this->EditTeacherPanel->Size = System::Drawing::Size(689, 312);
			this->EditTeacherPanel->TabIndex = 5;
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
			this->cancelButton->Location = System::Drawing::Point(366, 245);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(103, 46);
			this->cancelButton->TabIndex = 40;
			this->cancelButton->Text = L"     Cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &EditTeacher::cancelButton_Click);
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addButton.Image")));
			this->addButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->Location = System::Drawing::Point(212, 245);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(103, 46);
			this->addButton->TabIndex = 39;
			this->addButton->Text = L"  Add";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &EditTeacher::addButton_Click);
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->email->ForeColor = System::Drawing::SystemColors::Control;
			this->email->Location = System::Drawing::Point(531, 177);
			this->email->Multiline = true;
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(147, 25);
			this->email->TabIndex = 38;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(362, 177);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 20);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Email :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(10, 177);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 20);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Username :";
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->username->ForeColor = System::Drawing::SystemColors::Control;
			this->username->Location = System::Drawing::Point(156, 177);
			this->username->Multiline = true;
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(147, 25);
			this->username->TabIndex = 35;
			// 
			// number
			// 
			this->number->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->number->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->number->ForeColor = System::Drawing::SystemColors::Control;
			this->number->Location = System::Drawing::Point(156, 110);
			this->number->Multiline = true;
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(147, 25);
			this->number->TabIndex = 34;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(10, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 20);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Contact No :";
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->address->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->address->ForeColor = System::Drawing::SystemColors::Control;
			this->address->Location = System::Drawing::Point(531, 110);
			this->address->Multiline = true;
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(147, 25);
			this->address->TabIndex = 32;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(362, 110);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 20);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Address :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(362, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 20);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Second name :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(10, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 20);
			this->label1->TabIndex = 29;
			this->label1->Text = L"First name :";
			// 
			// secondName
			// 
			this->secondName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->secondName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->secondName->ForeColor = System::Drawing::SystemColors::Control;
			this->secondName->Location = System::Drawing::Point(531, 51);
			this->secondName->Multiline = true;
			this->secondName->Name = L"secondName";
			this->secondName->Size = System::Drawing::Size(147, 25);
			this->secondName->TabIndex = 28;
			// 
			// firstName
			// 
			this->firstName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->firstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->firstName->ForeColor = System::Drawing::SystemColors::Control;
			this->firstName->Location = System::Drawing::Point(156, 51);
			this->firstName->Multiline = true;
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(147, 25);
			this->firstName->TabIndex = 27;
			// 
			// EditTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 412);
			this->Controls->Add(this->EditTeacherPanel);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"EditTeacher";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->EditTeacherPanel->ResumeLayout(false);
			this->EditTeacherPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (firstName->Text->Length > 0 && secondName->Text->Length > 0 && number->Text->Length > 0 &&
			address->Text->Length > 0 && username->Text->Length > 0 && email->Text->Length > 0)
		{
			orcc1->Open();

			OracleCommand^ orcm5 = gcnew OracleCommand("SELECT T_id FROM Teachers WHERE username = '" + selectedUsername + "'", orcc1);
			int count = Convert::ToInt32(orcm5->ExecuteScalar());

			OracleCommand^ orcm1 = gcnew OracleCommand("UPDATE login_info SET user_name = '" + username->Text + "' WHERE user_name = '" + selectedUsername + "'", orcc1);
			orcm1->ExecuteNonQuery();

			OracleCommand^ orcm2 = gcnew OracleCommand("UPDATE teacher_email SET email = '" + email->Text + "' WHERE username = '" + selectedUsername + "'", orcc1);
			orcm2->ExecuteNonQuery();

			OracleCommand^ orcm3 = gcnew OracleCommand("UPDATE teacher_phone SET contact_no = '" + number->Text + "' WHERE ID = " + count, orcc1);
			orcm3->ExecuteNonQuery();

			OracleCommand^ orcm4 = gcnew OracleCommand("UPDATE teachers SET f_name = '" + firstName->Text + "', l_name = '" + secondName->Text + "', address = '" + address->Text + "' WHERE T_id = " + count, orcc1);
			orcm4->ExecuteNonQuery();

			MessageBox::Show("Teacher edited successfully!");
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

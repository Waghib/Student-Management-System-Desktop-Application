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
	/// Summary for AddTeacher
	/// </summary>
	public ref class AddTeacher : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		AddTeacher(void)
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
		~AddTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ AddTeacherPanel;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ username;

	private: System::Windows::Forms::TextBox^ address;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ bloodGroup;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ number;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ gender;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ secondName;
	private: System::Windows::Forms::TextBox^ firstName;
	private: System::Windows::Forms::TextBox^ email;

	private: System::Windows::Forms::Label^ emailLabel;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ registration;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddTeacher::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->AddTeacherPanel = (gcnew System::Windows::Forms::Panel());
			this->registration = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->bloodGroup = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->number = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->secondName = (gcnew System::Windows::Forms::TextBox());
			this->firstName = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->AddTeacherPanel->SuspendLayout();
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
			this->panel2->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(126, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(467, 63);
			this->label9->TabIndex = 0;
			this->label9->Text = L"TEACHER DETAILS";
			// 
			// AddTeacherPanel
			// 
			this->AddTeacherPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->AddTeacherPanel->Controls->Add(this->registration);
			this->AddTeacherPanel->Controls->Add(this->label7);
			this->AddTeacherPanel->Controls->Add(this->password);
			this->AddTeacherPanel->Controls->Add(this->cancelButton);
			this->AddTeacherPanel->Controls->Add(this->addButton);
			this->AddTeacherPanel->Controls->Add(this->email);
			this->AddTeacherPanel->Controls->Add(this->emailLabel);
			this->AddTeacherPanel->Controls->Add(this->label3);
			this->AddTeacherPanel->Controls->Add(this->label10);
			this->AddTeacherPanel->Controls->Add(this->username);
			this->AddTeacherPanel->Controls->Add(this->address);
			this->AddTeacherPanel->Controls->Add(this->label8);
			this->AddTeacherPanel->Controls->Add(this->bloodGroup);
			this->AddTeacherPanel->Controls->Add(this->label6);
			this->AddTeacherPanel->Controls->Add(this->number);
			this->AddTeacherPanel->Controls->Add(this->label5);
			this->AddTeacherPanel->Controls->Add(this->label4);
			this->AddTeacherPanel->Controls->Add(this->gender);
			this->AddTeacherPanel->Controls->Add(this->label2);
			this->AddTeacherPanel->Controls->Add(this->label1);
			this->AddTeacherPanel->Controls->Add(this->secondName);
			this->AddTeacherPanel->Controls->Add(this->firstName);
			this->AddTeacherPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AddTeacherPanel->Location = System::Drawing::Point(0, 100);
			this->AddTeacherPanel->Name = L"AddTeacherPanel";
			this->AddTeacherPanel->Size = System::Drawing::Size(689, 470);
			this->AddTeacherPanel->TabIndex = 4;
			// 
			// registration
			// 
			this->registration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->registration->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->registration->ForeColor = System::Drawing::SystemColors::Control;
			this->registration->Location = System::Drawing::Point(152, 219);
			this->registration->Multiline = true;
			this->registration->Name = L"registration";
			this->registration->Size = System::Drawing::Size(147, 25);
			this->registration->TabIndex = 44;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(6, 161);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 20);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Password :";
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->password->ForeColor = System::Drawing::SystemColors::Control;
			this->password->Location = System::Drawing::Point(152, 161);
			this->password->Multiline = true;
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(147, 25);
			this->password->TabIndex = 42;
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
			this->cancelButton->Location = System::Drawing::Point(371, 396);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(103, 46);
			this->cancelButton->TabIndex = 41;
			this->cancelButton->Text = L"     Cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &AddTeacher::cancelButton_Click);
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
			this->addButton->Location = System::Drawing::Point(217, 396);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(103, 46);
			this->addButton->TabIndex = 40;
			this->addButton->Text = L"  Add";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &AddTeacher::addButton_Click);
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->email->ForeColor = System::Drawing::SystemColors::Control;
			this->email->Location = System::Drawing::Point(152, 286);
			this->email->Multiline = true;
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(147, 25);
			this->email->TabIndex = 39;
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->emailLabel->Location = System::Drawing::Point(6, 286);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(56, 20);
			this->emailLabel->TabIndex = 38;
			this->emailLabel->Text = L"Email :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(6, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 20);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Registration :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(6, 98);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 20);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Username :";
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->username->ForeColor = System::Drawing::SystemColors::Control;
			this->username->Location = System::Drawing::Point(152, 98);
			this->username->Multiline = true;
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(147, 25);
			this->username->TabIndex = 34;
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->address->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->address->ForeColor = System::Drawing::SystemColors::Control;
			this->address->Location = System::Drawing::Point(527, 219);
			this->address->Multiline = true;
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(147, 25);
			this->address->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(358, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 20);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Address :";
			// 
			// bloodGroup
			// 
			this->bloodGroup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->bloodGroup->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->bloodGroup->ForeColor = System::Drawing::SystemColors::Control;
			this->bloodGroup->Location = System::Drawing::Point(527, 156);
			this->bloodGroup->Multiline = true;
			this->bloodGroup->Name = L"bloodGroup";
			this->bloodGroup->Size = System::Drawing::Size(147, 25);
			this->bloodGroup->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(358, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 20);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Blood Group :";
			// 
			// number
			// 
			this->number->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->number->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->number->ForeColor = System::Drawing::SystemColors::Control;
			this->number->Location = System::Drawing::Point(527, 286);
			this->number->Multiline = true;
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(147, 25);
			this->number->TabIndex = 27;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(358, 286);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 20);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Contact No :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(358, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 20);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Gender :";
			// 
			// gender
			// 
			this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->gender->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->gender->ForeColor = System::Drawing::SystemColors::Control;
			this->gender->Location = System::Drawing::Point(527, 97);
			this->gender->Multiline = true;
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(147, 25);
			this->gender->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(358, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 20);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Second name :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(6, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"First name :";
			// 
			// secondName
			// 
			this->secondName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->secondName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->secondName->ForeColor = System::Drawing::SystemColors::Control;
			this->secondName->Location = System::Drawing::Point(527, 35);
			this->secondName->Multiline = true;
			this->secondName->Name = L"secondName";
			this->secondName->Size = System::Drawing::Size(147, 25);
			this->secondName->TabIndex = 21;
			// 
			// firstName
			// 
			this->firstName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->firstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->firstName->ForeColor = System::Drawing::SystemColors::Control;
			this->firstName->Location = System::Drawing::Point(152, 35);
			this->firstName->Multiline = true;
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(147, 25);
			this->firstName->TabIndex = 20;
			// 
			// AddTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 570);
			this->Controls->Add(this->AddTeacherPanel);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AddTeacher";
			this->Text = L"AddTeacher";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->AddTeacherPanel->ResumeLayout(false);
			this->AddTeacherPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		orcc1->Open();
		if (firstName->Text->Length > 0 && secondName->Text->Length > 0 && registration->Text->Length > 0 &&
			gender->Text->Length > 0 && number->Text->Length > 0 && bloodGroup->Text->Length > 0 &&
			address->Text->Length > 0 && username->Text->Length > 0)
		{
			// All required fields are filled, submit the form
			OracleCommand^ orcm4 = gcnew OracleCommand("INSERT INTO LOGIN_INFO VALUES('" + username->Text + "','" + password->Text + "', '" + password->Text + "')", orcc1);
			orcm4->ExecuteNonQuery();

			OracleCommand^ orcm5 = gcnew OracleCommand("INSERT INTO Login_info_dsg VALUES('" + username->Text + "', 'Teacher')", orcc1);
			orcm5->ExecuteNonQuery();

			OracleCommand^ orcm1 = gcnew OracleCommand("INSERT INTO TEACHERS (T_id, f_name, l_name, username, reg_date, gender, blood_grp, address) VALUES(TEACHERS_SEQ.NEXTVAL , '" + firstName->Text + "','" + secondName->Text + "', '" + username->Text + "', TO_DATE('" + registration->Text + "', 'DD Month YYYY'), '" + gender->Text + "', ' " + bloodGroup->Text + " ', '" + address->Text + "')", orcc1);
			orcm1->ExecuteNonQuery();

			OracleCommand^ orcm2 = gcnew OracleCommand("INSERT INTO TEACHER_EMAIL VALUES('" + username->Text + "','" + email->Text + "')", orcc1);
			orcm2->ExecuteNonQuery();

			OracleCommand^ orcm3 = gcnew OracleCommand("INSERT INTO TEACHER_PHONE VALUES(TeacherS_seq.CURRVAL,'" + number->Text + "')", orcc1);
			orcm3->ExecuteNonQuery();

			MessageBox::Show("Teacher added successfully!");
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

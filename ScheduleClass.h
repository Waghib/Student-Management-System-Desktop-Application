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
	/// Summary for ScheduleClass
	/// </summary>
	public ref class ScheduleClass : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		ScheduleClass(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::TextBox^ startTime;
	public:
	private: System::Windows::Forms::TextBox^ endTime;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ day;
		   OracleConnection^ orcc1 = gcnew OracleConnection(str1);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ScheduleClass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ teacherId;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ classId;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ classLocation;
	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ date;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ScheduleClass::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->teacherId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->classId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->classLocation = (gcnew System::Windows::Forms::TextBox());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->date = (gcnew System::Windows::Forms::TextBox());
			this->startTime = (gcnew System::Windows::Forms::TextBox());
			this->endTime = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->day = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
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
			this->label9->Location = System::Drawing::Point(121, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(446, 63);
			this->label9->TabIndex = 0;
			this->label9->Text = L"SCHEDULE CLASS";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(19, 223);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 20);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Teacher id :";
			// 
			// teacherId
			// 
			this->teacherId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->teacherId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->teacherId->ForeColor = System::Drawing::SystemColors::Control;
			this->teacherId->Location = System::Drawing::Point(165, 223);
			this->teacherId->Multiline = true;
			this->teacherId->Name = L"teacherId";
			this->teacherId->Size = System::Drawing::Size(147, 25);
			this->teacherId->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(38, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Class id :";
			// 
			// classId
			// 
			this->classId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->classId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->classId->ForeColor = System::Drawing::SystemColors::Control;
			this->classId->Location = System::Drawing::Point(165, 157);
			this->classId->Multiline = true;
			this->classId->Name = L"classId";
			this->classId->Size = System::Drawing::Size(147, 25);
			this->classId->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(19, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Start time :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(383, 290);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 20);
			this->label3->TabIndex = 32;
			this->label3->Text = L"End time :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(12, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 20);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Class location :";
			// 
			// classLocation
			// 
			this->classLocation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->classLocation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->classLocation->ForeColor = System::Drawing::SystemColors::Control;
			this->classLocation->Location = System::Drawing::Point(165, 360);
			this->classLocation->Multiline = true;
			this->classLocation->Name = L"classLocation";
			this->classLocation->Size = System::Drawing::Size(147, 25);
			this->classLocation->TabIndex = 33;
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
			this->cancelButton->Location = System::Drawing::Point(372, 452);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(103, 46);
			this->cancelButton->TabIndex = 36;
			this->cancelButton->Text = L"     Cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &ScheduleClass::cancelButton_Click);
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(6)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addButton.Image")));
			this->addButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->Location = System::Drawing::Point(218, 452);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(103, 46);
			this->addButton->TabIndex = 35;
			this->addButton->Text = L"Schedule";
			this->addButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &ScheduleClass::addButton_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(411, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 20);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Date :";
			// 
			// date
			// 
			this->date->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->date->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->date->ForeColor = System::Drawing::SystemColors::Control;
			this->date->Location = System::Drawing::Point(518, 219);
			this->date->Multiline = true;
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(147, 25);
			this->date->TabIndex = 37;
			// 
			// startTime
			// 
			this->startTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->startTime->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->startTime->ForeColor = System::Drawing::SystemColors::Control;
			this->startTime->Location = System::Drawing::Point(165, 290);
			this->startTime->Multiline = true;
			this->startTime->Name = L"startTime";
			this->startTime->Size = System::Drawing::Size(147, 25);
			this->startTime->TabIndex = 39;
			// 
			// endTime
			// 
			this->endTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->endTime->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->endTime->ForeColor = System::Drawing::SystemColors::Control;
			this->endTime->Location = System::Drawing::Point(520, 290);
			this->endTime->Multiline = true;
			this->endTime->Name = L"endTime";
			this->endTime->Size = System::Drawing::Size(147, 25);
			this->endTime->TabIndex = 40;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(418, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 20);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Day :";
			// 
			// day
			// 
			this->day->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->day->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->day->ForeColor = System::Drawing::SystemColors::Control;
			this->day->Location = System::Drawing::Point(518, 162);
			this->day->Multiline = true;
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(147, 25);
			this->day->TabIndex = 41;
			// 
			// ScheduleClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(689, 539);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->day);
			this->Controls->Add(this->endTime);
			this->Controls->Add(this->startTime);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->date);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->classLocation);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->teacherId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->classId);
			this->Controls->Add(this->panel2);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"ScheduleClass";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int days = 0;
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (classId->Text->Length > 0 && teacherId->Text->Length > 0 && endTime->Text->Length > 0 && startTime->Text->Length > 0 && classLocation->Text->Length > 0 && date->Text->Length > 0)
		{
			orcc1->Open();


			OracleCommand^ orcm2 = gcnew OracleCommand("INSERT INTO Class_schedule (CS_id, Class_id, Teacher_id, start_time, end_time, loc) VALUES(Class_schedule_seq.NEXTVAL, '" + classId->Text + "', '" + teacherId->Text + "', TO_TIMESTAMP('" + date->Text + startTime->Text + "', 'DD-MON-YYYY HH24:MI:SS'), TO_TIMESTAMP('" + date->Text + endTime->Text + "', 'DD-MON-YYYY HH24:MI:SS'), '" + classLocation->Text + "')", orcc1);

				orcm2->ExecuteNonQuery();

			OracleCommand ^ orcm1 = gcnew OracleCommand("INSERT INTO Class_schedule_days (CSD_id, Class_id, Teacher_id, week_days) VALUES (class_schedule_seq.currval, '" + classId->Text + "', '" + teacherId->Text + "', '" + day->Text + "')", orcc1);

			orcm1->ExecuteNonQuery();

			MessageBox::Show("Class scheduled!");
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

#pragma once
#include "StudentHome.h"
#include "AttendanceByStudent.h"
#include "ClassByStudent.h"
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentDashboard
	/// </summary>
	public ref class StudentDashboard : public System::Windows::Forms::Form
	{
	public:
		StudentDashboard(String^ username)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->selectedUsername = username;
		}
	private:
		String^ selectedUsername;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ homebtn;
	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: System::Windows::Forms::Button^ classbtn;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton3;
	private: System::Windows::Forms::Button^ attendancebtn;
	private: System::Windows::Forms::Panel^ studentDashboardPanel;

	private: System::Windows::Forms::Panel^ panel4;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->homebtn = (gcnew System::Windows::Forms::Button());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->classbtn = (gcnew System::Windows::Forms::Button());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->attendancebtn = (gcnew System::Windows::Forms::Button());
			this->studentDashboardPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			this->studentDashboardPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel1->Controls->Add(this->homebtn);
			this->panel1->Controls->Add(this->bunifuSeparator1);
			this->panel1->Controls->Add(this->classbtn);
			this->panel1->Controls->Add(this->bunifuImageButton3);
			this->panel1->Controls->Add(this->attendancebtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(162, 553);
			this->panel1->TabIndex = 4;
			// 
			// homebtn
			// 
			this->homebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->homebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->homebtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->homebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->homebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homebtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->homebtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"homebtn.Image")));
			this->homebtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->homebtn->Location = System::Drawing::Point(0, 178);
			this->homebtn->Name = L"homebtn";
			this->homebtn->Size = System::Drawing::Size(160, 60);
			this->homebtn->TabIndex = 7;
			this->homebtn->Text = L"Home";
			this->homebtn->UseVisualStyleBackColor = false;
			this->homebtn->Click += gcnew System::EventHandler(this, &StudentDashboard::homebtn_Click);
			this->homebtn->MouseEnter += gcnew System::EventHandler(this, &StudentDashboard::homebtn_MouseEnter);
			this->homebtn->MouseLeave += gcnew System::EventHandler(this, &StudentDashboard::homebtn_MouseLeave);
			// 
			// bunifuSeparator1
			// 
			this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bunifuSeparator1->LineThickness = 1;
			this->bunifuSeparator1->Location = System::Drawing::Point(12, 129);
			this->bunifuSeparator1->Name = L"bunifuSeparator1";
			this->bunifuSeparator1->Size = System::Drawing::Size(132, 35);
			this->bunifuSeparator1->TabIndex = 6;
			this->bunifuSeparator1->Transparency = 255;
			this->bunifuSeparator1->Vertical = false;
			// 
			// classbtn
			// 
			this->classbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->classbtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->classbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->classbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->classbtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->classbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"classbtn.Image")));
			this->classbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->classbtn->Location = System::Drawing::Point(0, 406);
			this->classbtn->Name = L"classbtn";
			this->classbtn->Size = System::Drawing::Size(160, 60);
			this->classbtn->TabIndex = 5;
			this->classbtn->Text = L"     Classes";
			this->classbtn->UseVisualStyleBackColor = false;
			this->classbtn->Click += gcnew System::EventHandler(this, &StudentDashboard::classbtn_Click);
			this->classbtn->MouseEnter += gcnew System::EventHandler(this, &StudentDashboard::classbtn_MouseEnter);
			this->classbtn->MouseLeave += gcnew System::EventHandler(this, &StudentDashboard::classbtn_MouseLeave);
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(0, 0);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(162, 111);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 4;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			// 
			// attendancebtn
			// 
			this->attendancebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->attendancebtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->attendancebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->attendancebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->attendancebtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->attendancebtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"attendancebtn.Image")));
			this->attendancebtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->attendancebtn->Location = System::Drawing::Point(0, 291);
			this->attendancebtn->Name = L"attendancebtn";
			this->attendancebtn->Size = System::Drawing::Size(160, 60);
			this->attendancebtn->TabIndex = 1;
			this->attendancebtn->Text = L"         Attendance";
			this->attendancebtn->UseVisualStyleBackColor = false;
			this->attendancebtn->Click += gcnew System::EventHandler(this, &StudentDashboard::attendancebtn_Click);
			this->attendancebtn->MouseEnter += gcnew System::EventHandler(this, &StudentDashboard::teacherbtn_MouseEnter);
			this->attendancebtn->MouseLeave += gcnew System::EventHandler(this, &StudentDashboard::teacherbtn_MouseLeave);
			// 
			// studentDashboardPanel
			// 
			this->studentDashboardPanel->Controls->Add(this->pictureBox1);
			this->studentDashboardPanel->Controls->Add(this->panel4);
			this->studentDashboardPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->studentDashboardPanel->Location = System::Drawing::Point(162, 0);
			this->studentDashboardPanel->Name = L"studentDashboardPanel";
			this->studentDashboardPanel->Size = System::Drawing::Size(798, 553);
			this->studentDashboardPanel->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 142);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(645, 190);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->panel4->Controls->Add(this->bunifuImageButton1);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(798, 88);
			this->panel4->TabIndex = 10;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(434, 0);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(108, 85);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 1;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->label1->Location = System::Drawing::Point(217, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"STUDENT";
			// 
			// StudentDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(960, 553);
			this->Controls->Add(this->studentDashboardPanel);
			this->Controls->Add(this->panel1);
			this->Name = L"StudentDashboard";
			this->Text = L"Student Dashboard";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			this->studentDashboardPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);

		}
		private: System::Void teacherbtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			this->attendancebtn->BackColor = System::Drawing::Color::Green;
		}

			private: System::Void teacherbtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
				this->attendancebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
					static_cast<System::Int32>(static_cast<System::Byte>(60)));
			}
			private: System::Void classbtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
				this->classbtn->BackColor = System::Drawing::Color::Red;
			}

			private: System::Void classbtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
				this->classbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>			(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			}
		private: System::Void homebtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			this->homebtn->BackColor = System::Drawing::Color::Aquamarine;
		}
			private: System::Void homebtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
				this->homebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			}
#pragma endregion
private:
	bool homeClicked = false;
	bool attendanceClicked = false;
	bool classClicked = false;

	private: System::Void homebtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		attendanceClicked = false;
		classClicked = false;
		if (!homeClicked)
		{
			homeClicked = true;
			studentDashboardPanel->Controls->Clear();

			StudentHome^ homepage = gcnew StudentHome();
			homepage->TopLevel = false;
			studentDashboardPanel->Controls->Add(homepage);
			homepage->Dock = DockStyle::Fill;
			homepage->Show();
		}
	}
	private: System::Void attendancebtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		homeClicked = false;
		classClicked = false;
		if (!attendanceClicked)
		{
			attendanceClicked = true;
			studentDashboardPanel->Controls->Clear();

			AttendanceByTeacher1^ attendance = gcnew AttendanceByTeacher1(selectedUsername);
			attendance->TopLevel = false;
			studentDashboardPanel->Controls->Add(attendance);
			attendance->Dock = DockStyle::Fill;
			attendance->Show();
		}
	}
	private: System::Void classbtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		homeClicked = false;
		attendanceClicked = false;
		if (!classClicked)
		{
			classClicked = true;
			studentDashboardPanel->Controls->Clear();

			ClassByStudent^ classa = gcnew ClassByStudent(selectedUsername);
			classa->TopLevel = false;
			studentDashboardPanel->Controls->Add(classa);
			classa->Dock = DockStyle::Fill;
			classa->Show();
		}
	}
};
}

#pragma once
#include "AdminHome.h"
#include "StudentDetails.h"
#include "TeacherDetails.h"
#include "ClassDetails.h"


namespace Project4 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminDashboard
	/// </summary>
	public ref class AdminDashboard : public System::Windows::Forms::Form
	{
	public:
		AdminDashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ stdbtn;
	protected:

	private: System::Windows::Forms::Button^ teacherbtn;


	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton3;




	private: System::Windows::Forms::Button^ classbtn;


	private: Bunifu::Framework::UI::BunifuSeparator^ bunifuSeparator1;
	private: System::Windows::Forms::Button^ homebtn;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::Label^ label1;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->homebtn = (gcnew System::Windows::Forms::Button());
			this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
			this->classbtn = (gcnew System::Windows::Forms::Button());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->teacherbtn = (gcnew System::Windows::Forms::Button());
			this->stdbtn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
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
			this->panel1->Controls->Add(this->teacherbtn);
			this->panel1->Controls->Add(this->stdbtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(162, 553);
			this->panel1->TabIndex = 0;
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
			this->homebtn->Location = System::Drawing::Point(0, 175);
			this->homebtn->Name = L"homebtn";
			this->homebtn->Size = System::Drawing::Size(160, 60);
			this->homebtn->TabIndex = 7;
			this->homebtn->Text = L"Home";
			this->homebtn->UseVisualStyleBackColor = false;
			this->homebtn->Click += gcnew System::EventHandler(this, &AdminDashboard::homebtn_Click);
			this->homebtn->MouseEnter += gcnew System::EventHandler(this, &AdminDashboard::homebtn_MouseEnter);
			this->homebtn->MouseLeave += gcnew System::EventHandler(this, &AdminDashboard::homebtn_MouseLeave);
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
			this->classbtn->Location = System::Drawing::Point(-2, 474);
			this->classbtn->Name = L"classbtn";
			this->classbtn->Size = System::Drawing::Size(160, 60);
			this->classbtn->TabIndex = 5;
			this->classbtn->Text = L"Classes";
			this->classbtn->UseVisualStyleBackColor = false;
			this->classbtn->Click += gcnew System::EventHandler(this, &AdminDashboard::classbtn_Click);
			this->classbtn->MouseEnter += gcnew System::EventHandler(this, &AdminDashboard::classbtn_MouseEnter);
			this->classbtn->MouseLeave += gcnew System::EventHandler(this, &AdminDashboard::classbtn_MouseLeave);
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
			// teacherbtn
			// 
			this->teacherbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->teacherbtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->teacherbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->teacherbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->teacherbtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->teacherbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"teacherbtn.Image")));
			this->teacherbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->teacherbtn->Location = System::Drawing::Point(-2, 375);
			this->teacherbtn->Name = L"teacherbtn";
			this->teacherbtn->Size = System::Drawing::Size(160, 60);
			this->teacherbtn->TabIndex = 1;
			this->teacherbtn->Text = L"Teachers";
			this->teacherbtn->UseVisualStyleBackColor = false;
			this->teacherbtn->Click += gcnew System::EventHandler(this, &AdminDashboard::teacherbtn_Click);
			this->teacherbtn->MouseEnter += gcnew System::EventHandler(this, &AdminDashboard::teacherbtn_MouseEnter);
			this->teacherbtn->MouseLeave += gcnew System::EventHandler(this, &AdminDashboard::teacherbtn_MouseLeave);
			// 
			// stdbtn
			// 
			this->stdbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->stdbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->stdbtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->stdbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stdbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stdbtn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->stdbtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stdbtn.Image")));
			this->stdbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->stdbtn->Location = System::Drawing::Point(-2, 275);
			this->stdbtn->Name = L"stdbtn";
			this->stdbtn->Size = System::Drawing::Size(160, 60);
			this->stdbtn->TabIndex = 1;
			this->stdbtn->Text = L"Students";
			this->stdbtn->UseVisualStyleBackColor = false;
			this->stdbtn->Click += gcnew System::EventHandler(this, &AdminDashboard::stdbtn_Click);
			this->stdbtn->MouseEnter += gcnew System::EventHandler(this, &AdminDashboard::StdBtn_MouseEnter);
			this->stdbtn->MouseLeave += gcnew System::EventHandler(this, &AdminDashboard::StdBtn_MouseLeave);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(162, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(798, 553);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(19, 107);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(645, 409);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->panel3->Controls->Add(this->bunifuImageButton1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(798, 88);
			this->panel3->TabIndex = 6;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(581, 9);
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->label1->Location = System::Drawing::Point(125, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADMINISTRATOR";
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(960, 553);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminDashboard";
			this->Text = L"AdminDashboard";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private:
			System::Void StdBtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
				stdbtn->BackColor = System::Drawing::Color::Purple;
			}

			System::Void StdBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
				stdbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			}
			private: System::Void teacherbtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
				this->teacherbtn->BackColor = System::Drawing::Color::Green;
			}

			private: System::Void teacherbtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			this->teacherbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
			static_cast<System::Int32>(static_cast<System::Byte>(60)));
			}
			private: System::Void classbtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
				this->classbtn->BackColor = System::Drawing::Color::Red;
			}
			
			private: System::Void classbtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
				this->classbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>			(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)),			static_cast<System::Int32>(static_cast<System::Byte>(60)));
			}
			private: System::Void homebtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			this->homebtn->BackColor = System::Drawing::Color::Aquamarine;
		    }
			private: System::Void homebtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			this->homebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			}

			/*private: System::Void AdminDashboard_Resize(System::Object^ sender, System::EventArgs^ e)
			{
				StudentDetails^ studentForm = gcnew StudentDetails();

				if (this->WindowState == System::Windows::Forms::FormWindowState::Maximized) {
				studentForm->Dock = System::Windows::Forms::DockStyle::Fill;
				}
				else {
				studentForm->Dock = System::Windows::Forms::DockStyle::None;
				}
			}*/

private:
	bool homeClicked = false;
	bool studentClicked = false;
	bool teacherClicked = false;
	bool classClicked = false;
	// create a new instance of StudentDetails form and pass a reference to the AdminDashboard object
	



private: System::Void homebtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	studentClicked = false;
	teacherClicked = false;
	classClicked = false;
	if (!homeClicked)
	{
		homeClicked = true;
		panel2->Controls->Clear();

		AdminHome^ homepage = gcnew AdminHome();
		homepage->TopLevel = false;
		panel2->Controls->Add(homepage);
		homepage->Dock = DockStyle::Fill;
		homepage->Show();
	}

	
}
private: System::Void stdbtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	homeClicked = false;
	teacherClicked = false;
	classClicked = false;
	if (!studentClicked)
	{
		studentClicked = true;
		panel2->Controls->Clear();

		StudentDetails^ student = gcnew StudentDetails();
		student->TopLevel = false;
		panel2->Controls->Add(student);
		student->Dock = DockStyle::Fill;
		student->Show();
	}
}

private: System::Void teacherbtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	homeClicked = false;
	studentClicked = false;
	classClicked = false;
	if (!teacherClicked)
	{
		teacherClicked = true;
		panel2->Controls->Clear();

		TeacherDetails^ teacher = gcnew TeacherDetails();
		teacher->TopLevel = false;
		panel2->Controls->Add(teacher);
		teacher->Dock = DockStyle::Fill;
		teacher->Show();
	}
}
private: System::Void classbtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	homeClicked = false;
	studentClicked = false;
	teacherClicked = false;
	if (!classClicked)
	{
		classClicked = true;
		panel2->Controls->Clear();

		ClassDetails^ classes = gcnew ClassDetails();
		classes->TopLevel = false;
		panel2->Controls->Add(classes);
		classes->Dock = DockStyle::Fill;
		classes->Show();
	}
}
};
}

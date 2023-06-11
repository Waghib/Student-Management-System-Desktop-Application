#pragma once
#include "StudentLogin.h"
#include "TeacherLogin.h"
#include "AdministratorLogin.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WelcomePage
	/// </summary>
	public ref class WelcomePage : public System::Windows::Forms::Form
	{
	public:
		WelcomePage(void)
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
		~WelcomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ adminLoginBtn;


	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButt;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ teacherLoginBtn;
	private: System::Windows::Forms::Button^ studentLoginBtn;




	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomePage::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->adminLoginBtn = (gcnew System::Windows::Forms::Button());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButt = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->teacherLoginBtn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->studentLoginBtn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(877, 491);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// adminLoginBtn
			// 
			this->adminLoginBtn->BackColor = System::Drawing::Color::LightSkyBlue;
			this->adminLoginBtn->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminLoginBtn->Location = System::Drawing::Point(3, 115);
			this->adminLoginBtn->Name = L"adminLoginBtn";
			this->adminLoginBtn->Size = System::Drawing::Size(112, 44);
			this->adminLoginBtn->TabIndex = 1;
			this->adminLoginBtn->Text = L"LOGIN";
			this->adminLoginBtn->UseVisualStyleBackColor = false;
			this->adminLoginBtn->Click += gcnew System::EventHandler(this, &WelcomePage::adminLoginBtn_Click);
			this->adminLoginBtn->MouseEnter += gcnew System::EventHandler(this, &WelcomePage::adminLoginBtn_MouseEnter);
			this->adminLoginBtn->MouseLeave += gcnew System::EventHandler(this, &WelcomePage::adminLoginBtn_MouseLeave);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(20, 3);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(79, 61);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 9;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			// 
			// bunifuImageButt
			// 
			this->bunifuImageButt->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButt.Image")));
			this->bunifuImageButt->ImageActive = nullptr;
			this->bunifuImageButt->Location = System::Drawing::Point(16, 3);
			this->bunifuImageButt->Name = L"bunifuImageButt";
			this->bunifuImageButt->Size = System::Drawing::Size(84, 62);
			this->bunifuImageButt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButt->TabIndex = 10;
			this->bunifuImageButt->TabStop = false;
			this->bunifuImageButt->Zoom = 10;
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(20, 3);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(79, 62);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 11;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->adminLoginBtn);
			this->panel1->Controls->Add(this->bunifuImageButton2);
			this->panel1->Location = System::Drawing::Point(22, 48);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(118, 162);
			this->panel1->TabIndex = 12;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->teacherLoginBtn);
			this->panel2->Controls->Add(this->bunifuImageButt);
			this->panel2->Location = System::Drawing::Point(174, 48);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(118, 162);
			this->panel2->TabIndex = 13;
			// 
			// teacherLoginBtn
			// 
			this->teacherLoginBtn->BackColor = System::Drawing::Color::LightSkyBlue;
			this->teacherLoginBtn->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold));
			this->teacherLoginBtn->Location = System::Drawing::Point(3, 115);
			this->teacherLoginBtn->Name = L"teacherLoginBtn";
			this->teacherLoginBtn->Size = System::Drawing::Size(112, 44);
			this->teacherLoginBtn->TabIndex = 1;
			this->teacherLoginBtn->Text = L"LOGIN";
			this->teacherLoginBtn->UseVisualStyleBackColor = false;
			this->teacherLoginBtn->Click += gcnew System::EventHandler(this, &WelcomePage::teacherLoginBtn_Click);
			this->teacherLoginBtn->MouseEnter += gcnew System::EventHandler(this, &WelcomePage::teacherLoginBtn_MouseEnter);
			this->teacherLoginBtn->MouseLeave += gcnew System::EventHandler(this, &WelcomePage::teacherLoginBtn_MouseLeave);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->studentLoginBtn);
			this->panel3->Controls->Add(this->bunifuImageButton1);
			this->panel3->Location = System::Drawing::Point(321, 48);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(118, 162);
			this->panel3->TabIndex = 14;
			// 
			// studentLoginBtn
			// 
			this->studentLoginBtn->BackColor = System::Drawing::Color::LightSkyBlue;
			this->studentLoginBtn->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold));
			this->studentLoginBtn->Location = System::Drawing::Point(3, 115);
			this->studentLoginBtn->Name = L"studentLoginBtn";
			this->studentLoginBtn->Size = System::Drawing::Size(112, 44);
			this->studentLoginBtn->TabIndex = 1;
			this->studentLoginBtn->Text = L"LOGIN";
			this->studentLoginBtn->UseVisualStyleBackColor = false;
			this->studentLoginBtn->Click += gcnew System::EventHandler(this, &WelcomePage::studentLoginBtn_Click);
			this->studentLoginBtn->MouseEnter += gcnew System::EventHandler(this, &WelcomePage::studentLoginBtn_MouseEnter);
			this->studentLoginBtn->MouseLeave += gcnew System::EventHandler(this, &WelcomePage::studentLoginBtn_MouseLeave);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->panel1);
			this->panel4->Controls->Add(this->panel3);
			this->panel4->Controls->Add(this->panel2);
			this->panel4->Location = System::Drawing::Point(205, 221);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(459, 225);
			this->panel4->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(324, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 28);
			this->label3->TabIndex = 25;
			this->label3->Text = L"STUDENT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(178, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 28);
			this->label2->TabIndex = 24;
			this->label2->Text = L"TEACHER";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(39, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 28);
			this->label1->TabIndex = 23;
			this->label1->Text = L"ADMIN";
			// 
			// WelcomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(871, 489);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"WelcomePage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		// Implement Mouse Enter event handler
	private: System::Void studentLoginBtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->studentLoginBtn->BackColor = System::Drawing::Color::CornflowerBlue;
	}

	   // Implement Mouse Leave event handler
	private: System::Void studentLoginBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->studentLoginBtn->BackColor = System::Drawing::Color::LightSkyBlue;
	}

	private: System::Void teacherLoginBtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->teacherLoginBtn->BackColor = System::Drawing::Color::CornflowerBlue;
	}

	   // Implement Mouse Leave event handler
	private: System::Void teacherLoginBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->teacherLoginBtn->BackColor = System::Drawing::Color::LightSkyBlue;
	}
	private: System::Void adminLoginBtn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->adminLoginBtn->BackColor = System::Drawing::Color::CornflowerBlue;
	}

	   // Implement Mouse Leave event handler
	private: System::Void adminLoginBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->adminLoginBtn->BackColor = System::Drawing::Color::LightSkyBlue;
	}

#pragma endregion
	private: System::Void studentLoginBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		StudentLogin^ studentLoginForm = gcnew StudentLogin();
		studentLoginForm->Show();
		studentLoginForm->FormClosed += gcnew FormClosedEventHandler(this, &WelcomePage::studentLoginForm_FormClosed);
		this->Hide();

	}
		   private: System::Void studentLoginForm_FormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
			   // Show the WelcomePage form when StudentLogin form is closed
			   this->Show();
		   }

	private: System::Void teacherLoginBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		TeacherLogin^ teacherLoginForm = gcnew TeacherLogin();
		teacherLoginForm->Show();
		teacherLoginForm->FormClosed += gcnew FormClosedEventHandler(this, &WelcomePage::teacherLoginForm_FormClosed);
		this->Hide();
	}
		   private: System::Void teacherLoginForm_FormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
			   // Show the WelcomePage form when TeacherLogin form is closed
			   this->Show();
		   }
	private: System::Void adminLoginBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AdministratorLogin^ adminLoginForm = gcnew AdministratorLogin();
		adminLoginForm->Show();
		adminLoginForm->FormClosed += gcnew FormClosedEventHandler(this, &WelcomePage::adminLoginForm_FormClosed);
		this->Hide();
	}
		   private: System::Void adminLoginForm_FormClosed(System::Object^ sender, FormClosedEventArgs^ e) 
		   {
			   // Show the WelcomePage form when AdminLogin form is closed
			   this->Show();
		   }

};
}

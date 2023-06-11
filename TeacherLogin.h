#pragma once
#include "TeacherDashboard.h"
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;

	/// <summary>
	/// Summary for TeacherLogin
	/// </summary>
	public ref class TeacherLogin : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		TeacherLogin(void)
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
		~TeacherLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel1;
	private: System::Windows::Forms::TextBox^ pass;
	protected:

	private: System::Windows::Forms::TextBox^ id;


	private: System::Windows::Forms::Button^ loginbutton;
	private: Bunifu::Framework::UI::BunifuTextbox^ name;
	private: Bunifu::Framework::UI::BunifuTextbox^ Password;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButt;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TeacherLogin::typeid));
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->bunifuImageButt = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->loginbutton = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->Password = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuGradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButt))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Controls->Add(this->pass);
			this->bunifuGradientPanel1->Controls->Add(this->id);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuImageButt);
			this->bunifuGradientPanel1->Controls->Add(this->loginbutton);
			this->bunifuGradientPanel1->Controls->Add(this->name);
			this->bunifuGradientPanel1->Controls->Add(this->Password);
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::Salmon;
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::Salmon;
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->bunifuGradientPanel1->Location = System::Drawing::Point(-1, -1);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(360, 420);
			this->bunifuGradientPanel1->TabIndex = 7;
			// 
			// pass
			// 
			this->pass->AcceptsTab = true;
			this->pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::White;
			this->pass->Location = System::Drawing::Point(95, 245);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(197, 22);
			this->pass->TabIndex = 11;
			this->pass->UseSystemPasswordChar = true;
			// 
			// id
			// 
			this->id->AcceptsTab = true;
			this->id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::Color::White;
			this->id->Location = System::Drawing::Point(97, 188);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(197, 20);
			this->id->TabIndex = 9;
			// 
			// bunifuImageButt
			// 
			this->bunifuImageButt->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButt.Image")));
			this->bunifuImageButt->ImageActive = nullptr;
			this->bunifuImageButt->Location = System::Drawing::Point(118, 24);
			this->bunifuImageButt->Name = L"bunifuImageButt";
			this->bunifuImageButt->Size = System::Drawing::Size(122, 94);
			this->bunifuImageButt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButt->TabIndex = 8;
			this->bunifuImageButt->TabStop = false;
			this->bunifuImageButt->Zoom = 10;
			// 
			// loginbutton
			// 
			this->loginbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->loginbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginbutton->ForeColor = System::Drawing::Color::Transparent;
			this->loginbutton->Location = System::Drawing::Point(103, 322);
			this->loginbutton->Name = L"loginbutton";
			this->loginbutton->Size = System::Drawing::Size(139, 39);
			this->loginbutton->TabIndex = 6;
			this->loginbutton->Text = L"Sign in";
			this->loginbutton->UseVisualStyleBackColor = false;
			this->loginbutton->Click += gcnew System::EventHandler(this, &TeacherLogin::loginbutton_Click);
			this->loginbutton->MouseEnter += gcnew System::EventHandler(this, &TeacherLogin::loginbutton_MouseEnter);
			this->loginbutton->MouseLeave += gcnew System::EventHandler(this, &TeacherLogin::loginbutton_MouseLeave);
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->name->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"name.BackgroundImage")));
			this->name->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"name.Icon")));
			this->name->Location = System::Drawing::Point(53, 178);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(251, 42);
			this->name->TabIndex = 5;
			this->name->text = L"";
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(223)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(162)));
			this->Password->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Password.BackgroundImage")));
			this->Password->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Password->ForeColor = System::Drawing::Color::White;
			this->Password->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Password.Icon")));
			this->Password->Location = System::Drawing::Point(53, 237);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(251, 42);
			this->Password->TabIndex = 3;
			this->Password->text = L"";
			// 
			// TeacherLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 418);
			this->Controls->Add(this->bunifuGradientPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"TeacherLogin";
			this->Text = L"Teacher Login";
			this->bunifuGradientPanel1->ResumeLayout(false);
			this->bunifuGradientPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButt))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void loginbutton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			this->loginbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->loginbutton->ForeColor = System::Drawing::Color::Black;
		}

private: System::Void loginbutton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->loginbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
	this->loginbutton->ForeColor = System::Drawing::Color::White;
}

	private: System::Void loginbutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		orcc1->Open();
		OracleCommand^ orcm1 = gcnew OracleCommand("SELECT COUNT(*) FROM Login_info_dsg lid, login_info li WHERE lid.user_name = li.user_name and lid.user_name = '" + id->Text + "' AND lid.designation = 'Teacher' AND li.pass_hash = '" + pass->Text + "'", orcc1);
		int count = Convert::ToInt32(orcm1->ExecuteScalar());
		orcc1->Close();

		if (count == 1)
		{
			MessageBox::Show("Login successfull!");
			// Opening next form
			TeacherDashboard^ TeacherForm = gcnew TeacherDashboard(id->Text);
			TeacherForm->Show();
			TeacherForm->FormClosed += gcnew FormClosedEventHandler(this, &TeacherLogin::TeacherForm_FormClosed);
			this->Hide();
			//
		}
		else
		{
			MessageBox::Show("Invalid username or password!");
		}
	}
			private: System::Void TeacherForm_FormClosed(System::Object^ sender, FormClosedEventArgs^ e)
			{
				this->Show();
			}
};
}

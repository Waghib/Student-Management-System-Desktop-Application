#pragma once
#include "StudentDashboard.h"
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;
	/// <summary>
	/// Summary for StudentLogin
	/// </summary>
	public ref class StudentLogin : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";

		StudentLogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
	public:

	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel1;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifutextbox;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifutextbox1;


	private: System::Windows::Forms::Button^ loginbutton;

	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::TextBox^ id;
	private: System::Windows::Forms::TextBox^ pass;



		   OracleConnection^ orcc1 = gcnew OracleConnection(str1);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentLogin()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentLogin::typeid));
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->loginbutton = (gcnew System::Windows::Forms::Button());
			this->bunifutextbox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifutextbox1 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuGradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Controls->Add(this->pass);
			this->bunifuGradientPanel1->Controls->Add(this->id);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuImageButton1);
			this->bunifuGradientPanel1->Controls->Add(this->loginbutton);
			this->bunifuGradientPanel1->Controls->Add(this->bunifutextbox);
			this->bunifuGradientPanel1->Controls->Add(this->bunifutextbox1);
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::Violet;
			this->bunifuGradientPanel1->Location = System::Drawing::Point(-1, 0);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(360, 420);
			this->bunifuGradientPanel1->TabIndex = 6;
			// 
			// pass
			// 
			this->pass->AcceptsTab = true;
			this->pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)));
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::White;
			this->pass->Location = System::Drawing::Point(95, 246);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(197, 22);
			this->pass->TabIndex = 11;
			this->pass->UseSystemPasswordChar = true;
			this->pass->TextChanged += gcnew System::EventHandler(this, &StudentLogin::pass_TextChanged);
			// 
			// id
			// 
			this->id->AcceptsTab = true;
			this->id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::Color::White;
			this->id->Location = System::Drawing::Point(93, 190);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(197, 20);
			this->id->TabIndex = 9;
			this->id->TextChanged += gcnew System::EventHandler(this, &StudentLogin::id_TextChanged);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(118, 24);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(117, 97);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 8;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			// 
			// loginbutton
			// 
			this->loginbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->loginbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginbutton->ForeColor = System::Drawing::Color::Transparent;
			this->loginbutton->Location = System::Drawing::Point(103, 323);
			this->loginbutton->Name = L"loginbutton";
			this->loginbutton->Size = System::Drawing::Size(139, 39);
			this->loginbutton->TabIndex = 6;
			this->loginbutton->Text = L"Sign in";
			this->loginbutton->UseVisualStyleBackColor = false;
			this->loginbutton->Click += gcnew System::EventHandler(this, &StudentLogin::loginbutton_Click);
			this->loginbutton->MouseEnter += gcnew System::EventHandler(this, &StudentLogin::insertbutton_MouseEnter);
			this->loginbutton->MouseLeave += gcnew System::EventHandler(this, &StudentLogin::insertbutton_MouseLeave);
			// 
			// bunifutextbox
			// 
			this->bunifutextbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->bunifutextbox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifutextbox.BackgroundImage")));
			this->bunifutextbox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifutextbox->ForeColor = System::Drawing::Color::White;
			this->bunifutextbox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifutextbox.Icon")));
			this->bunifutextbox->Location = System::Drawing::Point(53, 179);
			this->bunifutextbox->Name = L"bunifutextbox";
			this->bunifutextbox->Size = System::Drawing::Size(251, 42);
			this->bunifutextbox->TabIndex = 5;
			this->bunifutextbox->text = L"";
			// 
			// bunifutextbox1
			// 
			this->bunifutextbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)));
			this->bunifutextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifutextbox1.BackgroundImage")));
			this->bunifutextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifutextbox1->ForeColor = System::Drawing::Color::White;
			this->bunifutextbox1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifutextbox1.Icon")));
			this->bunifutextbox1->Location = System::Drawing::Point(53, 238);
			this->bunifutextbox1->Name = L"bunifutextbox1";
			this->bunifutextbox1->Size = System::Drawing::Size(250, 42);
			this->bunifutextbox1->TabIndex = 3;
			this->bunifutextbox1->text = L"";
			// 
			// StudentLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(358, 418);
			this->Controls->Add(this->bunifuGradientPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"StudentLogin";
			this->Text = L"Student Login";
			this->bunifuGradientPanel1->ResumeLayout(false);
			this->bunifuGradientPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void insertbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	
		/*orcc1->Open();
		OracleCommand^ orcm1 = gcnew OracleCommand("Insert into student values(" + "'" + idTextBox->Text + "'," + passTextBox->Text +		"')", orcc1);
		orcm1->ExecuteNonQuery();
		String^ x = "RECORD SUBMITTED BY F21_9148";
		MessageBox::Show(x);
		orcc1->Close();*/

	}
	private: System::Void insertbutton_MouseEnter(System::Object^ sender, System::EventArgs^ e) 
	{
		this->loginbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(113)),		static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			   this->loginbutton->ForeColor = System::Drawing::Color::White;
	}
	
	private: System::Void insertbutton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->loginbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(93)),	static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->loginbutton->ForeColor = System::Drawing::Color::Black;
	}

	private: System::Void loginbutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		orcc1->Open();
		OracleCommand^ orcm1 = gcnew OracleCommand("SELECT COUNT(*) FROM Login_info_dsg lid, login_info li WHERE lid.user_name = li.user_name and lid.user_name = '" + id->Text + "' AND lid.designation = 'Student' AND li.pass_hash = '" + pass->Text + "'", orcc1);
		int count = Convert::ToInt32(orcm1->ExecuteScalar());
		orcc1->Close();

		if (count == 1)
		{
			MessageBox::Show("Login successfull!");
			// Opening next form
			StudentDashboard^ StudentForm = gcnew StudentDashboard(id->Text);
			StudentForm->Show();
			StudentForm->FormClosed += gcnew FormClosedEventHandler(this, &StudentLogin::StudentForm_FormClosed);
			this->Hide();
			//
		}
		else
		{
			MessageBox::Show("Invalid username or password!");
		}
	}
		   private: System::Void StudentForm_FormClosed(System::Object^ sender, FormClosedEventArgs^ e)
		   {
			   this->Show();
		   }
	private: System::Void id_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void pass_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
};
}

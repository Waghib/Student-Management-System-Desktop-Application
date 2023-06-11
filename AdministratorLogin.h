#pragma once
#include <random>
#include <string>
#include <iostream>

#include <openssl/sha.h>
#include <openssl/md5.h>

#include "AdminDashboard.h"

using namespace std;

const int SALT_LENGTH = 16;
const int HASH_LENGTH = 32;

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;

	/// <summary>
	/// Summary for AdministratorLogin
	/// </summary>
	public ref class AdministratorLogin : public System::Windows::Forms::Form
	{
	public:
		String^ str1 = "Data Source = (DESCRIPTION = " +
			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0)(PORT = 1521))" +
			"(CONNECT_DATA =" +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");User Id = F21_9148; password = 123";
		AdministratorLogin(void)
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
		~AdministratorLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ passTextBox;
	protected:
	private: System::Windows::Forms::TextBox^ idTextBox;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
	private: System::Windows::Forms::Button^ loginbutton;
	private: Bunifu::Framework::UI::BunifuTextbox^ name;
	private: Bunifu::Framework::UI::BunifuTextbox^ Password;
	private: Bunifu::Framework::UI::BunifuGradientPanel^ bunifuGradientPanel1;
	private: System::Windows::Forms::TextBox^ pass;
	private: System::Windows::Forms::TextBox^ id;



	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButt;
	private: System::Windows::Forms::Button^ signinButton;

	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox1;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdministratorLogin::typeid));
			this->passTextBox = (gcnew System::Windows::Forms::TextBox());
			this->idTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->loginbutton = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->Password = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->bunifuImageButt = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->signinButton = (gcnew System::Windows::Forms::Button());
			this->bunifuTextbox1 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox2 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->bunifuGradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButt))->BeginInit();
			this->SuspendLayout();
			// 
			// passTextBox
			// 
			this->passTextBox->AcceptsTab = true;
			this->passTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)));
			this->passTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTextBox->ForeColor = System::Drawing::Color::White;
			this->passTextBox->Location = System::Drawing::Point(96, 262);
			this->passTextBox->Name = L"passTextBox";
			this->passTextBox->Size = System::Drawing::Size(197, 22);
			this->passTextBox->TabIndex = 17;
			this->passTextBox->UseSystemPasswordChar = true;
			// 
			// idTextBox
			// 
			this->idTextBox->AcceptsTab = true;
			this->idTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)));
			this->idTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->idTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idTextBox->ForeColor = System::Drawing::Color::White;
			this->idTextBox->Location = System::Drawing::Point(94, 206);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(197, 20);
			this->idTextBox->TabIndex = 16;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(119, 40);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(117, 97);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 15;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			// 
			// loginbutton
			// 
			this->loginbutton->Location = System::Drawing::Point(0, 0);
			this->loginbutton->Name = L"loginbutton";
			this->loginbutton->Size = System::Drawing::Size(75, 23);
			this->loginbutton->TabIndex = 19;
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)));
			this->name->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"name.BackgroundImage")));
			this->name->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->name->ForeColor = System::Drawing::Color::White;
			this->name->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"name.Icon")));
			this->name->Location = System::Drawing::Point(54, 195);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(251, 42);
			this->name->TabIndex = 13;
			this->name->text = L"";
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)));
			this->Password->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Password.BackgroundImage")));
			this->Password->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Password->ForeColor = System::Drawing::Color::White;
			this->Password->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Password.Icon")));
			this->Password->Location = System::Drawing::Point(54, 254);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(250, 42);
			this->Password->TabIndex = 12;
			this->Password->text = L"";
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
			this->bunifuGradientPanel1->Controls->Add(this->signinButton);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuTextbox1);
			this->bunifuGradientPanel1->Controls->Add(this->bunifuTextbox2);
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::Violet;
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::Violet;
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::SeaGreen;
			this->bunifuGradientPanel1->Location = System::Drawing::Point(-1, -1);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(360, 420);
			this->bunifuGradientPanel1->TabIndex = 18;
			// 
			// pass
			// 
			this->pass->AcceptsTab = true;
			this->pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::White;
			this->pass->Location = System::Drawing::Point(96, 246);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(197, 22);
			this->pass->TabIndex = 11;
			this->pass->UseSystemPasswordChar = true;
			this->pass->TextChanged += gcnew System::EventHandler(this, &AdministratorLogin::pass_TextChanged);
			// 
			// id
			// 
			this->id->AcceptsTab = true;
			this->id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::Color::White;
			this->id->Location = System::Drawing::Point(98, 189);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(197, 20);
			this->id->TabIndex = 9;
			this->id->TextChanged += gcnew System::EventHandler(this, &AdministratorLogin::username_TextChanged);
			// 
			// bunifuImageButt
			// 
			this->bunifuImageButt->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButt.Image")));
			this->bunifuImageButt->ImageActive = nullptr;
			this->bunifuImageButt->Location = System::Drawing::Point(119, 25);
			this->bunifuImageButt->Name = L"bunifuImageButt";
			this->bunifuImageButt->Size = System::Drawing::Size(122, 94);
			this->bunifuImageButt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButt->TabIndex = 8;
			this->bunifuImageButt->TabStop = false;
			this->bunifuImageButt->Zoom = 10;
			// 
			// signinButton
			// 
			this->signinButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->signinButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signinButton->ForeColor = System::Drawing::Color::Transparent;
			this->signinButton->Location = System::Drawing::Point(104, 323);
			this->signinButton->Name = L"signinButton";
			this->signinButton->Size = System::Drawing::Size(139, 39);
			this->signinButton->TabIndex = 6;
			this->signinButton->Text = L"Sign in";
			this->signinButton->UseVisualStyleBackColor = false;
			this->signinButton->Click += gcnew System::EventHandler(this, &AdministratorLogin::signinButton_Click);
			this->signinButton->MouseEnter += gcnew System::EventHandler(this, &AdministratorLogin::signinButton_MouseEnter);
			this->signinButton->MouseLeave += gcnew System::EventHandler(this, &AdministratorLogin::signinButton_MouseLeave);
			// 
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->bunifuTextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.BackgroundImage")));
			this->bunifuTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox1->ForeColor = System::Drawing::Color::White;
			this->bunifuTextbox1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.Icon")));
			this->bunifuTextbox1->Location = System::Drawing::Point(54, 179);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(251, 42);
			this->bunifuTextbox1->TabIndex = 5;
			this->bunifuTextbox1->text = L"";
			// 
			// bunifuTextbox2
			// 
			this->bunifuTextbox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->bunifuTextbox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.BackgroundImage")));
			this->bunifuTextbox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox2->ForeColor = System::Drawing::Color::White;
			this->bunifuTextbox2->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.Icon")));
			this->bunifuTextbox2->Location = System::Drawing::Point(54, 238);
			this->bunifuTextbox2->Name = L"bunifuTextbox2";
			this->bunifuTextbox2->Size = System::Drawing::Size(251, 42);
			this->bunifuTextbox2->TabIndex = 3;
			this->bunifuTextbox2->text = L"";
			// 
			// AdministratorLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 418);
			this->Controls->Add(this->bunifuGradientPanel1);
			this->Controls->Add(this->passTextBox);
			this->Controls->Add(this->idTextBox);
			this->Controls->Add(this->bunifuImageButton1);
			this->Controls->Add(this->loginbutton);
			this->Controls->Add(this->name);
			this->Controls->Add(this->Password);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"AdministratorLogin";
			this->Text = L"Administrator Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->bunifuGradientPanel1->ResumeLayout(false);
			this->bunifuGradientPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButt))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//function to generate a salt
		string generate_salt() 
		{
			srand(time(NULL));
			string salt = "";
			for (int i = 0; i < SALT_LENGTH; i++) {
				int num = rand() % 62;
				if (num < 26) salt += char(num + 65);
				else if (num < 52) salt += char(num + 71);
				else salt += char(num - 4);
			}
			return salt;
		}
		
		//function to hash the password
		string hash_password(string password, string salt) 
		{
			string combined = password + salt;
			char hashed[HASH_LENGTH + 1];
			for (int i = 0; i < HASH_LENGTH; i++) {
				hashed[i] = char(rand() % 256);
				for (int j = 0; j < combined.length(); j++) {
					hashed[i] ^= combined[j];
					hashed[i] = hashed[i] >> 1 | hashed[i] << 7;
				}
			}
			hashed[HASH_LENGTH] = '\0';
			return string(hashed);
		}

		//store the password to the database
		void storePassword(const std::string& username, const std::string& salt, const std::string& hashedPassword) 
		{
			// connect to database
			// set up SQL statement to insert salt and hashed password
			// bind salt and hashed password to SQL statement
			// execute SQL statement
			// disconnect from database
		}

		//function to get salt from the database
		std::string getSaltFromDatabase(const std::string& username) 
		{
			// connect to database
			// set up SQL statement to retrieve salt
			// bind username to SQL statement
			// execute SQL statement and retrieve salt value
			// disconnect from database
			//return salt;
			return "";
		}

		//function to get hashed password from the database
		std::string getHashedPasswordFromDatabase(const std::string& username) 
		{
			// connect to database
			// set up SQL statement to retrieve hashed password
			// bind username to SQL statement
			// execute SQL statement and retrieve hashed password value
			// disconnect from database
			//return hashedPassword;
			return "";
		}

		//function to compare both the user input and database stored password to grant access
		/*bool checkPassword(const std::string& username, const std::string& password) 
		{
			std::string salt = getSaltFromDatabase(username);
			std::string hashedPassword = getHashedPasswordFromDatabase(username);
			std::string saltedPassword = salt + password;
			std::string hashedSaltedPassword = hashPassword(password, salt);
			return hashedSaltedPassword == hashedPassword;
		}*/
#pragma endregion
	private: System::Void signinButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		signinButton->BackColor = System::Drawing::Color::FromArgb(207, 184, 216);
	this->loginbutton->ForeColor = System::Drawing::Color::Black;
	}
		   

private: System::Void signinButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	signinButton->BackColor = System::Drawing::Color::FromArgb(164, 126, 183);
		this->loginbutton->ForeColor = System::Drawing::Color::White;
}

	private: System::Void username_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void pass_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}
	private: System::Void signinButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		orcc1->Open();
		OracleCommand^ orcm1 = gcnew OracleCommand("SELECT COUNT(*) FROM Login_info_dsg lid, login_info li WHERE lid.user_name = li.user_name and lid.user_name = '" + id->Text + "' AND lid.designation = 'Admin' AND li.pass_hash = '" + pass->Text + "'", orcc1);
		int count = Convert::ToInt32(orcm1->ExecuteScalar());
		orcc1->Close();

		if (count == 1)
		{
			MessageBox::Show("Login successfull!");
			// Opening next form
			AdminDashboard^ adminForm = gcnew AdminDashboard();
			adminForm->Show();
			adminForm->FormClosed += gcnew FormClosedEventHandler(this, &AdministratorLogin::adminForm_FormClosed);
			this->Hide();
			//
		}
		else
		{
			MessageBox::Show("Invalid username or password!");
		}
		
	}
		   private: System::Void adminForm_FormClosed(System::Object^ sender, FormClosedEventArgs^ e)
		   {
			   // Show the WelcomePage form when AdminLogin form is closed
			   this->Show();
		   }

};
}

#define WIN32_LEAN_AND_MEAN
#pragma once
#include <vector>
#include "Terms&Conditions.h"
#include "SIgnUp.h"
#include <msclr/marshal_cppstd.h>
#include "UserFunctionForm.h"
#include "AdminF.h"
#include "LogoForm.h"
namespace Football1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FootBall1;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class LoginPage : public System::Windows::Forms::Form
	{
	public:
		LoginPage(void)
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
		~LoginPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ Username;
	private: System::Windows::Forms::TextBox^ UsernameTextBox;
	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::Label^ ID_Number;
	private: System::Windows::Forms::TextBox^ PasswrdTextBox;
	private: System::Windows::Forms::TextBox^ IDTextBox;
	private: System::Windows::Forms::ComboBox^ RoleComboBox;
	private: System::Windows::Forms::Button^ ShowPass;














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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->UsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->ID_Number = (gcnew System::Windows::Forms::Label());
			this->PasswrdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->IDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RoleComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ShowPass = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(702, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 16);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Don\'t have an account\?";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button3->Location = System::Drawing::Point(867, 118);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 44);
			this->button3->TabIndex = 34;
			this->button3->Text = L"Sign up";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &LoginPage::button3_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->linkLabel1->Location = System::Drawing::Point(506, 204);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(138, 16);
			this->linkLabel1->TabIndex = 33;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Terms and Conditions";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginPage::linkLabel1_LinkClicked);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox1->Location = System::Drawing::Point(395, 200);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(106, 20);
			this->checkBox1->TabIndex = 32;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LoginPage::checkBox1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button2->Location = System::Drawing::Point(521, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 44);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LoginPage::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(394, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 44);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginPage::button1_Click);
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(420, 52);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(170, 2);
			this->panel4->TabIndex = 36;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(420, 102);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 2);
			this->panel1->TabIndex = 29;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(419, 150);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(170, 2);
			this->panel3->TabIndex = 29;
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Username->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Username->Location = System::Drawing::Point(416, 9);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(166, 20);
			this->Username->TabIndex = 37;
			this->Username->Text = L"        Username        ";
			// 
			// UsernameTextBox
			// 
			this->UsernameTextBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->UsernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UsernameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->UsernameTextBox->ForeColor = System::Drawing::SystemColors::Window;
			this->UsernameTextBox->Location = System::Drawing::Point(417, 32);
			this->UsernameTextBox->Name = L"UsernameTextBox";
			this->UsernameTextBox->Size = System::Drawing::Size(170, 19);
			this->UsernameTextBox->TabIndex = 38;
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Password->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Password->Location = System::Drawing::Point(419, 59);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(163, 20);
			this->Password->TabIndex = 39;
			this->Password->Text = L"        Password        ";
			// 
			// ID_Number
			// 
			this->ID_Number->AutoSize = true;
			this->ID_Number->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ID_Number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ID_Number->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ID_Number->Location = System::Drawing::Point(418, 107);
			this->ID_Number->Name = L"ID_Number";
			this->ID_Number->Size = System::Drawing::Size(165, 20);
			this->ID_Number->TabIndex = 40;
			this->ID_Number->Text = L"        ID Number       ";
			// 
			// PasswrdTextBox
			// 
			this->PasswrdTextBox->BackColor = System::Drawing::SystemColors::MenuText;
			this->PasswrdTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PasswrdTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PasswrdTextBox->ForeColor = System::Drawing::SystemColors::Window;
			this->PasswrdTextBox->Location = System::Drawing::Point(418, 82);
			this->PasswrdTextBox->Name = L"PasswrdTextBox";
			this->PasswrdTextBox->Size = System::Drawing::Size(169, 19);
			this->PasswrdTextBox->TabIndex = 41;
			this->PasswrdTextBox->UseSystemPasswordChar = true;
			// 
			// IDTextBox
			// 
			this->IDTextBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->IDTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->IDTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->IDTextBox->ForeColor = System::Drawing::SystemColors::Window;
			this->IDTextBox->Location = System::Drawing::Point(420, 130);
			this->IDTextBox->Name = L"IDTextBox";
			this->IDTextBox->Size = System::Drawing::Size(169, 19);
			this->IDTextBox->TabIndex = 42;
			// 
			// RoleComboBox
			// 
			this->RoleComboBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->RoleComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RoleComboBox->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RoleComboBox->FormattingEnabled = true;
			this->RoleComboBox->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->RoleComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"User" });
			this->RoleComboBox->Location = System::Drawing::Point(420, 158);
			this->RoleComboBox->Name = L"RoleComboBox";
			this->RoleComboBox->Size = System::Drawing::Size(167, 24);
			this->RoleComboBox->Sorted = true;
			this->RoleComboBox->TabIndex = 43;
			this->RoleComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &LoginPage::RoleComboBox_SelectedIndexChanged);
			// 
			// ShowPass
			// 
			this->ShowPass->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ShowPass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ShowPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShowPass->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ShowPass->Location = System::Drawing::Point(596, 75);
			this->ShowPass->Name = L"ShowPass";
			this->ShowPass->Size = System::Drawing::Size(221, 29);
			this->ShowPass->TabIndex = 44;
			this->ShowPass->Text = L"Show Password.";
			this->ShowPass->UseVisualStyleBackColor = false;
			this->ShowPass->Click += gcnew System::EventHandler(this, &LoginPage::ShowPass_Click);
			// 
			// LoginPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = Image::FromFile("assets//Image3.jpg");
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1015, 645);
			this->Controls->Add(this->ShowPass);
			this->Controls->Add(this->RoleComboBox);
			this->Controls->Add(this->IDTextBox);
			this->Controls->Add(this->PasswrdTextBox);
			this->Controls->Add(this->ID_Number);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->UsernameTextBox);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &LoginPage::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool logoloaded = false;
		System::String^ pendingRole = "";

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(UsernameTextBox->Text) ||
		String::IsNullOrWhiteSpace(PasswrdTextBox->Text) ||
		String::IsNullOrWhiteSpace(IDTextBox->Text) ||
		String::IsNullOrWhiteSpace(RoleComboBox->Text)) {

		MessageBox::Show("Please fill in all fields before logging in.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	std::vector<User> users = Loaduser();
	std::string Username = msclr::interop::marshal_as<std::string>(UsernameTextBox->Text);
	std::string Password = msclr::interop::marshal_as<std::string>(PasswrdTextBox->Text);
	int ID_Number = System::Convert::ToInt32(IDTextBox->Text);
	std::string Role = msclr::interop::marshal_as<std::string>(RoleComboBox->Text);

	if (login(Username, Password, ID_Number, Role, users)) {
		MessageBox::Show("Login successful! Please proceed");
		this->Hide();
		pendingRole = RoleComboBox->Text;  // Store which role to open later

		LogoForm^ logo = gcnew LogoForm();
		logo->FormClosed += gcnew FormClosedEventHandler(this, &LoginPage::LogoFormClosed);
		logo->Show();
		logo->FadeAndSlideOut();
	}
	else {
		MessageBox::Show("Login failed. Username, Password or Role are incorrect.");
	}	
}
	   void LoginPage::LogoFormClosed(Object^ sender, FormClosedEventArgs^ e) {
		   if (pendingRole == "Admin") {
			   AdminF^ AdminFunc = gcnew AdminF;
			   AdminFunc->FormClosed += gcnew FormClosedEventHandler(this, &LoginPage::AdminFormClosed);
			   AdminFunc->Show();
		   }
		   else if (pendingRole == "User") {
			   UserFunctionForm^ UserForm = gcnew UserFunctionForm;
			   UserForm->FormClosed += gcnew FormClosedEventHandler(this, &LoginPage::UserFormClosed);
			   UserForm->Show();
		   }
		   logoloaded = true;
	   }
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	TermsConditions^ Accept = gcnew TermsConditions;
	Accept->Show();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		button1->Enabled = true;
	}
	else {
		button1->Enabled = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SIgnUp ^ signup = gcnew SIgnUp;
	signup->Show();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	};
private: System::Void RoleComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ShowPass_Click(System::Object^ sender, System::EventArgs^ e) {
	PasswrdTextBox->UseSystemPasswordChar = false;
}
	   void LoginPage::AdminFormClosed(Object^ sender, FormClosedEventArgs^ e) {
		   UsernameTextBox->Text = "";
		   PasswrdTextBox->Text = "";
		   IDTextBox->Text = "";
		   RoleComboBox->SelectedIndex = -1; 
		   checkBox1->Checked = true;
		   this->Show();
	   }

	   void LoginPage::UserFormClosed(Object^ sender, FormClosedEventArgs^ e) {
		   UsernameTextBox->Text = "";
		   PasswrdTextBox->Text = "";
		   IDTextBox->Text = "";
		   RoleComboBox->SelectedIndex = -1; 
		   checkBox1->Checked = true;
		   this->Show(); 
		   
	   }
};
};
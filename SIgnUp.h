#define WIN32_LEAN_AND_MEAN
#pragma once
#include <vector>
#include "userfunctions.h"
#include <msclr/marshal_cppstd.h>
namespace FootBall1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for SIgnUp
	/// </summary>
	public ref class SIgnUp : public System::Windows::Forms::Form
	{
	public:
		SIgnUp(void)
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
		~SIgnUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ S_Username;
	private: System::Windows::Forms::Label^ S_Password;
	private: System::Windows::Forms::ComboBox^ S_RoleComboBox;
	private: System::Windows::Forms::TextBox^ S_UsernameTextBox;
	private: System::Windows::Forms::TextBox^ S_PasswordTextBox;
	private: System::Windows::Forms::Label^ label1;

	protected:










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->S_Username = (gcnew System::Windows::Forms::Label());
			this->S_Password = (gcnew System::Windows::Forms::Label());
			this->S_RoleComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->S_UsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->S_PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(251, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 58);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SIgnUp::button1_Click);
			// 
			// S_Username
			// 
			this->S_Username->AutoSize = true;
			this->S_Username->BackColor = System::Drawing::SystemColors::Control;
			this->S_Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->S_Username->Location = System::Drawing::Point(12, 27);
			this->S_Username->Name = L"S_Username";
			this->S_Username->Size = System::Drawing::Size(86, 20);
			this->S_Username->TabIndex = 35;
			this->S_Username->Text = L"Username";
			// 
			// S_Password
			// 
			this->S_Password->AutoSize = true;
			this->S_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->S_Password->Location = System::Drawing::Point(11, 60);
			this->S_Password->Name = L"S_Password";
			this->S_Password->Size = System::Drawing::Size(83, 20);
			this->S_Password->TabIndex = 36;
			this->S_Password->Text = L"Password";
			// 
			// S_RoleComboBox
			// 
			this->S_RoleComboBox->BackColor = System::Drawing::SystemColors::Menu;
			this->S_RoleComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->S_RoleComboBox->FormattingEnabled = true;
			this->S_RoleComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Admin", L"User" });
			this->S_RoleComboBox->Location = System::Drawing::Point(124, 88);
			this->S_RoleComboBox->Name = L"S_RoleComboBox";
			this->S_RoleComboBox->Size = System::Drawing::Size(127, 24);
			this->S_RoleComboBox->Sorted = true;
			this->S_RoleComboBox->TabIndex = 37;
			// 
			// S_UsernameTextBox
			// 
			this->S_UsernameTextBox->Location = System::Drawing::Point(124, 30);
			this->S_UsernameTextBox->Name = L"S_UsernameTextBox";
			this->S_UsernameTextBox->Size = System::Drawing::Size(127, 22);
			this->S_UsernameTextBox->TabIndex = 38;
			// 
			// S_PasswordTextBox
			// 
			this->S_PasswordTextBox->Location = System::Drawing::Point(124, 60);
			this->S_PasswordTextBox->Name = L"S_PasswordTextBox";
			this->S_PasswordTextBox->Size = System::Drawing::Size(127, 22);
			this->S_PasswordTextBox->TabIndex = 39;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(11, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 40;
			this->label1->Text = L"    Role";
			// 
			// SIgnUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 247);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->S_PasswordTextBox);
			this->Controls->Add(this->S_UsernameTextBox);
			this->Controls->Add(this->S_RoleComboBox);
			this->Controls->Add(this->S_Password);
			this->Controls->Add(this->S_Username);
			this->Controls->Add(this->button1);
			this->Name = L"SIgnUp";
			this->Text = L"SIgnUp";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(S_UsernameTextBox->Text) ||
			String::IsNullOrWhiteSpace(S_PasswordTextBox->Text) ||
			String::IsNullOrWhiteSpace(S_RoleComboBox->Text)) {

			MessageBox::Show("Please fill in all fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	std::vector<User> users;
		users = Loaduser();
		User S_User;
		std::string S_Username = marshal_as<std::string>(S_UsernameTextBox->Text);

		std::string S_Password = marshal_as<std::string>(S_PasswordTextBox->Text);

		std::string Role = marshal_as<std::string>(S_RoleComboBox->Text);

		S_User = SignUp(S_Username, S_Password, Role, users);
		if (S_User.id == -2) {
			MessageBox::Show("Password Must Atleast Be Of 6 Numbers And Must Atleast Have One Letter.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;

		}
		else if (S_User.id == -1) {
			MessageBox::Show("Username already exists! Please try again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (S_User.id == 0) {
			MessageBox::Show("Invalid role! Please select a valid role", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		MessageBox::Show("Your generated ID is: " + System::Convert::ToString(S_User.id), "Signup Successful");

		this->Hide();
		this->Hide();
	};
	};
};

#pragma once
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "UserFunctions.h"
namespace FootBall1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for ChangePassword
	/// </summary>
	public ref class ChangePassword : public System::Windows::Forms::Form
	{
	public:
		ChangePassword(void)
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
		~ChangePassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SavePasswordButton;
	private: System::Windows::Forms::Label^ UsernameLabel;
	private: System::Windows::Forms::TextBox^ UsernameTextBox;
	private: System::Windows::Forms::TextBox^ CurrentPassTextBox;


	protected:











	private: System::Windows::Forms::Label^ CurrentPassLabel;
	private: System::Windows::Forms::Label^ NewPasswordLabel;
	private: System::Windows::Forms::TextBox^ NewPassTextBox;
	private: System::Windows::Forms::Button^ ShowCurrentPass;
	private: System::Windows::Forms::Button^ ShowNewPass;





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
			this->SavePasswordButton = (gcnew System::Windows::Forms::Button());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->UsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CurrentPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CurrentPassLabel = (gcnew System::Windows::Forms::Label());
			this->NewPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->NewPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ShowCurrentPass = (gcnew System::Windows::Forms::Button());
			this->ShowNewPass = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// SavePasswordButton
			// 
			this->SavePasswordButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SavePasswordButton->Location = System::Drawing::Point(198, 216);
			this->SavePasswordButton->Name = L"SavePasswordButton";
			this->SavePasswordButton->Size = System::Drawing::Size(129, 38);
			this->SavePasswordButton->TabIndex = 0;
			this->SavePasswordButton->Text = L"Save";
			this->SavePasswordButton->UseVisualStyleBackColor = true;
			this->SavePasswordButton->Click += gcnew System::EventHandler(this, &ChangePassword::SavePasswordButton_Click);
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameLabel->Location = System::Drawing::Point(82, 55);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(93, 20);
			this->UsernameLabel->TabIndex = 1;
			this->UsernameLabel->Text = L"Username";
			// 
			// UsernameTextBox
			// 
			this->UsernameTextBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UsernameTextBox->Location = System::Drawing::Point(231, 52);
			this->UsernameTextBox->Name = L"UsernameTextBox";
			this->UsernameTextBox->Size = System::Drawing::Size(167, 27);
			this->UsernameTextBox->TabIndex = 2;
			this->UsernameTextBox->TextChanged += gcnew System::EventHandler(this, &ChangePassword::UsernameTextBox_TextChanged);
			// 
			// CurrentPassTextBox
			// 
			this->CurrentPassTextBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CurrentPassTextBox->Location = System::Drawing::Point(231, 88);
			this->CurrentPassTextBox->Name = L"CurrentPassTextBox";
			this->CurrentPassTextBox->PasswordChar = '*';
			this->CurrentPassTextBox->Size = System::Drawing::Size(167, 27);
			this->CurrentPassTextBox->TabIndex = 4;
			this->CurrentPassTextBox->TextChanged += gcnew System::EventHandler(this, &ChangePassword::CurrentPassTextBox_TextChanged);
			// 
			// CurrentPassLabel
			// 
			this->CurrentPassLabel->AutoSize = true;
			this->CurrentPassLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CurrentPassLabel->Location = System::Drawing::Point(44, 88);
			this->CurrentPassLabel->Name = L"CurrentPassLabel";
			this->CurrentPassLabel->Size = System::Drawing::Size(157, 20);
			this->CurrentPassLabel->TabIndex = 7;
			this->CurrentPassLabel->Text = L"Current Password";
			// 
			// NewPasswordLabel
			// 
			this->NewPasswordLabel->AutoSize = true;
			this->NewPasswordLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NewPasswordLabel->Location = System::Drawing::Point(60, 125);
			this->NewPasswordLabel->Name = L"NewPasswordLabel";
			this->NewPasswordLabel->Size = System::Drawing::Size(131, 20);
			this->NewPasswordLabel->TabIndex = 10;
			this->NewPasswordLabel->Text = L"New Password";
			// 
			// NewPassTextBox
			// 
			this->NewPassTextBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewPassTextBox->Location = System::Drawing::Point(231, 122);
			this->NewPassTextBox->Name = L"NewPassTextBox";
			this->NewPassTextBox->PasswordChar = '*';
			this->NewPassTextBox->Size = System::Drawing::Size(167, 27);
			this->NewPassTextBox->TabIndex = 9;
			// 
			// ShowCurrentPass
			// 
			this->ShowCurrentPass->Location = System::Drawing::Point(411, 90);
			this->ShowCurrentPass->Name = L"ShowCurrentPass";
			this->ShowCurrentPass->Size = System::Drawing::Size(120, 24);
			this->ShowCurrentPass->TabIndex = 11;
			this->ShowCurrentPass->Text = L"Show Password\?";
			this->ShowCurrentPass->UseVisualStyleBackColor = true;
			this->ShowCurrentPass->Click += gcnew System::EventHandler(this, &ChangePassword::ShowCurrentPass_Click);
			// 
			// ShowNewPass
			// 
			this->ShowNewPass->Location = System::Drawing::Point(411, 125);
			this->ShowNewPass->Name = L"ShowNewPass";
			this->ShowNewPass->Size = System::Drawing::Size(120, 24);
			this->ShowNewPass->TabIndex = 12;
			this->ShowNewPass->Text = L"Show Password\?";
			this->ShowNewPass->UseVisualStyleBackColor = true;
			this->ShowNewPass->Click += gcnew System::EventHandler(this, &ChangePassword::ShowNewPass_Click);
			// 
			// ChangePassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 266);
			this->Controls->Add(this->ShowNewPass);
			this->Controls->Add(this->ShowCurrentPass);
			this->Controls->Add(this->NewPasswordLabel);
			this->Controls->Add(this->NewPassTextBox);
			this->Controls->Add(this->CurrentPassLabel);
			this->Controls->Add(this->CurrentPassTextBox);
			this->Controls->Add(this->UsernameTextBox);
			this->Controls->Add(this->UsernameLabel);
			this->Controls->Add(this->SavePasswordButton);
			this->Name = L"ChangePassword";
			this->Text = L"ChangePassword";
			this->Load += gcnew System::EventHandler(this, &ChangePassword::ChangePassword_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void SavePasswordButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ Username = UsernameTextBox->Text;
		System::String^ CurrentPass = CurrentPassTextBox->Text;
		System::String^ NewPass = NewPassTextBox->Text;

		if (Username->Length == 0 || CurrentPass->Length == 0 || NewPass->Length == 0) {
			MessageBox::Show("Please fill all fields and make new password at least 6 characters.","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			return;
		}
		bool userFound = false;
		std::string UsernameInput = marshal_as<std::string>(Username);
		std::string CurrentPassInput = marshal_as<std::string>(CurrentPass);
		std::string NewPassInput = marshal_as<std::string>(NewPass);
		std::vector<User> users = Loaduser();
		for (User& usr : users) {

			for (User& usr : users) {
				if (usr.username == UsernameInput) {
					userFound = true;
					if (usr.password == CurrentPassInput) {
						usr.password = NewPassInput;
						SaveAllUsers(users);
						MessageBox::Show("Password changed successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
						this->Close();
						return;
					}
					else {
						MessageBox::Show("Current password is incorrect.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
				}
			}

			
		}
		if (!userFound) {
			MessageBox::Show("Username is incorrect.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void ShowCurrentPass_Click(System::Object^ sender, System::EventArgs^ e) {
	CurrentPassTextBox->PasswordChar = 0;
}
private: System::Void ShowNewPass_Click(System::Object^ sender, System::EventArgs^ e) {
	NewPassTextBox->PasswordChar = 0;
}
private: System::Void ChangePassword_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CurrentPassTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UsernameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
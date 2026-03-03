#pragma once
namespace FootBall1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FootBall1;
	/// <summary>
	/// Summary for TermsConditions
	/// </summary>
	public ref class TermsConditions : public System::Windows::Forms::Form
	{
	public:
		TermsConditions(void)
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
		~TermsConditions()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox9;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TermsConditions::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button1->Location = System::Drawing::Point(552, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(255, 62);
			this->button1->TabIndex = 1;
			this->button1->Text = L"I agree to the following terms";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TermsConditions::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox1->Location = System::Drawing::Point(293, 327);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(949, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"By using the Football League App, you acknowledge that you have read, understood,"
				L" and agreed to these Terms.";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox2->Location = System::Drawing::Point(7, 180);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(1702, 26);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"6. Changes to Terms: We may update these Terms from time to time.Continued use of"
				L" the app after changes means you accept the revised terms.";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox3->Location = System::Drawing::Point(7, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(1702, 26);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"5. Limitation of Liability: We strive for a smooth and reliable experience but do"
				L" not guarantee uninterrupted access.We are not liable for damages resulting from"
				L" app errors, outages, or user behavior.";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox4->Location = System::Drawing::Point(7, 124);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(1702, 26);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"4. League Rules: Each football league may have specific rules regarding gameplay, scheduling, scoring, and conduct."
				L"By joining a league, you agree to follow its rules and decisions made by league administrators.";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox5->Location = System::Drawing::Point(7, 96);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(1702, 26);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"3. Content Ownership: All content within the app(including logos, team names, sco"
				L"res, and designs) is owned by the app or its users.You must not use or reproduce"
				L" any content without permission.";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox6->Location = System::Drawing::Point(7, 68);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(1702, 26);
			this->textBox6->TabIndex = 8;
			this->textBox6->Text = L"2. Privacy: We respect your privacy.Personal information will be collected and us"
				L"ed in accordance with our Privacy Policy.We do not sell or share your data with "
				L"third parties without your consent.";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox7->Location = System::Drawing::Point(7, 40);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(1702, 26);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"1. User Accounts: To join leagues or manage teams, you may need to create an acco"
				L"unt.You are responsible for keeping your login credentials secure and for all ac"
				L"tivity under your account.";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox9->Location = System::Drawing::Point(7, 12);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(1259, 26);
			this->textBox9->TabIndex = 11;
			this->textBox9->Text = L"Welcome to the Football League App! By using our app, you agree to the following "
				L"terms and conditions. Please read them carefully.";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &TermsConditions::textBox9_TextChanged);
			// 
			// TermsConditions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1709, 466);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"TermsConditions";
			this->Text = L"kk";
			this->Load += gcnew System::EventHandler(this, &TermsConditions::TermsConditions_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void TermsConditions_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

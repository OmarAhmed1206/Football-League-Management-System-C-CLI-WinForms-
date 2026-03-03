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
	/// Summary for LogoForm
	/// </summary>
	public ref class LogoForm : public System::Windows::Forms::Form
	{

	public:
		LogoForm(void)
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
		~LogoForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox9;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	public: void FadeAndSlideOut(){

		System::Windows::Forms::Timer^ delayTimer = gcnew System::Windows::Forms::Timer();
		delayTimer->Interval = 1300; 
		delayTimer->Tick += gcnew System::EventHandler(this, &LogoForm::StartFadeAndSlide);
		delayTimer->Start();
	}
	private: System::Void StartFadeAndSlide(System::Object^ sender, System::EventArgs^ e) {
		((Timer^)sender)->Stop();

		System::Windows::Forms::Timer^ slideFadeTimer = gcnew System::Windows::Forms::Timer();
		slideFadeTimer->Interval = 15;
		slideFadeTimer->Tick += gcnew System::EventHandler(this, &LogoForm::slideFadeTimer_Tick);
		slideFadeTimer->Start();
	}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogoForm::typeid));
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::White;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(4, 1);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(1428, 771);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox9->TabIndex = 20;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &LogoForm::pictureBox9_Click);
			// 
			// LogoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1405, 784);
			this->Controls->Add(this->pictureBox9);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LogoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LogoForm";
			this->Load += gcnew System::EventHandler(this, &LogoForm::LogoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LogoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void slideFadeTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->Opacity -= 0.02;

		if (this->Opacity <= 0.0) {
			((Timer^)sender)->Stop();
			this->Close(); 
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			FadeAndSlideOut();
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#pragma once
#include "AdminGUICode.h"
#include "ChangePassword.h"
#include <vector>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "LogoForm.h"
namespace FootBall1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FootBall1;
	/// <summary>
	/// Summary for UserFunctionForm
	/// </summary>
	public ref class UserFunctionForm : public System::Windows::Forms::Form
	{
		System::Drawing::Font^ arabicFont = gcnew System::Drawing::Font("Segoe UI", 10);
		System::Drawing::Font^ WelcomeFont = gcnew System::Drawing::Font("Segoe UI", 15.1F);
	private:
		System::String^ ChosenTeam;
		System::String^ ChosenPlayer;
		System::String^ ChosenTeamPlayer;
		System::String^ SpecificTeamView;



	private: System::Windows::Forms::ListBox^ UserTeamDetailList;
	private: System::Windows::Forms::Button^ UserViewTeamDetailButton;
	private: System::Windows::Forms::PictureBox^ UserTeamDetailPicture;
	private: System::Windows::Forms::ComboBox^ FavTeamDropDownList;
	private: System::Windows::Forms::Label^ FavTeamLabel;
	private: System::Windows::Forms::Button^ FavTeamButtonChoose;
	private: System::Windows::Forms::Label^ FavouriteTeamPlayerLabel;

	private: System::Windows::Forms::ComboBox^ FavTeamPlayerDropDownList;
	private: System::Windows::Forms::Button^ FavTeamPlayerButtonChoose;
	private: System::Windows::Forms::Panel^ UserTeamDetailsPanel;




	private: System::Windows::Forms::Button^ ViewSpecificTeamButton;
	private: System::Windows::Forms::Label^ ViewSpecificTeamText;
	private: System::Windows::Forms::ComboBox^ ViewSpecificTeamDropDownList;
	private: System::Windows::Forms::Button^ ChangePasswordButton;


	private: System::Windows::Forms::ColorDialog^ ChangeColor;
	private: System::Windows::Forms::PictureBox^ ViewLeagueSchedulePic;

	private: System::Windows::Forms::Button^ ChangeTopTextColor;
	private: System::Windows::Forms::ColorDialog^ ChangeTextColorDialog;

	private: System::Windows::Forms::ColorDialog^ ChangeTopPanelColourDialog;


	private: System::Windows::Forms::ComboBox^ SwitchLang;
	private: System::Windows::Forms::Panel^ SideFavouritePanel;


	private: System::Windows::Forms::Button^ FavouriteButton;
	private: System::Windows::Forms::PictureBox^ FavouritePic;

	private: System::Windows::Forms::Panel^ FavouritePanel;
	private: System::Windows::Forms::Button^ FavTeamPlayerButton;
	private: System::Windows::Forms::ListBox^ FavTeamPlayerList;
	private: System::Windows::Forms::Label^ FavPlayerOfTeam;




	private: System::Windows::Forms::Button^ ShowFavTeam;
	private: System::Windows::Forms::Button^ ShowFavPlayer;


	private: System::Windows::Forms::Label^ FavPlayerText;

	private: System::Windows::Forms::Label^ FavTeamText;
	private: System::Windows::Forms::ListBox^ FavPlayerList;
	private: System::Windows::Forms::Button^ ShowNewPass;
	private: System::Windows::Forms::Button^ ShowCurrentPass;
	private: System::Windows::Forms::Label^ NewPasswordLabel;
	private: System::Windows::Forms::TextBox^ NewPassTextBox;
	private: System::Windows::Forms::Label^ CurrentPassLabel;
	private: System::Windows::Forms::TextBox^ CurrentPassTextBox;
	private: System::Windows::Forms::TextBox^ UsernameTextBox;
	private: System::Windows::Forms::Label^ UsernameLabel;
	private: System::Windows::Forms::Button^ SavePasswordButton;
	private: System::Windows::Forms::Button^ ChangeSidePanelTextColor;
	private: System::Windows::Forms::Button^ ChangeTopPanelColor;
	private: System::Windows::Forms::Button^ ChangeSideBarColorButton;
	private: System::Windows::Forms::Button^ ChangeEverythingColor;
	private: System::Windows::Forms::Panel^ ChangeColorHolder;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Timer^ ChangeColorTimer;
	private: System::Windows::Forms::Panel^ Changepassholder;
	private: System::Windows::Forms::Panel^ panel7;






	private: System::Windows::Forms::ListBox^ FavTeamList;























	public:
		UserFunctionForm(void)
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
		~UserFunctionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ TextTopPanel;
	protected:

	protected:
	private: System::Windows::Forms::Label^ SideBarLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ SideBarContainer;
	private: System::Windows::Forms::Panel^ UserFunctionPanel;

	private: System::Windows::Forms::Panel^ ViewLeagueTablePanel;
	private: System::Windows::Forms::PictureBox^ ViewLeagueTablePic;


	private: System::Windows::Forms::Button^ LeagueTableButton;
	private: System::Windows::Forms::Panel^ MatchResultSidePanel;
	private: System::Windows::Forms::PictureBox^ ViewMatchResultPic;


	private: System::Windows::Forms::Button^ LeagueScheduleButton;
	private: System::Windows::Forms::Panel^ PlayerDetailsSidePanel;
	private: System::Windows::Forms::PictureBox^ ViewPlayerDetailsPic;


	private: System::Windows::Forms::Button^ PlayerDetailsButton;
	private: System::Windows::Forms::Panel^ LeagueScheduleSidePanel;


	private: System::Windows::Forms::Button^ Match_ResultButton;
	private: System::Windows::Forms::Panel^ TeamDetailsSidePanel;
	private: System::Windows::Forms::PictureBox^ ViewTeamDetailsPic;


	private: System::Windows::Forms::Button^ UserTeamDetailsButton;
	private: System::Windows::Forms::Panel^ UserFuncSidePanel;


	private: System::Windows::Forms::PictureBox^ UserFuncPicBox;

	private: System::Windows::Forms::Button^ DashboardButton;
	private: System::Windows::Forms::Panel^ AboutSidePanel;

	private: System::Windows::Forms::PictureBox^ AboutPicBox;

	private: System::Windows::Forms::Button^ AboutButoon;
	private: System::Windows::Forms::Panel^ SettingsSidePanel;

	private: System::Windows::Forms::PictureBox^ SettingsPicBox;

	private: System::Windows::Forms::Button^ SettingsButton;
private: System::Windows::Forms::Panel^ LogoutPanel;

	private: System::Windows::Forms::PictureBox^ LogoutPicBox;

	private: System::Windows::Forms::Button^ LogoutButton;
	private: System::Windows::Forms::Timer^ SideBarTimer;
	private: System::Windows::Forms::Timer^ DashBoardTransition;
	private: System::Windows::Forms::Panel^ UserAboutPanel;

	private: System::Windows::Forms::TextBox^ UserAboutTextBox;




	private: System::Windows::Forms::Panel^ UserViewPlayerDetailPanel;

	private: System::Windows::Forms::PictureBox^ UserViewPlayerDetailPicture;
	private: System::Windows::Forms::Button^ UserViewPlayerDetailButton;
	private: System::Windows::Forms::ListBox^ UserPlayerDetailList;
	private: System::Windows::Forms::Panel^ UserViewLeagueSchedulePanel;

	private: System::Windows::Forms::PictureBox^ UserViewLeagueSchedulePicture;
	private: System::Windows::Forms::Button^ UserViewLeagueScheduleButton;

	private: System::Windows::Forms::ListBox^ UserLeagueScheduleList;
	private: System::Windows::Forms::Panel^ UserViewMatchResultPanel;
	private: System::Windows::Forms::PictureBox^ UserViewMatchResultPIcture;
	private: System::Windows::Forms::Button^ UserViewMatchResultButton;
	private: System::Windows::Forms::ListBox^ UserViewMatchResultList;
	private: System::Windows::Forms::Panel^ UserViewLeagueTablePanel;
	private: System::Windows::Forms::PictureBox^ UserViewLeagueTablePicture;
	private: System::Windows::Forms::Button^ UserViewLeagueTableButton;
	private: System::Windows::Forms::ListBox^ UserViewLeagueTableList;



	private: System::Windows::Forms::ComboBox^ FavPlayerDropDownList;

	private: System::Windows::Forms::Label^ FavPlayerLabel;
	private: System::Windows::Forms::Button^ ChooseFavPlayerButton;
	private: System::Windows::Forms::Panel^ SettingsPanel;














	private: System::ComponentModel::IContainer^ components;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	private:
		void UserTeamDetail();
		void UserPlayerDetail();
		void UserLeagueSchedule();
		void UserMatchResult();
		void UserLeagueTable();
		void FavTeam();
		void FavPlayer();
		void TeamFavPlayer();
		void TeamFavPlayerShow();
		void ViewSpecificTeamList();


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserFunctionForm::typeid));
			this->TextTopPanel = (gcnew System::Windows::Forms::Panel());
			this->SideBarLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SideBarContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->UserFunctionPanel = (gcnew System::Windows::Forms::Panel());
			this->ViewLeagueTablePanel = (gcnew System::Windows::Forms::Panel());
			this->ViewLeagueTablePic = (gcnew System::Windows::Forms::PictureBox());
			this->LeagueTableButton = (gcnew System::Windows::Forms::Button());
			this->MatchResultSidePanel = (gcnew System::Windows::Forms::Panel());
			this->ViewMatchResultPic = (gcnew System::Windows::Forms::PictureBox());
			this->Match_ResultButton = (gcnew System::Windows::Forms::Button());
			this->PlayerDetailsSidePanel = (gcnew System::Windows::Forms::Panel());
			this->ViewPlayerDetailsPic = (gcnew System::Windows::Forms::PictureBox());
			this->PlayerDetailsButton = (gcnew System::Windows::Forms::Button());
			this->LeagueScheduleSidePanel = (gcnew System::Windows::Forms::Panel());
			this->ViewLeagueSchedulePic = (gcnew System::Windows::Forms::PictureBox());
			this->LeagueScheduleButton = (gcnew System::Windows::Forms::Button());
			this->TeamDetailsSidePanel = (gcnew System::Windows::Forms::Panel());
			this->ViewTeamDetailsPic = (gcnew System::Windows::Forms::PictureBox());
			this->UserTeamDetailsButton = (gcnew System::Windows::Forms::Button());
			this->UserFuncSidePanel = (gcnew System::Windows::Forms::Panel());
			this->UserFuncPicBox = (gcnew System::Windows::Forms::PictureBox());
			this->DashboardButton = (gcnew System::Windows::Forms::Button());
			this->AboutSidePanel = (gcnew System::Windows::Forms::Panel());
			this->AboutPicBox = (gcnew System::Windows::Forms::PictureBox());
			this->AboutButoon = (gcnew System::Windows::Forms::Button());
			this->SettingsSidePanel = (gcnew System::Windows::Forms::Panel());
			this->SettingsPicBox = (gcnew System::Windows::Forms::PictureBox());
			this->SettingsButton = (gcnew System::Windows::Forms::Button());
			this->SideFavouritePanel = (gcnew System::Windows::Forms::Panel());
			this->FavouritePic = (gcnew System::Windows::Forms::PictureBox());
			this->FavouriteButton = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->LogoutPanel = (gcnew System::Windows::Forms::Panel());
			this->LogoutPicBox = (gcnew System::Windows::Forms::PictureBox());
			this->LogoutButton = (gcnew System::Windows::Forms::Button());
			this->SideBarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->DashBoardTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->UserAboutPanel = (gcnew System::Windows::Forms::Panel());
			this->UserAboutTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UserViewPlayerDetailPanel = (gcnew System::Windows::Forms::Panel());
			this->ChooseFavPlayerButton = (gcnew System::Windows::Forms::Button());
			this->FavPlayerDropDownList = (gcnew System::Windows::Forms::ComboBox());
			this->FavPlayerLabel = (gcnew System::Windows::Forms::Label());
			this->UserViewPlayerDetailPicture = (gcnew System::Windows::Forms::PictureBox());
			this->UserViewPlayerDetailButton = (gcnew System::Windows::Forms::Button());
			this->UserPlayerDetailList = (gcnew System::Windows::Forms::ListBox());
			this->UserViewLeagueSchedulePanel = (gcnew System::Windows::Forms::Panel());
			this->UserViewLeagueSchedulePicture = (gcnew System::Windows::Forms::PictureBox());
			this->UserViewLeagueScheduleButton = (gcnew System::Windows::Forms::Button());
			this->UserLeagueScheduleList = (gcnew System::Windows::Forms::ListBox());
			this->UserViewMatchResultPanel = (gcnew System::Windows::Forms::Panel());
			this->UserViewMatchResultPIcture = (gcnew System::Windows::Forms::PictureBox());
			this->UserViewMatchResultButton = (gcnew System::Windows::Forms::Button());
			this->UserViewMatchResultList = (gcnew System::Windows::Forms::ListBox());
			this->UserViewLeagueTablePanel = (gcnew System::Windows::Forms::Panel());
			this->UserViewLeagueTablePicture = (gcnew System::Windows::Forms::PictureBox());
			this->UserViewLeagueTableButton = (gcnew System::Windows::Forms::Button());
			this->UserViewLeagueTableList = (gcnew System::Windows::Forms::ListBox());
			this->SettingsPanel = (gcnew System::Windows::Forms::Panel());
			this->Changepassholder = (gcnew System::Windows::Forms::Panel());
			this->UsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SavePasswordButton = (gcnew System::Windows::Forms::Button());
			this->ShowNewPass = (gcnew System::Windows::Forms::Button());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCurrentPass = (gcnew System::Windows::Forms::Button());
			this->CurrentPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NewPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->CurrentPassLabel = (gcnew System::Windows::Forms::Label());
			this->NewPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->ChangePasswordButton = (gcnew System::Windows::Forms::Button());
			this->ChangeColorHolder = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->ChangeSidePanelTextColor = (gcnew System::Windows::Forms::Button());
			this->ChangeEverythingColor = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ChangeSideBarColorButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->ChangeTopPanelColor = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->ChangeTopTextColor = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->SwitchLang = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->FavouritePanel = (gcnew System::Windows::Forms::Panel());
			this->FavTeamPlayerButton = (gcnew System::Windows::Forms::Button());
			this->FavTeamPlayerList = (gcnew System::Windows::Forms::ListBox());
			this->FavPlayerOfTeam = (gcnew System::Windows::Forms::Label());
			this->ShowFavTeam = (gcnew System::Windows::Forms::Button());
			this->ShowFavPlayer = (gcnew System::Windows::Forms::Button());
			this->FavPlayerText = (gcnew System::Windows::Forms::Label());
			this->FavTeamText = (gcnew System::Windows::Forms::Label());
			this->FavPlayerList = (gcnew System::Windows::Forms::ListBox());
			this->FavTeamList = (gcnew System::Windows::Forms::ListBox());
			this->UserTeamDetailsPanel = (gcnew System::Windows::Forms::Panel());
			this->ViewSpecificTeamButton = (gcnew System::Windows::Forms::Button());
			this->ViewSpecificTeamText = (gcnew System::Windows::Forms::Label());
			this->ViewSpecificTeamDropDownList = (gcnew System::Windows::Forms::ComboBox());
			this->FavTeamPlayerButtonChoose = (gcnew System::Windows::Forms::Button());
			this->FavTeamPlayerDropDownList = (gcnew System::Windows::Forms::ComboBox());
			this->FavouriteTeamPlayerLabel = (gcnew System::Windows::Forms::Label());
			this->FavTeamButtonChoose = (gcnew System::Windows::Forms::Button());
			this->FavTeamLabel = (gcnew System::Windows::Forms::Label());
			this->FavTeamDropDownList = (gcnew System::Windows::Forms::ComboBox());
			this->UserTeamDetailPicture = (gcnew System::Windows::Forms::PictureBox());
			this->UserViewTeamDetailButton = (gcnew System::Windows::Forms::Button());
			this->UserTeamDetailList = (gcnew System::Windows::Forms::ListBox());
			this->ChangeColor = (gcnew System::Windows::Forms::ColorDialog());
			this->ChangeTextColorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->ChangeTopPanelColourDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->ChangeColorTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->TextTopPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SideBarContainer->SuspendLayout();
			this->UserFunctionPanel->SuspendLayout();
			this->ViewLeagueTablePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewLeagueTablePic))->BeginInit();
			this->MatchResultSidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewMatchResultPic))->BeginInit();
			this->PlayerDetailsSidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewPlayerDetailsPic))->BeginInit();
			this->LeagueScheduleSidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewLeagueSchedulePic))->BeginInit();
			this->TeamDetailsSidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewTeamDetailsPic))->BeginInit();
			this->UserFuncSidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserFuncPicBox))->BeginInit();
			this->AboutSidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AboutPicBox))->BeginInit();
			this->SettingsSidePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SettingsPicBox))->BeginInit();
			this->SideFavouritePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FavouritePic))->BeginInit();
			this->panel7->SuspendLayout();
			this->LogoutPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoutPicBox))->BeginInit();
			this->UserAboutPanel->SuspendLayout();
			this->UserViewPlayerDetailPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserViewPlayerDetailPicture))->BeginInit();
			this->UserViewLeagueSchedulePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserViewLeagueSchedulePicture))->BeginInit();
			this->UserViewMatchResultPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserViewMatchResultPIcture))->BeginInit();
			this->UserViewLeagueTablePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserViewLeagueTablePicture))->BeginInit();
			this->SettingsPanel->SuspendLayout();
			this->Changepassholder->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->ChangeColorHolder->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->FavouritePanel->SuspendLayout();
			this->UserTeamDetailsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserTeamDetailPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// TextTopPanel
			// 
			this->TextTopPanel->BackColor = System::Drawing::SystemColors::HighlightText;
			this->TextTopPanel->CausesValidation = false;
			this->TextTopPanel->Controls->Add(this->SideBarLabel);
			this->TextTopPanel->Controls->Add(this->pictureBox1);
			this->TextTopPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->TextTopPanel->Location = System::Drawing::Point(0, 0);
			this->TextTopPanel->Name = L"TextTopPanel";
			this->TextTopPanel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TextTopPanel->Size = System::Drawing::Size(1276, 48);
			this->TextTopPanel->TabIndex = 2;
			// 
			// SideBarLabel
			// 
			this->SideBarLabel->AutoSize = true;
			this->SideBarLabel->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SideBarLabel->ForeColor = System::Drawing::Color::Black;
			this->SideBarLabel->Location = System::Drawing::Point(46, 9);
			this->SideBarLabel->Name = L"SideBarLabel";
			this->SideBarLabel->Size = System::Drawing::Size(335, 29);
			this->SideBarLabel->TabIndex = 2;
			this->SideBarLabel->Text = L"Welcome To ASU League ";
			this->SideBarLabel->Click += gcnew System::EventHandler(this, &UserFunctionForm::SideBarLabel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(43, 48);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UserFunctionForm::pictureBox1_Click);
			// 
			// SideBarContainer
			// 
			this->SideBarContainer->BackColor = System::Drawing::SystemColors::InfoText;
			this->SideBarContainer->Controls->Add(this->UserFunctionPanel);
			this->SideBarContainer->Controls->Add(this->AboutSidePanel);
			this->SideBarContainer->Controls->Add(this->SettingsSidePanel);
			this->SideBarContainer->Controls->Add(this->SideFavouritePanel);
			this->SideBarContainer->Controls->Add(this->panel7);
			this->SideBarContainer->Dock = System::Windows::Forms::DockStyle::Left;
			this->SideBarContainer->Location = System::Drawing::Point(0, 48);
			this->SideBarContainer->Name = L"SideBarContainer";
			this->SideBarContainer->Size = System::Drawing::Size(339, 662);
			this->SideBarContainer->TabIndex = 3;
			this->SideBarContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserFunctionForm::SideBarContainer_Paint);
			// 
			// UserFunctionPanel
			// 
			this->UserFunctionPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->UserFunctionPanel->Controls->Add(this->ViewLeagueTablePanel);
			this->UserFunctionPanel->Controls->Add(this->MatchResultSidePanel);
			this->UserFunctionPanel->Controls->Add(this->PlayerDetailsSidePanel);
			this->UserFunctionPanel->Controls->Add(this->LeagueScheduleSidePanel);
			this->UserFunctionPanel->Controls->Add(this->TeamDetailsSidePanel);
			this->UserFunctionPanel->Controls->Add(this->UserFuncSidePanel);
			this->UserFunctionPanel->Location = System::Drawing::Point(3, 3);
			this->UserFunctionPanel->Name = L"UserFunctionPanel";
			this->UserFunctionPanel->Size = System::Drawing::Size(341, 53);
			this->UserFunctionPanel->TabIndex = 5;
			// 
			// ViewLeagueTablePanel
			// 
			this->ViewLeagueTablePanel->Controls->Add(this->ViewLeagueTablePic);
			this->ViewLeagueTablePanel->Controls->Add(this->LeagueTableButton);
			this->ViewLeagueTablePanel->Location = System::Drawing::Point(0, 253);
			this->ViewLeagueTablePanel->Name = L"ViewLeagueTablePanel";
			this->ViewLeagueTablePanel->Size = System::Drawing::Size(327, 42);
			this->ViewLeagueTablePanel->TabIndex = 10;
			// 
			// ViewLeagueTablePic
			// 
			this->ViewLeagueTablePic->BackColor = System::Drawing::SystemColors::InfoText;
			this->ViewLeagueTablePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewLeagueTablePic.Image")));
			this->ViewLeagueTablePic->Location = System::Drawing::Point(8, 7);
			this->ViewLeagueTablePic->Name = L"ViewLeagueTablePic";
			this->ViewLeagueTablePic->Size = System::Drawing::Size(27, 31);
			this->ViewLeagueTablePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ViewLeagueTablePic->TabIndex = 4;
			this->ViewLeagueTablePic->TabStop = false;
			// 
			// LeagueTableButton
			// 
			this->LeagueTableButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->LeagueTableButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LeagueTableButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeagueTableButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LeagueTableButton->Location = System::Drawing::Point(-109, -20);
			this->LeagueTableButton->Name = L"LeagueTableButton";
			this->LeagueTableButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->LeagueTableButton->Size = System::Drawing::Size(464, 82);
			this->LeagueTableButton->TabIndex = 2;
			this->LeagueTableButton->Text = L"View League Table";
			this->LeagueTableButton->UseVisualStyleBackColor = false;
			this->LeagueTableButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::LeagueTableButton_Click);
			// 
			// MatchResultSidePanel
			// 
			this->MatchResultSidePanel->Controls->Add(this->ViewMatchResultPic);
			this->MatchResultSidePanel->Controls->Add(this->Match_ResultButton);
			this->MatchResultSidePanel->Location = System::Drawing::Point(3, 206);
			this->MatchResultSidePanel->Name = L"MatchResultSidePanel";
			this->MatchResultSidePanel->Size = System::Drawing::Size(321, 54);
			this->MatchResultSidePanel->TabIndex = 9;
			// 
			// ViewMatchResultPic
			// 
			this->ViewMatchResultPic->BackColor = System::Drawing::SystemColors::InfoText;
			this->ViewMatchResultPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewMatchResultPic.Image")));
			this->ViewMatchResultPic->Location = System::Drawing::Point(5, 10);
			this->ViewMatchResultPic->Name = L"ViewMatchResultPic";
			this->ViewMatchResultPic->Size = System::Drawing::Size(27, 31);
			this->ViewMatchResultPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ViewMatchResultPic->TabIndex = 4;
			this->ViewMatchResultPic->TabStop = false;
			// 
			// Match_ResultButton
			// 
			this->Match_ResultButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Match_ResultButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Match_ResultButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Match_ResultButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Match_ResultButton->Location = System::Drawing::Point(-108, -16);
			this->Match_ResultButton->Name = L"Match_ResultButton";
			this->Match_ResultButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->Match_ResultButton->Size = System::Drawing::Size(464, 75);
			this->Match_ResultButton->TabIndex = 2;
			this->Match_ResultButton->Text = L"View Match Results";
			this->Match_ResultButton->UseVisualStyleBackColor = false;
			this->Match_ResultButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::Match_ResultButton_Click);
			// 
			// PlayerDetailsSidePanel
			// 
			this->PlayerDetailsSidePanel->Controls->Add(this->ViewPlayerDetailsPic);
			this->PlayerDetailsSidePanel->Controls->Add(this->PlayerDetailsButton);
			this->PlayerDetailsSidePanel->Location = System::Drawing::Point(3, 99);
			this->PlayerDetailsSidePanel->Name = L"PlayerDetailsSidePanel";
			this->PlayerDetailsSidePanel->Size = System::Drawing::Size(324, 61);
			this->PlayerDetailsSidePanel->TabIndex = 7;
			// 
			// ViewPlayerDetailsPic
			// 
			this->ViewPlayerDetailsPic->BackColor = System::Drawing::SystemColors::InfoText;
			this->ViewPlayerDetailsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewPlayerDetailsPic.Image")));
			this->ViewPlayerDetailsPic->Location = System::Drawing::Point(5, 15);
			this->ViewPlayerDetailsPic->Name = L"ViewPlayerDetailsPic";
			this->ViewPlayerDetailsPic->Size = System::Drawing::Size(27, 31);
			this->ViewPlayerDetailsPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ViewPlayerDetailsPic->TabIndex = 4;
			this->ViewPlayerDetailsPic->TabStop = false;
			// 
			// PlayerDetailsButton
			// 
			this->PlayerDetailsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->PlayerDetailsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PlayerDetailsButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerDetailsButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->PlayerDetailsButton->Location = System::Drawing::Point(-111, -10);
			this->PlayerDetailsButton->Name = L"PlayerDetailsButton";
			this->PlayerDetailsButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->PlayerDetailsButton->Size = System::Drawing::Size(464, 77);
			this->PlayerDetailsButton->TabIndex = 2;
			this->PlayerDetailsButton->Text = L"View Player Details";
			this->PlayerDetailsButton->UseVisualStyleBackColor = false;
			this->PlayerDetailsButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::PlayerDetailsButton_Click);
			// 
			// LeagueScheduleSidePanel
			// 
			this->LeagueScheduleSidePanel->Controls->Add(this->ViewLeagueSchedulePic);
			this->LeagueScheduleSidePanel->Controls->Add(this->LeagueScheduleButton);
			this->LeagueScheduleSidePanel->Location = System::Drawing::Point(3, 159);
			this->LeagueScheduleSidePanel->Name = L"LeagueScheduleSidePanel";
			this->LeagueScheduleSidePanel->Size = System::Drawing::Size(321, 60);
			this->LeagueScheduleSidePanel->TabIndex = 8;
			// 
			// ViewLeagueSchedulePic
			// 
			this->ViewLeagueSchedulePic->BackColor = System::Drawing::SystemColors::InfoText;
			this->ViewLeagueSchedulePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewLeagueSchedulePic.Image")));
			this->ViewLeagueSchedulePic->Location = System::Drawing::Point(5, 10);
			this->ViewLeagueSchedulePic->Name = L"ViewLeagueSchedulePic";
			this->ViewLeagueSchedulePic->Size = System::Drawing::Size(27, 31);
			this->ViewLeagueSchedulePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ViewLeagueSchedulePic->TabIndex = 4;
			this->ViewLeagueSchedulePic->TabStop = false;
			// 
			// LeagueScheduleButton
			// 
			this->LeagueScheduleButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->LeagueScheduleButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LeagueScheduleButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeagueScheduleButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LeagueScheduleButton->Location = System::Drawing::Point(-96, -12);
			this->LeagueScheduleButton->Name = L"LeagueScheduleButton";
			this->LeagueScheduleButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->LeagueScheduleButton->Size = System::Drawing::Size(464, 68);
			this->LeagueScheduleButton->TabIndex = 2;
			this->LeagueScheduleButton->Text = L"View League Schedule";
			this->LeagueScheduleButton->UseVisualStyleBackColor = false;
			this->LeagueScheduleButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::LeagueScheduleButton_Click);
			// 
			// TeamDetailsSidePanel
			// 
			this->TeamDetailsSidePanel->Controls->Add(this->ViewTeamDetailsPic);
			this->TeamDetailsSidePanel->Controls->Add(this->UserTeamDetailsButton);
			this->TeamDetailsSidePanel->Location = System::Drawing::Point(3, 49);
			this->TeamDetailsSidePanel->Name = L"TeamDetailsSidePanel";
			this->TeamDetailsSidePanel->Size = System::Drawing::Size(321, 55);
			this->TeamDetailsSidePanel->TabIndex = 6;
			// 
			// ViewTeamDetailsPic
			// 
			this->ViewTeamDetailsPic->BackColor = System::Drawing::SystemColors::InfoText;
			this->ViewTeamDetailsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewTeamDetailsPic.Image")));
			this->ViewTeamDetailsPic->Location = System::Drawing::Point(5, 10);
			this->ViewTeamDetailsPic->Name = L"ViewTeamDetailsPic";
			this->ViewTeamDetailsPic->Size = System::Drawing::Size(27, 31);
			this->ViewTeamDetailsPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ViewTeamDetailsPic->TabIndex = 4;
			this->ViewTeamDetailsPic->TabStop = false;
			// 
			// UserTeamDetailsButton
			// 
			this->UserTeamDetailsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->UserTeamDetailsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UserTeamDetailsButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserTeamDetailsButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->UserTeamDetailsButton->Location = System::Drawing::Point(-112, -5);
			this->UserTeamDetailsButton->Name = L"UserTeamDetailsButton";
			this->UserTeamDetailsButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->UserTeamDetailsButton->Size = System::Drawing::Size(458, 61);
			this->UserTeamDetailsButton->TabIndex = 2;
			this->UserTeamDetailsButton->Text = L"View Team Details";
			this->UserTeamDetailsButton->UseVisualStyleBackColor = false;
			this->UserTeamDetailsButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::UserTeamDetailsButton_Click);
			// 
			// UserFuncSidePanel
			// 
			this->UserFuncSidePanel->Controls->Add(this->UserFuncPicBox);
			this->UserFuncSidePanel->Controls->Add(this->DashboardButton);
			this->UserFuncSidePanel->Location = System::Drawing::Point(-3, -12);
			this->UserFuncSidePanel->Name = L"UserFuncSidePanel";
			this->UserFuncSidePanel->Size = System::Drawing::Size(343, 65);
			this->UserFuncSidePanel->TabIndex = 3;
			// 
			// UserFuncPicBox
			// 
			this->UserFuncPicBox->BackColor = System::Drawing::SystemColors::InfoText;
			this->UserFuncPicBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserFuncPicBox.Image")));
			this->UserFuncPicBox->Location = System::Drawing::Point(7, 23);
			this->UserFuncPicBox->Name = L"UserFuncPicBox";
			this->UserFuncPicBox->Size = System::Drawing::Size(27, 31);
			this->UserFuncPicBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->UserFuncPicBox->TabIndex = 4;
			this->UserFuncPicBox->TabStop = false;
			// 
			// DashboardButton
			// 
			this->DashboardButton->BackColor = System::Drawing::SystemColors::InfoText;
			this->DashboardButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DashboardButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DashboardButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DashboardButton->Location = System::Drawing::Point(-125, 11);
			this->DashboardButton->Name = L"DashboardButton";
			this->DashboardButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->DashboardButton->Size = System::Drawing::Size(492, 56);
			this->DashboardButton->TabIndex = 2;
			this->DashboardButton->Text = L"User Function";
			this->DashboardButton->UseVisualStyleBackColor = false;
			this->DashboardButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::DashboardButton_Click);
			// 
			// AboutSidePanel
			// 
			this->AboutSidePanel->Controls->Add(this->AboutPicBox);
			this->AboutSidePanel->Controls->Add(this->AboutButoon);
			this->AboutSidePanel->Location = System::Drawing::Point(3, 62);
			this->AboutSidePanel->Name = L"AboutSidePanel";
			this->AboutSidePanel->Size = System::Drawing::Size(342, 66);
			this->AboutSidePanel->TabIndex = 4;
			// 
			// AboutPicBox
			// 
			this->AboutPicBox->BackColor = System::Drawing::SystemColors::InfoText;
			this->AboutPicBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AboutPicBox.Image")));
			this->AboutPicBox->Location = System::Drawing::Point(5, 10);
			this->AboutPicBox->Name = L"AboutPicBox";
			this->AboutPicBox->Size = System::Drawing::Size(27, 31);
			this->AboutPicBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->AboutPicBox->TabIndex = 4;
			this->AboutPicBox->TabStop = false;
			// 
			// AboutButoon
			// 
			this->AboutButoon->BackColor = System::Drawing::SystemColors::InfoText;
			this->AboutButoon->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AboutButoon->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AboutButoon->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AboutButoon->Location = System::Drawing::Point(-237, -1);
			this->AboutButoon->Name = L"AboutButoon";
			this->AboutButoon->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->AboutButoon->Size = System::Drawing::Size(647, 70);
			this->AboutButoon->TabIndex = 2;
			this->AboutButoon->Text = L"About";
			this->AboutButoon->UseVisualStyleBackColor = false;
			this->AboutButoon->Click += gcnew System::EventHandler(this, &UserFunctionForm::AboutButoon_Click);
			// 
			// SettingsSidePanel
			// 
			this->SettingsSidePanel->Controls->Add(this->SettingsPicBox);
			this->SettingsSidePanel->Controls->Add(this->SettingsButton);
			this->SettingsSidePanel->Location = System::Drawing::Point(3, 134);
			this->SettingsSidePanel->Name = L"SettingsSidePanel";
			this->SettingsSidePanel->Size = System::Drawing::Size(342, 49);
			this->SettingsSidePanel->TabIndex = 5;
			// 
			// SettingsPicBox
			// 
			this->SettingsPicBox->BackColor = System::Drawing::SystemColors::InfoText;
			this->SettingsPicBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SettingsPicBox.Image")));
			this->SettingsPicBox->Location = System::Drawing::Point(0, -3);
			this->SettingsPicBox->Name = L"SettingsPicBox";
			this->SettingsPicBox->Size = System::Drawing::Size(38, 40);
			this->SettingsPicBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SettingsPicBox->TabIndex = 4;
			this->SettingsPicBox->TabStop = false;
			// 
			// SettingsButton
			// 
			this->SettingsButton->BackColor = System::Drawing::SystemColors::InfoText;
			this->SettingsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SettingsButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SettingsButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->SettingsButton->Location = System::Drawing::Point(-158, -18);
			this->SettingsButton->Name = L"SettingsButton";
			this->SettingsButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->SettingsButton->Size = System::Drawing::Size(499, 69);
			this->SettingsButton->TabIndex = 2;
			this->SettingsButton->Text = L"Settings";
			this->SettingsButton->UseVisualStyleBackColor = false;
			this->SettingsButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::SettingsButton_Click);
			// 
			// SideFavouritePanel
			// 
			this->SideFavouritePanel->Controls->Add(this->FavouritePic);
			this->SideFavouritePanel->Controls->Add(this->FavouriteButton);
			this->SideFavouritePanel->Location = System::Drawing::Point(3, 189);
			this->SideFavouritePanel->Name = L"SideFavouritePanel";
			this->SideFavouritePanel->Size = System::Drawing::Size(342, 49);
			this->SideFavouritePanel->TabIndex = 6;
			// 
			// FavouritePic
			// 
			this->FavouritePic->BackColor = System::Drawing::SystemColors::Desktop;
			this->FavouritePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FavouritePic.Image")));
			this->FavouritePic->Location = System::Drawing::Point(7, 12);
			this->FavouritePic->Name = L"FavouritePic";
			this->FavouritePic->Size = System::Drawing::Size(27, 31);
			this->FavouritePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->FavouritePic->TabIndex = 4;
			this->FavouritePic->TabStop = false;
			// 
			// FavouriteButton
			// 
			this->FavouriteButton->BackColor = System::Drawing::SystemColors::InfoText;
			this->FavouriteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FavouriteButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FavouriteButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FavouriteButton->Location = System::Drawing::Point(-167, -8);
			this->FavouriteButton->Name = L"FavouriteButton";
			this->FavouriteButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->FavouriteButton->Size = System::Drawing::Size(530, 69);
			this->FavouriteButton->TabIndex = 2;
			this->FavouriteButton->Text = L"Favourites";
			this->FavouriteButton->UseVisualStyleBackColor = false;
			this->FavouriteButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::FavouriteButton_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->LogoutPanel);
			this->panel7->Location = System::Drawing::Point(3, 244);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(353, 406);
			this->panel7->TabIndex = 18;
			// 
			// LogoutPanel
			// 
			this->LogoutPanel->Controls->Add(this->LogoutPicBox);
			this->LogoutPanel->Controls->Add(this->LogoutButton);
			this->LogoutPanel->Location = System::Drawing::Point(3, 321);
			this->LogoutPanel->Name = L"LogoutPanel";
			this->LogoutPanel->Size = System::Drawing::Size(342, 85);
			this->LogoutPanel->TabIndex = 5;
			// 
			// LogoutPicBox
			// 
			this->LogoutPicBox->BackColor = System::Drawing::SystemColors::Desktop;
			this->LogoutPicBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogoutPicBox.Image")));
			this->LogoutPicBox->Location = System::Drawing::Point(7, 12);
			this->LogoutPicBox->Name = L"LogoutPicBox";
			this->LogoutPicBox->Size = System::Drawing::Size(27, 31);
			this->LogoutPicBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->LogoutPicBox->TabIndex = 4;
			this->LogoutPicBox->TabStop = false;
			// 
			// LogoutButton
			// 
			this->LogoutButton->BackColor = System::Drawing::SystemColors::InfoText;
			this->LogoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogoutButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LogoutButton->Location = System::Drawing::Point(-175, -8);
			this->LogoutButton->Name = L"LogoutButton";
			this->LogoutButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->LogoutButton->Size = System::Drawing::Size(530, 93);
			this->LogoutButton->TabIndex = 2;
			this->LogoutButton->Text = L"Logout";
			this->LogoutButton->UseVisualStyleBackColor = false;
			this->LogoutButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::LogoutButton_Click);
			// 
			// SideBarTimer
			// 
			this->SideBarTimer->Interval = 10;
			this->SideBarTimer->Tick += gcnew System::EventHandler(this, &UserFunctionForm::SideBarTimer_Tick);
			// 
			// DashBoardTransition
			// 
			this->DashBoardTransition->Interval = 10;
			this->DashBoardTransition->Tick += gcnew System::EventHandler(this, &UserFunctionForm::timer1_Tick);
			// 
			// UserAboutPanel
			// 
			this->UserAboutPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->UserAboutPanel->Controls->Add(this->UserAboutTextBox);
			this->UserAboutPanel->Enabled = false;
			this->UserAboutPanel->Location = System::Drawing::Point(349, 75);
			this->UserAboutPanel->Name = L"UserAboutPanel";
			this->UserAboutPanel->Size = System::Drawing::Size(975, 592);
			this->UserAboutPanel->TabIndex = 4;
			this->UserAboutPanel->Visible = false;
			// 
			// UserAboutTextBox
			// 
			this->UserAboutTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->UserAboutTextBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserAboutTextBox->Location = System::Drawing::Point(1, 2);
			this->UserAboutTextBox->Multiline = true;
			this->UserAboutTextBox->Name = L"UserAboutTextBox";
			this->UserAboutTextBox->Size = System::Drawing::Size(973, 659);
			this->UserAboutTextBox->TabIndex = 0;
			this->UserAboutTextBox->Text = resources->GetString(L"UserAboutTextBox.Text");
			this->UserAboutTextBox->Visible = false;
			// 
			// UserViewPlayerDetailPanel
			// 
			this->UserViewPlayerDetailPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->UserViewPlayerDetailPanel->Controls->Add(this->ChooseFavPlayerButton);
			this->UserViewPlayerDetailPanel->Controls->Add(this->FavPlayerDropDownList);
			this->UserViewPlayerDetailPanel->Controls->Add(this->FavPlayerLabel);
			this->UserViewPlayerDetailPanel->Controls->Add(this->UserViewPlayerDetailPicture);
			this->UserViewPlayerDetailPanel->Controls->Add(this->UserViewPlayerDetailButton);
			this->UserViewPlayerDetailPanel->Controls->Add(this->UserPlayerDetailList);
			this->UserViewPlayerDetailPanel->Location = System::Drawing::Point(349, 75);
			this->UserViewPlayerDetailPanel->Name = L"UserViewPlayerDetailPanel";
			this->UserViewPlayerDetailPanel->Size = System::Drawing::Size(997, 588);
			this->UserViewPlayerDetailPanel->TabIndex = 6;
			this->UserViewPlayerDetailPanel->Visible = false;
			// 
			// ChooseFavPlayerButton
			// 
			this->ChooseFavPlayerButton->BackColor = System::Drawing::Color::Silver;
			this->ChooseFavPlayerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChooseFavPlayerButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChooseFavPlayerButton->Location = System::Drawing::Point(687, 524);
			this->ChooseFavPlayerButton->Name = L"ChooseFavPlayerButton";
			this->ChooseFavPlayerButton->Size = System::Drawing::Size(131, 33);
			this->ChooseFavPlayerButton->TabIndex = 5;
			this->ChooseFavPlayerButton->Text = L"Choose!";
			this->ChooseFavPlayerButton->UseVisualStyleBackColor = false;
			this->ChooseFavPlayerButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::ChooseFavPlayerButton_Click);
			// 
			// FavPlayerDropDownList
			// 
			this->FavPlayerDropDownList->BackColor = System::Drawing::Color::White;
			this->FavPlayerDropDownList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FavPlayerDropDownList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FavPlayerDropDownList->FormattingEnabled = true;
			this->FavPlayerDropDownList->Location = System::Drawing::Point(392, 525);
			this->FavPlayerDropDownList->Name = L"FavPlayerDropDownList";
			this->FavPlayerDropDownList->Size = System::Drawing::Size(263, 28);
			this->FavPlayerDropDownList->TabIndex = 4;
			// 
			// FavPlayerLabel
			// 
			this->FavPlayerLabel->AutoSize = true;
			this->FavPlayerLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FavPlayerLabel->Location = System::Drawing::Point(6, 529);
			this->FavPlayerLabel->Name = L"FavPlayerLabel";
			this->FavPlayerLabel->Size = System::Drawing::Size(330, 20);
			this->FavPlayerLabel->TabIndex = 3;
			this->FavPlayerLabel->Text = L"Favourite Player Of The Whole League\?";
			// 
			// UserViewPlayerDetailPicture
			// 
			this->UserViewPlayerDetailPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserViewPlayerDetailPicture.Image")));
			this->UserViewPlayerDetailPicture->Location = System::Drawing::Point(380, 449);
			this->UserViewPlayerDetailPicture->Name = L"UserViewPlayerDetailPicture";
			this->UserViewPlayerDetailPicture->Size = System::Drawing::Size(44, 27);
			this->UserViewPlayerDetailPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->UserViewPlayerDetailPicture->TabIndex = 2;
			this->UserViewPlayerDetailPicture->TabStop = false;
			this->UserViewPlayerDetailPicture->Visible = false;
			// 
			// UserViewPlayerDetailButton
			// 
			this->UserViewPlayerDetailButton->BackColor = System::Drawing::Color::Silver;
			this->UserViewPlayerDetailButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UserViewPlayerDetailButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserViewPlayerDetailButton->Location = System::Drawing::Point(433, 447);
			this->UserViewPlayerDetailButton->Name = L"UserViewPlayerDetailButton";
			this->UserViewPlayerDetailButton->Size = System::Drawing::Size(200, 35);
			this->UserViewPlayerDetailButton->TabIndex = 1;
			this->UserViewPlayerDetailButton->Text = L"View Player Details";
			this->UserViewPlayerDetailButton->UseVisualStyleBackColor = false;
			this->UserViewPlayerDetailButton->Visible = false;
			this->UserViewPlayerDetailButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::UserViewPlayerDetailButton_Click);
			// 
			// UserPlayerDetailList
			// 
			this->UserPlayerDetailList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserPlayerDetailList->FormattingEnabled = true;
			this->UserPlayerDetailList->ItemHeight = 20;
			this->UserPlayerDetailList->Location = System::Drawing::Point(12, 16);
			this->UserPlayerDetailList->Name = L"UserPlayerDetailList";
			this->UserPlayerDetailList->Size = System::Drawing::Size(968, 404);
			this->UserPlayerDetailList->TabIndex = 0;
			this->UserPlayerDetailList->Visible = false;
			// 
			// UserViewLeagueSchedulePanel
			// 
			this->UserViewLeagueSchedulePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->UserViewLeagueSchedulePanel->Controls->Add(this->UserViewLeagueSchedulePicture);
			this->UserViewLeagueSchedulePanel->Controls->Add(this->UserViewLeagueScheduleButton);
			this->UserViewLeagueSchedulePanel->Controls->Add(this->UserLeagueScheduleList);
			this->UserViewLeagueSchedulePanel->Location = System::Drawing::Point(349, 75);
			this->UserViewLeagueSchedulePanel->Name = L"UserViewLeagueSchedulePanel";
			this->UserViewLeagueSchedulePanel->Size = System::Drawing::Size(1001, 582);
			this->UserViewLeagueSchedulePanel->TabIndex = 7;
			this->UserViewLeagueSchedulePanel->Visible = false;
			// 
			// UserViewLeagueSchedulePicture
			// 
			this->UserViewLeagueSchedulePicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserViewLeagueSchedulePicture.Image")));
			this->UserViewLeagueSchedulePicture->Location = System::Drawing::Point(342, 503);
			this->UserViewLeagueSchedulePicture->Name = L"UserViewLeagueSchedulePicture";
			this->UserViewLeagueSchedulePicture->Size = System::Drawing::Size(55, 28);
			this->UserViewLeagueSchedulePicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->UserViewLeagueSchedulePicture->TabIndex = 2;
			this->UserViewLeagueSchedulePicture->TabStop = false;
			this->UserViewLeagueSchedulePicture->Visible = false;
			// 
			// UserViewLeagueScheduleButton
			// 
			this->UserViewLeagueScheduleButton->BackColor = System::Drawing::Color::Silver;
			this->UserViewLeagueScheduleButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UserViewLeagueScheduleButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserViewLeagueScheduleButton->Location = System::Drawing::Point(410, 502);
			this->UserViewLeagueScheduleButton->Name = L"UserViewLeagueScheduleButton";
			this->UserViewLeagueScheduleButton->Size = System::Drawing::Size(225, 35);
			this->UserViewLeagueScheduleButton->TabIndex = 1;
			this->UserViewLeagueScheduleButton->Text = L"View League Schedule";
			this->UserViewLeagueScheduleButton->UseVisualStyleBackColor = false;
			this->UserViewLeagueScheduleButton->Visible = false;
			this->UserViewLeagueScheduleButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::UserViewLeagueScheduleButton_Click);
			// 
			// UserLeagueScheduleList
			// 
			this->UserLeagueScheduleList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserLeagueScheduleList->FormattingEnabled = true;
			this->UserLeagueScheduleList->ItemHeight = 20;
			this->UserLeagueScheduleList->Location = System::Drawing::Point(10, 10);
			this->UserLeagueScheduleList->Name = L"UserLeagueScheduleList";
			this->UserLeagueScheduleList->Size = System::Drawing::Size(974, 444);
			this->UserLeagueScheduleList->TabIndex = 0;
			this->UserLeagueScheduleList->Visible = false;
			// 
			// UserViewMatchResultPanel
			// 
			this->UserViewMatchResultPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->UserViewMatchResultPanel->Controls->Add(this->UserViewMatchResultPIcture);
			this->UserViewMatchResultPanel->Controls->Add(this->UserViewMatchResultButton);
			this->UserViewMatchResultPanel->Controls->Add(this->UserViewMatchResultList);
			this->UserViewMatchResultPanel->Location = System::Drawing::Point(349, 75);
			this->UserViewMatchResultPanel->Name = L"UserViewMatchResultPanel";
			this->UserViewMatchResultPanel->Size = System::Drawing::Size(1001, 582);
			this->UserViewMatchResultPanel->TabIndex = 8;
			this->UserViewMatchResultPanel->Visible = false;
			// 
			// UserViewMatchResultPIcture
			// 
			this->UserViewMatchResultPIcture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserViewMatchResultPIcture.Image")));
			this->UserViewMatchResultPIcture->Location = System::Drawing::Point(342, 503);
			this->UserViewMatchResultPIcture->Name = L"UserViewMatchResultPIcture";
			this->UserViewMatchResultPIcture->Size = System::Drawing::Size(55, 28);
			this->UserViewMatchResultPIcture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->UserViewMatchResultPIcture->TabIndex = 2;
			this->UserViewMatchResultPIcture->TabStop = false;
			this->UserViewMatchResultPIcture->Visible = false;
			// 
			// UserViewMatchResultButton
			// 
			this->UserViewMatchResultButton->BackColor = System::Drawing::Color::Silver;
			this->UserViewMatchResultButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UserViewMatchResultButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserViewMatchResultButton->Location = System::Drawing::Point(410, 502);
			this->UserViewMatchResultButton->Name = L"UserViewMatchResultButton";
			this->UserViewMatchResultButton->Size = System::Drawing::Size(225, 35);
			this->UserViewMatchResultButton->TabIndex = 1;
			this->UserViewMatchResultButton->Text = L"View Match Result";
			this->UserViewMatchResultButton->UseVisualStyleBackColor = false;
			this->UserViewMatchResultButton->Visible = false;
			this->UserViewMatchResultButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::UserViewMatchResultButton_Click);
			// 
			// UserViewMatchResultList
			// 
			this->UserViewMatchResultList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserViewMatchResultList->FormattingEnabled = true;
			this->UserViewMatchResultList->ItemHeight = 20;
			this->UserViewMatchResultList->Location = System::Drawing::Point(10, 10);
			this->UserViewMatchResultList->Name = L"UserViewMatchResultList";
			this->UserViewMatchResultList->Size = System::Drawing::Size(974, 444);
			this->UserViewMatchResultList->TabIndex = 0;
			this->UserViewMatchResultList->Visible = false;
			// 
			// UserViewLeagueTablePanel
			// 
			this->UserViewLeagueTablePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->UserViewLeagueTablePanel->Controls->Add(this->UserViewLeagueTablePicture);
			this->UserViewLeagueTablePanel->Controls->Add(this->UserViewLeagueTableButton);
			this->UserViewLeagueTablePanel->Controls->Add(this->UserViewLeagueTableList);
			this->UserViewLeagueTablePanel->Location = System::Drawing::Point(349, 75);
			this->UserViewLeagueTablePanel->Name = L"UserViewLeagueTablePanel";
			this->UserViewLeagueTablePanel->Size = System::Drawing::Size(1001, 582);
			this->UserViewLeagueTablePanel->TabIndex = 9;
			this->UserViewLeagueTablePanel->Visible = false;
			// 
			// UserViewLeagueTablePicture
			// 
			this->UserViewLeagueTablePicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserViewLeagueTablePicture.Image")));
			this->UserViewLeagueTablePicture->Location = System::Drawing::Point(342, 503);
			this->UserViewLeagueTablePicture->Name = L"UserViewLeagueTablePicture";
			this->UserViewLeagueTablePicture->Size = System::Drawing::Size(55, 41);
			this->UserViewLeagueTablePicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->UserViewLeagueTablePicture->TabIndex = 2;
			this->UserViewLeagueTablePicture->TabStop = false;
			this->UserViewLeagueTablePicture->Visible = false;
			// 
			// UserViewLeagueTableButton
			// 
			this->UserViewLeagueTableButton->BackColor = System::Drawing::Color::Silver;
			this->UserViewLeagueTableButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UserViewLeagueTableButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserViewLeagueTableButton->Location = System::Drawing::Point(410, 502);
			this->UserViewLeagueTableButton->Name = L"UserViewLeagueTableButton";
			this->UserViewLeagueTableButton->Size = System::Drawing::Size(225, 43);
			this->UserViewLeagueTableButton->TabIndex = 1;
			this->UserViewLeagueTableButton->Text = L"View League Table";
			this->UserViewLeagueTableButton->UseVisualStyleBackColor = false;
			this->UserViewLeagueTableButton->Visible = false;
			this->UserViewLeagueTableButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::UserViewLeagueTableButton_Click);
			// 
			// UserViewLeagueTableList
			// 
			this->UserViewLeagueTableList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserViewLeagueTableList->FormattingEnabled = true;
			this->UserViewLeagueTableList->ItemHeight = 20;
			this->UserViewLeagueTableList->Location = System::Drawing::Point(9, 9);
			this->UserViewLeagueTableList->Name = L"UserViewLeagueTableList";
			this->UserViewLeagueTableList->Size = System::Drawing::Size(974, 444);
			this->UserViewLeagueTableList->TabIndex = 0;
			this->UserViewLeagueTableList->Visible = false;
			// 
			// SettingsPanel
			// 
			this->SettingsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->SettingsPanel->Controls->Add(this->Changepassholder);
			this->SettingsPanel->Controls->Add(this->flowLayoutPanel1);
			this->SettingsPanel->Location = System::Drawing::Point(349, 75);
			this->SettingsPanel->Name = L"SettingsPanel";
			this->SettingsPanel->Size = System::Drawing::Size(1030, 583);
			this->SettingsPanel->TabIndex = 10;
			this->SettingsPanel->Visible = false;
			this->SettingsPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserFunctionForm::SettingsPanel_Paint);
			// 
			// Changepassholder
			// 
			this->Changepassholder->Controls->Add(this->UsernameTextBox);
			this->Changepassholder->Controls->Add(this->SavePasswordButton);
			this->Changepassholder->Controls->Add(this->ShowNewPass);
			this->Changepassholder->Controls->Add(this->UsernameLabel);
			this->Changepassholder->Controls->Add(this->ShowCurrentPass);
			this->Changepassholder->Controls->Add(this->CurrentPassTextBox);
			this->Changepassholder->Controls->Add(this->NewPasswordLabel);
			this->Changepassholder->Controls->Add(this->CurrentPassLabel);
			this->Changepassholder->Controls->Add(this->NewPassTextBox);
			this->Changepassholder->Location = System::Drawing::Point(477, 12);
			this->Changepassholder->Name = L"Changepassholder";
			this->Changepassholder->Size = System::Drawing::Size(550, 240);
			this->Changepassholder->TabIndex = 30;
			this->Changepassholder->Visible = false;
			// 
			// UsernameTextBox
			// 
			this->UsernameTextBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UsernameTextBox->Location = System::Drawing::Point(215, 3);
			this->UsernameTextBox->Name = L"UsernameTextBox";
			this->UsernameTextBox->Size = System::Drawing::Size(167, 27);
			this->UsernameTextBox->TabIndex = 19;
			this->UsernameTextBox->Visible = false;
			// 
			// SavePasswordButton
			// 
			this->SavePasswordButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SavePasswordButton->Location = System::Drawing::Point(182, 167);
			this->SavePasswordButton->Name = L"SavePasswordButton";
			this->SavePasswordButton->Size = System::Drawing::Size(129, 38);
			this->SavePasswordButton->TabIndex = 17;
			this->SavePasswordButton->Text = L"Save";
			this->SavePasswordButton->UseVisualStyleBackColor = true;
			this->SavePasswordButton->Visible = false;
			this->SavePasswordButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::SavePasswordButton_Click);
			// 
			// ShowNewPass
			// 
			this->ShowNewPass->Location = System::Drawing::Point(395, 76);
			this->ShowNewPass->Name = L"ShowNewPass";
			this->ShowNewPass->Size = System::Drawing::Size(120, 24);
			this->ShowNewPass->TabIndex = 25;
			this->ShowNewPass->Text = L"Show Password\?";
			this->ShowNewPass->UseVisualStyleBackColor = true;
			this->ShowNewPass->Visible = false;
			this->ShowNewPass->Click += gcnew System::EventHandler(this, &UserFunctionForm::ShowNewPass_Click);
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameLabel->Location = System::Drawing::Point(66, 6);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(93, 20);
			this->UsernameLabel->TabIndex = 18;
			this->UsernameLabel->Text = L"Username";
			this->UsernameLabel->Visible = false;
			// 
			// ShowCurrentPass
			// 
			this->ShowCurrentPass->Location = System::Drawing::Point(395, 41);
			this->ShowCurrentPass->Name = L"ShowCurrentPass";
			this->ShowCurrentPass->Size = System::Drawing::Size(120, 24);
			this->ShowCurrentPass->TabIndex = 24;
			this->ShowCurrentPass->Text = L"Show Password\?";
			this->ShowCurrentPass->UseVisualStyleBackColor = true;
			this->ShowCurrentPass->Visible = false;
			this->ShowCurrentPass->Click += gcnew System::EventHandler(this, &UserFunctionForm::ShowCurrentPass_Click);
			// 
			// CurrentPassTextBox
			// 
			this->CurrentPassTextBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CurrentPassTextBox->Location = System::Drawing::Point(215, 39);
			this->CurrentPassTextBox->Name = L"CurrentPassTextBox";
			this->CurrentPassTextBox->PasswordChar = '*';
			this->CurrentPassTextBox->Size = System::Drawing::Size(167, 27);
			this->CurrentPassTextBox->TabIndex = 20;
			this->CurrentPassTextBox->Visible = false;
			// 
			// NewPasswordLabel
			// 
			this->NewPasswordLabel->AutoSize = true;
			this->NewPasswordLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NewPasswordLabel->Location = System::Drawing::Point(44, 76);
			this->NewPasswordLabel->Name = L"NewPasswordLabel";
			this->NewPasswordLabel->Size = System::Drawing::Size(131, 20);
			this->NewPasswordLabel->TabIndex = 23;
			this->NewPasswordLabel->Text = L"New Password";
			this->NewPasswordLabel->Visible = false;
			// 
			// CurrentPassLabel
			// 
			this->CurrentPassLabel->AutoSize = true;
			this->CurrentPassLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CurrentPassLabel->Location = System::Drawing::Point(28, 39);
			this->CurrentPassLabel->Name = L"CurrentPassLabel";
			this->CurrentPassLabel->Size = System::Drawing::Size(157, 20);
			this->CurrentPassLabel->TabIndex = 21;
			this->CurrentPassLabel->Text = L"Current Password";
			this->CurrentPassLabel->Visible = false;
			// 
			// NewPassTextBox
			// 
			this->NewPassTextBox->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewPassTextBox->Location = System::Drawing::Point(215, 73);
			this->NewPassTextBox->Name = L"NewPassTextBox";
			this->NewPassTextBox->PasswordChar = '*';
			this->NewPassTextBox->Size = System::Drawing::Size(167, 27);
			this->NewPassTextBox->TabIndex = 22;
			this->NewPassTextBox->Visible = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->panel6);
			this->flowLayoutPanel1->Controls->Add(this->ChangeColorHolder);
			this->flowLayoutPanel1->Controls->Add(this->panel5);
			this->flowLayoutPanel1->Location = System::Drawing::Point(7, 3);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(420, 473);
			this->flowLayoutPanel1->TabIndex = 29;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->pictureBox6);
			this->panel6->Controls->Add(this->ChangePasswordButton);
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(341, 49);
			this->panel6->TabIndex = 30;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(3, 5);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(46, 39);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 28;
			this->pictureBox6->TabStop = false;
			// 
			// ChangePasswordButton
			// 
			this->ChangePasswordButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangePasswordButton->Location = System::Drawing::Point(49, 5);
			this->ChangePasswordButton->Name = L"ChangePasswordButton";
			this->ChangePasswordButton->Size = System::Drawing::Size(267, 38);
			this->ChangePasswordButton->TabIndex = 10;
			this->ChangePasswordButton->Text = L"Change Password\?";
			this->ChangePasswordButton->UseVisualStyleBackColor = true;
			this->ChangePasswordButton->Visible = false;
			this->ChangePasswordButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::ChangePasswordButton_Click);
			// 
			// ChangeColorHolder
			// 
			this->ChangeColorHolder->Controls->Add(this->pictureBox8);
			this->ChangeColorHolder->Controls->Add(this->panel2);
			this->ChangeColorHolder->Controls->Add(this->ChangeEverythingColor);
			this->ChangeColorHolder->Controls->Add(this->panel3);
			this->ChangeColorHolder->Controls->Add(this->panel4);
			this->ChangeColorHolder->Controls->Add(this->panel1);
			this->ChangeColorHolder->Location = System::Drawing::Point(3, 58);
			this->ChangeColorHolder->Name = L"ChangeColorHolder";
			this->ChangeColorHolder->Size = System::Drawing::Size(395, 41);
			this->ChangeColorHolder->TabIndex = 27;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(9, 2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(46, 39);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox8->TabIndex = 30;
			this->pictureBox8->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->ChangeSidePanelTextColor);
			this->panel2->Location = System::Drawing::Point(9, 84);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(360, 45);
			this->panel2->TabIndex = 15;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(19, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(48, 37);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// ChangeSidePanelTextColor
			// 
			this->ChangeSidePanelTextColor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangeSidePanelTextColor->Location = System::Drawing::Point(76, 4);
			this->ChangeSidePanelTextColor->Name = L"ChangeSidePanelTextColor";
			this->ChangeSidePanelTextColor->Size = System::Drawing::Size(270, 38);
			this->ChangeSidePanelTextColor->TabIndex = 15;
			this->ChangeSidePanelTextColor->Text = L"Change Side Panel Text color\?";
			this->ChangeSidePanelTextColor->UseVisualStyleBackColor = true;
			this->ChangeSidePanelTextColor->Visible = false;
			this->ChangeSidePanelTextColor->Click += gcnew System::EventHandler(this, &UserFunctionForm::button1_Click);
			// 
			// ChangeEverythingColor
			// 
			this->ChangeEverythingColor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangeEverythingColor->Location = System::Drawing::Point(57, 5);
			this->ChangeEverythingColor->Name = L"ChangeEverythingColor";
			this->ChangeEverythingColor->Size = System::Drawing::Size(268, 35);
			this->ChangeEverythingColor->TabIndex = 26;
			this->ChangeEverythingColor->Text = L"Change Color\?";
			this->ChangeEverythingColor->UseVisualStyleBackColor = true;
			this->ChangeEverythingColor->Visible = false;
			this->ChangeEverythingColor->Click += gcnew System::EventHandler(this, &UserFunctionForm::ChangeEverythingColor_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->ChangeSideBarColorButton);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Location = System::Drawing::Point(9, 128);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(360, 45);
			this->panel3->TabIndex = 15;
			// 
			// ChangeSideBarColorButton
			// 
			this->ChangeSideBarColorButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangeSideBarColorButton->Location = System::Drawing::Point(75, 5);
			this->ChangeSideBarColorButton->Name = L"ChangeSideBarColorButton";
			this->ChangeSideBarColorButton->Size = System::Drawing::Size(268, 35);
			this->ChangeSideBarColorButton->TabIndex = 12;
			this->ChangeSideBarColorButton->Text = L"Change SideBar Color\?";
			this->ChangeSideBarColorButton->UseVisualStyleBackColor = true;
			this->ChangeSideBarColorButton->Visible = false;
			this->ChangeSideBarColorButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::ChangeSideBarColorButton_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(19, 5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(48, 37);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox5);
			this->panel4->Controls->Add(this->ChangeTopPanelColor);
			this->panel4->Location = System::Drawing::Point(9, 172);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(360, 45);
			this->panel4->TabIndex = 15;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(19, 5);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(49, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// ChangeTopPanelColor
			// 
			this->ChangeTopPanelColor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangeTopPanelColor->Location = System::Drawing::Point(74, 3);
			this->ChangeTopPanelColor->Name = L"ChangeTopPanelColor";
			this->ChangeTopPanelColor->Size = System::Drawing::Size(270, 38);
			this->ChangeTopPanelColor->TabIndex = 14;
			this->ChangeTopPanelColor->Text = L"Change Top Panel Color\?";
			this->ChangeTopPanelColor->UseVisualStyleBackColor = true;
			this->ChangeTopPanelColor->Visible = false;
			this->ChangeTopPanelColor->Click += gcnew System::EventHandler(this, &UserFunctionForm::ChangeTopPanelColor_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->ChangeTopTextColor);
			this->panel1->Location = System::Drawing::Point(9, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 45);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(19, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 35);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// ChangeTopTextColor
			// 
			this->ChangeTopTextColor->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ChangeTopTextColor->Location = System::Drawing::Point(77, 3);
			this->ChangeTopTextColor->Name = L"ChangeTopTextColor";
			this->ChangeTopTextColor->Size = System::Drawing::Size(268, 35);
			this->ChangeTopTextColor->TabIndex = 13;
			this->ChangeTopTextColor->Text = L"Change Welcome Text Color\?";
			this->ChangeTopTextColor->UseVisualStyleBackColor = true;
			this->ChangeTopTextColor->Visible = false;
			this->ChangeTopTextColor->Click += gcnew System::EventHandler(this, &UserFunctionForm::ChangeTopTextColor_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->SwitchLang);
			this->panel5->Controls->Add(this->pictureBox7);
			this->panel5->Location = System::Drawing::Point(3, 105);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(320, 47);
			this->panel5->TabIndex = 29;
			// 
			// SwitchLang
			// 
			this->SwitchLang->AllowDrop = true;
			this->SwitchLang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SwitchLang->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SwitchLang->FormattingEnabled = true;
			this->SwitchLang->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"English", L"Arabic", L"German", L"French" });
			this->SwitchLang->Location = System::Drawing::Point(52, 10);
			this->SwitchLang->Name = L"SwitchLang";
			this->SwitchLang->Size = System::Drawing::Size(263, 28);
			this->SwitchLang->TabIndex = 16;
			this->SwitchLang->Text = L"English";
			this->SwitchLang->Visible = false;
			this->SwitchLang->SelectedIndexChanged += gcnew System::EventHandler(this, &UserFunctionForm::SwitchLang_SelectedIndexChanged);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(2, 5);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(46, 39);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox7->TabIndex = 29;
			this->pictureBox7->TabStop = false;
			// 
			// FavouritePanel
			// 
			this->FavouritePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->FavouritePanel->Controls->Add(this->FavTeamPlayerButton);
			this->FavouritePanel->Controls->Add(this->FavTeamPlayerList);
			this->FavouritePanel->Controls->Add(this->FavPlayerOfTeam);
			this->FavouritePanel->Controls->Add(this->ShowFavTeam);
			this->FavouritePanel->Controls->Add(this->ShowFavPlayer);
			this->FavouritePanel->Controls->Add(this->FavPlayerText);
			this->FavouritePanel->Controls->Add(this->FavTeamText);
			this->FavouritePanel->Controls->Add(this->FavPlayerList);
			this->FavouritePanel->Controls->Add(this->FavTeamList);
			this->FavouritePanel->Location = System::Drawing::Point(1008, 51);
			this->FavouritePanel->Name = L"FavouritePanel";
			this->FavouritePanel->Size = System::Drawing::Size(1030, 583);
			this->FavouritePanel->TabIndex = 17;
			this->FavouritePanel->Visible = false;
			// 
			// FavTeamPlayerButton
			// 
			this->FavTeamPlayerButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FavTeamPlayerButton->Location = System::Drawing::Point(359, 497);
			this->FavTeamPlayerButton->Name = L"FavTeamPlayerButton";
			this->FavTeamPlayerButton->Size = System::Drawing::Size(292, 39);
			this->FavTeamPlayerButton->TabIndex = 9;
			this->FavTeamPlayerButton->Text = L"Show Favourite Team Player";
			this->FavTeamPlayerButton->UseVisualStyleBackColor = true;
			this->FavTeamPlayerButton->Visible = false;
			this->FavTeamPlayerButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::FavTeamPlayerButton_Click_1);
			// 
			// FavTeamPlayerList
			// 
			this->FavTeamPlayerList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FavTeamPlayerList->FormattingEnabled = true;
			this->FavTeamPlayerList->ItemHeight = 20;
			this->FavTeamPlayerList->Location = System::Drawing::Point(334, 347);
			this->FavTeamPlayerList->Name = L"FavTeamPlayerList";
			this->FavTeamPlayerList->Size = System::Drawing::Size(342, 144);
			this->FavTeamPlayerList->TabIndex = 8;
			this->FavTeamPlayerList->Visible = false;
			// 
			// FavPlayerOfTeam
			// 
			this->FavPlayerOfTeam->AutoSize = true;
			this->FavPlayerOfTeam->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FavPlayerOfTeam->Location = System::Drawing::Point(392, 319);
			this->FavPlayerOfTeam->Name = L"FavPlayerOfTeam";
			this->FavPlayerOfTeam->Size = System::Drawing::Size(198, 20);
			this->FavPlayerOfTeam->TabIndex = 7;
			this->FavPlayerOfTeam->Text = L"Team\'s Favouite Player";
			this->FavPlayerOfTeam->Visible = false;
			// 
			// ShowFavTeam
			// 
			this->ShowFavTeam->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShowFavTeam->Location = System::Drawing::Point(63, 294);
			this->ShowFavTeam->Name = L"ShowFavTeam";
			this->ShowFavTeam->Size = System::Drawing::Size(264, 32);
			this->ShowFavTeam->TabIndex = 6;
			this->ShowFavTeam->Text = L"Show Favourite Team";
			this->ShowFavTeam->UseVisualStyleBackColor = true;
			this->ShowFavTeam->Visible = false;
			this->ShowFavTeam->Click += gcnew System::EventHandler(this, &UserFunctionForm::ShowFavTeam_Click_1);
			// 
			// ShowFavPlayer
			// 
			this->ShowFavPlayer->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShowFavPlayer->Location = System::Drawing::Point(653, 291);
			this->ShowFavPlayer->Name = L"ShowFavPlayer";
			this->ShowFavPlayer->Size = System::Drawing::Size(264, 32);
			this->ShowFavPlayer->TabIndex = 5;
			this->ShowFavPlayer->Text = L"Show Favourite Player";
			this->ShowFavPlayer->UseVisualStyleBackColor = true;
			this->ShowFavPlayer->Visible = false;
			this->ShowFavPlayer->Click += gcnew System::EventHandler(this, &UserFunctionForm::ShowFavPlayer_Click_1);
			// 
			// FavPlayerText
			// 
			this->FavPlayerText->AutoSize = true;
			this->FavPlayerText->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FavPlayerText->Location = System::Drawing::Point(632, 6);
			this->FavPlayerText->Name = L"FavPlayerText";
			this->FavPlayerText->Size = System::Drawing::Size(285, 20);
			this->FavPlayerText->TabIndex = 3;
			this->FavPlayerText->Text = L"Favourite Player Of Whole League";
			this->FavPlayerText->Visible = false;
			// 
			// FavTeamText
			// 
			this->FavTeamText->AutoSize = true;
			this->FavTeamText->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FavTeamText->Location = System::Drawing::Point(113, 3);
			this->FavTeamText->Name = L"FavTeamText";
			this->FavTeamText->Size = System::Drawing::Size(136, 20);
			this->FavTeamText->TabIndex = 2;
			this->FavTeamText->Text = L"Favourite Team";
			this->FavTeamText->Visible = false;
			// 
			// FavPlayerList
			// 
			this->FavPlayerList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FavPlayerList->FormattingEnabled = true;
			this->FavPlayerList->ItemHeight = 20;
			this->FavPlayerList->Location = System::Drawing::Point(612, 35);
			this->FavPlayerList->Name = L"FavPlayerList";
			this->FavPlayerList->Size = System::Drawing::Size(336, 244);
			this->FavPlayerList->TabIndex = 1;
			this->FavPlayerList->Visible = false;
			// 
			// FavTeamList
			// 
			this->FavTeamList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FavTeamList->FormattingEnabled = true;
			this->FavTeamList->ItemHeight = 20;
			this->FavTeamList->Location = System::Drawing::Point(32, 35);
			this->FavTeamList->Name = L"FavTeamList";
			this->FavTeamList->Size = System::Drawing::Size(336, 244);
			this->FavTeamList->TabIndex = 0;
			this->FavTeamList->Visible = false;
			// 
			// UserTeamDetailsPanel
			// 
			this->UserTeamDetailsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->UserTeamDetailsPanel->Controls->Add(this->ViewSpecificTeamButton);
			this->UserTeamDetailsPanel->Controls->Add(this->ViewSpecificTeamText);
			this->UserTeamDetailsPanel->Controls->Add(this->ViewSpecificTeamDropDownList);
			this->UserTeamDetailsPanel->Controls->Add(this->FavTeamPlayerButtonChoose);
			this->UserTeamDetailsPanel->Controls->Add(this->FavTeamPlayerDropDownList);
			this->UserTeamDetailsPanel->Controls->Add(this->FavouriteTeamPlayerLabel);
			this->UserTeamDetailsPanel->Controls->Add(this->FavTeamButtonChoose);
			this->UserTeamDetailsPanel->Controls->Add(this->FavTeamLabel);
			this->UserTeamDetailsPanel->Controls->Add(this->FavTeamDropDownList);
			this->UserTeamDetailsPanel->Controls->Add(this->UserTeamDetailPicture);
			this->UserTeamDetailsPanel->Controls->Add(this->UserViewTeamDetailButton);
			this->UserTeamDetailsPanel->Controls->Add(this->UserTeamDetailList);
			this->UserTeamDetailsPanel->Location = System::Drawing::Point(349, 75);
			this->UserTeamDetailsPanel->Name = L"UserTeamDetailsPanel";
			this->UserTeamDetailsPanel->Size = System::Drawing::Size(997, 588);
			this->UserTeamDetailsPanel->TabIndex = 5;
			this->UserTeamDetailsPanel->Visible = false;
			// 
			// ViewSpecificTeamButton
			// 
			this->ViewSpecificTeamButton->BackColor = System::Drawing::Color::Silver;
			this->ViewSpecificTeamButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewSpecificTeamButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewSpecificTeamButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ViewSpecificTeamButton->Location = System::Drawing::Point(651, 26);
			this->ViewSpecificTeamButton->Name = L"ViewSpecificTeamButton";
			this->ViewSpecificTeamButton->Size = System::Drawing::Size(145, 33);
			this->ViewSpecificTeamButton->TabIndex = 11;
			this->ViewSpecificTeamButton->Text = L"Choose!";
			this->ViewSpecificTeamButton->UseVisualStyleBackColor = false;
			this->ViewSpecificTeamButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::ViewSpecificTeamButton_Click);
			// 
			// ViewSpecificTeamText
			// 
			this->ViewSpecificTeamText->AutoSize = true;
			this->ViewSpecificTeamText->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewSpecificTeamText->Location = System::Drawing::Point(194, 30);
			this->ViewSpecificTeamText->Name = L"ViewSpecificTeamText";
			this->ViewSpecificTeamText->Size = System::Drawing::Size(198, 20);
			this->ViewSpecificTeamText->TabIndex = 10;
			this->ViewSpecificTeamText->Text = L"View A Specific Team\?";
			// 
			// ViewSpecificTeamDropDownList
			// 
			this->ViewSpecificTeamDropDownList->BackColor = System::Drawing::Color::White;
			this->ViewSpecificTeamDropDownList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ViewSpecificTeamDropDownList->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ViewSpecificTeamDropDownList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewSpecificTeamDropDownList->FormattingEnabled = true;
			this->ViewSpecificTeamDropDownList->Location = System::Drawing::Point(410, 26);
			this->ViewSpecificTeamDropDownList->Name = L"ViewSpecificTeamDropDownList";
			this->ViewSpecificTeamDropDownList->Size = System::Drawing::Size(209, 28);
			this->ViewSpecificTeamDropDownList->TabIndex = 9;
			// 
			// FavTeamPlayerButtonChoose
			// 
			this->FavTeamPlayerButtonChoose->BackColor = System::Drawing::Color::Silver;
			this->FavTeamPlayerButtonChoose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FavTeamPlayerButtonChoose->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FavTeamPlayerButtonChoose->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FavTeamPlayerButtonChoose->Location = System::Drawing::Point(567, 550);
			this->FavTeamPlayerButtonChoose->Name = L"FavTeamPlayerButtonChoose";
			this->FavTeamPlayerButtonChoose->Size = System::Drawing::Size(145, 33);
			this->FavTeamPlayerButtonChoose->TabIndex = 8;
			this->FavTeamPlayerButtonChoose->Text = L"Choose!";
			this->FavTeamPlayerButtonChoose->UseVisualStyleBackColor = false;
			this->FavTeamPlayerButtonChoose->Click += gcnew System::EventHandler(this, &UserFunctionForm::FavTeamPlayerButtonChoose_Click);
			// 
			// FavTeamPlayerDropDownList
			// 
			this->FavTeamPlayerDropDownList->BackColor = System::Drawing::Color::White;
			this->FavTeamPlayerDropDownList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->FavTeamPlayerDropDownList->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FavTeamPlayerDropDownList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FavTeamPlayerDropDownList->FormattingEnabled = true;
			this->FavTeamPlayerDropDownList->Location = System::Drawing::Point(352, 551);
			this->FavTeamPlayerDropDownList->Name = L"FavTeamPlayerDropDownList";
			this->FavTeamPlayerDropDownList->Size = System::Drawing::Size(209, 28);
			this->FavTeamPlayerDropDownList->TabIndex = 7;
			// 
			// FavouriteTeamPlayerLabel
			// 
			this->FavouriteTeamPlayerLabel->AutoSize = true;
			this->FavouriteTeamPlayerLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FavouriteTeamPlayerLabel->Location = System::Drawing::Point(3, 556);
			this->FavouriteTeamPlayerLabel->Name = L"FavouriteTeamPlayerLabel";
			this->FavouriteTeamPlayerLabel->Size = System::Drawing::Size(323, 20);
			this->FavouriteTeamPlayerLabel->TabIndex = 6;
			this->FavouriteTeamPlayerLabel->Text = L"Favourite Player Of Your Chosen Team";
			// 
			// FavTeamButtonChoose
			// 
			this->FavTeamButtonChoose->BackColor = System::Drawing::Color::Silver;
			this->FavTeamButtonChoose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FavTeamButtonChoose->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FavTeamButtonChoose->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FavTeamButtonChoose->Location = System::Drawing::Point(567, 505);
			this->FavTeamButtonChoose->Name = L"FavTeamButtonChoose";
			this->FavTeamButtonChoose->Size = System::Drawing::Size(145, 33);
			this->FavTeamButtonChoose->TabIndex = 5;
			this->FavTeamButtonChoose->Text = L"Choose!";
			this->FavTeamButtonChoose->UseVisualStyleBackColor = false;
			this->FavTeamButtonChoose->Click += gcnew System::EventHandler(this, &UserFunctionForm::FavTeamButtonChoose_Click);
			// 
			// FavTeamLabel
			// 
			this->FavTeamLabel->AutoSize = true;
			this->FavTeamLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FavTeamLabel->Location = System::Drawing::Point(4, 513);
			this->FavTeamLabel->Name = L"FavTeamLabel";
			this->FavTeamLabel->Size = System::Drawing::Size(208, 20);
			this->FavTeamLabel->TabIndex = 4;
			this->FavTeamLabel->Text = L"Have A Favourite Team\?";
			// 
			// FavTeamDropDownList
			// 
			this->FavTeamDropDownList->BackColor = System::Drawing::Color::White;
			this->FavTeamDropDownList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->FavTeamDropDownList->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FavTeamDropDownList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FavTeamDropDownList->FormattingEnabled = true;
			this->FavTeamDropDownList->Location = System::Drawing::Point(352, 505);
			this->FavTeamDropDownList->Name = L"FavTeamDropDownList";
			this->FavTeamDropDownList->Size = System::Drawing::Size(209, 28);
			this->FavTeamDropDownList->TabIndex = 3;
			this->FavTeamDropDownList->SelectedIndexChanged += gcnew System::EventHandler(this, &UserFunctionForm::FavTeamDropDownList_SelectedIndexChanged);
			// 
			// UserTeamDetailPicture
			// 
			this->UserTeamDetailPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserTeamDetailPicture.Image")));
			this->UserTeamDetailPicture->Location = System::Drawing::Point(376, 443);
			this->UserTeamDetailPicture->Name = L"UserTeamDetailPicture";
			this->UserTeamDetailPicture->Size = System::Drawing::Size(44, 33);
			this->UserTeamDetailPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->UserTeamDetailPicture->TabIndex = 2;
			this->UserTeamDetailPicture->TabStop = false;
			this->UserTeamDetailPicture->Visible = false;
			// 
			// UserViewTeamDetailButton
			// 
			this->UserViewTeamDetailButton->BackColor = System::Drawing::Color::Silver;
			this->UserViewTeamDetailButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UserViewTeamDetailButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserViewTeamDetailButton->Location = System::Drawing::Point(429, 441);
			this->UserViewTeamDetailButton->Name = L"UserViewTeamDetailButton";
			this->UserViewTeamDetailButton->Size = System::Drawing::Size(190, 35);
			this->UserViewTeamDetailButton->TabIndex = 1;
			this->UserViewTeamDetailButton->Text = L"View Team Details";
			this->UserViewTeamDetailButton->UseVisualStyleBackColor = false;
			this->UserViewTeamDetailButton->Visible = false;
			this->UserViewTeamDetailButton->Click += gcnew System::EventHandler(this, &UserFunctionForm::UserViewTeamDetailButton_Click);
			// 
			// UserTeamDetailList
			// 
			this->UserTeamDetailList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserTeamDetailList->FormattingEnabled = true;
			this->UserTeamDetailList->ItemHeight = 20;
			this->UserTeamDetailList->Location = System::Drawing::Point(12, 83);
			this->UserTeamDetailList->Name = L"UserTeamDetailList";
			this->UserTeamDetailList->Size = System::Drawing::Size(968, 344);
			this->UserTeamDetailList->TabIndex = 0;
			this->UserTeamDetailList->Visible = false;
			// 
			// ChangeColorTimer
			// 
			this->ChangeColorTimer->Interval = 10;
			this->ChangeColorTimer->Tick += gcnew System::EventHandler(this, &UserFunctionForm::ChangeColorTimer_Tick);
			// 
			// UserFunctionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1276, 710);
			this->Controls->Add(this->FavouritePanel);
			this->Controls->Add(this->SettingsPanel);
			this->Controls->Add(this->UserViewLeagueTablePanel);
			this->Controls->Add(this->SideBarContainer);
			this->Controls->Add(this->TextTopPanel);
			this->Controls->Add(this->UserTeamDetailsPanel);
			this->Controls->Add(this->UserViewPlayerDetailPanel);
			this->Controls->Add(this->UserViewLeagueSchedulePanel);
			this->Controls->Add(this->UserViewMatchResultPanel);
			this->Controls->Add(this->UserAboutPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UserFunctionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserFunctionForm";
			this->Load += gcnew System::EventHandler(this, &UserFunctionForm::UserFunctionForm_Load);
			this->TextTopPanel->ResumeLayout(false);
			this->TextTopPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->SideBarContainer->ResumeLayout(false);
			this->UserFunctionPanel->ResumeLayout(false);
			this->ViewLeagueTablePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewLeagueTablePic))->EndInit();
			this->MatchResultSidePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewMatchResultPic))->EndInit();
			this->PlayerDetailsSidePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewPlayerDetailsPic))->EndInit();
			this->LeagueScheduleSidePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewLeagueSchedulePic))->EndInit();
			this->TeamDetailsSidePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewTeamDetailsPic))->EndInit();
			this->UserFuncSidePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserFuncPicBox))->EndInit();
			this->AboutSidePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AboutPicBox))->EndInit();
			this->SettingsSidePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SettingsPicBox))->EndInit();
			this->SideFavouritePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FavouritePic))->EndInit();
			this->panel7->ResumeLayout(false);
			this->LogoutPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoutPicBox))->EndInit();
			this->UserAboutPanel->ResumeLayout(false);
			this->UserAboutPanel->PerformLayout();
			this->UserViewPlayerDetailPanel->ResumeLayout(false);
			this->UserViewPlayerDetailPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserViewPlayerDetailPicture))->EndInit();
			this->UserViewLeagueSchedulePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserViewLeagueSchedulePicture))->EndInit();
			this->UserViewMatchResultPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserViewMatchResultPIcture))->EndInit();
			this->UserViewLeagueTablePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserViewLeagueTablePicture))->EndInit();
			this->SettingsPanel->ResumeLayout(false);
			this->Changepassholder->ResumeLayout(false);
			this->Changepassholder->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ChangeColorHolder->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->FavouritePanel->ResumeLayout(false);
			this->FavouritePanel->PerformLayout();
			this->UserTeamDetailsPanel->ResumeLayout(false);
			this->UserTeamDetailsPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserTeamDetailPicture))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool SidebarExpand = true;
		bool MenuExpand = false;
		bool UserMExpand = false;
		bool hasFavTeam = false;
		bool hasFavPlayer = false;
		bool hasFavTeamPlayer = false;
		bool ChangeColorExpand = false;
	private: System::Void SideBarContainer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void SideBarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (SidebarExpand) {
			SideBarContainer->Width -= 5;
			if (SideBarContainer->Width <= 45) {
				SidebarExpand = false;
				SideBarTimer->Stop();
			}
		}
		else {
			SideBarContainer->Width += 5;
			if (SideBarContainer->Width >= 260) {
				SidebarExpand = true;
				SideBarTimer->Stop();
			}
		}
		UserAboutPanel->Left = SideBarContainer->Width + 5;
		UserTeamDetailsPanel->Left = SideBarContainer->Width + 5;
		UserViewPlayerDetailPanel->Left = SideBarContainer->Width + 5;
		UserViewLeagueSchedulePanel->Left = SideBarContainer->Width + 5;
		UserViewMatchResultPanel->Left = SideBarContainer->Width + 5;
		UserViewLeagueTablePanel->Left = SideBarContainer->Width + 5;
		SettingsPanel->Left = SideBarContainer->Width + 5;
		FavouritePanel->Left = SideBarContainer->Width + 5;
	}
		   bool lang = true;
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		SideBarTimer->Start();
		if (lang == true) {
			SwitchLang->Text = "English";
			lang = false;
		}
	} 
private: System::Void DashboardButton_Click(System::Object^ sender, System::EventArgs^ e) {
		DashBoardTransition->Start();
		if (lang) {
			SwitchLang->Text = "English";
			lang = false;
		}
}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!UserMExpand) {
			UserFunctionPanel->Height += 5;
			if (UserFunctionPanel->Height >= 240) {
				DashBoardTransition->Stop();
				UserMExpand = true;
			}
		}
		else {
			UserFunctionPanel->Height -= 5;
			if (UserFunctionPanel->Height <= 42) {
				DashBoardTransition->Stop();
				UserMExpand = false;

			}
		}
	}
private: System::Void AboutButoon_Click(System::Object^ sender, System::EventArgs^ e) {
	UserAboutPanel->Visible = true;
	UserAboutTextBox->Visible = true;
	UserAboutTextBox->Enabled = false;
	UserTeamDetailList->Visible = false;
	UserTeamDetailsPanel->Visible = false;
	UserViewTeamDetailButton->Visible = false;
	UserTeamDetailPicture->Visible = false;
	UserViewPlayerDetailPanel->Visible = false;
	UserViewPlayerDetailButton->Visible = false;
	UserViewPlayerDetailPicture->Visible = false;
	UserPlayerDetailList->Visible = false;
	UserViewLeagueSchedulePanel->Visible = false;
	UserLeagueScheduleList->Visible = false;
	UserViewLeagueSchedulePicture->Visible = false;
	UserViewLeagueScheduleButton->Visible = false;
	UserViewMatchResultList->Visible = false;
	UserViewMatchResultButton->Visible = false;
	UserViewMatchResultPanel->Visible = false;
	UserViewMatchResultPIcture->Visible = false;
	UserViewLeagueTableList->Visible = false;
	UserViewLeagueTableButton->Visible = false;
	UserViewLeagueTablePanel->Visible = false;
	UserViewLeagueTablePicture->Visible = false;
	SettingsPanel->Visible = false;
	FavTeamList->Visible = false;
	FavPlayerList->Visible = false;
	ShowFavPlayer->Visible = false;
	ShowFavTeam->Visible = false;
	FavTeamText->Visible = false;
	FavPlayerText->Visible = false;
	FavPlayerOfTeam->Visible = false;
	FavTeamPlayerList->Visible = false;
	FavTeamPlayerButton->Visible = false;
	ViewSpecificTeamText->Visible = false;
	ViewSpecificTeamButton->Visible = false;
	ViewSpecificTeamDropDownList->Visible = false;
	ChangePasswordButton->Visible = false;
	ChangeSideBarColorButton->Visible = false;
	FavouritePanel->Visible = false;
	UsernameLabel->Visible = false;
	CurrentPassLabel->Visible = false;
	NewPasswordLabel->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
	ChangeEverythingColor->Visible = false;
}
private: System::Void LogoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void UserTeamDetailsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	UserAboutPanel->Visible = false;
	UserAboutTextBox->Visible = false;
	UserTeamDetailList->Visible = true;
	ViewSpecificTeamText->Visible = true;
	ViewSpecificTeamButton->Visible = true;
	ViewSpecificTeamDropDownList->Visible = true;
	UserTeamDetailsPanel->Visible = true;
	UserViewTeamDetailButton->Visible = true;
	UserTeamDetailPicture->Visible = true;
	UserViewPlayerDetailPanel->Visible = false;
	UserViewPlayerDetailButton->Visible = false;
	UserViewPlayerDetailPicture->Visible = false;
	UserPlayerDetailList->Visible = false;
	UserViewLeagueSchedulePanel->Visible = false;
	UserLeagueScheduleList->Visible = false;
	UserViewLeagueSchedulePicture->Visible = false;
	UserViewLeagueScheduleButton->Visible = false;
	UserViewMatchResultList->Visible = false;
	UserViewMatchResultButton->Visible = false;
	UserViewMatchResultPanel->Visible = false;
	UserViewMatchResultPIcture->Visible = false;
	UserViewLeagueTableList->Visible = false;
	UserViewLeagueTableButton->Visible = false;
	UserViewLeagueTablePanel->Visible = false;
	UserViewLeagueTablePicture->Visible = false;
	SettingsPanel->Visible = false;
	FavTeamList->Visible = false;
	FavPlayerList->Visible = false;
	ShowFavPlayer->Visible = false;
	ShowFavTeam->Visible = false;
	FavTeamText->Visible = false;
	FavPlayerText->Visible = false;
	FavPlayerOfTeam->Visible = false;
	FavTeamPlayerList->Visible = false;
	FavTeamPlayerButton->Visible = false;
	ChangePasswordButton->Visible = false;
	ChangeSideBarColorButton->Visible = false;
	FavouritePanel->Visible = false;
	UsernameLabel->Visible = false;
	CurrentPassLabel->Visible = false;
	NewPasswordLabel->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
	ChangeEverythingColor->Visible = false;
}
private: System::Void UserViewTeamDetailButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (SwitchLang->Text == "English") {
		MessageBox::Show("The Team Details Have Been Successfully Added.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserTeamDetail();
	}
    else if (SwitchLang->Text == "German") {
		MessageBox::Show("Die Teamdetails wurden erfolgreich hinzugefügt.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserTeamDetail();
	}
	else if (SwitchLang->Text == "Arabic") {
		MessageBox::Show(gcnew String(L"لقد تمت إضافة تفاصيل الفريق بنجاح."), gcnew String(L"نجاح"), MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserTeamDetail();
	}
	else if (SwitchLang->Text == "French") {
		MessageBox::Show("Les détails de l'équipe ont été ajoutés avec succès.", "succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserTeamDetail();
	}
}
private: System::Void PlayerDetailsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	UserViewPlayerDetailPanel->Visible = true;
	UserViewPlayerDetailButton->Visible = true;
	UserViewPlayerDetailPicture->Visible = true;
	UserPlayerDetailList->Visible = true;
	UserAboutPanel->Visible = false;
	UserAboutTextBox->Visible = false;
	UserTeamDetailList->Visible = false;
	UserTeamDetailsPanel->Visible = false;
	UserViewTeamDetailButton->Visible = false;
	UserTeamDetailPicture->Visible = false;
	UserViewLeagueSchedulePanel->Visible = false;
	UserLeagueScheduleList->Visible = false;
	UserViewLeagueSchedulePicture->Visible = false;
	UserViewLeagueScheduleButton->Visible = false;
	UserViewMatchResultList->Visible = false;
	UserViewMatchResultButton->Visible = false;
	UserViewMatchResultPanel->Visible = false;
	UserViewMatchResultPIcture->Visible = false;
	UserViewLeagueTableList->Visible = false;
	UserViewLeagueTableButton->Visible = false;
	UserViewLeagueTablePanel->Visible = false;
	UserViewLeagueTablePicture->Visible = false;
	SettingsPanel->Visible = false;
	FavTeamList->Visible = false;
	FavPlayerList->Visible = false;
	ShowFavPlayer->Visible = false;
	ShowFavTeam->Visible = false;
	FavTeamText->Visible = false;
	FavPlayerText->Visible = false;
	FavPlayerOfTeam->Visible = false;
	FavTeamPlayerList->Visible = false;
	FavTeamPlayerButton->Visible = false;
	ViewSpecificTeamText->Visible = false;
	ViewSpecificTeamButton->Visible = false;
	ViewSpecificTeamDropDownList->Visible = false;
	ChangePasswordButton->Visible = false;
	ChangeSideBarColorButton->Visible = false;
	FavouritePanel->Visible = false;
	UsernameLabel->Visible = false;
	CurrentPassLabel->Visible = false;
	NewPasswordLabel->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
	ChangeEverythingColor->Visible = false;
}
private: System::Void UserViewPlayerDetailButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (SwitchLang->Text == "English") {
		MessageBox::Show("The Player Details Have Been Successfully Added.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserPlayerDetail();
	}
	else if (SwitchLang->Text == "German") {
		MessageBox::Show("Die Spielerdetails wurden erfolgreich hinzugefügt.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserPlayerDetail();
	}
	else if (SwitchLang->Text == "Arabic") {
		MessageBox::Show(L"تمت إضافة تفاصيل اللاعب بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserPlayerDetail();
	}
	else if (SwitchLang->Text == "French") {
		MessageBox::Show("Les détails du joueur ont été ajoutés avec succès.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserPlayerDetail();
	}
}
private: System::Void UserFunctionForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ADDTEAM();
	ADDPLAYER();
	USERGENERATESCHEDULE();
	ADDMATCHRESULT();
}
private: System::Void LeagueScheduleButton_Click(System::Object^ sender, System::EventArgs^ e) {
	UserViewLeagueSchedulePanel->Visible = true;
	UserLeagueScheduleList->Visible = true;
	UserViewLeagueSchedulePicture->Visible = true;
	UserViewLeagueScheduleButton->Visible = true;
	UserViewPlayerDetailPanel->Visible = false;
	UserViewPlayerDetailButton->Visible = false;
	UserViewPlayerDetailPicture->Visible = false;
	UserPlayerDetailList->Visible = false;
	UserAboutPanel->Visible = false;
	UserAboutTextBox->Visible = false;
	UserTeamDetailList->Visible = false;
	UserTeamDetailsPanel->Visible = false;
	UserViewTeamDetailButton->Visible = false;
	UserTeamDetailPicture->Visible = false;
	UserViewMatchResultList->Visible = false;
	UserViewMatchResultButton->Visible = false;
	UserViewMatchResultPanel->Visible = false;
	UserViewMatchResultPIcture->Visible = false;
	UserViewLeagueTableList->Visible = false;
	UserViewLeagueTableButton->Visible = false;
	UserViewLeagueTablePanel->Visible = false;
	UserViewLeagueTablePicture->Visible = false;
	SettingsPanel->Visible = false;
	FavTeamList->Visible = false;
	FavPlayerList->Visible = false;
	ShowFavPlayer->Visible = false;
	ShowFavTeam->Visible = false;
	FavTeamText->Visible = false;
	FavPlayerText->Visible = false;
	FavPlayerOfTeam->Visible = false;
	FavTeamPlayerList->Visible = false;
	FavTeamPlayerButton->Visible = false;
	ViewSpecificTeamText->Visible = false;
	ViewSpecificTeamButton->Visible = false;
	ViewSpecificTeamDropDownList->Visible = false;
	ChangePasswordButton->Visible = false;
	ChangeSideBarColorButton->Visible = false;
	FavouritePanel->Visible = false;
	UsernameLabel->Visible = false;
	CurrentPassLabel->Visible = false;
	NewPasswordLabel->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
	ChangeEverythingColor->Visible = false;
}

private: System::Void UserViewLeagueScheduleButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (SwitchLang->Text == "English") {
		MessageBox::Show("League Schedule Details Have Been Successfully Added.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserLeagueSchedule();
	}
	    else if (SwitchLang->Text == "German") {
		MessageBox::Show("Details zum Ligaplan wurden erfolgreich hinzugefügt.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserLeagueSchedule();
		}
		else if (SwitchLang->Text == "Arabic") {
		MessageBox::Show(L"تمت إضافة تفاصيل جدول الدوري بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserLeagueSchedule();
		}
		else if (SwitchLang->Text == "French") {
		MessageBox::Show("Les détails du calendrier de la ligue ont été ajoutés avec succès.", "succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserLeagueSchedule();
		}
}
private: System::Void UserViewMatchResultButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (SwitchLang->Text == "English") {
		MessageBox::Show("League Schedule Details Have Been Successfully Added.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserMatchResult();
	}
	    else if (SwitchLang->Text == "German") {
		MessageBox::Show("Details zum Ligaplan wurden erfolgreich hinzugefügt.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserMatchResult();
		}
		else if (SwitchLang->Text == "Arabic") {
		MessageBox::Show(L"تمت إضافة تفاصيل جدول الدوري بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserMatchResult();
		}
		else if (SwitchLang->Text == "French") {
		MessageBox::Show("Les détails du calendrier de la ligue ont été ajoutés avec succès.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserMatchResult();
		}
}
private: System::Void Match_ResultButton_Click(System::Object^ sender, System::EventArgs^ e) {
	UserViewMatchResultList->Visible = true;
	UserViewMatchResultButton->Visible = true;
	UserViewMatchResultPanel->Visible = true;
	UserViewMatchResultPIcture->Visible = true;
	UserViewLeagueSchedulePanel->Visible = false;
	UserLeagueScheduleList->Visible = false;
	UserViewLeagueSchedulePicture->Visible = false;
	UserViewLeagueScheduleButton->Visible = false;
	UserViewPlayerDetailPanel->Visible = false;
	UserViewPlayerDetailButton->Visible = false;
	UserViewPlayerDetailPicture->Visible = false;
	UserPlayerDetailList->Visible = false;
	UserAboutPanel->Visible = false;
	UserAboutTextBox->Visible = false;
	UserTeamDetailList->Visible = false;
	UserTeamDetailsPanel->Visible = false;
	UserViewTeamDetailButton->Visible = false;
	UserTeamDetailPicture->Visible = false;
	UserViewLeagueTableList->Visible = false;
	UserViewLeagueTableButton->Visible = false;
	UserViewLeagueTablePanel->Visible = false;
	UserViewLeagueTablePicture->Visible = false;
	SettingsPanel->Visible = false;
	FavTeamList->Visible = false;
	FavPlayerList->Visible = false;
	ShowFavPlayer->Visible = false;
	ShowFavTeam->Visible = false;
	FavTeamText->Visible = false;
	FavPlayerText->Visible = false;
	FavPlayerOfTeam->Visible = false;
	FavTeamPlayerList->Visible = false;
	FavTeamPlayerButton->Visible = false;
	ViewSpecificTeamText->Visible = false;
	ViewSpecificTeamButton->Visible = false;
	ViewSpecificTeamDropDownList->Visible = false;
	ChangePasswordButton->Visible = false;
	ChangeSideBarColorButton->Visible = false;
	FavouritePanel->Visible = false;
	UsernameLabel->Visible = false;
	CurrentPassLabel->Visible = false;
	NewPasswordLabel->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
	ChangeEverythingColor->Visible = false;
}
private: System::Void LeagueTableButton_Click(System::Object^ sender, System::EventArgs^ e) {
	UserViewLeagueTableList->Visible = true;
	UserViewLeagueTableButton->Visible = true;
	UserViewLeagueTablePanel->Visible = true;
	UserViewLeagueTablePicture->Visible = true;
	UserViewMatchResultList->Visible = false;
	UserViewMatchResultButton->Visible = false;
	UserViewMatchResultPanel->Visible = false;
	UserViewMatchResultPIcture->Visible = false;
	UserViewLeagueSchedulePanel->Visible = false;
	UserLeagueScheduleList->Visible = false;
	UserViewLeagueSchedulePicture->Visible = false;
	UserViewLeagueScheduleButton->Visible = false;
	UserViewPlayerDetailPanel->Visible = false;
	UserViewPlayerDetailButton->Visible = false;
	UserViewPlayerDetailPicture->Visible = false;
	UserPlayerDetailList->Visible = false;
	UserAboutPanel->Visible = false;
	UserAboutTextBox->Visible = false;
	UserTeamDetailList->Visible = false;
	UserTeamDetailsPanel->Visible = false;
	UserViewTeamDetailButton->Visible = false;
	UserTeamDetailPicture->Visible = false;
	SettingsPanel->Visible = false;
	FavTeamList->Visible = false;
	FavPlayerList->Visible = false;
	ShowFavPlayer->Visible = false;
	ShowFavTeam->Visible = false;
	FavTeamText->Visible = false;
	FavPlayerText->Visible = false;
	FavPlayerOfTeam->Visible = false;
	FavTeamPlayerList->Visible = false;
	FavTeamPlayerButton->Visible = false;
	ViewSpecificTeamText->Visible = false;
	ViewSpecificTeamButton->Visible = false;
	ViewSpecificTeamDropDownList->Visible = false;
	ChangePasswordButton->Visible = false;
	ChangeSideBarColorButton->Visible = false;
	FavouritePanel->Visible = false;
	UsernameLabel->Visible = false;
	CurrentPassLabel->Visible = false;
	NewPasswordLabel->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
	ChangeEverythingColor->Visible = false;
}
private: System::Void UserViewLeagueTableButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (SwitchLang->Text == "English") {
		MessageBox::Show("League Table Details Have Been Successfully Added.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserLeagueTable();
	}
    else if (SwitchLang->Text == "German") {
		MessageBox::Show("Details zur Ligatabelle wurden erfolgreich hinzugefügt.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserLeagueTable();
	}
	else if (SwitchLang->Text == "Arabic") {
		MessageBox::Show(L"تمت إضافة تفاصيل جدول الدوري بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserLeagueTable();
	}
	else if (SwitchLang->Text == "French") {
		MessageBox::Show("Les détails du classement ont été ajoutés avec succès.", "succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		UserLeagueTable();
	}
}
private: System::Void FavTeamDropDownList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void FavTeamButtonChoose_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		if (FavTeamDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Please Select A Team First.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to favourite this team? ...",
			"Choice",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			ChosenTeam = FavTeamDropDownList->SelectedItem->ToString();
			MessageBox::Show("Successfully favourited Selected Team!", "Favourite", MessageBoxButtons::OK, MessageBoxIcon::Information);
			hasFavTeam = true;
			TeamFavPlayer();
		}

		else {
			MessageBox::Show("No changes made.", "Cancelled", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "German") {
		if (FavTeamDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Bitte wählen Sie zuerst ein Team aus.", "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Möchten Sie dieses Team wirklich als Favorit markieren? ...",
			"Auswahl",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			ChosenTeam = FavTeamDropDownList->SelectedItem->ToString();
			MessageBox::Show("Ausgewähltes Team erfolgreich als Favorit markiert!", "Favorit", MessageBoxButtons::OK, MessageBoxIcon::Information);
			hasFavTeam = true;
			TeamFavPlayer();
		}

		else {
			MessageBox::Show("Keine Änderungen vorgenommen.", "Abgesagt", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "Arabic") {
		if (FavTeamDropDownList->SelectedItem == nullptr) {
			MessageBox::Show(L"الرجاء اختيار الفريق أولاً.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			gcnew String(L"هل أنت متأكد أنك تريد تفضيل هذا الفريق؟"),
			gcnew String(L"خيار"),
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			ChosenTeam = FavTeamDropDownList->SelectedItem->ToString();
			MessageBox::Show(gcnew String(L"تم اختيار الفريق المفضل بنجاح!"), gcnew String(L"مفضل"), MessageBoxButtons::OK, MessageBoxIcon::Information);
			hasFavTeam = true;
			TeamFavPlayer();
		}

		else {
			MessageBox::Show(L"لم يتم إجراء أي تغييرات.", L"تم الإلغاء", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "French") {
		if (FavTeamDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Veuillez d’abord sélectionner une équipe.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Êtes-vous sûr de vouloir ajouter cette équipe à vos favoris ? ...",
			"Choix",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			ChosenTeam = FavTeamDropDownList->SelectedItem->ToString();
			MessageBox::Show("Successfully favourited Selected Team!", "Préféré", MessageBoxButtons::OK, MessageBoxIcon::Information);
			hasFavTeam = true;
			TeamFavPlayer();
		}

		else {
			MessageBox::Show("Aucune modification apportée.", "Annulé", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}

private: System::Void FavTeamPlayerButtonChoose_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		if (FavTeamPlayerDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Please select a player first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to favourite this Player? ...",
			"Choice",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			if (hasFavTeam) {
				ChosenTeamPlayer = FavTeamPlayerDropDownList->SelectedItem->ToString();
				hasFavTeamPlayer = true;
				MessageBox::Show("Successfully favourited Selectred Player Of Team!", "Favourite", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
				MessageBox::Show("Please Choose A Team First To Be Able To Choose A Player From That Team.", "Error"
					, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else if (SwitchLang->Text == "German") {
		if (FavTeamPlayerDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Bitte wählen Sie zuerst einen Spieler aus.", "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Möchten Sie diesen Spieler wirklich als Favorit markieren? ...",
			"Auswahl",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			if (hasFavTeam) {
				ChosenTeamPlayer = FavTeamPlayerDropDownList->SelectedItem->ToString();
				hasFavTeamPlayer = true;
				MessageBox::Show("Ausgewählter Spieler des Teams erfolgreich als Favorit markiert!", "Favorit", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
				MessageBox::Show("Bitte wählen Sie zuerst ein Team aus, um einen Spieler aus diesem Team auswählen zu können.", "Fehler"
					, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else if (SwitchLang->Text == "Arabic") {
		if (FavTeamPlayerDropDownList->SelectedItem == nullptr) {
			MessageBox::Show(L"يرجى اختيار لاعب أولاً.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			L"هل أنت متأكد أنك تريد إضافة هذا اللاعب إلى المفضلة؟",
			L"اختيار",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			if (hasFavTeam) {
				ChosenTeamPlayer = FavTeamPlayerDropDownList->SelectedItem->ToString();
				hasFavTeamPlayer = true;
				MessageBox::Show(L"تمت إضافة اللاعب المحدد من الفريق إلى المفضلة بنجاح!", L"المفضلة", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show(L"يرجى اختيار فريق أولاً حتى تتمكن من اختيار لاعب من ذلك الفريق.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	else if (SwitchLang->Text == "French") {
		if (FavTeamPlayerDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Veuillez d'abord sélectionner un joueur.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Êtes-vous sûr de vouloir ajouter ce joueur aux favoris ?",
			"Choix",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			if (hasFavTeam) {
				ChosenTeamPlayer = FavTeamPlayerDropDownList->SelectedItem->ToString();
				hasFavTeamPlayer = true;
				MessageBox::Show("Le joueur sélectionné de l'équipe a été ajouté aux favoris avec succès !", "Favori", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Veuillez d'abord choisir une équipe afin de pouvoir sélectionner un joueur de cette équipe.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
}

private: System::Void ChooseFavPlayerButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		if (FavPlayerDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Please select a player first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to favourite this Player? ...",
			"Choice",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			ChosenPlayer = FavPlayerDropDownList->SelectedItem->ToString();
			hasFavPlayer = true;
			MessageBox::Show("Successfully favourited Selected Player!", "Favourite", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No changes made.", "Cancelled", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "German") {
		if (FavPlayerDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Bitte wählen Sie zuerst einen Spieler aus.", "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Sind Sie sicher, dass Sie diesen Spieler zu den Favoriten hinzufügen möchten?",
			"Auswahl",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			ChosenPlayer = FavPlayerDropDownList->SelectedItem->ToString();
			hasFavPlayer = true;
			MessageBox::Show("Spieler erfolgreich zu den Favoriten hinzugefügt!", "Favorit", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Keine Änderungen vorgenommen.", "Abgebrochen", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "Arabic") {
		if (FavPlayerDropDownList->SelectedItem == nullptr) {
			MessageBox::Show(L"يرجى اختيار لاعب أولاً.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			L"هل أنت متأكد أنك تريد إضافة هذا اللاعب إلى المفضلة؟",
			L"اختيار",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			ChosenPlayer = FavPlayerDropDownList->SelectedItem->ToString();
			hasFavPlayer = true;
			MessageBox::Show (L"تمت إضافة اللاعب المحدد إلى المفضلة بنجاح!", L"المفضلة", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show(L"لم يتم إجراء أي تغييرات.", L"تم الإلغاء", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "French") {
		if (FavPlayerDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Veuillez d'abord sélectionner un joueur.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Êtes-vous sûr de vouloir ajouter ce joueur aux favoris ?",
			"Choix",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			ChosenPlayer = FavPlayerDropDownList->SelectedItem->ToString();
			hasFavPlayer = true;
			MessageBox::Show("Joueur sélectionné ajouté aux favoris avec succès !", "Favori", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Aucun changement effectué.", "Annulé", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}

private: System::Void SettingsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	SettingsPanel->Visible = true;
	ChangeEverythingColor->Visible = true;
	FavTeamList->Visible = false;
	FavPlayerList->Visible = false;
	ShowFavPlayer->Visible = false;
	ShowFavTeam->Visible = false;
	FavTeamText->Visible = false;
	FavPlayerText->Visible = false;
	FavPlayerOfTeam->Visible = false;
    FavTeamPlayerList->Visible = false;
    FavTeamPlayerButton->Visible = false;
    ChangePasswordButton->Visible = true;
	SwitchLang->Visible = true;
	ChangeTopPanelColor->Visible = true;
	ChangeSidePanelTextColor->Visible = true;
	ChangeTopTextColor->Visible = true;
    ChangeSideBarColorButton->Visible = true;
	UserViewPlayerDetailPanel->Visible = false;
	UserViewPlayerDetailButton->Visible = false;
	UserViewPlayerDetailPicture->Visible = false;
	UserPlayerDetailList->Visible = false;
	UserAboutPanel->Visible = false;
	UserAboutTextBox->Visible = false;
	UserTeamDetailList->Visible = false;
	UserTeamDetailsPanel->Visible = false;
	UserViewTeamDetailButton->Visible = false;
	UserTeamDetailPicture->Visible = false;
	UserViewLeagueSchedulePanel->Visible = false;
	UserLeagueScheduleList->Visible = false;
	UserViewLeagueSchedulePicture->Visible = false;
	UserViewLeagueScheduleButton->Visible = false;
	UserViewMatchResultList->Visible = false;
	UserViewMatchResultButton->Visible = false;
	UserViewMatchResultPanel->Visible = false;
	UserViewMatchResultPIcture->Visible = false;
	UserViewLeagueTableList->Visible = false;
	UserViewLeagueTableButton->Visible = false;
	UserViewLeagueTablePanel->Visible = false;
	UserViewLeagueTablePicture->Visible = false;
	ViewSpecificTeamText->Visible = false;
	ViewSpecificTeamButton->Visible = false;
	ViewSpecificTeamDropDownList->Visible = false;
	FavouritePanel->Visible = false;
	UsernameLabel->Visible = false;
	CurrentPassLabel->Visible = false;
	NewPasswordLabel->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
}
private: System::Void ShowFavPlayer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		if (!hasFavPlayer) {
			MessageBox::Show("Please Choose A Favourite Player To Show Here.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			FavPlayer();
			MessageBox::Show("Favourite Player Has Been Successfully Loaded.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "German") {
		if (!hasFavPlayer) {
			MessageBox::Show("Bitte wählen Sie einen Lieblingsspieler aus, um ihn hier anzuzeigen.", "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			FavPlayer();
			MessageBox::Show("Lieblingsspieler wurde erfolgreich geladen.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
		else if (SwitchLang->Text == "Arabic") {
			if (!hasFavPlayer) {
				MessageBox::Show(L"يرجى اختيار لاعب مفضل لعرضه هنا.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				FavPlayer();
				MessageBox::Show(L"تم تحميل اللاعب المفضل بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else if (SwitchLang->Text == "French") {
			if (!hasFavPlayer) {
				MessageBox::Show("Veuillez choisir un joueur favori à afficher ici.", "erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				FavPlayer();
				MessageBox::Show("Le joueur favori a été chargé avec succès.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}

private: System::Void ShowFavTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		if (!hasFavTeam) {
			MessageBox::Show("Please Choose A Favourite Team To Show Here.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			FavTeam();
			MessageBox::Show("Favourite Team Has Been Successfully Loaded.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "German") {
		if (!hasFavTeam) {
			MessageBox::Show("Bitte wählen Sie ein Lieblingsteam aus, um es hier anzuzeigen.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			FavTeam();
			MessageBox::Show("Lieblingsteam wurde erfolgreich geladen.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "Arabic") {
		if (!hasFavTeam) {
			MessageBox::Show(L"يرجى اختيار فريق مفضل لعرضه هنا.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			FavTeam();
			MessageBox::Show(L"تم تحميل الفريق المفضل بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "French") {
		if (!hasFavTeam) {
			MessageBox::Show("Veuillez choisir une équipe favorite à afficher ici.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			FavTeam();
			MessageBox::Show("L'équipe favorite a été chargée avec succès.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
private: System::Void FavTeamPlayerButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		if (!hasFavTeamPlayer) {
			MessageBox::Show("Please Choose A Favourite Team Player To Show Here.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			TeamFavPlayerShow();
			MessageBox::Show("Favourite Team Player Has Been Successfully Loaded.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "German") {
		if (!hasFavTeamPlayer) {
			MessageBox::Show("Bitte wählen Sie einen Lieblingsspieler Ihres Teams aus, der hier angezeigt werden soll.", "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			TeamFavPlayerShow();
			MessageBox::Show("Der Lieblingsteamspieler wurde erfolgreich geladen.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "Arabic") {
		if (!hasFavTeamPlayer) {
			MessageBox::Show(L"الرجاء اختيار لاعب الفريق المفضل لديك لإظهاره هنا.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			TeamFavPlayerShow();
			MessageBox::Show(L"تم تحميل لاعب الفريق المفضل بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "French") {
		if (!hasFavTeamPlayer) {
			MessageBox::Show("Veuillez choisir un joueur d'équipe préféré à afficher ici.", "erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			TeamFavPlayerShow();
			MessageBox::Show("Le joueur de l'équipe préférée a été chargé avec succès.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
private: System::Void ViewSpecificTeamButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		if (ViewSpecificTeamDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Please select a Team first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Is The Chosen Team The One You Want To Specifically See?",
			"Choice",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			SpecificTeamView = ViewSpecificTeamDropDownList->SelectedItem->ToString();
			ViewSpecificTeamList();
			MessageBox::Show("Specific Team Successfully Added!", "Specific team", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "German") {
		if (ViewSpecificTeamDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Bitte wählen Sie zuerst ein Team aus.", "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Ist das ausgewählte Team dasjenige, das Sie speziell sehen möchten?",
			"Auswahl",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			SpecificTeamView = ViewSpecificTeamDropDownList->SelectedItem->ToString();
			ViewSpecificTeamList();
				MessageBox::Show("Bestimmtes Team erfolgreich hinzugefügt!", "Spezifisches Team", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
		}
	}
	else if (SwitchLang->Text == "Arabic") {
		if (ViewSpecificTeamDropDownList->SelectedItem == nullptr) {
			MessageBox::Show(L"الرجاء اختيار الفريق أولاً.", "خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			L"هل الفريق المختار هو الفريق الذي تريد رؤيته على وجه التحديد؟",
			L"خيار",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			SpecificTeamView = ViewSpecificTeamDropDownList->SelectedItem->ToString();
			ViewSpecificTeamList();
			MessageBox::Show(L"تمت إضافة الفريق المحدد بنجاح!", L"فريق محدد", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else if (SwitchLang->Text == "French") {
		if (ViewSpecificTeamDropDownList->SelectedItem == nullptr) {
			MessageBox::Show("Veuillez d’abord sélectionner une équipe.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"L'équipe choisie est-elle celle que vous souhaitez voir spécifiquement ?",
			"Choix",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			SpecificTeamView = ViewSpecificTeamDropDownList->SelectedItem->ToString();
			ViewSpecificTeamList();
			MessageBox::Show("Équipe spécifique ajoutée avec succès !", "Équipe spécifique", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}
private: System::Void ChangePasswordButton_Click(System::Object^ sender, System::EventArgs^ e) {

	Changepassholder->Visible = true;
	UsernameLabel->Visible = true;
	CurrentPassLabel->Visible = true;
	NewPasswordLabel->Visible = true;
	SavePasswordButton->Visible = true;
	ShowNewPass->Visible = true;
	ShowCurrentPass->Visible = true;
	UsernameTextBox->Visible = true;
	CurrentPassTextBox->Visible = true;
	NewPassTextBox->Visible = true;
}
private: System::Void SettingsPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void ChangeWelcomeTextColorButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ChangeSideBarColorButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ ChangeColorText = gcnew ColorDialog();
	if (ChangeColorText->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		SideBarContainer->BackColor = ChangeColorText->Color;
		DashboardButton->BackColor = ChangeColorText->Color;
			AboutButoon->BackColor = ChangeColorText->Color;
			SettingsButton->BackColor = ChangeColorText->Color;
			LogoutButton->BackColor = ChangeColorText->Color;
			LogoutPicBox->BackColor = ChangeColorText->Color;
			SettingsPicBox->BackColor = ChangeColorText->Color;
			AboutPicBox->BackColor = ChangeColorText->Color;
			UserFuncPicBox->BackColor = ChangeColorText->Color;
			LogoutPanel->BackColor = ChangeColorText->Color;
			SettingsSidePanel->BackColor = ChangeColorText->Color;
			AboutSidePanel->BackColor = ChangeColorText->Color;
			UserFuncSidePanel->BackColor = ChangeColorText->Color;
			LeagueTableButton->BackColor = ChangeColorText->Color;
			Match_ResultButton->BackColor = ChangeColorText->Color;
			LeagueScheduleButton->BackColor = ChangeColorText->Color;
			PlayerDetailsButton->BackColor = ChangeColorText->Color;
			UserTeamDetailsButton->BackColor = ChangeColorText->Color;
			ViewLeagueTablePanel->BackColor = ChangeColorText->Color;
			MatchResultSidePanel->BackColor = ChangeColorText->Color;
			LeagueScheduleSidePanel->BackColor = ChangeColorText->Color;
			PlayerDetailsSidePanel->BackColor = ChangeColorText->Color;
			TeamDetailsSidePanel->BackColor = ChangeColorText->Color;
			UserFunctionPanel->BackColor = ChangeColorText->Color;
			ViewTeamDetailsPic->BackColor = ChangeColorText->Color;
			ViewPlayerDetailsPic->BackColor = ChangeColorText->Color;
			ViewLeagueSchedulePic->BackColor = ChangeColorText->Color;
			ViewMatchResultPic->BackColor = ChangeColorText->Color;
			ViewLeagueTablePic->BackColor = ChangeColorText->Color;
			SideFavouritePanel->BackColor = ChangeColorText->Color;
			FavouritePic->BackColor = ChangeColorText->Color;
			FavouriteButton->BackColor = ChangeColorText->Color;
		int brightness = (ChangeColorText->Color.R * 299 + ChangeColorText->Color.G * 587 + ChangeColorText->Color.B * 114) / 1000;
		Color textColor = (brightness > 128) ? Color::Black : Color::White;
		}
	}
private: System::Void ChangeTopTextColor_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ ChangeTopText = gcnew ColorDialog();
	if (ChangeTopText->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		SideBarLabel->ForeColor = ChangeTopText->Color;
		int brightness = (ChangeTopText->Color.R * 299 + ChangeTopText->Color.G * 587 + ChangeTopText->Color.B * 114) / 1000;
		Color textColor = (brightness > 128) ? Color::Black : Color::White;
	}
}
private: System::Void ChangeTopPanelColor_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ ChangeTopPanelColor= gcnew ColorDialog();
	if (ChangeTopPanelColor->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		TextTopPanel->BackColor = ChangeTopPanelColor->Color;
		SideBarLabel->BackColor = ChangeTopPanelColor->Color;
		int brightness = (ChangeTopPanelColor->Color.R * 299 + ChangeTopPanelColor->Color.G * 587 + ChangeTopPanelColor->Color.B * 114) / 1000;
		Color textColor = (brightness > 128) ? Color::Black : Color::White;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ ChangeSideTextColor = gcnew ColorDialog();
	if (ChangeSideTextColor->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		DashboardButton->ForeColor = ChangeSideTextColor->Color;
		UserTeamDetailsButton->ForeColor = ChangeSideTextColor->Color;
		PlayerDetailsButton->ForeColor = ChangeSideTextColor->Color;
		LeagueScheduleButton->ForeColor = ChangeSideTextColor->Color;
		Match_ResultButton->ForeColor = ChangeSideTextColor->Color;
		LeagueTableButton->ForeColor = ChangeSideTextColor->Color;
		AboutButoon->ForeColor = ChangeSideTextColor->Color;
		SettingsButton->ForeColor = ChangeSideTextColor->Color;
		LogoutButton->ForeColor = ChangeSideTextColor->Color;
		FavouriteButton->ForeColor = ChangeSideTextColor->Color;
		int brightness = (ChangeSideTextColor->Color.R * 299 + ChangeSideTextColor->Color.G * 587 + ChangeSideTextColor->Color.B * 114) / 1000;
		Color textColor = (brightness > 128) ? Color::Black : Color::White;
	}
}
	   System::Drawing::Font^ defaultFont = gcnew System::Drawing::Font("Arial Rounded MT Bold", 10.2F);
	   System::Drawing::Font^ WelcomeText = gcnew System::Drawing::Font("Century", 15.0F, System::Drawing::FontStyle::Bold);
private: System::Void SwitchLang_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "German") {
		this->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->RightToLeftLayout = false;

		SideBarLabel->Font = WelcomeText;
		SideBarLabel->Text = "   Willkommen in der ASU Liga";

		ChangePasswordButton->Font = defaultFont;
		ChangePasswordButton->Text = "   Passwort ändern?";

		ChangeTopTextColor->Font = defaultFont;
		ChangeTopTextColor->Text = "   Willkommenstextfarbe ändern?";

		ChangeSidePanelTextColor->Font = defaultFont;
		ChangeSidePanelTextColor->Text = "   Seitenpanel-Textfarbe ändern?";

		ChangeSideBarColorButton->Font = defaultFont;
		ChangeSideBarColorButton->Text = "   Seitenleistenfarbe ändern?";

		ChangeTopPanelColor->Font = defaultFont;
		ChangeTopPanelColor->Text = "   Farbe des oberen Panels ändern?";

		SwitchLang->Font = defaultFont;
		SwitchLang->Text = "   Sprache wechseln";

		ShowFavTeam->Font = defaultFont;
		ShowFavTeam->Text = "   Lieblingsteam anzeigen";

		FavTeamPlayerButton->Font = defaultFont;
		FavTeamPlayerButton->Text = "   Spieler des Lieblingsteams anzeigen";

		FavPlayerOfTeam->Font = defaultFont;
		FavPlayerOfTeam->Text = "   Lieblingsspieler der Teams";

		ShowFavPlayer->Font = defaultFont;
		ShowFavPlayer->Text = "   Lieblingsspieler anzeigen";

		FavPlayerText->Font = defaultFont;
		FavPlayerText->Text = "   Lieblingsspieler der ganzen Liga";

		FavTeamText->Font = defaultFont;
		FavTeamText->Text = "   Lieblingsteam";

		DashboardButton->Font = defaultFont;
		DashboardButton->Text = "   Benutzerfunktionen";

		UserTeamDetailsButton->Font = defaultFont;
		UserTeamDetailsButton->Text = "   Teamdetails anzeigen";

		PlayerDetailsButton->Font = defaultFont;
		PlayerDetailsButton->Text = "   Spielerdetails anzeigen";

		LeagueScheduleButton->Font = defaultFont;
		LeagueScheduleButton->Text = "   Ligaplan anzeigen";

		Match_ResultButton->Font = defaultFont;
		Match_ResultButton->Text = "   Spielergebnisse anzeigen";

		ChangeEverythingColor->Font = defaultFont;
		ChangeEverythingColor->Text = "   Farbe ändern ?";

		LeagueTableButton->Font = defaultFont;
		LeagueTableButton->Text = "   Ligatabelle anzeigen";

		AboutButoon->Font = defaultFont;
		AboutButoon->Text = "   Über";

		FavouriteButton->Font = defaultFont;
		FavouriteButton->Text = "   Favoriten";
		
		SettingsButton->Font = defaultFont;
		SettingsButton->Text = "   Einstellungen";

		LogoutButton->Font = defaultFont;
		LogoutButton->Text = "   Abmelden";

		UserViewLeagueTableButton->Font = defaultFont;
		UserViewLeagueTableButton->Text = "   Ligatabelle anzeigen";

		ViewSpecificTeamText->Font = defaultFont;
		ViewSpecificTeamText->Text = "   Bestimmtes Team anzeigen";

		ViewSpecificTeamButton->Font = defaultFont;
		ViewSpecificTeamButton->Text = "   Wählen!";

		UserViewTeamDetailButton->Font = defaultFont;
		UserViewTeamDetailButton->Text = "   Teamdetails anzeigen";

		FavTeamLabel->Font = defaultFont;
		FavTeamLabel->Text = "   Lieblingsteam vorhanden?";

		FavouriteTeamPlayerLabel->Font = defaultFont;
		FavouriteTeamPlayerLabel->Text = "   Lieblingsspieler des gewählten Teams";

		FavTeamButtonChoose->Font = defaultFont;
		FavTeamButtonChoose->Text = "   Wählen!";

		FavTeamPlayerButtonChoose->Font = defaultFont;
		FavTeamPlayerButtonChoose->Text = "   Wählen!";

		UserViewPlayerDetailButton->Font = defaultFont;
		UserViewPlayerDetailButton->Text = "   Spielerdetails anzeigen";

		FavPlayerLabel->Font = defaultFont;
		FavPlayerLabel->Text = "   Lieblingsspieler der ganzen Liga?";

		ChooseFavPlayerButton->Font = defaultFont;
		ChooseFavPlayerButton->Text = "   Wählen!";

		UserViewLeagueScheduleButton->Font = defaultFont;
		UserViewLeagueScheduleButton->Text = "   Ligaplan anzeigen";

		UserViewMatchResultButton->Font = defaultFont;
		UserViewMatchResultButton->Text = "   Spielergebnis anzeigen";

		UserAboutTextBox->Font = defaultFont;
		UserAboutTextBox->Text = L"Über den Benutzer:\r\n"
			L"Als Benutzer des Fußball-Liga-Managementsystems haben Sie Zugang zu einer benutzerfreundlichen Plattform, um Ihre Lieblingsteams, Spieler und Spiele zu verfolgen.\r\n"
			L"Sie können Kader einsehen, Spielerstatistiken analysieren und den Spielplan der Liga abrufen.\r\n"
			L"Alle Ergebnisse und Tabellen werden automatisch organisiert.\r\n"
			L"Sie haben keine administrativen Rechte, aber eine vollständige Übersicht über die Liga.";
	}
	else if (SwitchLang->Text == "English") {
		this->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->RightToLeftLayout = false;
		this->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->RightToLeftLayout = false;

		SideBarLabel->Font = WelcomeText;
		SideBarLabel->Text = "Welcome To ASU League";

		ChangePasswordButton->Font = defaultFont;
		ChangePasswordButton->Text = "Change Password?";

		ChangeTopTextColor->Font = defaultFont;
		ChangeTopTextColor->Text = "Change Welcome Text Color?";

		ChangeSidePanelTextColor->Font = defaultFont;
		ChangeSidePanelTextColor->Text = "Change Side Panel Text Color?";

		ChangeSideBarColorButton->Font = defaultFont;
		ChangeSideBarColorButton->Text = "Change SideBar Color?";

		ChangeTopPanelColor->Font = defaultFont;
		ChangeTopPanelColor->Text = "Change Top Panel Color?";

		SwitchLang->Font = defaultFont;
		SwitchLang->Text = "Switch Languages";

		ShowFavTeam->Font = defaultFont;
		ShowFavTeam->Text = "Show Favourite Team";

		FavTeamPlayerButton->Font = defaultFont;
		FavTeamPlayerButton->Text = "Show Favourite Team Player";

		FavPlayerOfTeam->Font = defaultFont;
		FavPlayerOfTeam->Text = "Teams Favourite Player";

		ShowFavPlayer->Font = defaultFont;
		ShowFavPlayer->Text = "Show Favourite player";

		FavPlayerText->Font = defaultFont;
		FavPlayerText->Text = "Favourite Player Of Whole League";

		FavTeamText->Font = defaultFont;
		FavTeamText->Text = "Favourite Team";

		DashboardButton->Font = defaultFont;
		DashboardButton->Text = "User Function";

		UserTeamDetailsButton->Font = defaultFont;
		UserTeamDetailsButton->Text = "View Team Details";

		PlayerDetailsButton->Font = defaultFont;
		PlayerDetailsButton->Text = "View Player Details";

		LeagueScheduleButton->Font = defaultFont;
		LeagueScheduleButton->Text = "View League Schedule";

		Match_ResultButton->Font = defaultFont;
		Match_ResultButton->Text = "View Match Results";

		LeagueTableButton->Font = defaultFont;
		LeagueTableButton->Text = "View League Table";

		AboutButoon->Font = defaultFont;
		AboutButoon->Text = "About";

		FavouriteButton->Font = defaultFont;
		FavouriteButton->Text = "Favourites";

		SettingsButton->Font = defaultFont;
		SettingsButton->Text = "Settings";

		LogoutButton->Font = defaultFont;
		LogoutButton->Text = "Logout";

		ChangeEverythingColor->Font = defaultFont;
		ChangeEverythingColor->Text = "Change Color ?";

		UserViewLeagueTableButton->Font = defaultFont;
		UserViewLeagueTableButton->Text = "View League Table";

		ViewSpecificTeamText->Font = defaultFont;
		ViewSpecificTeamText->Text = "View A Specific Team";

		ViewSpecificTeamButton->Font = defaultFont;
		ViewSpecificTeamButton->Text = "Choose!";

		UserViewTeamDetailButton->Font = defaultFont;
		UserViewTeamDetailButton->Text = "View Team Details";

		FavTeamLabel->Font = defaultFont;
		FavTeamLabel->Text = "Have A Favourite Team?";

		FavouriteTeamPlayerLabel->Font = defaultFont;
		FavouriteTeamPlayerLabel->Text = "Favourite Player Of Your Chosen Team";

		FavTeamButtonChoose->Font = defaultFont;
		FavTeamButtonChoose->Text = "Choose!";

		FavTeamPlayerButtonChoose->Font = defaultFont;
		FavTeamPlayerButtonChoose->Text = "Choose!";

		UserViewPlayerDetailButton->Font = defaultFont;
		UserViewPlayerDetailButton->Text = "View Player Details";

		FavPlayerLabel->Font = defaultFont;
		FavPlayerLabel->Text = "Favourite Player Of The Whole League?";

		ChooseFavPlayerButton->Font = defaultFont;
		ChooseFavPlayerButton->Text = "Choose!";

		UserViewLeagueScheduleButton->Font = defaultFont;
		UserViewLeagueScheduleButton->Text = "View League Schedule";

		UserViewMatchResultButton->Font = defaultFont;
		UserViewMatchResultButton->Text = "View Match Result";

		UserAboutTextBox->Font = defaultFont;
		UserAboutTextBox->Text = L"About the User:\r\n"
			L"As a User of the Football League Management System, you are granted access to a rich and interactive platform designed to keep you connected with your favorite teams, matches, and players throughout the league season. Your experience is centered around viewing, analyzing, and engaging with the league data in a user-friendly and visually organized way.\r\n"
			L"You can browse team rosters, examine detailed player statistics, and explore scheduled fixtures for every round of the season. This helps you stay updated with how your favorite clubs are performing, when and where matches are taking place, and the line-ups of participating teams.\r\n"
			L"Additionally, you have access to a comprehensive match result viewer, which displays final scores, dates, and participating teams, allowing you to follow the progress of the league as it unfolds. The information is automatically updated and organized round-by-round to help you navigate the season easily.\r\n"
			L"While you do not have administrative permissions to modify teams, add players, or change schedules, your user role ensures that you enjoy a streamlined, read-only experience focused on tracking league dynamics.\r\n"
			L"This role is ideal for fans, analysts, or participants who want to stay informed and engaged with league data without altering its structure. Welcome to the digital home of football league insights.";
	}

	else if (SwitchLang->Text == "Arabic") {
		// Set font for all controls that will show Arabic text
		// Set Right-to-Left layout
		this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		this->RightToLeftLayout = true;
		SideBarLabel->Font = WelcomeFont;
		SideBarLabel->Text = L"مرحباً بكم في دوري جامعة عين شمس";
		// Arabic labels and font setup
		ChangePasswordButton->Font = arabicFont;
		ChangePasswordButton->Text = L"تغيير كلمة المرور؟";

		ChangeTopTextColor->Font = arabicFont;
		ChangeTopTextColor->Text = L"تغيير لون نص الترحيب؟";

		ChangeSidePanelTextColor->Font = arabicFont;
		ChangeSidePanelTextColor->Text = L"تغيير لون نص اللوحة الجانبية؟";

		ChangeSideBarColorButton->Font = arabicFont;
		ChangeSideBarColorButton->Text = L"تغيير لون الشريط الجانبي؟";

		ChangeTopPanelColor->Font = arabicFont;
		ChangeTopPanelColor->Text = L"تغيير لون اللوحة العلوية؟";

		SwitchLang->Font = arabicFont;
		SwitchLang->Text = L"تغيير اللغة";

		ShowFavTeam->Font = arabicFont;
		ShowFavTeam->Text = L"عرض الفريق المفضل";

		FavTeamPlayerButton->Font = arabicFont;
		FavTeamPlayerButton->Text = L"عرض لاعب الفريق المفضل";

		FavPlayerOfTeam->Font = arabicFont;
		FavPlayerOfTeam->Text = L"اللاعب المفضل للفريق";

		ShowFavPlayer->Font = arabicFont;
		ShowFavPlayer->Text = L"عرض اللاعب المفضل";

		FavPlayerText->Font = arabicFont;
		FavPlayerText->Text = L"اللاعب المفضل في الدوري بأكمله";

		FavTeamText->Font = arabicFont;
		FavTeamText->Text = L"الفريق المفضل";

		DashboardButton->Font = arabicFont;
		DashboardButton->Text = L"وظيفة المستخدم";

		UserTeamDetailsButton->Font = arabicFont;
		UserTeamDetailsButton->Text = L"عرض تفاصيل الفريق";

		PlayerDetailsButton->Font = arabicFont;
		PlayerDetailsButton->Text = L"عرض تفاصيل اللاعب";

		LeagueScheduleButton->Font = arabicFont;
		LeagueScheduleButton->Text = L"عرض جدول الدوري";

		Match_ResultButton->Font = arabicFont;
		Match_ResultButton->Text = L"عرض نتائج المباريات";

		LeagueTableButton->Font = arabicFont;
		LeagueTableButton->Text = L"عرض جدول الدوري";

		AboutButoon->Font = arabicFont;
		AboutButoon->Text = L"حول";

		SettingsButton->Font = arabicFont;
		SettingsButton->Text = L"الإعدادات";

		FavouriteButton->Font = arabicFont;
		FavouriteButton->Text = L"المفضلات";

		LogoutButton->Font = arabicFont;
		LogoutButton->Text = L"تسجيل الخروج";

		UserViewLeagueTableButton->Font = arabicFont;
		UserViewLeagueTableButton->Text = L"عرض جدول الدوري";

		ViewSpecificTeamText->Font = arabicFont;
		ViewSpecificTeamText->Text = L"عرض فريق معين";

		ViewSpecificTeamButton->Font = arabicFont;
		ViewSpecificTeamButton->Text = L"اختر!";

		ChangeEverythingColor->Font = arabicFont;
		ChangeEverythingColor->Text = L"تغيير اللون؟";

		UserViewTeamDetailButton->Font = arabicFont;
		UserViewTeamDetailButton->Text = L"عرض تفاصيل الفريق";

		FavTeamLabel->Font = arabicFont;
		FavTeamLabel->Text = L"هل لديك فريق مفضل؟";

		FavouriteTeamPlayerLabel->Font = arabicFont;
		FavouriteTeamPlayerLabel->Text = L"اللاعب المفضل لفريقك المختار";

		FavTeamButtonChoose->Font = arabicFont;
		FavTeamButtonChoose->Text = L"اختر!";

		FavTeamPlayerButtonChoose->Font = arabicFont;
		FavTeamPlayerButtonChoose->Text = L"اختر!";

		UserViewPlayerDetailButton->Font = arabicFont;
		UserViewPlayerDetailButton->Text = L"عرض تفاصيل اللاعب";

		FavPlayerLabel->Font = arabicFont;
		FavPlayerLabel->Text = L"اللاعب المفضل في الدوري بأكمله؟";

		ChooseFavPlayerButton->Font = arabicFont;
		ChooseFavPlayerButton->Text = L"اختر!";

		UserViewLeagueScheduleButton->Font = arabicFont;
		UserViewLeagueScheduleButton->Text = L"عرض جدول الدوري";

		UserViewMatchResultButton->Font = arabicFont;
		UserViewMatchResultButton->Text = L"عرض نتيجة المباراة";

		// Arabic about text
		UserAboutTextBox->Font = arabicFont;
		UserAboutTextBox->Text =
			L"حول المستخدم:\r\n"
			L"كمستخدم لنظام إدارة دوري كرة القدم، يتم منحك الوصول إلى منصة تفاعلية وغنية تم تصميمها لإبقائك على اتصال مع الفرق، والمباريات، واللاعبين المفضلين لديك طوال موسم الدوري. تجربتك تتركز حول مشاهدة البيانات وتحليلها والتفاعل معها بطريقة منظمة وسهلة الاستخدام بصريًا.\r\n"
			L"يمكنك تصفح قوائم الفرق، واستعراض إحصائيات اللاعبين بالتفصيل، واستكشاف المباريات المجدولة لكل جولة في الموسم. يساعدك ذلك على البقاء محدثًا بأداء الأندية، ومعرفة توقيت ومكان إقامة المباريات، وتشكيلات الفرق المشاركة.\r\n"
			L"بالإضافة إلى ذلك، لديك حق الوصول إلى عارض نتائج المباريات الشامل، الذي يعرض النتائج النهائية، والتواريخ، والفرق المشاركة، مما يسمح لك بمتابعة تقدم الدوري بشكل مستمر. يتم تحديث المعلومات تلقائيًا وتنظيمها حسب الجولات.\r\n"
			L"على الرغم من أنك لا تملك صلاحيات لتعديل الفرق أو إضافة لاعبين أو تغيير الجداول، فإن دورك كمستخدم يضمن تجربة عرض سلسة ومنظمة تركز على متابعة تفاصيل الدوري.\r\n"
			L"هذا الدور مثالي للمشجعين والمحللين أو المشاركين الذين يرغبون بالبقاء على اطلاع دون تغيير هيكل الدوري. مرحبًا بك في البيت الرقمي لتحليلات دوري كرة القدم.";
	}
	else if (SwitchLang->Text == "French") {
		this->RightToLeft = System::Windows::Forms::RightToLeft::No;
		this->RightToLeftLayout = false;

		SideBarLabel->Font = WelcomeText;
		SideBarLabel->Text = "   Bienvenue dans la Ligue ASU";

		ChangePasswordButton->Font = defaultFont;
		ChangePasswordButton->Text = "   Changer le mot de passe ?";

		ChangeTopTextColor->Font = defaultFont;
		ChangeTopTextColor->Text = "   Changer la couleur du texte d'accueil ?";

		ChangeSidePanelTextColor->Font = defaultFont;
		ChangeSidePanelTextColor->Text = "   Changer la couleur du texte du panneau latéral ?";

		ChangeSideBarColorButton->Font = defaultFont;
		ChangeSideBarColorButton->Text = "   Changer la couleur de la barre latérale ?";

		ChangeTopPanelColor->Font = defaultFont;
		ChangeTopPanelColor->Text = "   Changer la couleur du panneau supérieur ?";

		SwitchLang->Font = defaultFont;
		SwitchLang->Text = "   Changer de langue";

		ShowFavTeam->Font = defaultFont;
		ShowFavTeam->Text = "   Voir l'équipe favorite";

		FavTeamPlayerButton->Font = defaultFont;
		FavTeamPlayerButton->Text = "   Voir le joueur de l'équipe favorite";

		FavPlayerOfTeam->Font = defaultFont;
		FavPlayerOfTeam->Text = "   Joueur favori des équipes";

		ShowFavPlayer->Font = defaultFont;
		ShowFavPlayer->Text = "   Voir le joueur favori";

		FavPlayerText->Font = defaultFont;
		FavPlayerText->Text = "   Joueur Favori";

		FavTeamText->Font = defaultFont;
		FavTeamText->Text = "   Équipe Favorite";

		ChangeEverythingColor->Font = defaultFont;
		ChangeEverythingColor->Text = "   Changer de couleur ?";

		DashboardButton->Font = defaultFont;
		DashboardButton->Text = "   Fonction Utilisateur";

		UserTeamDetailsButton->Font = defaultFont;
		UserTeamDetailsButton->Text = "   Voir les détails de l'équipe";

		PlayerDetailsButton->Font = defaultFont;
		PlayerDetailsButton->Text = "   Voir les détails du joueur";

		LeagueScheduleButton->Font = defaultFont;
		LeagueScheduleButton->Text = "   Voir le calendrier de la ligue";

		Match_ResultButton->Font = defaultFont;
		Match_ResultButton->Text = "   Voir les résultats des matchs";

		LeagueTableButton->Font = defaultFont;
		LeagueTableButton->Text = "   Voir le classement de la ligue";

		AboutButoon->Font = defaultFont;
		AboutButoon->Text = "   À propos";

		SettingsButton->Font = defaultFont;
		SettingsButton->Text = "   Paramètres";

		FavouriteButton->Font = defaultFont;
		FavouriteButton->Text = "   Favoris";

		LogoutButton->Font = defaultFont;
		LogoutButton->Text = "   Se déconnecter";

		UserViewLeagueTableButton->Font = defaultFont;
		UserViewLeagueTableButton->Text = "   Voir le classement de la ligue";

		ViewSpecificTeamText->Font = defaultFont;
		ViewSpecificTeamText->Text = "   Voir une équipe spécifique";

		ViewSpecificTeamButton->Font = defaultFont;
		ViewSpecificTeamButton->Text = "   Choisir !";

		UserViewTeamDetailButton->Font = defaultFont;
		UserViewTeamDetailButton->Text = "   Voir les détails de l'équipe";

		FavTeamLabel->Font = defaultFont;
		FavTeamLabel->Text = "   Vous avez une équipe favorite ?";

		FavouriteTeamPlayerLabel->Font = defaultFont;
		FavouriteTeamPlayerLabel->Text = "   Joueur favori de votre équipe choisie";

		FavTeamButtonChoose->Font = defaultFont;
		FavTeamButtonChoose->Text = "   Choisir !";

		FavTeamPlayerButtonChoose->Font = defaultFont;
		FavTeamPlayerButtonChoose->Text = "   Choisir !";

		UserViewPlayerDetailButton->Font = defaultFont;
		UserViewPlayerDetailButton->Text = "   Voir les détails du joueur";

		FavPlayerLabel->Font = defaultFont;
		FavPlayerLabel->Text = "   Joueur favori ?";

		ChooseFavPlayerButton->Font = defaultFont;
		ChooseFavPlayerButton->Text = "   Choisir !";

		UserViewLeagueScheduleButton->Font = defaultFont;
		UserViewLeagueScheduleButton->Text = "   Voir le calendrier de la ligue";

		UserViewMatchResultButton->Font = defaultFont;
		UserViewMatchResultButton->Text = "   Voir le résultat du match";

		UserAboutTextBox->Font = defaultFont;
		UserAboutTextBox->Text = L"À propos de l'utilisateur :\r\n"
			L"En tant qu'utilisateur du système de gestion de ligue de football, vous avez accès à une plateforme riche et interactive conçue pour vous connecter à vos équipes, matchs et joueurs favoris pendant toute la saison.\r\n"
			L"Vous pouvez consulter les effectifs, les statistiques des joueurs et le calendrier complet de la saison. Restez à jour avec les performances de vos clubs favoris et les dates des matchs.\r\n"
			L"Vous avez également accès aux résultats des matchs avec scores finaux, équipes et dates.\r\n"
			L"Bien que vous ne puissiez pas modifier les données de la ligue, votre rôle vous permet de profiter d'une expérience de consultation claire et informative.";
			}

}
private: System::Void FavouriteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	SettingsPanel->Visible = false;
	FavTeamList->Visible = true;
	FavPlayerList->Visible = true;
	ShowFavPlayer->Visible = true;
	ShowFavTeam->Visible = true;
	FavTeamText->Visible = true;
	FavPlayerText->Visible = true;
	FavPlayerOfTeam->Visible = true;
	FavTeamPlayerList->Visible = true;
	FavTeamPlayerButton->Visible = true;
	ChangePasswordButton->Visible = false;
	ChangeSideBarColorButton->Visible = false;
	SwitchLang->Visible = false;
	ChangeTopPanelColor->Visible = false;
	ChangeSidePanelTextColor->Visible = false;
	ChangeTopTextColor->Visible = false;
	ChangeSideBarColorButton->Visible = false;
	UserViewPlayerDetailPanel->Visible = false;
	UserViewPlayerDetailButton->Visible = false;
	UserViewPlayerDetailPicture->Visible = false;
	UserPlayerDetailList->Visible = false;
	UserAboutPanel->Visible = false;
	UserAboutTextBox->Visible = false;
	UserTeamDetailList->Visible = false;
	UserTeamDetailsPanel->Visible = false;
	UserViewTeamDetailButton->Visible = false;
	UserTeamDetailPicture->Visible = false;
	UserViewLeagueSchedulePanel->Visible = false;
	UserLeagueScheduleList->Visible = false;
	UserViewLeagueSchedulePicture->Visible = false;
	UserViewLeagueScheduleButton->Visible = false;
	UserViewMatchResultList->Visible = false;
	UserViewMatchResultButton->Visible = false;
	UserViewMatchResultPanel->Visible = false;
	UserViewMatchResultPIcture->Visible = false;
	UserViewLeagueTableList->Visible = false;
	UserViewLeagueTableButton->Visible = false;
	UserViewLeagueTablePanel->Visible = false;
	UserViewLeagueTablePicture->Visible = false;
	ViewSpecificTeamText->Visible = false;
	ViewSpecificTeamButton->Visible = false;
	ViewSpecificTeamDropDownList->Visible = false;
	FavouritePanel->Visible = true;
	UsernameLabel->Visible = false;
	CurrentPassLabel->Visible = false;
	NewPasswordLabel->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
}
private: System::Void SavePasswordButton_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ Username = UsernameTextBox->Text;
	System::String^ CurrentPass = CurrentPassTextBox->Text;
	System::String^ NewPass = NewPassTextBox->Text;

	if (Username->Length == 0 || CurrentPass->Length == 0 || NewPass->Length == 0) {
		MessageBox::Show("Please fill all fields and make new password at least 6 characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	Changepassholder->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
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
	UsernameLabel->Visible = false;
	CurrentPassLabel->Visible = false;
	NewPasswordLabel->Visible = false;
	SavePasswordButton->Visible = false;
	ShowNewPass->Visible = false;
	ShowCurrentPass->Visible = false;
	UsernameTextBox->Visible = false;
	CurrentPassTextBox->Visible = false;
	NewPassTextBox->Visible = false;
}
private: System::Void ShowCurrentPass_Click(System::Object^ sender, System::EventArgs^ e) {
	CurrentPassTextBox->PasswordChar = 0;
}
private: System::Void ShowNewPass_Click(System::Object^ sender, System::EventArgs^ e) {
	NewPassTextBox->PasswordChar = 0;
}
private: System::Void ShowFavTeam_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		MessageBox::Show("Successfully Added Favourite Team", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		FavTeam();
	}
	if (SwitchLang->Text == "German") {
		FavTeam();
		MessageBox::Show("Lieblingsteam erfolgreich hinzugefügt", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	if (SwitchLang->Text == "Arabic") {
		FavTeam();
		MessageBox::Show(L"تمت إضافة الفريق المفضل بنجاح", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	if (SwitchLang->Text == "French") {
		FavTeam();
		MessageBox::Show("Équipe favorite ajoutée avec succès", "succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void FavTeamPlayerButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		MessageBox::Show("Successfully Added Fav Player Of The Favourite Team", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		TeamFavPlayerShow();

	}
	if (SwitchLang->Text == "German") {
		TeamFavPlayerShow();
		MessageBox::Show("Lieblingsspieler des Lieblingsteams erfolgreich hinzugefügt", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	if (SwitchLang->Text == "Arabic") {
		TeamFavPlayerShow();
		MessageBox::Show(L"تمت إضافة اللاعب المفضل للفريق المفضل بنجاح", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	if (SwitchLang->Text == "French") {
		TeamFavPlayerShow();
		MessageBox::Show("Joueur préféré de l'équipe favorite ajouté avec succès", "succès", MessageBoxButtons::OK, MessageBoxIcon::Information);	
	}
}
private: System::Void ShowFavPlayer_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (SwitchLang->Text == "English") {
		MessageBox::Show("Successfully Added Fav Player.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		FavPlayer();

	}
	if (SwitchLang->Text == "German") {
		FavPlayer();
		MessageBox::Show("Lieblingsplayer erfolgreich hinzugefügt.", "Erfolg", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	if (SwitchLang->Text == "Arabic") {
		FavPlayer();
		MessageBox::Show(L"تمت إضافة اللاعب المفضل بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	if (SwitchLang->Text == "French") {
		FavPlayer();
		MessageBox::Show("Lecteur Fav ajouté avec succès.", "succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void ChangeEverythingColor_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangeColorTimer->Start();
}
private: System::Void ChangeColorTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!ChangeColorExpand) {
		ChangeColorHolder->Height += 5;
		if (ChangeColorHolder->Height >= 180) {
			ChangeColorTimer->Stop();
			ChangeColorExpand = true;
		}
	}
	else {
		ChangeColorHolder->Height -= 5;
		if (ChangeColorHolder->Height <= 35) {
			ChangeColorTimer->Stop();
			ChangeColorExpand = false;
		}
	}
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SideBarLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	SwitchLang->Text = "English";
}
};
};
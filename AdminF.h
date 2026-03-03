#pragma once
#include "AdminGUICode.h"
#include <msclr/marshal_cppstd.h>
namespace FootBall1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for AdminF
	/// </summary>
	public ref class AdminF : public System::Windows::Forms::Form
	{
	public:
		AdminF(void)
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
		~AdminF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ SideBarButton;

	private: System::Windows::Forms::Label^ SideBarLabel;
	private: System::Windows::Forms::FlowLayoutPanel^ SideBarContainer;







	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ AboutButoon;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ RestartLeagueButton;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ LogoutButton;
















	private: System::Windows::Forms::Timer^ AdminMenuTransition;


















	private: System::Windows::Forms::Timer^ DashBoardTransition;
	private: System::Windows::Forms::Timer^ SideBarTimer;
	private: System::Windows::Forms::FlowLayoutPanel^ AdminMContainer;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ MenuButton;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ Season_SButton;
	private: System::Windows::Forms::Panel^ DashBoardPanel;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Button^ LeagueTableButton;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Button^ LeagueScheduleButton;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Button^ PlayerDetailsButton;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Button^ Match_ResultButton;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Button^ TeamDetailsButton;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Button^ UserFunctionButton;

private: System::Windows::Forms::TextBox^ AdminAboutText;
private: System::Windows::Forms::Panel^ AdminAboutPanel;
private: System::Windows::Forms::Panel^ UserTeamInfoButtonCont;
private: System::Windows::Forms::PictureBox^ ViewTeamInfoPIc;
private: System::Windows::Forms::Button^ UserTeamInfoButton;
private: System::Windows::Forms::ListBox^ ViewUserTeamInfo;
private: System::Windows::Forms::Panel^ UserViewTeam;
private: System::Windows::Forms::ListBox^ ViewPlayerDetailsList;
private: System::Windows::Forms::Panel^ PlayerDetailsButtonpanel;
private: System::Windows::Forms::Button^ ViewPlayerDetailBut;
private: System::Windows::Forms::PictureBox^ PlayerDetailsPic;
private: System::Windows::Forms::Panel^ ViewPlayerDetailsPanel;
private: System::Windows::Forms::ListBox^ LeagueScheduleList;
private: System::Windows::Forms::Panel^ LeagueScheduleButHolder;
private: System::Windows::Forms::PictureBox^ LeagueButtonPic;
private: System::Windows::Forms::Button^ GenerateScheduleButton;
private: System::Windows::Forms::Panel^ LeagueSchedulePanel;
private: System::Windows::Forms::ListBox^ ResultList;
private: System::Windows::Forms::Panel^ MatchResultButPanel;
private: System::Windows::Forms::Button^ ResultButton;
private: System::Windows::Forms::PictureBox^ ResultPicture;
private: System::Windows::Forms::Panel^ MatchResultPanel;
private: System::Windows::Forms::TextBox^ PlayerListText;
private: System::Windows::Forms::TextBox^ TeamViewText;
private: System::Windows::Forms::Panel^ AddTeamPanel;
private: System::Windows::Forms::Button^ AddTeamButton;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Button^ SeasonDateButton;

private: System::Windows::Forms::Panel^ AddPlayerPanel;
private: System::Windows::Forms::Button^ AddPlayerButton;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::TextBox^ StartDateText;


private: System::Windows::Forms::Button^ GenerateButton;
private: System::Windows::Forms::TextBox^ GenerateText;
private: System::Windows::Forms::Panel^ AddResultPanel;
private: System::Windows::Forms::Button^ AddResultButton;
private: System::Windows::Forms::TextBox^ MatchResultText;
private: System::Windows::Forms::ListBox^ AddTeamList;
private: System::Windows::Forms::ListBox^ AddPlayerList;
private: System::Windows::Forms::Panel^ AdminFucnHolderPanel;
private: System::Windows::Forms::Panel^ LeagueTablePanel;
private: System::Windows::Forms::Panel^ LeagueTableButtonPanel;
private: System::Windows::Forms::PictureBox^ LeagueTablePic;

private: System::Windows::Forms::Button^ ViewLeagueTableButton;
private: System::Windows::Forms::ListBox^ LeagueTableList;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::Button^ FinishedAdding;
private: System::Windows::Forms::TextBox^ AddBirthDateLabel;

private: System::Windows::Forms::TextBox^ AddPlayerNationalityLabel;




private: System::Windows::Forms::TextBox^ AddPlayerNameLabel;
private: System::Windows::Forms::TextBox^ AddPlayerNationalityText;


private: System::Windows::Forms::TextBox^ AddPlayerNameText;
private: System::Windows::Forms::DateTimePicker^ AddPlayerBirthdate;
private: System::Windows::Forms::Button^ SaveAddedPlayerButton;
private: System::Windows::Forms::Button^ CloseAddingPlayerButton;
private: System::Windows::Forms::TextBox^ FinishedSettingUpLabel;
private: System::Windows::Forms::TextBox^ AddTeamLabel;
private: System::Windows::Forms::TextBox^ AddTeamText;
private: System::Windows::Forms::Button^ CloseTeam;
private: System::Windows::Forms::Button^ SaveTeam;
private: System::Windows::Forms::Panel^ EditPlayerPanel;
private: System::Windows::Forms::Button^ EditPlayerButton;
private: System::Windows::Forms::PictureBox^ EditPlayerImage;
private: System::Windows::Forms::Button^ EditPlayerClose;

private: System::Windows::Forms::Button^ EditPlayerSave;
private: System::Windows::Forms::TextBox^ EditPlayerIDText;



private: System::Windows::Forms::TextBox^ EditPlayerIDLabel;
private: System::Windows::Forms::Button^ EditSearchButton;
private: System::Windows::Forms::TextBox^ VSLabel;



private: System::Windows::Forms::TextBox^ AddMatchResultText2;



private: System::Windows::Forms::TextBox^ AddMatchResultText1;
private: System::Windows::Forms::Button^ AddMatchResultClose;
private: System::Windows::Forms::Button^ AddMatchResultSave;
private: System::Windows::Forms::Button^ ShowTeamsButton;
private: System::Windows::Forms::Label^ AddMatchResultName2;
private: System::Windows::Forms::Label^ AddMatchResultName1;
private: System::Windows::Forms::Label^ PreivewLabel;












	private: System::ComponentModel::IContainer^ components;





	protected:
	private:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	private:
		void ShowTeamList();
		void ShowPlayerList();
		void UserTeamList();
		void UserPlayerList();
		void MatchResult();
		void MatchGenerate(int day, int month, int year);
		void LeagueTable();
		void RestartLeague();

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminF::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SideBarLabel = (gcnew System::Windows::Forms::Label());
			this->SideBarButton = (gcnew System::Windows::Forms::PictureBox());
			this->SideBarContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->AdminMContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->MenuButton = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->Season_SButton = (gcnew System::Windows::Forms::Button());
			this->DashBoardPanel = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->LeagueTableButton = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->Match_ResultButton = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->PlayerDetailsButton = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->LeagueScheduleButton = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->TeamDetailsButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->UserFunctionButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->AboutButoon = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->LogoutButton = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->RestartLeagueButton = (gcnew System::Windows::Forms::Button());
			this->AdminMenuTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->DashBoardTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->SideBarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->AdminAboutText = (gcnew System::Windows::Forms::TextBox());
			this->AdminAboutPanel = (gcnew System::Windows::Forms::Panel());
			this->UserTeamInfoButtonCont = (gcnew System::Windows::Forms::Panel());
			this->ViewTeamInfoPIc = (gcnew System::Windows::Forms::PictureBox());
			this->UserTeamInfoButton = (gcnew System::Windows::Forms::Button());
			this->ViewUserTeamInfo = (gcnew System::Windows::Forms::ListBox());
			this->UserViewTeam = (gcnew System::Windows::Forms::Panel());
			this->ViewPlayerDetailsList = (gcnew System::Windows::Forms::ListBox());
			this->PlayerDetailsButtonpanel = (gcnew System::Windows::Forms::Panel());
			this->ViewPlayerDetailBut = (gcnew System::Windows::Forms::Button());
			this->PlayerDetailsPic = (gcnew System::Windows::Forms::PictureBox());
			this->ViewPlayerDetailsPanel = (gcnew System::Windows::Forms::Panel());
			this->LeagueScheduleList = (gcnew System::Windows::Forms::ListBox());
			this->LeagueScheduleButHolder = (gcnew System::Windows::Forms::Panel());
			this->LeagueButtonPic = (gcnew System::Windows::Forms::PictureBox());
			this->GenerateScheduleButton = (gcnew System::Windows::Forms::Button());
			this->LeagueSchedulePanel = (gcnew System::Windows::Forms::Panel());
			this->ResultList = (gcnew System::Windows::Forms::ListBox());
			this->MatchResultButPanel = (gcnew System::Windows::Forms::Panel());
			this->ResultButton = (gcnew System::Windows::Forms::Button());
			this->ResultPicture = (gcnew System::Windows::Forms::PictureBox());
			this->MatchResultPanel = (gcnew System::Windows::Forms::Panel());
			this->PlayerListText = (gcnew System::Windows::Forms::TextBox());
			this->TeamViewText = (gcnew System::Windows::Forms::TextBox());
			this->AddTeamPanel = (gcnew System::Windows::Forms::Panel());
			this->AddTeamButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SeasonDateButton = (gcnew System::Windows::Forms::Button());
			this->AddPlayerPanel = (gcnew System::Windows::Forms::Panel());
			this->AddPlayerButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->StartDateText = (gcnew System::Windows::Forms::TextBox());
			this->GenerateButton = (gcnew System::Windows::Forms::Button());
			this->GenerateText = (gcnew System::Windows::Forms::TextBox());
			this->AddResultPanel = (gcnew System::Windows::Forms::Panel());
			this->MatchResultText = (gcnew System::Windows::Forms::TextBox());
			this->AddResultButton = (gcnew System::Windows::Forms::Button());
			this->AddMatchResultName2 = (gcnew System::Windows::Forms::Label());
			this->AddMatchResultName1 = (gcnew System::Windows::Forms::Label());
			this->ShowTeamsButton = (gcnew System::Windows::Forms::Button());
			this->VSLabel = (gcnew System::Windows::Forms::TextBox());
			this->AddMatchResultClose = (gcnew System::Windows::Forms::Button());
			this->AddMatchResultText1 = (gcnew System::Windows::Forms::TextBox());
			this->AddMatchResultSave = (gcnew System::Windows::Forms::Button());
			this->AddMatchResultText2 = (gcnew System::Windows::Forms::TextBox());
			this->FinishedSettingUpLabel = (gcnew System::Windows::Forms::TextBox());
			this->FinishedAdding = (gcnew System::Windows::Forms::Button());
			this->AddTeamList = (gcnew System::Windows::Forms::ListBox());
			this->AddPlayerList = (gcnew System::Windows::Forms::ListBox());
			this->AdminFucnHolderPanel = (gcnew System::Windows::Forms::Panel());
			this->PreivewLabel = (gcnew System::Windows::Forms::Label());
			this->EditSearchButton = (gcnew System::Windows::Forms::Button());
			this->EditPlayerClose = (gcnew System::Windows::Forms::Button());
			this->EditPlayerSave = (gcnew System::Windows::Forms::Button());
			this->EditPlayerIDText = (gcnew System::Windows::Forms::TextBox());
			this->EditPlayerIDLabel = (gcnew System::Windows::Forms::TextBox());
			this->EditPlayerPanel = (gcnew System::Windows::Forms::Panel());
			this->EditPlayerButton = (gcnew System::Windows::Forms::Button());
			this->EditPlayerImage = (gcnew System::Windows::Forms::PictureBox());
			this->CloseTeam = (gcnew System::Windows::Forms::Button());
			this->SaveTeam = (gcnew System::Windows::Forms::Button());
			this->AddTeamText = (gcnew System::Windows::Forms::TextBox());
			this->AddTeamLabel = (gcnew System::Windows::Forms::TextBox());
			this->CloseAddingPlayerButton = (gcnew System::Windows::Forms::Button());
			this->SaveAddedPlayerButton = (gcnew System::Windows::Forms::Button());
			this->AddPlayerBirthdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->AddPlayerNationalityText = (gcnew System::Windows::Forms::TextBox());
			this->AddPlayerNameText = (gcnew System::Windows::Forms::TextBox());
			this->AddBirthDateLabel = (gcnew System::Windows::Forms::TextBox());
			this->AddPlayerNationalityLabel = (gcnew System::Windows::Forms::TextBox());
			this->AddPlayerNameLabel = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LeagueTablePanel = (gcnew System::Windows::Forms::Panel());
			this->LeagueTableButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->LeagueTablePic = (gcnew System::Windows::Forms::PictureBox());
			this->ViewLeagueTableButton = (gcnew System::Windows::Forms::Button());
			this->LeagueTableList = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SideBarButton))->BeginInit();
			this->SideBarContainer->SuspendLayout();
			this->AdminMContainer->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->DashBoardPanel->SuspendLayout();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->AdminAboutPanel->SuspendLayout();
			this->UserTeamInfoButtonCont->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewTeamInfoPIc))->BeginInit();
			this->UserViewTeam->SuspendLayout();
			this->PlayerDetailsButtonpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerDetailsPic))->BeginInit();
			this->ViewPlayerDetailsPanel->SuspendLayout();
			this->LeagueScheduleButHolder->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeagueButtonPic))->BeginInit();
			this->LeagueSchedulePanel->SuspendLayout();
			this->MatchResultButPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultPicture))->BeginInit();
			this->MatchResultPanel->SuspendLayout();
			this->AddTeamPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->AddPlayerPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->AddResultPanel->SuspendLayout();
			this->AdminFucnHolderPanel->SuspendLayout();
			this->EditPlayerPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditPlayerImage))->BeginInit();
			this->LeagueTablePanel->SuspendLayout();
			this->LeagueTableButtonPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeagueTablePic))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->panel1->Controls->Add(this->SideBarLabel);
			this->panel1->Controls->Add(this->SideBarButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1419, 48);
			this->panel1->TabIndex = 0;
			// 
			// SideBarLabel
			// 
			this->SideBarLabel->AutoSize = true;
			this->SideBarLabel->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SideBarLabel->ForeColor = System::Drawing::Color::Black;
			this->SideBarLabel->Location = System::Drawing::Point(46, 9);
			this->SideBarLabel->Name = L"SideBarLabel";
			this->SideBarLabel->Size = System::Drawing::Size(343, 29);
			this->SideBarLabel->TabIndex = 2;
			this->SideBarLabel->Text = L"Welcome To ASU League. ";
			// 
			// SideBarButton
			// 
			this->SideBarButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SideBarButton.Image")));
			this->SideBarButton->Location = System::Drawing::Point(0, 0);
			this->SideBarButton->Name = L"SideBarButton";
			this->SideBarButton->Size = System::Drawing::Size(43, 48);
			this->SideBarButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->SideBarButton->TabIndex = 1;
			this->SideBarButton->TabStop = false;
			this->SideBarButton->Click += gcnew System::EventHandler(this, &AdminF::SideBarButton_Click);
			// 
			// SideBarContainer
			// 
			this->SideBarContainer->BackColor = System::Drawing::SystemColors::InfoText;
			this->SideBarContainer->Controls->Add(this->AdminMContainer);
			this->SideBarContainer->Controls->Add(this->DashBoardPanel);
			this->SideBarContainer->Controls->Add(this->panel3);
			this->SideBarContainer->Controls->Add(this->panel5);
			this->SideBarContainer->Controls->Add(this->panel4);
			this->SideBarContainer->Dock = System::Windows::Forms::DockStyle::Left;
			this->SideBarContainer->Location = System::Drawing::Point(0, 48);
			this->SideBarContainer->Name = L"SideBarContainer";
			this->SideBarContainer->Size = System::Drawing::Size(43, 735);
			this->SideBarContainer->TabIndex = 1;
			this->SideBarContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminF::SideBarContainer_Paint);
			// 
			// AdminMContainer
			// 
			this->AdminMContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->AdminMContainer->Controls->Add(this->panel6);
			this->AdminMContainer->Controls->Add(this->panel7);
			this->AdminMContainer->Location = System::Drawing::Point(3, 3);
			this->AdminMContainer->Name = L"AdminMContainer";
			this->AdminMContainer->Size = System::Drawing::Size(359, 53);
			this->AdminMContainer->TabIndex = 5;
			this->AdminMContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminF::AdminMContainer_Paint);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->pictureBox6);
			this->panel6->Controls->Add(this->MenuButton);
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(356, 51);
			this->panel6->TabIndex = 6;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(2, 17);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(27, 31);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// MenuButton
			// 
			this->MenuButton->BackColor = System::Drawing::SystemColors::InfoText;
			this->MenuButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MenuButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->MenuButton->Location = System::Drawing::Point(-118, -20);
			this->MenuButton->Name = L"MenuButton";
			this->MenuButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->MenuButton->Size = System::Drawing::Size(476, 97);
			this->MenuButton->TabIndex = 2;
			this->MenuButton->Text = L"Admin Menu";
			this->MenuButton->UseVisualStyleBackColor = false;
			this->MenuButton->Click += gcnew System::EventHandler(this, &AdminF::MenuButton_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->pictureBox7);
			this->panel7->Controls->Add(this->Season_SButton);
			this->panel7->Location = System::Drawing::Point(3, 60);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(330, 55);
			this->panel7->TabIndex = 7;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(7, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(27, 31);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox7->TabIndex = 4;
			this->pictureBox7->TabStop = false;
			// 
			// Season_SButton
			// 
			this->Season_SButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Season_SButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Season_SButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Season_SButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Season_SButton->Location = System::Drawing::Point(-108, -5);
			this->Season_SButton->Name = L"Season_SButton";
			this->Season_SButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->Season_SButton->Size = System::Drawing::Size(463, 63);
			this->Season_SButton->TabIndex = 2;
			this->Season_SButton->Text = L"Season Settings";
			this->Season_SButton->UseVisualStyleBackColor = false;
			this->Season_SButton->Click += gcnew System::EventHandler(this, &AdminF::Season_SButton_Click);
			// 
			// DashBoardPanel
			// 
			this->DashBoardPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->DashBoardPanel->Controls->Add(this->panel14);
			this->DashBoardPanel->Controls->Add(this->panel12);
			this->DashBoardPanel->Controls->Add(this->panel11);
			this->DashBoardPanel->Controls->Add(this->panel13);
			this->DashBoardPanel->Controls->Add(this->panel10);
			this->DashBoardPanel->Controls->Add(this->panel2);
			this->DashBoardPanel->Location = System::Drawing::Point(3, 62);
			this->DashBoardPanel->Name = L"DashBoardPanel";
			this->DashBoardPanel->Size = System::Drawing::Size(333, 44);
			this->DashBoardPanel->TabIndex = 5;
			this->DashBoardPanel->Visible = false;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->pictureBox14);
			this->panel14->Controls->Add(this->LeagueTableButton);
			this->panel14->Location = System::Drawing::Point(0, 253);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(327, 57);
			this->panel14->TabIndex = 10;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(5, 10);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(27, 31);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox14->TabIndex = 4;
			this->pictureBox14->TabStop = false;
			// 
			// LeagueTableButton
			// 
			this->LeagueTableButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->LeagueTableButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LeagueTableButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeagueTableButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LeagueTableButton->Location = System::Drawing::Point(-79, 0);
			this->LeagueTableButton->Name = L"LeagueTableButton";
			this->LeagueTableButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->LeagueTableButton->Size = System::Drawing::Size(419, 57);
			this->LeagueTableButton->TabIndex = 2;
			this->LeagueTableButton->Text = L"View League Table";
			this->LeagueTableButton->UseVisualStyleBackColor = false;
			this->LeagueTableButton->Visible = false;
			this->LeagueTableButton->Click += gcnew System::EventHandler(this, &AdminF::LeagueTableButton_Click);
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->pictureBox12);
			this->panel12->Controls->Add(this->Match_ResultButton);
			this->panel12->Location = System::Drawing::Point(3, 206);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(321, 51);
			this->panel12->TabIndex = 9;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(5, 10);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(27, 31);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox12->TabIndex = 4;
			this->pictureBox12->TabStop = false;
			// 
			// Match_ResultButton
			// 
			this->Match_ResultButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Match_ResultButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Match_ResultButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Match_ResultButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Match_ResultButton->Location = System::Drawing::Point(-41, 1);
			this->Match_ResultButton->Name = L"Match_ResultButton";
			this->Match_ResultButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->Match_ResultButton->Size = System::Drawing::Size(381, 51);
			this->Match_ResultButton->TabIndex = 2;
			this->Match_ResultButton->Text = L"View Match and Results";
			this->Match_ResultButton->UseVisualStyleBackColor = false;
			this->Match_ResultButton->Visible = false;
			this->Match_ResultButton->Click += gcnew System::EventHandler(this, &AdminF::Match_ResultButton_Click);
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->pictureBox11);
			this->panel11->Controls->Add(this->PlayerDetailsButton);
			this->panel11->Location = System::Drawing::Point(3, 99);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(324, 61);
			this->panel11->TabIndex = 7;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(5, 10);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(27, 31);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox11->TabIndex = 4;
			this->pictureBox11->TabStop = false;
			// 
			// PlayerDetailsButton
			// 
			this->PlayerDetailsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->PlayerDetailsButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->PlayerDetailsButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerDetailsButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->PlayerDetailsButton->Location = System::Drawing::Point(-101, 0);
			this->PlayerDetailsButton->Name = L"PlayerDetailsButton";
			this->PlayerDetailsButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->PlayerDetailsButton->Size = System::Drawing::Size(464, 61);
			this->PlayerDetailsButton->TabIndex = 2;
			this->PlayerDetailsButton->Text = L"View Player Details";
			this->PlayerDetailsButton->UseVisualStyleBackColor = false;
			this->PlayerDetailsButton->Visible = false;
			this->PlayerDetailsButton->Click += gcnew System::EventHandler(this, &AdminF::PlayerDetailsButton_Click);
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->pictureBox13);
			this->panel13->Controls->Add(this->LeagueScheduleButton);
			this->panel13->Location = System::Drawing::Point(3, 159);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(321, 60);
			this->panel13->TabIndex = 8;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(5, 10);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(27, 31);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox13->TabIndex = 4;
			this->pictureBox13->TabStop = false;
			// 
			// LeagueScheduleButton
			// 
			this->LeagueScheduleButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->LeagueScheduleButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LeagueScheduleButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeagueScheduleButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LeagueScheduleButton->Location = System::Drawing::Point(-29, -8);
			this->LeagueScheduleButton->Name = L"LeagueScheduleButton";
			this->LeagueScheduleButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->LeagueScheduleButton->Size = System::Drawing::Size(348, 68);
			this->LeagueScheduleButton->TabIndex = 2;
			this->LeagueScheduleButton->Text = L"View League Schedule";
			this->LeagueScheduleButton->UseVisualStyleBackColor = false;
			this->LeagueScheduleButton->Visible = false;
			this->LeagueScheduleButton->Click += gcnew System::EventHandler(this, &AdminF::LeagueScheduleButton_Click);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->pictureBox10);
			this->panel10->Controls->Add(this->TeamDetailsButton);
			this->panel10->Location = System::Drawing::Point(3, 49);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(321, 55);
			this->panel10->TabIndex = 6;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(5, 10);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(27, 31);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox10->TabIndex = 4;
			this->pictureBox10->TabStop = false;
			// 
			// TeamDetailsButton
			// 
			this->TeamDetailsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->TeamDetailsButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->TeamDetailsButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TeamDetailsButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TeamDetailsButton->Location = System::Drawing::Point(-101, -5);
			this->TeamDetailsButton->Name = L"TeamDetailsButton";
			this->TeamDetailsButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->TeamDetailsButton->Size = System::Drawing::Size(458, 61);
			this->TeamDetailsButton->TabIndex = 2;
			this->TeamDetailsButton->Text = L"View Team Details";
			this->TeamDetailsButton->UseVisualStyleBackColor = false;
			this->TeamDetailsButton->Visible = false;
			this->TeamDetailsButton->Click += gcnew System::EventHandler(this, &AdminF::TeamDetailsButton_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->UserFunctionButton);
			this->panel2->Location = System::Drawing::Point(-3, -12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(337, 63);
			this->panel2->TabIndex = 3;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(7, 18);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(27, 31);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// UserFunctionButton
			// 
			this->UserFunctionButton->BackColor = System::Drawing::SystemColors::InfoText;
			this->UserFunctionButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UserFunctionButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserFunctionButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->UserFunctionButton->Location = System::Drawing::Point(-127, -2);
			this->UserFunctionButton->Name = L"UserFunctionButton";
			this->UserFunctionButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->UserFunctionButton->Size = System::Drawing::Size(516, 73);
			this->UserFunctionButton->TabIndex = 2;
			this->UserFunctionButton->Text = L"User Function";
			this->UserFunctionButton->UseVisualStyleBackColor = false;
			this->UserFunctionButton->Visible = false;
			this->UserFunctionButton->Click += gcnew System::EventHandler(this, &AdminF::UserFunctionButton_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->AboutButoon);
			this->panel3->Location = System::Drawing::Point(3, 112);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(363, 60);
			this->panel3->TabIndex = 4;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(5, 10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(27, 31);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// AboutButoon
			// 
			this->AboutButoon->BackColor = System::Drawing::SystemColors::InfoText;
			this->AboutButoon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AboutButoon->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AboutButoon->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->AboutButoon->Location = System::Drawing::Point(-229, 3);
			this->AboutButoon->Name = L"AboutButoon";
			this->AboutButoon->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->AboutButoon->Size = System::Drawing::Size(647, 49);
			this->AboutButoon->TabIndex = 2;
			this->AboutButoon->Text = L"About";
			this->AboutButoon->UseVisualStyleBackColor = false;
			this->AboutButoon->Click += gcnew System::EventHandler(this, &AdminF::AboutButoon_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->pictureBox5);
			this->panel5->Controls->Add(this->LogoutButton);
			this->panel5->Location = System::Drawing::Point(3, 178);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(342, 49);
			this->panel5->TabIndex = 5;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(7, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(27, 31);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// LogoutButton
			// 
			this->LogoutButton->BackColor = System::Drawing::SystemColors::InfoText;
			this->LogoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LogoutButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LogoutButton->Location = System::Drawing::Point(-155, -3);
			this->LogoutButton->Name = L"LogoutButton";
			this->LogoutButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->LogoutButton->Size = System::Drawing::Size(508, 54);
			this->LogoutButton->TabIndex = 2;
			this->LogoutButton->Text = L"Logout";
			this->LogoutButton->UseVisualStyleBackColor = false;
			this->LogoutButton->Click += gcnew System::EventHandler(this, &AdminF::LogoutButton_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->RestartLeagueButton);
			this->panel4->Location = System::Drawing::Point(3, 233);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(342, 49);
			this->panel4->TabIndex = 5;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::InfoText;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 6);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(38, 40);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// RestartLeagueButton
			// 
			this->RestartLeagueButton->BackColor = System::Drawing::SystemColors::InfoText;
			this->RestartLeagueButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RestartLeagueButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RestartLeagueButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RestartLeagueButton->Location = System::Drawing::Point(-122, 0);
			this->RestartLeagueButton->Name = L"RestartLeagueButton";
			this->RestartLeagueButton->Padding = System::Windows::Forms::Padding(25, 0, 0, 0);
			this->RestartLeagueButton->Size = System::Drawing::Size(499, 49);
			this->RestartLeagueButton->TabIndex = 2;
			this->RestartLeagueButton->Text = L"Restart League";
			this->RestartLeagueButton->UseVisualStyleBackColor = false;
			this->RestartLeagueButton->Click += gcnew System::EventHandler(this, &AdminF::SettingsButton_Click);
			// 
			// AdminMenuTransition
			// 
			this->AdminMenuTransition->Interval = 10;
			this->AdminMenuTransition->Tick += gcnew System::EventHandler(this, &AdminF::MenuTransition_Tick);
			// 
			// DashBoardTransition
			// 
			this->DashBoardTransition->Interval = 10;
			this->DashBoardTransition->Tick += gcnew System::EventHandler(this, &AdminF::DashBoardTransition_Tick);
			// 
			// SideBarTimer
			// 
			this->SideBarTimer->Interval = 10;
			this->SideBarTimer->Tick += gcnew System::EventHandler(this, &AdminF::SideBarTimer_Tick);
			// 
			// AdminAboutText
			// 
			this->AdminAboutText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->AdminAboutText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AdminAboutText->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminAboutText->Location = System::Drawing::Point(-3, 0);
			this->AdminAboutText->Multiline = true;
			this->AdminAboutText->Name = L"AdminAboutText";
			this->AdminAboutText->ReadOnly = true;
			this->AdminAboutText->Size = System::Drawing::Size(983, 710);
			this->AdminAboutText->TabIndex = 0;
			// 
			// AdminAboutPanel
			// 
			this->AdminAboutPanel->Controls->Add(this->AdminAboutText);
			this->AdminAboutPanel->Enabled = false;
			this->AdminAboutPanel->Location = System::Drawing::Point(44, 51);
			this->AdminAboutPanel->Name = L"AdminAboutPanel";
			this->AdminAboutPanel->Size = System::Drawing::Size(1112, 713);
			this->AdminAboutPanel->TabIndex = 2;
			this->AdminAboutPanel->Visible = false;
			// 
			// UserTeamInfoButtonCont
			// 
			this->UserTeamInfoButtonCont->Controls->Add(this->ViewTeamInfoPIc);
			this->UserTeamInfoButtonCont->Controls->Add(this->UserTeamInfoButton);
			this->UserTeamInfoButtonCont->Location = System::Drawing::Point(313, 532);
			this->UserTeamInfoButtonCont->Name = L"UserTeamInfoButtonCont";
			this->UserTeamInfoButtonCont->Size = System::Drawing::Size(369, 43);
			this->UserTeamInfoButtonCont->TabIndex = 1;
			// 
			// ViewTeamInfoPIc
			// 
			this->ViewTeamInfoPIc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewTeamInfoPIc.Image")));
			this->ViewTeamInfoPIc->Location = System::Drawing::Point(47, 5);
			this->ViewTeamInfoPIc->Name = L"ViewTeamInfoPIc";
			this->ViewTeamInfoPIc->Size = System::Drawing::Size(44, 35);
			this->ViewTeamInfoPIc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ViewTeamInfoPIc->TabIndex = 1;
			this->ViewTeamInfoPIc->TabStop = false;
			this->ViewTeamInfoPIc->Visible = false;
			// 
			// UserTeamInfoButton
			// 
			this->UserTeamInfoButton->BackColor = System::Drawing::Color::Silver;
			this->UserTeamInfoButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UserTeamInfoButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->UserTeamInfoButton->Location = System::Drawing::Point(97, 5);
			this->UserTeamInfoButton->Name = L"UserTeamInfoButton";
			this->UserTeamInfoButton->Size = System::Drawing::Size(257, 35);
			this->UserTeamInfoButton->TabIndex = 0;
			this->UserTeamInfoButton->Text = L"View Team Info";
			this->UserTeamInfoButton->UseVisualStyleBackColor = false;
			this->UserTeamInfoButton->Visible = false;
			this->UserTeamInfoButton->Click += gcnew System::EventHandler(this, &AdminF::button1_Click_3);
			// 
			// ViewUserTeamInfo
			// 
			this->ViewUserTeamInfo->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewUserTeamInfo->FormattingEnabled = true;
			this->ViewUserTeamInfo->ItemHeight = 20;
			this->ViewUserTeamInfo->Location = System::Drawing::Point(20, 10);
			this->ViewUserTeamInfo->Name = L"ViewUserTeamInfo";
			this->ViewUserTeamInfo->Size = System::Drawing::Size(1100, 504);
			this->ViewUserTeamInfo->TabIndex = 2;
			this->ViewUserTeamInfo->Visible = false;
			// 
			// UserViewTeam
			// 
			this->UserViewTeam->Controls->Add(this->ViewUserTeamInfo);
			this->UserViewTeam->Controls->Add(this->UserTeamInfoButtonCont);
			this->UserViewTeam->Location = System::Drawing::Point(44, 51);
			this->UserViewTeam->Name = L"UserViewTeam";
			this->UserViewTeam->Size = System::Drawing::Size(1128, 659);
			this->UserViewTeam->TabIndex = 10;
			this->UserViewTeam->Visible = false;
			// 
			// ViewPlayerDetailsList
			// 
			this->ViewPlayerDetailsList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewPlayerDetailsList->FormattingEnabled = true;
			this->ViewPlayerDetailsList->ItemHeight = 20;
			this->ViewPlayerDetailsList->Location = System::Drawing::Point(20, 10);
			this->ViewPlayerDetailsList->Name = L"ViewPlayerDetailsList";
			this->ViewPlayerDetailsList->Size = System::Drawing::Size(1100, 504);
			this->ViewPlayerDetailsList->TabIndex = 0;
			this->ViewPlayerDetailsList->Visible = false;
			// 
			// PlayerDetailsButtonpanel
			// 
			this->PlayerDetailsButtonpanel->Controls->Add(this->ViewPlayerDetailBut);
			this->PlayerDetailsButtonpanel->Controls->Add(this->PlayerDetailsPic);
			this->PlayerDetailsButtonpanel->Location = System::Drawing::Point(313, 532);
			this->PlayerDetailsButtonpanel->Name = L"PlayerDetailsButtonpanel";
			this->PlayerDetailsButtonpanel->Size = System::Drawing::Size(369, 43);
			this->PlayerDetailsButtonpanel->TabIndex = 1;
			this->PlayerDetailsButtonpanel->Visible = false;
			// 
			// ViewPlayerDetailBut
			// 
			this->ViewPlayerDetailBut->BackColor = System::Drawing::Color::Silver;
			this->ViewPlayerDetailBut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewPlayerDetailBut->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewPlayerDetailBut->Location = System::Drawing::Point(97, 5);
			this->ViewPlayerDetailBut->Name = L"ViewPlayerDetailBut";
			this->ViewPlayerDetailBut->Size = System::Drawing::Size(257, 35);
			this->ViewPlayerDetailBut->TabIndex = 1;
			this->ViewPlayerDetailBut->Text = L"View Player Details";
			this->ViewPlayerDetailBut->UseVisualStyleBackColor = false;
			this->ViewPlayerDetailBut->Visible = false;
			this->ViewPlayerDetailBut->Click += gcnew System::EventHandler(this, &AdminF::button1_Click_4);
			// 
			// PlayerDetailsPic
			// 
			this->PlayerDetailsPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerDetailsPic.Image")));
			this->PlayerDetailsPic->Location = System::Drawing::Point(47, 5);
			this->PlayerDetailsPic->Name = L"PlayerDetailsPic";
			this->PlayerDetailsPic->Size = System::Drawing::Size(44, 35);
			this->PlayerDetailsPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->PlayerDetailsPic->TabIndex = 0;
			this->PlayerDetailsPic->TabStop = false;
			this->PlayerDetailsPic->Visible = false;
			// 
			// ViewPlayerDetailsPanel
			// 
			this->ViewPlayerDetailsPanel->Controls->Add(this->PlayerDetailsButtonpanel);
			this->ViewPlayerDetailsPanel->Controls->Add(this->ViewPlayerDetailsList);
			this->ViewPlayerDetailsPanel->Location = System::Drawing::Point(44, 51);
			this->ViewPlayerDetailsPanel->Name = L"ViewPlayerDetailsPanel";
			this->ViewPlayerDetailsPanel->Size = System::Drawing::Size(1146, 607);
			this->ViewPlayerDetailsPanel->TabIndex = 11;
			this->ViewPlayerDetailsPanel->Visible = false;
			// 
			// LeagueScheduleList
			// 
			this->LeagueScheduleList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LeagueScheduleList->FormattingEnabled = true;
			this->LeagueScheduleList->ItemHeight = 20;
			this->LeagueScheduleList->Location = System::Drawing::Point(20, 10);
			this->LeagueScheduleList->Name = L"LeagueScheduleList";
			this->LeagueScheduleList->Size = System::Drawing::Size(1100, 504);
			this->LeagueScheduleList->TabIndex = 3;
			this->LeagueScheduleList->Visible = false;
			// 
			// LeagueScheduleButHolder
			// 
			this->LeagueScheduleButHolder->Controls->Add(this->LeagueButtonPic);
			this->LeagueScheduleButHolder->Controls->Add(this->GenerateScheduleButton);
			this->LeagueScheduleButHolder->Location = System::Drawing::Point(313, 532);
			this->LeagueScheduleButHolder->Name = L"LeagueScheduleButHolder";
			this->LeagueScheduleButHolder->Size = System::Drawing::Size(369, 43);
			this->LeagueScheduleButHolder->TabIndex = 4;
			this->LeagueScheduleButHolder->Visible = false;
			// 
			// LeagueButtonPic
			// 
			this->LeagueButtonPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LeagueButtonPic.Image")));
			this->LeagueButtonPic->Location = System::Drawing::Point(47, 5);
			this->LeagueButtonPic->Name = L"LeagueButtonPic";
			this->LeagueButtonPic->Size = System::Drawing::Size(44, 35);
			this->LeagueButtonPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->LeagueButtonPic->TabIndex = 1;
			this->LeagueButtonPic->TabStop = false;
			this->LeagueButtonPic->Visible = false;
			// 
			// GenerateScheduleButton
			// 
			this->GenerateScheduleButton->BackColor = System::Drawing::Color::Silver;
			this->GenerateScheduleButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GenerateScheduleButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GenerateScheduleButton->Location = System::Drawing::Point(97, 5);
			this->GenerateScheduleButton->Name = L"GenerateScheduleButton";
			this->GenerateScheduleButton->Size = System::Drawing::Size(257, 35);
			this->GenerateScheduleButton->TabIndex = 0;
			this->GenerateScheduleButton->Text = L"Generate schedule";
			this->GenerateScheduleButton->UseVisualStyleBackColor = false;
			this->GenerateScheduleButton->Visible = false;
			this->GenerateScheduleButton->Click += gcnew System::EventHandler(this, &AdminF::GenerateScheduleButton_Click);
			// 
			// LeagueSchedulePanel
			// 
			this->LeagueSchedulePanel->Controls->Add(this->LeagueScheduleButHolder);
			this->LeagueSchedulePanel->Controls->Add(this->LeagueScheduleList);
			this->LeagueSchedulePanel->Location = System::Drawing::Point(44, 51);
			this->LeagueSchedulePanel->Name = L"LeagueSchedulePanel";
			this->LeagueSchedulePanel->Size = System::Drawing::Size(1141, 698);
			this->LeagueSchedulePanel->TabIndex = 13;
			this->LeagueSchedulePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminF::LeagueSchedulePanel_Paint);
			// 
			// ResultList
			// 
			this->ResultList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultList->FormattingEnabled = true;
			this->ResultList->ItemHeight = 20;
			this->ResultList->Location = System::Drawing::Point(20, 10);
			this->ResultList->Name = L"ResultList";
			this->ResultList->Size = System::Drawing::Size(1100, 504);
			this->ResultList->TabIndex = 2;
			this->ResultList->Visible = false;
			// 
			// MatchResultButPanel
			// 
			this->MatchResultButPanel->Controls->Add(this->ResultButton);
			this->MatchResultButPanel->Controls->Add(this->ResultPicture);
			this->MatchResultButPanel->Location = System::Drawing::Point(313, 532);
			this->MatchResultButPanel->Name = L"MatchResultButPanel";
			this->MatchResultButPanel->Size = System::Drawing::Size(369, 43);
			this->MatchResultButPanel->TabIndex = 2;
			this->MatchResultButPanel->Visible = false;
			// 
			// ResultButton
			// 
			this->ResultButton->BackColor = System::Drawing::Color::DarkGray;
			this->ResultButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ResultButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultButton->Location = System::Drawing::Point(97, 5);
			this->ResultButton->Name = L"ResultButton";
			this->ResultButton->Size = System::Drawing::Size(257, 35);
			this->ResultButton->TabIndex = 1;
			this->ResultButton->Text = L"View Match Result ";
			this->ResultButton->UseVisualStyleBackColor = false;
			this->ResultButton->Visible = false;
			this->ResultButton->Click += gcnew System::EventHandler(this, &AdminF::ResultButton_Click);
			// 
			// ResultPicture
			// 
			this->ResultPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResultPicture.Image")));
			this->ResultPicture->Location = System::Drawing::Point(47, 5);
			this->ResultPicture->Name = L"ResultPicture";
			this->ResultPicture->Size = System::Drawing::Size(44, 35);
			this->ResultPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ResultPicture->TabIndex = 0;
			this->ResultPicture->TabStop = false;
			this->ResultPicture->Visible = false;
			// 
			// MatchResultPanel
			// 
			this->MatchResultPanel->Controls->Add(this->MatchResultButPanel);
			this->MatchResultPanel->Controls->Add(this->ResultList);
			this->MatchResultPanel->Location = System::Drawing::Point(44, 51);
			this->MatchResultPanel->Name = L"MatchResultPanel";
			this->MatchResultPanel->Size = System::Drawing::Size(1135, 668);
			this->MatchResultPanel->TabIndex = 3;
			this->MatchResultPanel->Visible = false;
			// 
			// PlayerListText
			// 
			this->PlayerListText->Enabled = false;
			this->PlayerListText->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerListText->Location = System::Drawing::Point(13, 325);
			this->PlayerListText->Name = L"PlayerListText";
			this->PlayerListText->ReadOnly = true;
			this->PlayerListText->Size = System::Drawing::Size(414, 27);
			this->PlayerListText->TabIndex = 8;
			this->PlayerListText->Text = L"Add Player Before Season Start";
			this->PlayerListText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PlayerListText->Visible = false;
			// 
			// TeamViewText
			// 
			this->TeamViewText->Enabled = false;
			this->TeamViewText->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TeamViewText->Location = System::Drawing::Point(14, 127);
			this->TeamViewText->Name = L"TeamViewText";
			this->TeamViewText->ReadOnly = true;
			this->TeamViewText->Size = System::Drawing::Size(413, 27);
			this->TeamViewText->TabIndex = 4;
			this->TeamViewText->Text = L"Add The Teams Before Season Start";
			this->TeamViewText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->TeamViewText->Visible = false;
			// 
			// AddTeamPanel
			// 
			this->AddTeamPanel->Controls->Add(this->AddTeamButton);
			this->AddTeamPanel->Controls->Add(this->pictureBox1);
			this->AddTeamPanel->Location = System::Drawing::Point(433, 211);
			this->AddTeamPanel->Name = L"AddTeamPanel";
			this->AddTeamPanel->Size = System::Drawing::Size(212, 36);
			this->AddTeamPanel->TabIndex = 5;
			this->AddTeamPanel->Visible = false;
			// 
			// AddTeamButton
			// 
			this->AddTeamButton->BackColor = System::Drawing::Color::Silver;
			this->AddTeamButton->Enabled = false;
			this->AddTeamButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddTeamButton->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTeamButton->Location = System::Drawing::Point(31, -1);
			this->AddTeamButton->Name = L"AddTeamButton";
			this->AddTeamButton->Size = System::Drawing::Size(181, 37);
			this->AddTeamButton->TabIndex = 1;
			this->AddTeamButton->Text = L"Add Team";
			this->AddTeamButton->UseVisualStyleBackColor = false;
			this->AddTeamButton->Click += gcnew System::EventHandler(this, &AdminF::AddTeamButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Silver;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(31, 29);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// SeasonDateButton
			// 
			this->SeasonDateButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SeasonDateButton->Location = System::Drawing::Point(705, 23);
			this->SeasonDateButton->Name = L"SeasonDateButton";
			this->SeasonDateButton->Size = System::Drawing::Size(155, 27);
			this->SeasonDateButton->TabIndex = 3;
			this->SeasonDateButton->Text = L"Set Start Date";
			this->SeasonDateButton->UseVisualStyleBackColor = true;
			this->SeasonDateButton->Visible = false;
			this->SeasonDateButton->Click += gcnew System::EventHandler(this, &AdminF::SeasonDateButton_Click);
			// 
			// AddPlayerPanel
			// 
			this->AddPlayerPanel->Controls->Add(this->AddPlayerButton);
			this->AddPlayerPanel->Controls->Add(this->pictureBox9);
			this->AddPlayerPanel->Location = System::Drawing::Point(433, 405);
			this->AddPlayerPanel->Name = L"AddPlayerPanel";
			this->AddPlayerPanel->Size = System::Drawing::Size(212, 36);
			this->AddPlayerPanel->TabIndex = 6;
			this->AddPlayerPanel->Visible = false;
			// 
			// AddPlayerButton
			// 
			this->AddPlayerButton->BackColor = System::Drawing::Color::Silver;
			this->AddPlayerButton->Enabled = false;
			this->AddPlayerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddPlayerButton->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddPlayerButton->Location = System::Drawing::Point(31, -1);
			this->AddPlayerButton->Name = L"AddPlayerButton";
			this->AddPlayerButton->Size = System::Drawing::Size(181, 37);
			this->AddPlayerButton->TabIndex = 1;
			this->AddPlayerButton->Text = L"Add Player";
			this->AddPlayerButton->UseVisualStyleBackColor = false;
			this->AddPlayerButton->Click += gcnew System::EventHandler(this, &AdminF::AddPlayerButton_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Silver;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(3, 4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(26, 29);
			this->pictureBox9->TabIndex = 0;
			this->pictureBox9->TabStop = false;
			// 
			// StartDateText
			// 
			this->StartDateText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->StartDateText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->StartDateText->Enabled = false;
			this->StartDateText->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartDateText->Location = System::Drawing::Point(168, 26);
			this->StartDateText->Name = L"StartDateText";
			this->StartDateText->ReadOnly = true;
			this->StartDateText->Size = System::Drawing::Size(196, 20);
			this->StartDateText->TabIndex = 1;
			this->StartDateText->Text = L"Season Start Date ";
			this->StartDateText->Visible = false;
			// 
			// GenerateButton
			// 
			this->GenerateButton->BackColor = System::Drawing::Color::Silver;
			this->GenerateButton->Enabled = false;
			this->GenerateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GenerateButton->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GenerateButton->Location = System::Drawing::Point(18, 86);
			this->GenerateButton->Name = L"GenerateButton";
			this->GenerateButton->Size = System::Drawing::Size(140, 40);
			this->GenerateButton->TabIndex = 1;
			this->GenerateButton->Text = L"Generate";
			this->GenerateButton->UseVisualStyleBackColor = false;
			this->GenerateButton->Visible = false;
			this->GenerateButton->Click += gcnew System::EventHandler(this, &AdminF::GenerateButton_Click);
			// 
			// GenerateText
			// 
			this->GenerateText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->GenerateText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->GenerateText->Enabled = false;
			this->GenerateText->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GenerateText->Location = System::Drawing::Point(1, 25);
			this->GenerateText->Multiline = true;
			this->GenerateText->Name = L"GenerateText";
			this->GenerateText->ReadOnly = true;
			this->GenerateText->Size = System::Drawing::Size(250, 22);
			this->GenerateText->TabIndex = 0;
			this->GenerateText->Text = L"Generate Match Schedule";
			this->GenerateText->Visible = false;
			this->GenerateText->TextChanged += gcnew System::EventHandler(this, &AdminF::GenerateText_TextChanged);
			// 
			// AddResultPanel
			// 
			this->AddResultPanel->Controls->Add(this->MatchResultText);
			this->AddResultPanel->Controls->Add(this->GenerateText);
			this->AddResultPanel->Controls->Add(this->AddResultButton);
			this->AddResultPanel->Controls->Add(this->AddMatchResultName2);
			this->AddResultPanel->Controls->Add(this->GenerateButton);
			this->AddResultPanel->Controls->Add(this->AddMatchResultName1);
			this->AddResultPanel->Controls->Add(this->ShowTeamsButton);
			this->AddResultPanel->Controls->Add(this->VSLabel);
			this->AddResultPanel->Controls->Add(this->AddMatchResultClose);
			this->AddResultPanel->Controls->Add(this->AddMatchResultText1);
			this->AddResultPanel->Controls->Add(this->AddMatchResultSave);
			this->AddResultPanel->Controls->Add(this->AddMatchResultText2);
			this->AddResultPanel->Location = System::Drawing::Point(3, 552);
			this->AddResultPanel->Name = L"AddResultPanel";
			this->AddResultPanel->Size = System::Drawing::Size(790, 177);
			this->AddResultPanel->TabIndex = 11;
			this->AddResultPanel->Visible = false;
			// 
			// MatchResultText
			// 
			this->MatchResultText->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->MatchResultText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MatchResultText->Enabled = false;
			this->MatchResultText->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MatchResultText->Location = System::Drawing::Point(273, 28);
			this->MatchResultText->Multiline = true;
			this->MatchResultText->Name = L"MatchResultText";
			this->MatchResultText->ReadOnly = true;
			this->MatchResultText->Size = System::Drawing::Size(213, 22);
			this->MatchResultText->TabIndex = 0;
			this->MatchResultText->Text = L"Add Match Result";
			this->MatchResultText->Visible = false;
			// 
			// AddResultButton
			// 
			this->AddResultButton->BackColor = System::Drawing::Color::Silver;
			this->AddResultButton->Enabled = false;
			this->AddResultButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddResultButton->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddResultButton->Location = System::Drawing::Point(279, 86);
			this->AddResultButton->Name = L"AddResultButton";
			this->AddResultButton->Size = System::Drawing::Size(138, 40);
			this->AddResultButton->TabIndex = 1;
			this->AddResultButton->Text = L"Add Result";
			this->AddResultButton->UseVisualStyleBackColor = false;
			this->AddResultButton->Visible = false;
			this->AddResultButton->Click += gcnew System::EventHandler(this, &AdminF::AddResultButton_Click);
			// 
			// AddMatchResultName2
			// 
			this->AddMatchResultName2->AutoSize = true;
			this->AddMatchResultName2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddMatchResultName2->Location = System::Drawing::Point(484, 105);
			this->AddMatchResultName2->Name = L"AddMatchResultName2";
			this->AddMatchResultName2->Size = System::Drawing::Size(0, 20);
			this->AddMatchResultName2->TabIndex = 46;
			this->AddMatchResultName2->Visible = false;
			// 
			// AddMatchResultName1
			// 
			this->AddMatchResultName1->AutoSize = true;
			this->AddMatchResultName1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddMatchResultName1->Location = System::Drawing::Point(484, 50);
			this->AddMatchResultName1->Name = L"AddMatchResultName1";
			this->AddMatchResultName1->Size = System::Drawing::Size(0, 20);
			this->AddMatchResultName1->TabIndex = 45;
			this->AddMatchResultName1->Visible = false;
			// 
			// ShowTeamsButton
			// 
			this->ShowTeamsButton->BackColor = System::Drawing::Color::Silver;
			this->ShowTeamsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ShowTeamsButton->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShowTeamsButton->Location = System::Drawing::Point(561, 11);
			this->ShowTeamsButton->Name = L"ShowTeamsButton";
			this->ShowTeamsButton->Size = System::Drawing::Size(135, 29);
			this->ShowTeamsButton->TabIndex = 42;
			this->ShowTeamsButton->Text = L"Show Teams";
			this->ShowTeamsButton->UseVisualStyleBackColor = false;
			this->ShowTeamsButton->Visible = false;
			this->ShowTeamsButton->Click += gcnew System::EventHandler(this, &AdminF::ShowTeamsButton_Click);
			// 
			// VSLabel
			// 
			this->VSLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->VSLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->VSLabel->Enabled = false;
			this->VSLabel->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VSLabel->Location = System::Drawing::Point(468, 77);
			this->VSLabel->Multiline = true;
			this->VSLabel->Name = L"VSLabel";
			this->VSLabel->ReadOnly = true;
			this->VSLabel->Size = System::Drawing::Size(141, 22);
			this->VSLabel->TabIndex = 37;
			this->VSLabel->Text = L"VS";
			this->VSLabel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->VSLabel->Visible = false;
			// 
			// AddMatchResultClose
			// 
			this->AddMatchResultClose->BackColor = System::Drawing::Color::Silver;
			this->AddMatchResultClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddMatchResultClose->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddMatchResultClose->Location = System::Drawing::Point(653, 137);
			this->AddMatchResultClose->Name = L"AddMatchResultClose";
			this->AddMatchResultClose->Size = System::Drawing::Size(120, 37);
			this->AddMatchResultClose->TabIndex = 41;
			this->AddMatchResultClose->Text = L"Close";
			this->AddMatchResultClose->UseVisualStyleBackColor = false;
			this->AddMatchResultClose->Visible = false;
			this->AddMatchResultClose->Click += gcnew System::EventHandler(this, &AdminF::AddMatchResultClose_Click);
			// 
			// AddMatchResultText1
			// 
			this->AddMatchResultText1->Location = System::Drawing::Point(664, 48);
			this->AddMatchResultText1->Name = L"AddMatchResultText1";
			this->AddMatchResultText1->Size = System::Drawing::Size(91, 22);
			this->AddMatchResultText1->TabIndex = 38;
			this->AddMatchResultText1->Visible = false;
			// 
			// AddMatchResultSave
			// 
			this->AddMatchResultSave->BackColor = System::Drawing::Color::Silver;
			this->AddMatchResultSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddMatchResultSave->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddMatchResultSave->Location = System::Drawing::Point(450, 135);
			this->AddMatchResultSave->Name = L"AddMatchResultSave";
			this->AddMatchResultSave->Size = System::Drawing::Size(120, 37);
			this->AddMatchResultSave->TabIndex = 40;
			this->AddMatchResultSave->Text = L"Save";
			this->AddMatchResultSave->UseVisualStyleBackColor = false;
			this->AddMatchResultSave->Visible = false;
			this->AddMatchResultSave->Click += gcnew System::EventHandler(this, &AdminF::AddMatchResultSave_Click);
			// 
			// AddMatchResultText2
			// 
			this->AddMatchResultText2->Location = System::Drawing::Point(664, 107);
			this->AddMatchResultText2->Name = L"AddMatchResultText2";
			this->AddMatchResultText2->Size = System::Drawing::Size(91, 22);
			this->AddMatchResultText2->TabIndex = 39;
			this->AddMatchResultText2->Visible = false;
			// 
			// FinishedSettingUpLabel
			// 
			this->FinishedSettingUpLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->FinishedSettingUpLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->FinishedSettingUpLabel->Enabled = false;
			this->FinishedSettingUpLabel->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FinishedSettingUpLabel->Location = System::Drawing::Point(865, 580);
			this->FinishedSettingUpLabel->Multiline = true;
			this->FinishedSettingUpLabel->Name = L"FinishedSettingUpLabel";
			this->FinishedSettingUpLabel->ReadOnly = true;
			this->FinishedSettingUpLabel->Size = System::Drawing::Size(281, 64);
			this->FinishedSettingUpLabel->TabIndex = 26;
			this->FinishedSettingUpLabel->Text = L"To Interact With This Button Please Add The Players And The Teams FIrst";
			this->FinishedSettingUpLabel->Visible = false;
			// 
			// FinishedAdding
			// 
			this->FinishedAdding->BackColor = System::Drawing::Color::Silver;
			this->FinishedAdding->Enabled = false;
			this->FinishedAdding->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FinishedAdding->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FinishedAdding->Location = System::Drawing::Point(907, 660);
			this->FinishedAdding->Name = L"FinishedAdding";
			this->FinishedAdding->Size = System::Drawing::Size(147, 53);
			this->FinishedAdding->TabIndex = 2;
			this->FinishedAdding->Text = L"Finished Setting up";
			this->FinishedAdding->UseVisualStyleBackColor = false;
			this->FinishedAdding->Click += gcnew System::EventHandler(this, &AdminF::FinishedAdding_Click);
			// 
			// AddTeamList
			// 
			this->AddTeamList->BackColor = System::Drawing::Color::White;
			this->AddTeamList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AddTeamList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTeamList->FormattingEnabled = true;
			this->AddTeamList->ItemHeight = 20;
			this->AddTeamList->Location = System::Drawing::Point(13, 159);
			this->AddTeamList->Name = L"AddTeamList";
			this->AddTeamList->Size = System::Drawing::Size(414, 160);
			this->AddTeamList->TabIndex = 12;
			this->AddTeamList->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminF::AddTeamList_SelectedIndexChanged);
			// 
			// AddPlayerList
			// 
			this->AddPlayerList->BackColor = System::Drawing::Color::White;
			this->AddPlayerList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AddPlayerList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddPlayerList->FormattingEnabled = true;
			this->AddPlayerList->ItemHeight = 20;
			this->AddPlayerList->Location = System::Drawing::Point(13, 358);
			this->AddPlayerList->Name = L"AddPlayerList";
			this->AddPlayerList->Size = System::Drawing::Size(414, 160);
			this->AddPlayerList->TabIndex = 13;
			this->AddPlayerList->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminF::AddPlayerList_SelectedIndexChanged);
			// 
			// AdminFucnHolderPanel
			// 
			this->AdminFucnHolderPanel->Controls->Add(this->FinishedSettingUpLabel);
			this->AdminFucnHolderPanel->Controls->Add(this->PreivewLabel);
			this->AdminFucnHolderPanel->Controls->Add(this->FinishedAdding);
			this->AdminFucnHolderPanel->Controls->Add(this->EditSearchButton);
			this->AdminFucnHolderPanel->Controls->Add(this->EditPlayerClose);
			this->AdminFucnHolderPanel->Controls->Add(this->EditPlayerSave);
			this->AdminFucnHolderPanel->Controls->Add(this->EditPlayerIDText);
			this->AdminFucnHolderPanel->Controls->Add(this->EditPlayerIDLabel);
			this->AdminFucnHolderPanel->Controls->Add(this->EditPlayerPanel);
			this->AdminFucnHolderPanel->Controls->Add(this->CloseTeam);
			this->AdminFucnHolderPanel->Controls->Add(this->SaveTeam);
			this->AdminFucnHolderPanel->Controls->Add(this->AddTeamText);
			this->AdminFucnHolderPanel->Controls->Add(this->AddTeamLabel);
			this->AdminFucnHolderPanel->Controls->Add(this->CloseAddingPlayerButton);
			this->AdminFucnHolderPanel->Controls->Add(this->SaveAddedPlayerButton);
			this->AdminFucnHolderPanel->Controls->Add(this->AddPlayerBirthdate);
			this->AdminFucnHolderPanel->Controls->Add(this->AddPlayerNationalityText);
			this->AdminFucnHolderPanel->Controls->Add(this->AddPlayerNameText);
			this->AdminFucnHolderPanel->Controls->Add(this->AddBirthDateLabel);
			this->AdminFucnHolderPanel->Controls->Add(this->AddPlayerNationalityLabel);
			this->AdminFucnHolderPanel->Controls->Add(this->AddPlayerNameLabel);
			this->AdminFucnHolderPanel->Controls->Add(this->dateTimePicker1);
			this->AdminFucnHolderPanel->Controls->Add(this->label2);
			this->AdminFucnHolderPanel->Controls->Add(this->AddPlayerList);
			this->AdminFucnHolderPanel->Controls->Add(this->AddTeamList);
			this->AdminFucnHolderPanel->Controls->Add(this->AddResultPanel);
			this->AdminFucnHolderPanel->Controls->Add(this->StartDateText);
			this->AdminFucnHolderPanel->Controls->Add(this->AddPlayerPanel);
			this->AdminFucnHolderPanel->Controls->Add(this->SeasonDateButton);
			this->AdminFucnHolderPanel->Controls->Add(this->AddTeamPanel);
			this->AdminFucnHolderPanel->Controls->Add(this->TeamViewText);
			this->AdminFucnHolderPanel->Controls->Add(this->PlayerListText);
			this->AdminFucnHolderPanel->Location = System::Drawing::Point(44, 51);
			this->AdminFucnHolderPanel->Name = L"AdminFucnHolderPanel";
			this->AdminFucnHolderPanel->Size = System::Drawing::Size(1273, 732);
			this->AdminFucnHolderPanel->TabIndex = 9;
			this->AdminFucnHolderPanel->Visible = false;
			// 
			// PreivewLabel
			// 
			this->PreivewLabel->AutoSize = true;
			this->PreivewLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PreivewLabel->Location = System::Drawing::Point(252, 95);
			this->PreivewLabel->Name = L"PreivewLabel";
			this->PreivewLabel->Size = System::Drawing::Size(617, 20);
			this->PreivewLabel->TabIndex = 47;
			this->PreivewLabel->Text = L"Please Note: That The Teams And Players Viewed Here Are Just A Preview";
			this->PreivewLabel->Visible = false;
			// 
			// EditSearchButton
			// 
			this->EditSearchButton->BackColor = System::Drawing::Color::Silver;
			this->EditSearchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditSearchButton->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditSearchButton->Location = System::Drawing::Point(1010, 340);
			this->EditSearchButton->Name = L"EditSearchButton";
			this->EditSearchButton->Size = System::Drawing::Size(120, 37);
			this->EditSearchButton->TabIndex = 34;
			this->EditSearchButton->Text = L"Search";
			this->EditSearchButton->UseVisualStyleBackColor = false;
			this->EditSearchButton->Visible = false;
			this->EditSearchButton->Click += gcnew System::EventHandler(this, &AdminF::EditSearchButton_Click);
			// 
			// EditPlayerClose
			// 
			this->EditPlayerClose->BackColor = System::Drawing::Color::Silver;
			this->EditPlayerClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditPlayerClose->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditPlayerClose->Location = System::Drawing::Point(934, 481);
			this->EditPlayerClose->Name = L"EditPlayerClose";
			this->EditPlayerClose->Size = System::Drawing::Size(120, 37);
			this->EditPlayerClose->TabIndex = 33;
			this->EditPlayerClose->Text = L"Close";
			this->EditPlayerClose->UseVisualStyleBackColor = false;
			this->EditPlayerClose->Visible = false;
			this->EditPlayerClose->Click += gcnew System::EventHandler(this, &AdminF::EditPlayerClose_Click);
			// 
			// EditPlayerSave
			// 
			this->EditPlayerSave->BackColor = System::Drawing::Color::Silver;
			this->EditPlayerSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditPlayerSave->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditPlayerSave->Location = System::Drawing::Point(728, 481);
			this->EditPlayerSave->Name = L"EditPlayerSave";
			this->EditPlayerSave->Size = System::Drawing::Size(120, 37);
			this->EditPlayerSave->TabIndex = 32;
			this->EditPlayerSave->Text = L"Save";
			this->EditPlayerSave->UseVisualStyleBackColor = false;
			this->EditPlayerSave->Visible = false;
			this->EditPlayerSave->Click += gcnew System::EventHandler(this, &AdminF::EditPlayerSave_Click);
			// 
			// EditPlayerIDText
			// 
			this->EditPlayerIDText->Location = System::Drawing::Point(821, 319);
			this->EditPlayerIDText->Name = L"EditPlayerIDText";
			this->EditPlayerIDText->Size = System::Drawing::Size(183, 22);
			this->EditPlayerIDText->TabIndex = 31;
			this->EditPlayerIDText->Visible = false;
			// 
			// EditPlayerIDLabel
			// 
			this->EditPlayerIDLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->EditPlayerIDLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EditPlayerIDLabel->Enabled = false;
			this->EditPlayerIDLabel->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditPlayerIDLabel->Location = System::Drawing::Point(652, 322);
			this->EditPlayerIDLabel->Multiline = true;
			this->EditPlayerIDLabel->Name = L"EditPlayerIDLabel";
			this->EditPlayerIDLabel->ReadOnly = true;
			this->EditPlayerIDLabel->Size = System::Drawing::Size(141, 22);
			this->EditPlayerIDLabel->TabIndex = 30;
			this->EditPlayerIDLabel->Text = L"Player ID";
			this->EditPlayerIDLabel->Visible = false;
			// 
			// EditPlayerPanel
			// 
			this->EditPlayerPanel->Controls->Add(this->EditPlayerButton);
			this->EditPlayerPanel->Controls->Add(this->EditPlayerImage);
			this->EditPlayerPanel->Location = System::Drawing::Point(433, 448);
			this->EditPlayerPanel->Name = L"EditPlayerPanel";
			this->EditPlayerPanel->Size = System::Drawing::Size(212, 36);
			this->EditPlayerPanel->TabIndex = 7;
			this->EditPlayerPanel->Visible = false;
			// 
			// EditPlayerButton
			// 
			this->EditPlayerButton->BackColor = System::Drawing::Color::Silver;
			this->EditPlayerButton->Enabled = false;
			this->EditPlayerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditPlayerButton->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditPlayerButton->Location = System::Drawing::Point(31, -1);
			this->EditPlayerButton->Name = L"EditPlayerButton";
			this->EditPlayerButton->Size = System::Drawing::Size(181, 37);
			this->EditPlayerButton->TabIndex = 1;
			this->EditPlayerButton->Text = L"Edit Player";
			this->EditPlayerButton->UseVisualStyleBackColor = false;
			this->EditPlayerButton->Click += gcnew System::EventHandler(this, &AdminF::EditPlayerButton_Click);
			// 
			// EditPlayerImage
			// 
			this->EditPlayerImage->BackColor = System::Drawing::Color::Silver;
			this->EditPlayerImage->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditPlayerImage.Image")));
			this->EditPlayerImage->Location = System::Drawing::Point(3, 4);
			this->EditPlayerImage->Name = L"EditPlayerImage";
			this->EditPlayerImage->Size = System::Drawing::Size(26, 29);
			this->EditPlayerImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->EditPlayerImage->TabIndex = 0;
			this->EditPlayerImage->TabStop = false;
			// 
			// CloseTeam
			// 
			this->CloseTeam->BackColor = System::Drawing::Color::Silver;
			this->CloseTeam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CloseTeam->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseTeam->Location = System::Drawing::Point(888, 210);
			this->CloseTeam->Name = L"CloseTeam";
			this->CloseTeam->Size = System::Drawing::Size(120, 37);
			this->CloseTeam->TabIndex = 29;
			this->CloseTeam->Text = L"Close";
			this->CloseTeam->UseVisualStyleBackColor = false;
			this->CloseTeam->Visible = false;
			this->CloseTeam->Click += gcnew System::EventHandler(this, &AdminF::CloseTeam_Click);
			// 
			// SaveTeam
			// 
			this->SaveTeam->BackColor = System::Drawing::Color::Silver;
			this->SaveTeam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SaveTeam->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaveTeam->Location = System::Drawing::Point(682, 210);
			this->SaveTeam->Name = L"SaveTeam";
			this->SaveTeam->Size = System::Drawing::Size(120, 37);
			this->SaveTeam->TabIndex = 28;
			this->SaveTeam->Text = L"Save";
			this->SaveTeam->UseVisualStyleBackColor = false;
			this->SaveTeam->Visible = false;
			this->SaveTeam->Click += gcnew System::EventHandler(this, &AdminF::SaveTeam_Click);
			// 
			// AddTeamText
			// 
			this->AddTeamText->Location = System::Drawing::Point(853, 159);
			this->AddTeamText->Name = L"AddTeamText";
			this->AddTeamText->Size = System::Drawing::Size(183, 22);
			this->AddTeamText->TabIndex = 27;
			this->AddTeamText->Visible = false;
			this->AddTeamText->TextChanged += gcnew System::EventHandler(this, &AdminF::AddTeamText_TextChanged);
			// 
			// AddTeamLabel
			// 
			this->AddTeamLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->AddTeamLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AddTeamLabel->Enabled = false;
			this->AddTeamLabel->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTeamLabel->Location = System::Drawing::Point(661, 159);
			this->AddTeamLabel->Multiline = true;
			this->AddTeamLabel->Name = L"AddTeamLabel";
			this->AddTeamLabel->ReadOnly = true;
			this->AddTeamLabel->Size = System::Drawing::Size(167, 22);
			this->AddTeamLabel->TabIndex = 26;
			this->AddTeamLabel->Text = L"Add Team Name ";
			this->AddTeamLabel->Visible = false;
			// 
			// CloseAddingPlayerButton
			// 
			this->CloseAddingPlayerButton->BackColor = System::Drawing::Color::Silver;
			this->CloseAddingPlayerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CloseAddingPlayerButton->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseAddingPlayerButton->Location = System::Drawing::Point(934, 481);
			this->CloseAddingPlayerButton->Name = L"CloseAddingPlayerButton";
			this->CloseAddingPlayerButton->Size = System::Drawing::Size(120, 37);
			this->CloseAddingPlayerButton->TabIndex = 25;
			this->CloseAddingPlayerButton->Text = L"Close";
			this->CloseAddingPlayerButton->UseVisualStyleBackColor = false;
			this->CloseAddingPlayerButton->Visible = false;
			this->CloseAddingPlayerButton->Click += gcnew System::EventHandler(this, &AdminF::CloseAddingPlayerButton_Click);
			// 
			// SaveAddedPlayerButton
			// 
			this->SaveAddedPlayerButton->BackColor = System::Drawing::Color::Silver;
			this->SaveAddedPlayerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SaveAddedPlayerButton->Font = (gcnew System::Drawing::Font(L"Bell MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaveAddedPlayerButton->Location = System::Drawing::Point(728, 481);
			this->SaveAddedPlayerButton->Name = L"SaveAddedPlayerButton";
			this->SaveAddedPlayerButton->Size = System::Drawing::Size(120, 37);
			this->SaveAddedPlayerButton->TabIndex = 2;
			this->SaveAddedPlayerButton->Text = L"Save";
			this->SaveAddedPlayerButton->UseVisualStyleBackColor = false;
			this->SaveAddedPlayerButton->Visible = false;
			this->SaveAddedPlayerButton->Click += gcnew System::EventHandler(this, &AdminF::SaveAddedPlayerButton_Click);
			// 
			// AddPlayerBirthdate
			// 
			this->AddPlayerBirthdate->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddPlayerBirthdate->Location = System::Drawing::Point(728, 448);
			this->AddPlayerBirthdate->Name = L"AddPlayerBirthdate";
			this->AddPlayerBirthdate->Size = System::Drawing::Size(329, 27);
			this->AddPlayerBirthdate->TabIndex = 24;
			this->AddPlayerBirthdate->Visible = false;
			// 
			// AddPlayerNationalityText
			// 
			this->AddPlayerNationalityText->Location = System::Drawing::Point(821, 375);
			this->AddPlayerNationalityText->Name = L"AddPlayerNationalityText";
			this->AddPlayerNationalityText->Size = System::Drawing::Size(183, 22);
			this->AddPlayerNationalityText->TabIndex = 23;
			this->AddPlayerNationalityText->Visible = false;
			// 
			// AddPlayerNameText
			// 
			this->AddPlayerNameText->Location = System::Drawing::Point(821, 347);
			this->AddPlayerNameText->Name = L"AddPlayerNameText";
			this->AddPlayerNameText->Size = System::Drawing::Size(183, 22);
			this->AddPlayerNameText->TabIndex = 22;
			this->AddPlayerNameText->Visible = false;
			// 
			// AddBirthDateLabel
			// 
			this->AddBirthDateLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->AddBirthDateLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AddBirthDateLabel->Enabled = false;
			this->AddBirthDateLabel->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddBirthDateLabel->Location = System::Drawing::Point(821, 405);
			this->AddBirthDateLabel->Name = L"AddBirthDateLabel";
			this->AddBirthDateLabel->ReadOnly = true;
			this->AddBirthDateLabel->Size = System::Drawing::Size(196, 20);
			this->AddBirthDateLabel->TabIndex = 19;
			this->AddBirthDateLabel->Text = L"Add BirthDate";
			this->AddBirthDateLabel->Visible = false;
			// 
			// AddPlayerNationalityLabel
			// 
			this->AddPlayerNationalityLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->AddPlayerNationalityLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AddPlayerNationalityLabel->Enabled = false;
			this->AddPlayerNationalityLabel->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddPlayerNationalityLabel->Location = System::Drawing::Point(652, 376);
			this->AddPlayerNationalityLabel->Multiline = true;
			this->AddPlayerNationalityLabel->Name = L"AddPlayerNationalityLabel";
			this->AddPlayerNationalityLabel->ReadOnly = true;
			this->AddPlayerNationalityLabel->Size = System::Drawing::Size(163, 22);
			this->AddPlayerNationalityLabel->TabIndex = 18;
			this->AddPlayerNationalityLabel->Text = L"Add Nationality";
			this->AddPlayerNationalityLabel->Visible = false;
			// 
			// AddPlayerNameLabel
			// 
			this->AddPlayerNameLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->AddPlayerNameLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AddPlayerNameLabel->Enabled = false;
			this->AddPlayerNameLabel->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddPlayerNameLabel->Location = System::Drawing::Point(652, 350);
			this->AddPlayerNameLabel->Multiline = true;
			this->AddPlayerNameLabel->Name = L"AddPlayerNameLabel";
			this->AddPlayerNameLabel->ReadOnly = true;
			this->AddPlayerNameLabel->Size = System::Drawing::Size(141, 22);
			this->AddPlayerNameLabel->TabIndex = 17;
			this->AddPlayerNameLabel->Text = L"Add Name ";
			this->AddPlayerNameLabel->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(370, 23);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(329, 27);
			this->dateTimePicker1->TabIndex = 16;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &AdminF::dateTimePicker1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(398, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"\"Please Set The Start Date First\"";
			// 
			// LeagueTablePanel
			// 
			this->LeagueTablePanel->Controls->Add(this->LeagueTableButtonPanel);
			this->LeagueTablePanel->Controls->Add(this->LeagueTableList);
			this->LeagueTablePanel->Location = System::Drawing::Point(1323, 96);
			this->LeagueTablePanel->Name = L"LeagueTablePanel";
			this->LeagueTablePanel->Size = System::Drawing::Size(1139, 606);
			this->LeagueTablePanel->TabIndex = 14;
			this->LeagueTablePanel->Visible = false;
			// 
			// LeagueTableButtonPanel
			// 
			this->LeagueTableButtonPanel->Controls->Add(this->LeagueTablePic);
			this->LeagueTableButtonPanel->Controls->Add(this->ViewLeagueTableButton);
			this->LeagueTableButtonPanel->Location = System::Drawing::Point(313, 532);
			this->LeagueTableButtonPanel->Name = L"LeagueTableButtonPanel";
			this->LeagueTableButtonPanel->Size = System::Drawing::Size(369, 43);
			this->LeagueTableButtonPanel->TabIndex = 1;
			this->LeagueTableButtonPanel->Visible = false;
			// 
			// LeagueTablePic
			// 
			this->LeagueTablePic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LeagueTablePic.Image")));
			this->LeagueTablePic->Location = System::Drawing::Point(49, 5);
			this->LeagueTablePic->Name = L"LeagueTablePic";
			this->LeagueTablePic->Size = System::Drawing::Size(44, 35);
			this->LeagueTablePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->LeagueTablePic->TabIndex = 1;
			this->LeagueTablePic->TabStop = false;
			this->LeagueTablePic->Visible = false;
			// 
			// ViewLeagueTableButton
			// 
			this->ViewLeagueTableButton->BackColor = System::Drawing::Color::Silver;
			this->ViewLeagueTableButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewLeagueTableButton->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ViewLeagueTableButton->Location = System::Drawing::Point(97, 5);
			this->ViewLeagueTableButton->Name = L"ViewLeagueTableButton";
			this->ViewLeagueTableButton->Size = System::Drawing::Size(257, 35);
			this->ViewLeagueTableButton->TabIndex = 0;
			this->ViewLeagueTableButton->Text = L"View League Table";
			this->ViewLeagueTableButton->UseVisualStyleBackColor = false;
			this->ViewLeagueTableButton->Visible = false;
			this->ViewLeagueTableButton->Click += gcnew System::EventHandler(this, &AdminF::ViewLeagueTableButton_Click);
			// 
			// LeagueTableList
			// 
			this->LeagueTableList->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LeagueTableList->FormattingEnabled = true;
			this->LeagueTableList->ItemHeight = 20;
			this->LeagueTableList->Location = System::Drawing::Point(20, 10);
			this->LeagueTableList->Name = L"LeagueTableList";
			this->LeagueTableList->Size = System::Drawing::Size(1100, 504);
			this->LeagueTableList->TabIndex = 0;
			// 
			// AdminF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1419, 783);
			this->Controls->Add(this->LeagueTablePanel);
			this->Controls->Add(this->AdminFucnHolderPanel);
			this->Controls->Add(this->MatchResultPanel);
			this->Controls->Add(this->LeagueSchedulePanel);
			this->Controls->Add(this->ViewPlayerDetailsPanel);
			this->Controls->Add(this->UserViewTeam);
			this->Controls->Add(this->AdminAboutPanel);
			this->Controls->Add(this->SideBarContainer);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminF";
			this->Load += gcnew System::EventHandler(this, &AdminF::AdminF_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SideBarButton))->EndInit();
			this->SideBarContainer->ResumeLayout(false);
			this->AdminMContainer->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->DashBoardPanel->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->panel12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->AdminAboutPanel->ResumeLayout(false);
			this->AdminAboutPanel->PerformLayout();
			this->UserTeamInfoButtonCont->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ViewTeamInfoPIc))->EndInit();
			this->UserViewTeam->ResumeLayout(false);
			this->PlayerDetailsButtonpanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerDetailsPic))->EndInit();
			this->ViewPlayerDetailsPanel->ResumeLayout(false);
			this->LeagueScheduleButHolder->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeagueButtonPic))->EndInit();
			this->LeagueSchedulePanel->ResumeLayout(false);
			this->MatchResultButPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultPicture))->EndInit();
			this->MatchResultPanel->ResumeLayout(false);
			this->AddTeamPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->AddPlayerPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->AddResultPanel->ResumeLayout(false);
			this->AddResultPanel->PerformLayout();
			this->AdminFucnHolderPanel->ResumeLayout(false);
			this->AdminFucnHolderPanel->PerformLayout();
			this->EditPlayerPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditPlayerImage))->EndInit();
			this->LeagueTablePanel->ResumeLayout(false);
			this->LeagueTableButtonPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeagueTablePic))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		bool AdminExpand = false;
		bool UserExpand = false;
		bool SidebarExpand = true;
	private: System::Void AdminF_Load(System::Object^ sender, System::EventArgs^ e) {
		UpdateMatchResultLabels(manualAddResultCount, AddMatchResultName1, AddMatchResultName2);
	}

	private: System::Void LogoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void UserFunctionButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DashBoardTransition->Start();
}
	private: System::Void MenuTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (AdminExpand == false) {
			AdminMContainer->Height += 5;
			if (AdminMContainer->Height >= 90) {
				AdminMenuTransition->Stop();
				AdminExpand = true;
			}
	
		}
		else {
			AdminMContainer->Height -= 5;
			if (AdminMContainer->Height <= 48) {
				AdminMenuTransition->Stop();
				AdminExpand = false;
			}
		}

}
	private: System::Void MenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminMenuTransition->Start();
	}

	private: System::Void DashBoardTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (UserExpand == false) {
			DashBoardPanel->Height += 5;
			if (DashBoardPanel->Height >= 250) {
				DashBoardTransition->Stop();
				UserExpand = true;
			}
		}
		else {
			DashBoardPanel->Height -= 5;
			if (DashBoardPanel->Height <= 44) {
				DashBoardTransition->Stop();
				UserExpand = false;
			}
		}
	}

	private: System::Void SideBarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (SidebarExpand) {
			SideBarContainer->Width -= 5;
			if (SideBarContainer->Width <= 43) {
				SidebarExpand = false;
				SideBarTimer->Stop();
			}
		}
		else {
			SideBarContainer->Width += 5;
			if (SideBarContainer->Width >= 215) {
				SidebarExpand = true;
				SideBarTimer->Stop();
			}
		}
		AdminAboutPanel->Left = SideBarContainer->Width + 5;
		AdminFucnHolderPanel->Left = SideBarContainer->Width + 5;
		UserViewTeam->Left = SideBarContainer->Width + 5;
		MatchResultPanel->Left = SideBarContainer->Width + 5;
		ViewPlayerDetailsPanel->Left = SideBarContainer->Width + 5;
		LeagueSchedulePanel->Left = SideBarContainer->Width + 5;
		MatchResultPanel->Left = SideBarContainer->Width + 5;
		LeagueTablePanel->Left = SideBarContainer->Width + 5;
	}
	private: System::Void SideBarButton_Click(System::Object^ sender, System::EventArgs^ e) {
		SideBarTimer->Start();
	}
	private: System::Void AdminMContainer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void AboutButoon_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminAboutPanel->Visible = true;
		AdminAboutPanel->Enabled = true;
		AdminFucnHolderPanel->Visible = false;
		StartDateText->Visible = false;
		SeasonDateButton->Visible = false;
		TeamViewText->Visible = false;
		PlayerListText->Visible = false;
		AddTeamPanel->Visible = false;
		AddTeamButton->Visible = false;
		pictureBox1->Visible = false;
		AddPlayerButton->Visible = false;
		pictureBox9->Visible = false;
		AddPlayerPanel->Visible = false;
		GenerateButton->Visible = false;
		GenerateText->Visible = false;
		AddResultPanel->Visible = false;
		ViewPlayerDetailsPanel->Visible = false;
		ViewPlayerDetailsList->Visible = false;
		PlayerDetailsButtonpanel->Visible = false;
		MatchResultText->Visible = false;
		AddResultButton->Visible = false;
		UserViewTeam->Visible = false;
		UserTeamInfoButton->Visible = false;
		UserTeamInfoButtonCont->Visible = false;
		ViewTeamInfoPIc->Visible = false;
		LeagueSchedulePanel->Visible = false;
		ViewUserTeamInfo->Visible = false;
		MatchResultPanel->Visible = false;
		LeagueTablePanel->Visible = false;
		LeagueTableList->Visible = false;
		LeagueTableButtonPanel->Visible = false;
		LeagueTablePic->Visible = false;
		ViewLeagueTableButton->Visible = false;
		FinishedSettingUpLabel->Visible = false;
		EditPlayerButton->Visible = false;
		EditPlayerPanel->Visible = false;
		EditPlayerImage->Visible = false;
		PreivewLabel->Visible = false;
		AdminAboutText->Text = "About the Football League Management System\r\n"

			L"Welcome to the Football League Management System Admin Panel.\r\n"

			L"This platform has been carefully developed to empower administrators with the tools necessary to efficiently manage all aspects of the football league.\r\n"

			L"Designed with a focus on usability, reliability, and performance, the system ensures that administrative tasks can be handled with precision and ease.\r\n"

			L"As an administrator, you have access to a comprehensive suite of features, including:\r\n "

			L"Team Management : Create, update, as well as manage team rosters and details.\r\n"

			L"Player Management : Add new players, and assign players to their respective teams.\r\n"

			L"Match Scheduling : Organize fixtures, set match dates and times, and ensure fair scheduling across the league.\r\n"

			L"Result Tracking : Record match outcomes, update league standings, and maintain historical match data for future reference.\r\n"

			L"League Oversight : Monitor team and player statistics, generate reports, and ensure smooth operation throughout the season.\r\n"

			L"This system is designed to support the administrative workflow from pre - season planning to end - of - season reporting, providing a centralized hub for all league operations.\r\n"

			L"By integrating powerful management tools into a user - friendly interface, we aim to enhance the experience for both administrators and participants alike.\r\n"

			L"Thank you for your commitment to maintaining the integrity, fairness, and excitement of the football league.\r\n"

			L"Your role is essential to the success of the competition, and we are proud to support you with this platform.\r\n";

	}
	private: System::Void SideBarContainer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Season_SButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminFucnHolderPanel->Visible = true;
		AdminAboutPanel->Visible = true;
		AdminAboutPanel->Enabled = true;
		AdminFucnHolderPanel->Visible = true;
		StartDateText->Visible = true;
		SeasonDateButton->Visible = true;
		TeamViewText->Visible = true;
		PlayerListText->Visible = true;
		AddTeamPanel->Visible = true;
		AddTeamButton->Visible = true;
		pictureBox1->Visible = true;
		AddPlayerButton->Visible = true;
		pictureBox9->Visible = true;
		AddPlayerPanel->Visible = true;
		GenerateButton->Visible = true;
		GenerateText->Visible = true;
		AddResultPanel->Visible = true;
		FinishedSettingUpLabel->Visible = true;
		ViewPlayerDetailsPanel->Visible = false;
		ViewPlayerDetailsList->Visible = false;
		PlayerDetailsButtonpanel->Visible = false;
		MatchResultText->Visible = true;
		AddResultButton->Visible = true;
		UserViewTeam->Visible = false;
		UserTeamInfoButton->Visible = false;
		UserTeamInfoButtonCont->Visible = false;
		ViewTeamInfoPIc->Visible = false;
		LeagueSchedulePanel->Visible = false;
		ViewUserTeamInfo->Visible = false;
		MatchResultPanel->Visible = true;
		LeagueTablePanel->Visible = false;
		LeagueTableList->Visible = false;
		LeagueTableButtonPanel->Visible = false;
		LeagueTablePic->Visible = false;
		ViewLeagueTableButton->Visible = false;
		EditPlayerButton->Visible = true;
		EditPlayerPanel->Visible = true;
		EditPlayerImage->Visible = true;
		PreivewLabel->Visible = true;
	}
	private: System::Void SeasonDate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   bool addteam = false;
		   bool addplayer = false;
		   bool generateSch = false;
		   bool addresult = false;



	private: System::Void AddPlayerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FinishedAddingPlayers == true) {
			AddPlayerNameLabel->Visible = true;
			AddPlayerNationalityLabel->Visible = true;
			AddBirthDateLabel->Visible = true;
			AddPlayerNameText->Visible = true;
			AddPlayerNationalityText->Visible = true;
			AddPlayerBirthdate->Visible = true;
			SaveAddedPlayerButton->Visible = true;
			CloseAddingPlayerButton->Visible = true;
		}
		else
			MessageBox::Show("All Players Are Already Added", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void GenerateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (PlayersAdded == true && TeamAdded == true) {
			System::DateTime selectedDate = dateTimePicker1->Value;

			int day = selectedDate.Day;
			int month = selectedDate.Month;
			int year = selectedDate.Year;
			GENERATESCHEDULE(day, month, year);
			generateSch = true;
			MessageBox::Show("Matches Have Been Successfully Generated.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Failed To Generate Schedule. Please Make Sure You Have Added ALL The Teams And Players First.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			generateSch = false;
		}
	}
	private: System::Void AddTeamList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewTeamInfoBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TeamDetailsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminAboutPanel->Visible = false;
		AdminAboutPanel->Enabled = false;
		AdminFucnHolderPanel->Visible = false;
		StartDateText->Visible = false;
		SeasonDateButton->Visible = false;
		TeamViewText->Visible = false;
		PlayerListText->Visible = false;
		AddTeamPanel->Visible = false;
		AddTeamButton->Visible = false;
		pictureBox1->Visible = false;
		AddPlayerButton->Visible = false;
		pictureBox9->Visible = false;
		AddPlayerPanel->Visible = false;
		GenerateButton->Visible = false;
		GenerateText->Visible = false;
		AddResultPanel->Visible = false;
		ViewPlayerDetailsPanel->Visible = false;
		ViewPlayerDetailsList->Visible = false;
		PlayerDetailsButtonpanel->Visible = false;
		MatchResultText->Visible = false;
		AddResultButton->Visible = false;
		UserViewTeam->Visible = true;
		UserTeamInfoButton->Visible = true;
		UserTeamInfoButtonCont->Visible = true;
		ViewTeamInfoPIc->Visible = true;
		LeagueSchedulePanel->Visible = false;
		ViewUserTeamInfo->Visible = true;
		MatchResultPanel->Visible = false;
		LeagueTablePanel->Visible = false;
		LeagueTableList->Visible = false;
		LeagueTableButtonPanel->Visible = false;
		LeagueTablePic->Visible = false;
		ViewLeagueTableButton->Visible = false;
		FinishedSettingUpLabel->Visible = false;
		EditPlayerButton->Visible = false;
		EditPlayerPanel->Visible = false;
		EditPlayerImage->Visible = false;
		PreivewLabel->Visible = false;
	}
	private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
		if (addteam) {
			UserTeamList();
			MessageBox::Show("User Team Info Has Been Successfully loaded.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
			MessageBox::Show("Failed To Load User Team Info. Please Make Sure That You Have Finished Your Admin Work.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void GenerateList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AddPlayerList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PlayerDetailsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminAboutPanel->Visible = false;
		AdminAboutPanel->Enabled = false;
		AdminFucnHolderPanel->Visible = false;
		StartDateText->Visible = false;
		SeasonDateButton->Visible = false;
		TeamViewText->Visible = false;
		PlayerListText->Visible = false;
		AddTeamPanel->Visible = false;
		AddTeamButton->Visible = false;
		pictureBox1->Visible = false;
		AddPlayerButton->Visible = false;
		pictureBox9->Visible = false;
		AddPlayerPanel->Visible = false;
		GenerateButton->Visible = false;
		GenerateText->Visible = false;
		AddResultPanel->Visible = false;
		ViewPlayerDetailBut->Visible = true;
		ViewPlayerDetailsPanel->Visible = true;
		ViewPlayerDetailsList->Visible = true;
		PlayerDetailsButtonpanel->Visible = true;
		PlayerDetailsPic->Visible = true;
		MatchResultText->Visible = false;
		AddResultButton->Visible = false;
		UserViewTeam->Visible = false;
		UserTeamInfoButton->Visible = false;
		UserTeamInfoButtonCont->Visible = false;
		ViewTeamInfoPIc->Visible = false;
		LeagueSchedulePanel->Visible = false;
		ViewUserTeamInfo->Visible = false;
		MatchResultPanel->Visible = false;
		LeagueTablePanel->Visible = false;
		LeagueTableList->Visible = false;
		LeagueTableButtonPanel->Visible = false;
		LeagueTablePic->Visible = false;
		ViewLeagueTableButton->Visible = false;
		FinishedSettingUpLabel->Visible = false;
		EditPlayerButton->Visible = false;
		EditPlayerPanel->Visible = false;
		EditPlayerImage->Visible = false;
		PreivewLabel->Visible = false;
	}
	private: System::Void button1_Click_4(System::Object^ sender, System::EventArgs^ e) {
		if (addplayer) {
			UserPlayerList();
			MessageBox::Show("User Player Info Has Been Successfully loaded.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
			MessageBox::Show("Failed To Load User Player Info. Please Make Sure That You Have Finished Your Admin Work", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void Match_ResultButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminAboutPanel->Visible = false;
		AdminAboutPanel->Enabled = false;
		AdminFucnHolderPanel->Visible = false;
		StartDateText->Visible = false;
		SeasonDateButton->Visible = false;
		TeamViewText->Visible = false;
		PlayerListText->Visible = false;
		AddTeamPanel->Visible = false;
		AddTeamButton->Visible = false;
		pictureBox1->Visible = false;
		AddPlayerButton->Visible = false;
		pictureBox9->Visible = false;
		AddPlayerPanel->Visible = false;
		GenerateButton->Visible = false;
		GenerateText->Visible = false;
		AddResultPanel->Visible = false;
		ViewPlayerDetailBut->Visible = false;
		ViewPlayerDetailsPanel->Visible = false;
		ViewPlayerDetailsList->Visible = false;
		PlayerDetailsButtonpanel->Visible = false;
		PlayerDetailsPic->Visible = false;
		MatchResultText->Visible = false;
		AddResultButton->Visible = false;
		UserViewTeam->Visible = false;
		UserTeamInfoButton->Visible = false;
		UserTeamInfoButtonCont->Visible = false;
		ViewTeamInfoPIc->Visible = false;
		LeagueSchedulePanel->Visible = false;
		ViewUserTeamInfo->Visible = false;
		MatchResultPanel->Visible = true;
		MatchResultButPanel->Visible = true;
		ResultButton->Visible = true;
		ResultPicture->Visible = true;
		ResultList->Visible = true;
		LeagueTablePanel->Visible = false;
		LeagueTableList->Visible = false;
		LeagueTableButtonPanel->Visible = false;
		LeagueTablePic->Visible = false;
		ViewLeagueTableButton->Visible = false;
		FinishedSettingUpLabel->Visible = false;
		EditPlayerButton->Visible = false;
		EditPlayerPanel->Visible = false;
		EditPlayerImage->Visible = false;
		PreivewLabel->Visible = false;
	}
	private: System::Void MatchList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ResultButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (generateSch||addresult) {
			MatchResult();
			MessageBox::Show("Match Result Has Been Successfully Added.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
			MessageBox::Show("Failed To Load Match Results. Please Make Sure That You Have Finished Your Admin Work", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	private: System::Void LeagueScheduleButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminAboutPanel->Visible = false;
		AdminAboutPanel->Enabled = false;
		AdminFucnHolderPanel->Visible = false;
		StartDateText->Visible = false;
		SeasonDateButton->Visible = false;
		TeamViewText->Visible = false;
		PlayerListText->Visible = false;
		AddTeamPanel->Visible = false;
		AddTeamButton->Visible = false;
		pictureBox1->Visible = false;
		AddPlayerButton->Visible = false;
		pictureBox9->Visible = false;
		AddPlayerPanel->Visible = false;
		GenerateButton->Visible = false;
		GenerateText->Visible = false;
		AddResultPanel->Visible = false;
		ViewPlayerDetailBut->Visible = false;
		ViewPlayerDetailsPanel->Visible = false;
		ViewPlayerDetailsList->Visible = false;
		PlayerDetailsButtonpanel->Visible = false;
		PlayerDetailsPic->Visible = false;
		MatchResultText->Visible = false;
		AddResultButton->Visible = false;
		UserViewTeam->Visible = false;
		UserTeamInfoButton->Visible = false;
		UserTeamInfoButtonCont->Visible = false;
		ViewTeamInfoPIc->Visible = false;
		LeagueSchedulePanel->Visible = true;
		LeagueScheduleList->Visible = true;
		LeagueButtonPic->Visible = true;
		GenerateScheduleButton->Visible = true;
		LeagueScheduleButHolder->Visible = true;
		ViewUserTeamInfo->Visible = false;
		MatchResultPanel->Visible = false;
		LeagueTablePanel->Visible = false;
		LeagueTableList->Visible = false;
		LeagueTableButtonPanel->Visible = false;
		LeagueTablePic->Visible = false;
		ViewLeagueTableButton->Visible = false;
		FinishedSettingUpLabel->Visible = false;
		EditPlayerButton->Visible = false;
		EditPlayerPanel->Visible = false;
		EditPlayerImage->Visible = false;
		PreivewLabel->Visible = false;
	}


	private: System::Void GenerateScheduleButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (generateSch) {
			System::DateTime selectedDate = dateTimePicker1->Value;

			int day = selectedDate.Day;
			int month = selectedDate.Month;
			int year = selectedDate.Year;
			MatchGenerate(day, month,year);
			MessageBox::Show("Match Generation Has Been Successfully Added.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
			MessageBox::Show("Failed To Generate Matches. Please Make Sure That You Have Finished Your Admin Work", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void LeagueSchedulePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void LeagueTableButton_Click(System::Object^ sender, System::EventArgs^ e) {
	LeagueTablePanel->Visible = true;
	LeagueTableList->Visible = true;
	LeagueTableButtonPanel->Visible = true;
	LeagueTablePic->Visible = true;
	ViewLeagueTableButton->Visible = true;
	AdminAboutPanel->Visible = false;
	AdminAboutPanel->Enabled = false;
	AdminFucnHolderPanel->Visible = false;
	StartDateText->Visible = false;
	SeasonDateButton->Visible = false;
	TeamViewText->Visible = false;
	PlayerListText->Visible = false;
	AddTeamPanel->Visible = false;
	AddTeamButton->Visible = false;
	pictureBox1->Visible = false;
	AddPlayerButton->Visible = false;
	pictureBox9->Visible = false;
	AddPlayerPanel->Visible = false;
	GenerateButton->Visible = false;
	GenerateText->Visible = false;
	AddResultPanel->Visible = false;
	ViewPlayerDetailBut->Visible = false;
	ViewPlayerDetailsPanel->Visible = false;
	ViewPlayerDetailsList->Visible = false;
	PlayerDetailsButtonpanel->Visible = false;
	PlayerDetailsPic->Visible = false;
	MatchResultText->Visible = false;
	AddResultButton->Visible = false;
	UserViewTeam->Visible = false;
	UserTeamInfoButton->Visible = false;
	UserTeamInfoButtonCont->Visible = false;
	ViewTeamInfoPIc->Visible = false;
	LeagueSchedulePanel->Visible = false;
	LeagueScheduleList->Visible = false;
	LeagueButtonPic->Visible = false;
	GenerateScheduleButton->Visible = false;
	LeagueScheduleButHolder->Visible = false;
	ViewUserTeamInfo->Visible = false;
	MatchResultPanel->Visible = false;
	FinishedSettingUpLabel->Visible = false;
	EditPlayerButton->Visible = false;
	EditPlayerPanel->Visible = false;
	EditPlayerImage->Visible = false;
	PreivewLabel->Visible = false;
}
private: System::Void ViewLeagueTableButton_Click(System::Object^ sender, System::EventArgs^ e) {
	addresult = true;
	if (addresult) {
		LeagueTable();
		MessageBox::Show("League Table Has Been Successfully Added.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
		MessageBox::Show("Failed To Load League Table.Please Make Sure That You Have Finished Your Admin Work", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void SettingsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to restart the league? (ALL TEAMS, PLAYERS, AND MATCH DATA WILL BE PERMANENTLY DELETED.)...", "confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	if (result == System::Windows::Forms::DialogResult::Yes) {
		RestartLeague();
		MessageBox::Show("Successfully Restarted The League", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
		MessageBox::Show("No Changes Made", "cancelled", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   bool startdatebutton = true;
private: System::Void SeasonDateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (startdatebutton) {
		GenerateButton->Enabled = true;
		AddTeamButton->Enabled = true;
		AddPlayerButton->Enabled = true;
		GenerateButton->Enabled = true;
		AddResultButton->Enabled = true;
		EditPlayerButton->Enabled = false;
		MessageBox::Show("Date Set To Start The League", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		startdatebutton = false;
	}
	else
		MessageBox::Show("League Date Already Set", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	   }
private: System::Void GenerateText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   int totalPlayersAdded = 0;
	   int manualPlayerCount = 0;
	   int totalTeamAdded = 0;
	   int manualTeamCount = 0;
	   int manualAddResultCount = 0;
	   bool manualInputDone = false;
	   bool PlayersAdded = false;
	   bool TeamAdded = false;
	   bool FinishedAddingTeam= true;
	   bool FinishedAddingPlayers = true;
	   bool AllPlayersAdded = false;
	   
	private: System::Void AddTeamButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FinishedAddingTeam == true) {
			AddTeamLabel->Visible = true;
			AddTeamText->Visible = true;
			SaveTeam->Visible = true;
			CloseTeam->Visible = true;
		}
		else
			MessageBox::Show("All Team Are Already Added", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
private: System::Void SaveAddedPlayerButton_Click(System::Object^ sender, System::EventArgs^ e) {
	System::DateTime selectedDate = AddPlayerBirthdate->Value;
	if (totalPlayersAdded >= 680) {
		MessageBox::Show("Maximum player limit (680) reached.");
		return;
	}
	std::string name = msclr::interop::marshal_as<std::string>(AddPlayerNameText->Text);
	std::string nationality = msclr::interop::marshal_as<std::string>(AddPlayerNationalityText->Text);
	std::string bd = std::to_string(selectedDate.Day) + "/" + std::to_string(selectedDate.Month) + "/" + std::to_string(selectedDate.Year);
	if (name.empty() || nationality.empty()) {
		MessageBox::Show("Name and Nationality cannot be empty!", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	} 
	int teamIndex = totalPlayersAdded / 34;
	int playerIndex = totalPlayersAdded % 34;
	ManuallyAddPlayer(teamIndex, playerIndex, totalPlayersAdded, name, nationality, bd, AddPlayerList);
	totalPlayersAdded++;
	manualPlayerCount++;
	AddPlayerNationalityText->Text = "";
	AddPlayerNameText->Text = "";
	EditPlayerIDText->Text = "";
}
	   
private: System::Void CloseAddingPlayerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Do You Want To Stop Adding Players? (WARNING: THE REST OF THE PLAYERS WILL BE ADDED AUTOMATICALLY BY THE SYSTEM", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			MessageBox::Show("System Will Now Automatically Add The Rest Of The Players.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			AddPlayerNameLabel->Visible = false;
			AddPlayerNationalityLabel->Visible = false;
			AddBirthDateLabel->Visible = false;
			AddPlayerNameText->Visible = false;
			AddPlayerNationalityText->Visible = false;
			AddPlayerBirthdate->Visible = false;
			SaveAddedPlayerButton->Visible = false;
			CloseAddingPlayerButton->Visible = false;
			manualInputDone = true;
			PlayersAdded = true;
			addplayer = true;
			EditPlayerButton->Enabled = true;
			for (int i = totalPlayersAdded; i < 680; i++) {
				AutoFillPlayer(i, AddPlayerList);
			}
			totalPlayersAdded = 680;
			FinishedAddingPlayers = false;
		}
		else
			MessageBox::Show("No Changes Made.", "Cancelled", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
}
private: System::Void FinishedAdding_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("You Have Now Completed Adding Teams And You Will Not Be Able To Make Changes After This.","Success", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
	if (result == System::Windows::Forms::DialogResult::Yes) {
		UserFunctionButton->Visible = true;
		DashBoardPanel->Visible = true;
		TeamDetailsButton->Visible = true;
		PlayerDetailsButton->Visible = true;
		LeagueScheduleButton->Visible = true;
		Match_ResultButton->Visible = true;
		LeagueTableButton->Visible = true;
		SeasonDateButton->Enabled = false;
		dateTimePicker1->Enabled = false;
		AddTeamButton->Enabled = false;
		AddPlayerButton->Enabled = false;
		AddResultButton->Enabled = false;
		GenerateButton->Enabled = false;
		FinishedAdding->Enabled = false;
		EditPlayerButton->Enabled = false;
	}
	else
		System::Windows::Forms::DialogResult result = MessageBox::Show("No Changes Made","Cancelled", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
}
private: System::Void SaveTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	if (manualTeamCount >= 20) {
		MessageBox::Show("Maximum of 20 teams already added.");
		return;
	}
	std::string TeamName = msclr::interop::marshal_as<std::string>(AddTeamText->Text);
	if (TeamName.empty()) {
		MessageBox::Show("Name cannot be empty!", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	ManuallyAddTeam(manualTeamCount, TeamName, AddTeamList);
	manualTeamCount++;
	AddTeamText->Text = "";
}
private: System::Void CloseTeam_Click(System::Object^ sender, System::EventArgs^ e) {

		bool used[27] = { false };

		System::Windows::Forms::DialogResult result = MessageBox::Show("Do You Want To Stop Adding Players? (WARNING: THE REST OF THE TEAMS WILL BE ADDED AUTOMATICALLY BY THE SYSTEM)", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			MessageBox::Show("System Will Now Automatically Add The Rest Of The Teams.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			AddTeamText->Visible = false;
			AddTeamLabel->Visible = false;
			SaveTeam->Visible = false;
			CloseTeam->Visible = false;
			TeamAdded = true;
			addteam = true;
			std::string TeamName[27] = {
				"Black Bulls", "Real Madrid", "Death Note", "Red Devils", "Green Ghost", "Barcelona", "Mancity", "Night Hawks",
				"Man united", "Liverpool", "Arsenal", "Survey Corps", "Atomic", "Avengers", "Blue Lock", "Bankai", "Milan",
				"Inter Milan", "Beyonders", "The Akatsuki", "Amazon", "Warriors", "The Legends", "Dortmund", "Juventus",
				"Straw Hat", "The Hunters"
			};

			bool used[27] = { false };

			// ✅ First: mark manually added names
			for (int i = 0; i < manualTeamCount; i++) {
				for (int j = 0; j < 27; j++) {
					if (Teams[i].NAME == TeamName[j]) {
						used[j] = true;
						break;
					}
				}
			}

			// ✅ Then: fill the rest
			for (int i = manualTeamCount; i < 20; i++) {
				AutoFillTeam(i, used, AddTeamList);
			}
			FinishedAddingTeam = false;
		}
	else
		MessageBox::Show("All Teams Are Already Added", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void EditPlayerButton_Click(System::Object^ sender, System::EventArgs^ e) {
	AddPlayerNameText->Clear();
	AddPlayerNationalityText->Clear();
	EditPlayerSave->Visible = true;
	EditPlayerClose->Visible = true;
	EditPlayerIDText->Visible = true;
	EditPlayerIDLabel->Visible = true;
	AddPlayerNameLabel->Visible = true;
	AddPlayerNameText->Visible = true;
	AddPlayerNationalityLabel->Visible = true;
	AddPlayerNationalityText->Visible = true;
	AddBirthDateLabel->Visible = true;
	AddPlayerBirthdate->Visible = true;
	EditSearchButton -> Visible = true;
}
private: System::Void EditPlayerSave_Click(System::Object^ sender, System::EventArgs^ e) {

		int playerID;
		if (!Int32::TryParse(EditPlayerIDText->Text, playerID) || playerID < 0 || playerID >= 680) {
			MessageBox::Show("Invalid Player ID.");
			return;
		}

		int teamIndex = playerID / 34;
		int playerIndex = playerID % 34;

		// Update values from the form
		std::string name = msclr::interop::marshal_as<std::string>(AddPlayerNameText->Text);
		std::string nationality = msclr::interop::marshal_as<std::string>(AddPlayerNationalityText->Text);
		System::DateTime bd = AddPlayerBirthdate->Value;
		std::string birth = std::to_string(bd.Day) + "/" + std::to_string(bd.Month) + "/" + std::to_string(bd.Year);

		Teams[teamIndex].Player[playerIndex].Name = name;
		Teams[teamIndex].Player[playerIndex].Nationality = nationality;
		Teams[teamIndex].Player[playerIndex].BD = birth;

		MessageBox::Show("Player updated successfully!");
		ShowPlayerList();
		AddPlayerNationalityText->Text = "";
		AddPlayerNameText->Text = "";
		EditPlayerIDText->Text = "";
}
private: System::Void EditSearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int playerID;
	if (!Int32::TryParse(EditPlayerIDText->Text, playerID) || playerID < 0 || playerID >= 680) {
		MessageBox::Show("Please enter a valid Player ID (0–679).");
		return;
	}

	int teamIndex = playerID / 34;
	int playerIndex = playerID % 34;
	AddPlayerNameText->Text = gcnew String(Teams[teamIndex].Player[playerIndex].Name.c_str());
	AddPlayerNationalityText->Text = gcnew String(Teams[teamIndex].Player[playerIndex].Nationality.c_str());
	std::string bd = Teams[teamIndex].Player[playerIndex].BD;
	int day, month, year;
	sscanf(bd.c_str(), "%d/%d/%d", &day, &month, &year);
	AddPlayerBirthdate->Value = System::DateTime(year, month, day);
}
private: System::Void EditPlayerClose_Click(System::Object^ sender, System::EventArgs^ e) {
	EditPlayerSave->Visible = false;
	EditPlayerClose->Visible = false;
	EditPlayerIDText->Visible = false;
	EditPlayerIDLabel->Visible = false;
	AddPlayerNameLabel->Visible = false;
	AddPlayerNameText->Visible = false;
	AddPlayerNationalityLabel->Visible = false;
	AddPlayerNationalityText->Visible = false;
	AddBirthDateLabel->Visible = false;
	AddPlayerBirthdate->Visible = false;
	EditSearchButton->Visible = false;
}
private: System::Void AddResultButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (generateSch) {
		AddMatchResultName1->Visible = true;
		AddMatchResultName2->Visible = true;
		VSLabel->Visible = true;
		AddMatchResultText1->Visible = true;
		AddMatchResultText2->Visible = true;
		AddMatchResultSave->Visible = true;
		AddMatchResultClose->Visible = true;
		ShowTeamsButton->Visible = true;
	}
	else
		MessageBox::Show("Please Make Sure You Have Generated The Match Schedule First", "Error", MessageBoxButtons::OK ,MessageBoxIcon::Error );
}
private: System::Void AddMatchResultSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (manualAddResultCount >= 190) {
		MessageBox::Show("All match results have already been entered.");
		return;
	}

	int homeGoals;
	int awayGoals;

	if (!Int32::TryParse(AddMatchResultText1->Text, homeGoals) ||
		!Int32::TryParse(AddMatchResultText2->Text, awayGoals))
	{
		MessageBox::Show("Please enter valid numeric values for both goals.");
		return;
	}

	// Save result for the current match
	ManuallyAddMatchResult(manualAddResultCount, homeGoals, awayGoals);
	GenerateMatchStats(manualAddResultCount);

	manualAddResultCount++;

	// Update UI for the NEXT match
	if (manualAddResultCount < 190) {
		UpdateMatchResultLabels(manualAddResultCount, AddMatchResultName1, AddMatchResultName2);
		AddMatchResultText1->Clear();
		AddMatchResultText2->Clear();
	}
	else {
		MessageBox::Show("All match results have been entered.");
		AddMatchResultSave->Enabled = false;
	}
}
private: System::Void ShowTeamsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	AddMatchResultName1->Visible = true;
	AddMatchResultName2->Visible = true;
	UpdateMatchResultLabels(manualAddResultCount,AddMatchResultName1, AddMatchResultName2);
}
private: System::Void AddMatchResultClose_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult Result = MessageBox::Show("Do You Want To Stop Adding The Match Results. (WARNING: IF U STOP THE SYSTEM WILL OVERTAKE THE INPUTTING OF THE RESULTS!!).", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	if (Result == System::Windows::Forms::DialogResult::Yes) {
		MessageBox::Show("System Has Sucessfully Automatically Added Match Results.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		AddMatchResultName1->Visible = false;
		AddMatchResultName2->Visible = false;
		VSLabel->Visible = false;
		AddMatchResultText1->Visible = false;
		AddMatchResultText2->Visible = false;
		AddMatchResultSave->Visible = false;
		AddMatchResultClose->Visible = false;
		ShowTeamsButton->Visible = false;
		AddResultButton->Enabled = false;


		for (int i = manualAddResultCount; i < 190; i++) {
			AutomaticallyAddMatchResult(i);
			GenerateMatchStats(i);
			printf("Auto-generated match %d\n", i);
		}
		addresult = true;
	}
	if (addplayer && addteam && addresult && generateSch) {
		FinishedAdding->Enabled = true;
	}
}
private: System::Void AddTeamText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
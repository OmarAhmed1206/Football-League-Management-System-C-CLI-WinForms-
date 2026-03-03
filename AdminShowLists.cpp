#pragma once
#include "pch.h"
#include "AdminF.h"
#include <string>
#include "AdminGUICode.h"

using namespace FootBall1;

void AdminF::ShowTeamList() {
	AddTeamList->Items->Clear();
	for (int i = 0; i < 20; i++) {
		if (Teams[i].NAME.empty()) {
			continue;
		}
		AddTeamList->Items->Add(gcnew String(Teams[i].NAME.c_str()));
	}
}

void AdminF::ShowPlayerList() {
	AddPlayerList->Items->Clear();
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 34; j++) {
			AddPlayerList->Items->Add( "ID: " +  Teams[i].Player[j].ID.ToString() +
				" || " +	gcnew String(Teams[i].Player[j].Name.c_str())+ "(" + gcnew String(Teams[i].Player[j].Nationality.c_str()) + ")");
		}
	}
}

void AdminF::UserTeamList() {
	ViewUserTeamInfo->Items->Clear();
	for (int i = 0; i < 20; i++) {
		if (Teams[i].NAME.empty()) {
			continue;
		}
		ViewUserTeamInfo->Items->Add("Team No. " + (i + 1) + "      ------------------------\n" + "   Team ID: " + Teams[i].ID.ToString() + "   || Club: " + gcnew String(Teams[i].NAME.c_str()) + "  || Players Of Team \n" + "-----------------------------");
		ViewUserTeamInfo->Items->Add(" \n\ \n \n");
		for (int j = 0; j < 34; j++) {
			ViewUserTeamInfo->Items->Add((j + 1) + ". " + gcnew String(Teams[i].Player[j].Name.c_str()));
		}
		ViewUserTeamInfo->Items->Add(" \n\ \n \n");
	}
}

void AdminF::UserPlayerList() {
	ViewPlayerDetailsList->Items->Clear();
	for (int i = 0;i < 20;i++)
	{
		ViewPlayerDetailsList->Items->Add("-------------------------------------------------  " + "Players Info Of Team: " + gcnew String(Teams[i].NAME.c_str()) + "  -------------------------------------------------------------" );
		ViewPlayerDetailsList->Items->Add("\n\n");
		for (int j = 0;j < 34;j++) {
			ViewPlayerDetailsList->Items->Add("Name:  " + gcnew String(Teams[i].Player[j].Name.c_str())+ "\n\n");
			ViewPlayerDetailsList->Items->Add("Nationality:  " + gcnew String(Teams[i].Player[j].Nationality.c_str()) + "\n\n");
			ViewPlayerDetailsList->Items->Add("ID:  " + (Teams[i].Player[j].ID.ToString()) + "\n\n");
			ViewPlayerDetailsList->Items->Add("BirthDate:  " + gcnew String(Teams[i].Player[j].BD.c_str()) + "\n\n");
			ViewPlayerDetailsList->Items->Add("\n\n");
		}
		ViewPlayerDetailsList->Items->Add("\n\n\n");
	}
}

void AdminF::MatchGenerate(int day, int month, int year) {
	LeagueScheduleList->Items->Clear();
	int matchIndex = 0;
	const int numTeams = 20;
	std::string timeSlots[3] = { "4:00", "6:00", "8:00" };

	for (int round = 0; round < numTeams - 1; round++)
	{
		// Only increment the date if it's not the first round
		if (round != 0)
		{
			day += 7;  // Matches are scheduled every 7 days
			int days = daysInMonth(month, year);
			while (day > days)
			{
				day -= days;
				month++;
				if (month > 12)
				{
					month = 1;
					year++;
				}
				days = daysInMonth(month, year);
			}
		}

		int weekday = getDayOfWeek(day, month, year);
		int daysToAdd = (5 - weekday + 7) % 7;
		if (daysToAdd != 0) {
			day += daysToAdd;
			int days = daysInMonth(month, year);
			while (day > days) {
				day -= days;
				month++;
				if (month > 12) {
					month = 1;
					year++;
				}
				days = daysInMonth(month, year);
			}
		}
		//converts the integers into string.
		std::string dateStart = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);

		for (int i = 0; i < numTeams / 2; i++)
		{
			int teamA = (round + i) % (numTeams - 1);
			int teamB = (numTeams - 1 - i + round) % (numTeams - 1);

			if (i == 0)
			{
				teamB = numTeams - 1;
			}

			int timeIndex;
			if (i < 3)
			{
				timeIndex = 0;
			}
			else if (i < 6)
			{
				timeIndex = 1;
			}
			else
			{
				timeIndex = 2;
			}

			Matches[matchIndex].ID = matchIndex + 1;
			Matches[matchIndex].TeamHome = Teams[teamA].NAME;
			Matches[matchIndex].TeamAway = Teams[teamB].NAME;
			Matches[matchIndex].StartDate = dateStart;
			Matches[matchIndex].Times = timeSlots[timeIndex];



			LeagueScheduleList->Items->Add("------------------------------------------------------  Match ID: " + gcnew String(std::to_string(Matches[matchIndex].ID).c_str()) + "  ||  Date:  "
			+ gcnew String(Matches[matchIndex].StartDate.c_str()) + "-----------------------------------------------------------------  ");
			LeagueScheduleList->Items->Add("Time: " + gcnew String((Matches[matchIndex].Times.c_str())) + " Pm: ");
			LeagueScheduleList->Items->Add(gcnew String(Matches[matchIndex].TeamHome.c_str()) + " VS " + gcnew String(Matches[matchIndex].TeamAway.c_str()));
			LeagueScheduleList->Items -> Add("\n\n");

			matchIndex++;
		}
	}
	
}

void AdminF::MatchResult() {
	ResultList->Items->Clear();

	int MatchIndex2 = 0;

	for (int round = 0;round < 19;round++)
	{
		ResultList->Items->Add("                                                                       Round  " + (round + 1) + " On " + gcnew String(Matches[MatchIndex2].StartDate.c_str()));
		ResultList->Items->Add("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

		for (int i = 0; i < 10; i++)
		{
			ResultList->Items->Add("At: " + gcnew String(Matches[MatchIndex2].Times.c_str()) + ": ");
			ResultList->Items->Add(gcnew String(Matches[MatchIndex2].TeamHome.c_str()) + "  Vs  " + gcnew String(Matches[MatchIndex2].TeamAway.c_str()));
			ResultList->Items->Add("Result:  " + gcnew String(std::to_string(Matches[MatchIndex2].result.TeamHomeGoals).c_str()) + " : " + gcnew String(std::to_string(Matches[MatchIndex2].result.TeamAwayGoals).c_str()));
			ResultList->Items->Add("=================================== MATCH STATS =========================================================");
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].SHOTS[0]).c_str()) + "\t  Shots \t                   " + gcnew String(std::to_string(Matches[MatchIndex2].SHOTS[1]).c_str()));
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].SHOTSONTARGET[0]).c_str()) + " \tShots on Target\t  " + gcnew String(std::to_string(Matches[MatchIndex2].SHOTSONTARGET[1]).c_str()));
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].POSSESSION[0]).c_str()) + "\t Possession \t  " + gcnew String(std::to_string(Matches[MatchIndex2].POSSESSION[1]).c_str()));
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].PASSES[0]).c_str()) + "\t Passes \t                   " + gcnew String(std::to_string(Matches[MatchIndex2].PASSES[1]).c_str()));
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].PASSACCURACY[0]).c_str()) + "\t Pass Accuracy \t  " + gcnew String(std::to_string(Matches[MatchIndex2].PASSACCURACY[1]).c_str()));
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].FOULS[0]).c_str()) + "\t Fouls\t                    " + gcnew String(std::to_string(Matches[MatchIndex2].FOULS[1]).c_str()));
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].YELLOWCARDS[0]).c_str()) + "\t Yellow Cards\t  " + gcnew String(std::to_string(Matches[MatchIndex2].YELLOWCARDS[1]).c_str()));
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].REDCARDS[0]).c_str()) + "\t Red Cards   \t  " + gcnew String(std::to_string(Matches[MatchIndex2].REDCARDS[1]).c_str()));
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].OFFSIDES[0]).c_str()) + "\t Offsides               \t  " + gcnew String(std::to_string(Matches[MatchIndex2].OFFSIDES[1]).c_str()));
			ResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].CORNERS[0]).c_str()) + "\t Corners \t                    " + gcnew String(std::to_string(Matches[MatchIndex2].CORNERS[1]).c_str()));
			ResultList->Items->Add("=================================================================================================================");
			MatchIndex2++;
		}
	}
}


String^ CenterString(String^ s, int width) {
	int len = s->Length;
	if (len > width) {
		s = s->Substring(0, width);
		len = s->Length;
	}
	int leftPadding = (width - len + 1) / 2;
	int rightPadding = width - len - leftPadding;
	return gcnew String(' ', leftPadding) + s + gcnew String(' ', rightPadding);
}

void AdminF::LeagueTable() {
	LeagueTableList->Items->Clear();
	const int teamsnum = 20;

	// Calculate points
	for (int i = 0; i < teamsnum; i++) {
		Teams[i].Points = (Teams[i].Wins * 3) + Teams[i].Draws;
	}

	// Sort by points (descending)
	for (int j = 0; j < teamsnum - 1; j++) {
		int maxindex = j;
		for (int z = j + 1; z < teamsnum; z++) {
			if (Teams[z].Points > Teams[maxindex].Points)
				maxindex = z;
		}
		Team x = Teams[j];
		Teams[j] = Teams[maxindex];
		Teams[maxindex] = x;
	}

	// Tie-breaker: Sort by GD if points are equal
	for (int i = 0; i < teamsnum - 1; i++) {
		if (Teams[i].Points == Teams[i + 1].Points) {
			if (Teams[i].GD < Teams[i + 1].GD) {
				Team y = Teams[i];
				Teams[i] = Teams[i + 1];
				Teams[i + 1] = y;
			}
		}
	}

	// Column widths optimized for 1100px
	const int colRank = 6;
	const int colTeam = 22;
	const int colWins = 6;
	const int colLosses = 7;
	const int colDraws = 6;
	const int colPoints = 8;
	const int colGF = 5;
	const int colGA = 5;
	const int colGD = 5;

	// Total width calculation
	const int totalWidth = 2 + colRank + 3 + colTeam + 3 + colWins + 3 +
		colLosses + 3 + colDraws + 3 + colPoints + 3 +
		colGF + 3 + colGA + 3 + colGD + 2;

	// Header
	String^ header = "|" + CenterString("Rank", colRank) + " |" +
		CenterString("Team", colTeam) + " |" +
		CenterString("Wins", colWins) + " |" +
		CenterString("Loss", colLosses) + " |" +
		CenterString("Draw", colDraws) + " |" +
		CenterString("Points", colPoints) + " |" +
		CenterString("GF", colGF) + " |" +
		CenterString("GA", colGA) + " |" +
		CenterString("GD", colGD) + "|";

	// Separator line
	String^ separator = gcnew String('=', totalWidth);

	LeagueTableList->Items->Add(header);
	LeagueTableList->Items->Add(separator);

	// Team rows
	for (int i = 0; i < teamsnum; i++) {
		String^ rankStr = (i + 1).ToString()->PadLeft(colRank);
		String^ teamStr = gcnew String(Teams[i].NAME.c_str());
		if (teamStr->Length > colTeam)
			teamStr = teamStr->Substring(0, colTeam - 3) + "...";
		teamStr = teamStr->PadRight(colTeam);

		String^ row = "|" + rankStr + " |" +
			teamStr + " |" +
			Teams[i].Wins.ToString()->PadLeft(colWins) + " |" +
			Teams[i].losses.ToString()->PadLeft(colLosses) + " |" +
			Teams[i].Draws.ToString()->PadLeft(colDraws) + " |" +
			Teams[i].Points.ToString()->PadLeft(colPoints) + " |" +
			Teams[i].GF.ToString()->PadLeft(colGF) + " |" +
			Teams[i].GA.ToString()->PadLeft(colGA) + " |" +
			Teams[i].GD.ToString()->PadLeft(colGD) + "|";

		LeagueTableList->Items->Add(row);
		LeagueTableList->Items->Add(separator);
	}

	// Set bold monospace font (10pt Consolas Bold)
	LeagueTableList->Font = gcnew System::Drawing::Font("Consolas", 10, FontStyle::Bold);

	// Set exact dimensions
	LeagueTableList->Width = 1000;
	LeagueTableList->Height = 404;

	// Adjust item height if needed
	int itemsToShow = teamsnum * 2 + 2; // Each team row + separator
	int calculatedHeight = 504 / itemsToShow;
	if (calculatedHeight < 16) calculatedHeight = 16;
	LeagueTableList->ItemHeight = calculatedHeight;
}

void AdminF::RestartLeague() {
	LeagueTableList->Items->Clear();
	ResultList->Items->Clear();
	AddTeamList->Items->Clear();
	AddPlayerList->Items->Clear();
	ViewUserTeamInfo->Items->Clear();
	ViewPlayerDetailsList->Items->Clear();
	LeagueScheduleList->Items->Clear();
	for (int i = 0; i < 20; i++) {
		Teams[i].ID = 0;
		Teams[i].NAME = "";  // CRITICAL: Clear team names
		Teams[i].Wins = 0;
		Teams[i].Draws = 0;
		Teams[i].losses = 0;
		Teams[i].GF = 0;
		Teams[i].GA = 0;
		Teams[i].GD = 0;
		Teams[i].Points = 0;
		Matches[i].CORNERS[0] = 0;
		Matches[i].CORNERS[1] = 0;
		Matches[i].FOULS[0] = 0;
		Matches[i].FOULS[1] = 0;
		Matches[i].OFFSIDES[0] = 0;
		Matches[i].OFFSIDES[1] = 0;
		Matches[i].PASSACCURACY[0] = 0;
		Matches[i].PASSACCURACY[1] = 0;
		Matches[i].PASSES[0] = 0;
		Matches[i].PASSES[1] = 0;
		Matches[i].POSSESSION[0] = 0;
		Matches[i].POSSESSION[1] = 0;
		Matches[i].REDCARDS[0] = 0;
		Matches[i].REDCARDS[1] = 0;
		Matches[i].SHOTS[0] = 0;
		Matches[i].SHOTS[1] = 0;
		Matches[i].SHOTSONTARGET[0] = 0;
		Matches[i].SHOTSONTARGET[1] = 0;
		Matches[i].YELLOWCARDS[0] = 0;
		Matches[i].YELLOWCARDS[1] = 0;
	}
	UserFunctionButton->Visible = false;
	DashBoardPanel->Visible = false;
	TeamDetailsButton->Visible = false;
	PlayerDetailsButton->Visible = false;
	LeagueScheduleButton->Visible = false;
	Match_ResultButton->Visible = false;
	LeagueTableButton->Visible = false;
	addteam = false;
	addplayer = false;
	generateSch = false;
	addresult = false;
	totalPlayersAdded = 0;
	manualPlayerCount = 0;
	totalTeamAdded = 0;
	manualTeamCount = 0;  // CRITICAL: Reset team counter
	manualAddResultCount = 0;
		GenerateButton->Enabled = false;
		AddTeamButton->Enabled = false;
		AddPlayerButton->Enabled = false;
		AddResultButton->Enabled = false;
		 manualInputDone = false;
		 PlayersAdded = false;
		 TeamAdded = false;
		 AddTeamButton->Enabled = false;
		 FinishedAddingTeam = true;
		 FinishedAddingPlayers = true;
		 SeasonDateButton->Enabled = true;
		 dateTimePicker1->Enabled = true;
		 startdatebutton = true;
}


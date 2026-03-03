	#pragma once
#include "pch.h"
#include "UserFunctionForm.h"
#include "AdminGUICode.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>

using namespace FootBall1;
using namespace msclr::interop;

void UserFunctionForm::UserTeamDetail() {

	UserTeamDetailList->Items->Clear();
	Teams[0].NAME = "Al-Ahly";
	Teams[0].ID = 1041;
	Teams[1].ID = 1467;
	Teams[1].NAME = "El-ittihad";
	Teams[0].Player[0].Name = "Lionel Messi";
	Teams[0].Player[1].Name = "Neymar";
	Teams[0].Player[0].ID = 0;
	Teams[0].Player[1].ID = 1;
	Teams[0].Player[0].Nationality = "Argentina";
	Teams[0].Player[1].Nationality = "Brazil";
	Teams[0].Player[0].BD = "24/6/1987";
	Teams[0].Player[1].BD = "5/2/1992";
	Teams[2].NAME = "Bankai";
	Teams[3].NAME = "Warriors";
	for (int i = 0; i < 20; i++) {
		if (Teams[i].NAME.empty()) {
			continue;
		}
		UserTeamDetailList->Items->Add("Team No. " + (i + 1) + "      ------------------------\n" + "   Team ID: " + Teams[i].ID.ToString() + "   || Club: " + gcnew String(Teams[i].NAME.c_str()) + "  || Players Of Team \n" + "------------------------");
		FavTeamDropDownList->Items->Clear();
		ViewSpecificTeamDropDownList->Items->Clear();
		for (int i = 0; i < 20; i++) {
			FavTeamDropDownList->Items->Add(gcnew String(Teams[i].NAME.c_str()));
			ViewSpecificTeamDropDownList->Items->Add(gcnew String(Teams[i].NAME.c_str()));
		}
		UserTeamDetailList->Items->Add(" \n\ \n \n");
		for (int j = 0; j < 34; j++) {
			UserTeamDetailList->Items->Add((j + 1) + ". " + gcnew String(Teams[i].Player[j].Name.c_str()));
		}
		UserTeamDetailList->Items->Add(" \n\ \n \n");
	}
}
void UserFunctionForm::UserPlayerDetail() {
	UserPlayerDetailList->Items->Clear();
	FavTeamPlayerDropDownList->Items->Clear();
	Teams[0].NAME = "Al-Ahly";
	Teams[2].NAME = "Bankai";
	Teams[3].NAME = "Warriors";
	Teams[0].ID = 1041;
	Teams[1].ID = 1467;
	Teams[1].NAME = "El-ittihad";
	Teams[0].Player[0].Name = "Lionel Messi";
	Teams[0].Player[1].Name = "Neymar";
	Teams[0].Player[0].ID = 0;
	Teams[0].Player[1].ID = 1;
	Teams[0].Player[0].Nationality = "Argentina";
	Teams[0].Player[1].Nationality = "Brazil";
	Teams[0].Player[0].BD = "24/6/1987";
	Teams[0].Player[1].BD = "5/2/1992";
	for (int i = 0;i < 20;i++)
	{
		UserPlayerDetailList->Items->Add("----------------------------------------------------------  " + "Players Info Of Team: " + gcnew String(Teams[i].NAME.c_str()) + "  ----------------------------------------------------------");
		UserPlayerDetailList->Items->Add("\n\n");
		for (int j = 0;j < 34;j++) {
			System::String^ PlayerTeamChoosing = gcnew System::String(Teams[i].NAME.c_str());
			if (PlayerTeamChoosing == ChosenTeam) {
				FavTeamPlayerDropDownList->Items->Add(gcnew String(Teams[i].Player[j].Name.c_str()));
			}
			FavPlayerDropDownList->Items->Add(gcnew String(Teams[i].Player[j].Name.c_str()));
			UserPlayerDetailList->Items->Add("Name:  " + gcnew String(Teams[i].Player[j].Name.c_str()) + "\n\n");
			UserPlayerDetailList->Items->Add("Nationality:  " + gcnew String(Teams[i].Player[j].Nationality.c_str()) + "\n\n");
			UserPlayerDetailList->Items->Add("ID:  " + (Teams[i].Player[j].ID.ToString()) + "\n\n");
			UserPlayerDetailList->Items->Add("BirthDate:  " + gcnew String(Teams[i].Player[j].BD.c_str()) + "\n\n");
			UserPlayerDetailList->Items->Add("\n\n");

		}
		UserPlayerDetailList->Items->Add("\n\n\n");
	}

}
void UserFunctionForm::UserLeagueSchedule() {
	UserLeagueScheduleList->Items->Clear();
	Teams[0].NAME = "Al-Ahly";
	Teams[0].ID = 1041;
	Teams[1].ID = 1467;
	Teams[1].NAME = "El-ittihad";
	Teams[0].Player[0].Name = "Lionel Messi";
	Teams[0].Player[1].Name = "Neymar";
	Teams[0].Player[0].ID = 0;
	Teams[0].Player[1].ID = 1;
	Teams[0].Player[0].Nationality = "Argentina";
	Teams[0].Player[1].Nationality = "Brazil";
	Teams[0].Player[0].BD = "24/6/1987";
	Teams[0].Player[1].BD = "5/2/1992";
	Teams[2].NAME = "Bankai";
	Teams[3].NAME = "Warriors";
	int day = 7, month = 8, year = 2025;
	int matchIndex = 0;
	const int numTeams = 20;
	std::string timeSlots[3] = { "4:00", "6:00", "8:00" };
	for (int round = 0; round < numTeams - 1; round++) {
		if (round != 0)
		{
			day += 7;
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
		std::string dateStart = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
		for (int i = 0; i < numTeams / 2; i++)
		{
			int teamA = (round + i) % (numTeams - 1);
			int teamB = (numTeams - 1 - i + round) % (numTeams - 1);
			if (i == 0) {
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

			UserLeagueScheduleList->Items->Add("------------------------------------------------  Match ID: " + gcnew String(std::to_string(Matches[matchIndex].ID).c_str()) + "  ||  Date:  "
				+ gcnew String(Matches[matchIndex].StartDate.c_str()) + "----------------------------------------------  ");
			UserLeagueScheduleList->Items->Add("Time: " + gcnew String((Matches[matchIndex].Times.c_str())) + " Pm: ");
			UserLeagueScheduleList->Items->Add(gcnew String(Matches[matchIndex].TeamHome.c_str()) + " VS " + gcnew String(Matches[matchIndex].TeamAway.c_str()));
			UserLeagueScheduleList->Items->Add("\n\n");


			matchIndex++;
		}
	}
}
void UserFunctionForm::UserMatchResult() {
	UserViewMatchResultList->Items->Clear();
	Teams[0].NAME = "Al-Ahly";
	Teams[0].ID = 1041;
	Teams[1].ID = 1467;
	Teams[1].NAME = "El-ittihad";
	Teams[0].Player[0].Name = "Lionel Messi";
	Teams[0].Player[1].Name = "Neymar";
	Teams[0].Player[0].ID = 0;
	Teams[0].Player[1].ID = 1;
	Teams[0].Player[0].Nationality = "Argentina";
	Teams[0].Player[1].Nationality = "Brazil";
	Teams[0].Player[0].BD = "24/6/1987";
	Teams[0].Player[1].BD = "5/2/1992";
	Teams[2].NAME = "Bankai";
	Teams[3].NAME = "Warriors";
	int MatchIndex2 = 0;

	for (int round = 0;round < 19;round++)
	{
		UserViewMatchResultList->Items->Add("                                                                       Round  " + (round + 1) + " On " + gcnew String(Matches[MatchIndex2].StartDate.c_str()));
		UserViewMatchResultList->Items->Add("--------------------------------------------------------------------------------------------------------------------------------------------------------------");

		for (int i = 0; i < 10; i++)
		{
			UserViewMatchResultList->Items->Add("At: " + gcnew String(Matches[MatchIndex2].Times.c_str()) + ": ");
			UserViewMatchResultList->Items->Add(gcnew String(Matches[MatchIndex2].TeamHome.c_str()) + "  Vs  " + gcnew String(Matches[MatchIndex2].TeamAway.c_str()));
			UserViewMatchResultList->Items->Add("Result:  " + gcnew String(std::to_string(Matches[MatchIndex2].result.TeamHomeGoals).c_str()) + " : " + gcnew String(std::to_string(Matches[MatchIndex2].result.TeamAwayGoals).c_str()));
			UserViewMatchResultList->Items->Add("=================================== MATCH STATS =========================================================");
			UserViewMatchResultList->Items->Add("\t\t\t   "+ gcnew String(std::to_string(Matches[MatchIndex2].SHOTS[0]).c_str()) + "\t  Shots \t                   " + gcnew String(std::to_string(Matches[MatchIndex2].SHOTS[1]).c_str()));
			UserViewMatchResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].SHOTSONTARGET[0]).c_str()) + " \tShots on Target\t  " + gcnew String(std::to_string(Matches[MatchIndex2].SHOTSONTARGET[1]).c_str()));
			UserViewMatchResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].POSSESSION[0]).c_str()) + "\t Possession \t  " + gcnew String(std::to_string(Matches[MatchIndex2].POSSESSION[1]).c_str()));
			UserViewMatchResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].PASSES[0]).c_str()) + "\t Passes \t                   " + gcnew String(std::to_string(Matches[MatchIndex2].PASSES[1]).c_str()));
			UserViewMatchResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].PASSACCURACY[0]).c_str()) + "\t Pass Accuracy \t  " + gcnew String(std::to_string(Matches[MatchIndex2].PASSACCURACY[1]).c_str()));
			UserViewMatchResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].FOULS[0]).c_str()) + "\t Fouls\t                    " + gcnew String(std::to_string(Matches[MatchIndex2].FOULS[1]).c_str()));
			UserViewMatchResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].YELLOWCARDS[0]).c_str()) + "\t Yellow Cards\t  " + gcnew String(std::to_string(Matches[MatchIndex2].YELLOWCARDS[1]).c_str()));
			UserViewMatchResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].REDCARDS[0]).c_str()) + "\t Red Cards   \t  " + gcnew String(std::to_string(Matches[MatchIndex2].REDCARDS[1]).c_str()));
			UserViewMatchResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].OFFSIDES[0]).c_str()) + "\t Offsides               \t  " + gcnew String(std::to_string(Matches[MatchIndex2].OFFSIDES[1]).c_str()));
			UserViewMatchResultList->Items->Add("\t\t\t   " + gcnew String(std::to_string(Matches[MatchIndex2].CORNERS[0]).c_str()) + "\t Corners \t                    " + gcnew String(std::to_string(Matches[MatchIndex2].CORNERS[1]).c_str()));
			UserViewMatchResultList->Items->Add("=================================================================================================================");
			MatchIndex2++;
		}
	}
}

String^ UserCenterString(String^ s, int width) {
	int len = s->Length;
	if (len > width) {
		s = s->Substring(0, width);
		len = s->Length;
	}
	int leftPadding = (width - len + 1) / 2;
	int rightPadding = width - len - leftPadding;
	return gcnew String(' ', leftPadding) + s + gcnew String(' ', rightPadding);
}

void UserFunctionForm::UserLeagueTable() {
	UserViewLeagueTableList->Items->Clear();
	Teams[0].NAME = "Al-Ahly";
	Teams[0].ID = 1041;
	Teams[1].ID = 1467;
	Teams[1].NAME = "El-ittihad";
	Teams[0].Player[0].Name = "Lionel Messi";
	Teams[0].Player[1].Name = "Neymar";
	Teams[0].Player[0].ID = 0;
	Teams[0].Player[1].ID = 1;
	Teams[0].Player[0].Nationality = "Argentina";
	Teams[0].Player[1].Nationality = "Brazil";
	Teams[0].Player[0].BD = "24/6/1987";
	Teams[0].Player[1].BD = "5/2/1992";
	Teams[2].NAME = "Bankai";
	Teams[3].NAME = "Warriors";
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

	// Optimized column widths for 1000px width
	const int colRank = 6;       // "Rank"
	const int colTeam = 20;      // Team names (reduced for 1000px)
	const int colWins = 6;       // "Wins"
	const int colLosses = 7;     // "Losses" 
	const int colDraws = 6;      // "Draws"
	const int colPoints = 7;     // "Points"
	const int colGF = 5;         // "GF"
	const int colGA = 5;         // "GA"
	const int colGD = 5;         // "GD"

	// Calculate total width
	const int totalWidth = 2 + colRank + 3 + colTeam + 3 + colWins + 3 +
		colLosses + 3 + colDraws + 3 + colPoints + 3 +
		colGF + 3 + colGA + 3 + colGD + 2;

	// Create and add header
	String^ header = "|" + UserCenterString("Rank", colRank) + " |" +
		UserCenterString("Team", colTeam) + " |" +
		UserCenterString("Wins", colWins) + " |" +
		UserCenterString("Loss", colLosses) + " |" +
		UserCenterString("Draw", colDraws) + " |" +
		UserCenterString("Pts", colPoints) + " |" +
		UserCenterString("GF", colGF) + " |" +
		UserCenterString("GA", colGA) + " |" +
		UserCenterString("GD", colGD) + "|";

	// Create separator line
	String^ separator = gcnew String('=', totalWidth);

	UserViewLeagueTableList->Items->Add(header);
	UserViewLeagueTableList->Items->Add(separator);

	// Add team rows
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

		UserViewLeagueTableList->Items->Add(row);
		UserViewLeagueTableList->Items->Add(separator);
	}

	// Set bold monospace font
	UserViewLeagueTableList->Font = gcnew System::Drawing::Font("Consolas", 9, FontStyle::Bold);

	// Set exact dimensions (1000x404)
	UserViewLeagueTableList->Width = 1000;
	UserViewLeagueTableList->Height = 404;

	// Adjust item height to fit perfectly
	int itemsToShow = teamsnum * 2 + 2; // Each team row + separator
	int calculatedHeight = 404 / itemsToShow;
	if (calculatedHeight < 14) calculatedHeight = 14; // Minimum height
	UserViewLeagueTableList->ItemHeight = calculatedHeight;
}
void UserFunctionForm::FavTeam() {
	FavTeamList->Items->Clear();
	if (!hasFavTeam || ChosenTeam== nullptr) {
		MessageBox::Show("You Have Not Selected A Favourite Team, Please Try Again Once You Have Done So.", "Error"
			, MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		for (int i = 0; i < 20; i++) {
			System::String^ TeamChoosing = gcnew System::String(Teams[i].NAME.c_str());
			if (TeamChoosing == ChosenTeam) {
				FavTeamList->Items->Add("Team ID: " + Teams[i].ID.ToString());
				FavTeamList->Items->Add("Team Name: " + gcnew String(Teams[i].NAME.c_str()));
				FavTeamList->Items->Add("Team Players: ");
				for (int j = 0; j < 34; j++) {
					FavTeamList->Items->Add(+(j + 1) + ".  " + gcnew String(Teams[i].Player[j].Name.c_str()));

				}
			}
		}
	}
}
void UserFunctionForm::FavPlayer() {
	FavPlayerList->Items->Clear();
	Teams[0].NAME = "Al-Ahly";
	Teams[0].ID = 1041;
	Teams[1].ID = 1467;
	Teams[1].NAME = "El-ittihad";
	Teams[0].Player[0].Name = "Lionel Messi";
	Teams[0].Player[1].Name = "Neymar";
	Teams[0].Player[0].ID = 0;
	Teams[0].Player[1].ID = 1;
	Teams[0].Player[0].Nationality = "Argentina";
	Teams[0].Player[1].Nationality = "Brazil";
	Teams[0].Player[0].BD = "24/6/1987";
	Teams[0].Player[1].BD = "5/2/1992";
	Teams[2].NAME = "Bankai";
	Teams[3].NAME = "Warriors";

	if (!hasFavPlayer || ChosenPlayer == nullptr) {
		MessageBox::Show("You Have Not Selected A Favourite Player, Please Try Again Once You Have Done So.", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 34; j++) {
			System::String^ PlayerChoosing = gcnew System::String(
				Teams[i].Player[j].Name.c_str());

			if ( PlayerChoosing == ChosenPlayer) {
				FavPlayerList->Items->Add("Name:  " + gcnew String(Teams[i].Player[j].Name.c_str()));
				FavPlayerList->Items->Add("Nationality:  " + gcnew String(Teams[i].Player[j].Nationality.c_str()));
				FavPlayerList->Items->Add("ID:  " + Teams[i].Player[j].ID.ToString());
				FavPlayerList->Items->Add("BirthDate:  " + gcnew String(Teams[i].Player[j].BD.c_str()));
				return;
			}
		}
	}
}

void UserFunctionForm::TeamFavPlayer() {
	FavTeamPlayerDropDownList->Items->Clear();
	Teams[0].NAME = "Al-Ahly";
	Teams[0].ID = 1041;
	Teams[1].ID = 1467;
	Teams[1].NAME = "El-ittihad";
	Teams[0].Player[0].Name = "Lionel Messi";
	Teams[0].Player[1].Name = "Neymar";
	Teams[0].Player[0].ID = 0;
	Teams[0].Player[1].ID = 1;
	Teams[0].Player[0].Nationality = "Argentina";
	Teams[0].Player[1].Nationality = "Brazil";
	Teams[0].Player[0].BD = "24/6/1987";
	Teams[0].Player[1].BD = "5/2/1992";
	Teams[2].NAME = "Bankai";
	Teams[3].NAME = "Warriors";
	for (int i = 0; i < 20; i++) {
		if (gcnew String(Teams[i].NAME.c_str()) == ChosenTeam) {
			for (int j = 0; j < 34; j++) {
				FavTeamPlayerDropDownList->Items->Add(gcnew String(Teams[i].Player[j].Name.c_str()));
			}
			break;
		}
	}
}

void UserFunctionForm::TeamFavPlayerShow() {
	FavTeamPlayerList->Items->Clear();
	Teams[0].NAME = "Al-Ahly";
	Teams[0].ID = 1041;
	Teams[1].ID = 1467;
	Teams[1].NAME = "El-ittihad";
	Teams[0].Player[0].Name = "Lionel Messi";
	Teams[0].Player[1].Name = "Neymar";
	Teams[0].Player[0].ID = 0;
	Teams[0].Player[1].ID = 1;
	Teams[0].Player[0].Nationality = "Argentina";
	Teams[0].Player[1].Nationality = "Brazil";
	Teams[0].Player[0].BD = "24/6/1987";
	Teams[0].Player[1].BD = "5/2/1992";
	Teams[2].NAME = "Bankai";
	Teams[3].NAME = "Warriors";
	if (!hasFavTeamPlayer || ChosenTeamPlayer == nullptr) {
		MessageBox::Show("You Have Not Selected A Favourite Team Player, Please Try Again Once You Have Done So.", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 34; j++) {
				if (gcnew String(Teams[i].Player[j].Name.c_str()) == ChosenTeamPlayer) {
					FavTeamPlayerList->Items->Add("--- Team Player Is In: " + gcnew String(Teams[i].NAME.c_str())+ "---");
					FavTeamPlayerList->Items->Add("Player Name:" + gcnew String(Teams[i].Player[j].Name.c_str()));
					FavTeamPlayerList->Items->Add("ID Num: " + Teams[i].Player[j].ID.ToString());
					FavTeamPlayerList->Items->Add("Nationality: " + gcnew String(Teams[i].Player[j].Nationality.c_str()));
					FavTeamPlayerList->Items->Add("Birth Date: " + gcnew String(Teams[i].Player[j].BD.c_str()));
				}
			}
	}
}

void UserFunctionForm::ViewSpecificTeamList() {
	UserTeamDetailList->Items->Clear();
	Teams[0].NAME = "Al-Ahly";
	Teams[0].ID = 1041;
	Teams[1].ID = 1467;
	Teams[1].NAME = "El-ittihad";
	Teams[0].Player[0].Name = "Lionel Messi";
	Teams[0].Player[1].Name = "Neymar";
	Teams[0].Player[0].ID = 0;
	Teams[0].Player[1].ID = 1;
	Teams[0].Player[0].Nationality = "Argentina";
	Teams[0].Player[1].Nationality = "Brazil";
	Teams[0].Player[0].BD = "24/6/1987";
	Teams[0].Player[1].BD = "5/2/1992";
	Teams[2].NAME = "Bankai";
	Teams[3].NAME = "Warriors";
	for (int i = 0; i < 20; i++) {
		if (gcnew String(Teams[i].NAME.c_str()) == SpecificTeamView)
		{
			UserTeamDetailList->Items->Add("Team No. " + (i + 1) + "      ------------------------\n" + "   Team ID: " + Teams[i].ID.ToString() + "   || Club: " + gcnew String(Teams[i].NAME.c_str()) + "  || Players Of Team \n" + "------------------------");
			for (int j = 0; j < 34; j++) {
				UserTeamDetailList->Items->Add((j + 1) + ". " + gcnew String(Teams[i].Player[j].Name.c_str()));
			}
		}

	}
}


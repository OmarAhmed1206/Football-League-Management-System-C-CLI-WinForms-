#include "pch.h"
#include "AdminGUICode.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <cmath>
#include <cctype>
#include <limits>

Match Matches[190];
Team Teams[20] = { 0 };

bool ADDPLAYER()
{
	srand(time(0));
	std::string FirstName[27] = { "Eren", "Levi", "Sung", "Klein", "Kim", "Arthur", "Kirito", "Subaru", "Naruto", "Ichigo", "Kuichiki", "Gojo", "Itadori", "Kilua", "Hyun cha", "Dunn", "Leonard", "Ken", "Arima", "Shin","Aizen", "Angelo","Madara","Thorfinn", "Miyamura", "Denji","David" };
	std::string LastName[27] = { "Yeager", "Ackreman", "Jin woo", "Moretti", "Dokja", "lewyn", "Kirigaya", "Natsuki", "Uzumaki", "Kurusaki", "Byakuya", "Saturu", "Yuji", "Zuldyk", "Han", "Smith", "Dicaprio", "Kousei", "Kaneki", "Ajiro","Sosuke","Testa Lagusa","Uchiha","Parker","izumi","Evergarden","Martinez" };
	std::string nation[17] = { "Egyptian", "Marlinian", "German", "Italian", "French", "Japanese", "Chinese", "Palestinian", "Brazilian", "Argentine", "Portuguese", "Spanish","Canadian","Indian","Korean","Russian","Saudi Arabian" };

	for (int i = 0; i < 20; i++)
	{

		for (int j = 0; j < 34; j++)
		{
			int firstindex = rand() % 27;
			int lastindex = rand() % 27;
			int nationindex = rand() % 17;

			int year = (rand() % 17) + 1990;
			int month = (rand() % 12) + 1;
			int day;

			switch (month)
			{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				day = (rand() % 31) + 1;
				break;
			case 4: case 6: case 9: case 11:
				day = (rand() % 30) + 1;
				break;
			case 2:
				if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
					day = (rand() % 29) + 1;
				else
					day = (rand() % 28) + 1;
				break;
			}

			Teams[i].Player[j].Name = FirstName[firstindex] + " " + LastName[lastindex];
			Teams[i].Player[j].Nationality = nation[nationindex];
			Teams[i].Player[j].ID = (rand() % 90) + 1;
			Teams[i].Player[j].BD = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
		}
	}
	return true;
}

std::string VIEWPLAYERINFO()
{
	std::string output;
	for (int i = 0;i < 20;i++)
	{
		output += "Players info of Team:" + std::to_string(i + 1) + "\n\n";
		for (int j = 0;j < 34;j++)
		{
			output += "Name: " + Teams[i].Player[j].Name + "\n";
			output += "Nationality: " + Teams[i].Player[j].Nationality + "\n";
			output += "ID: " + std::to_string(Teams[i].Player[j].ID) + "\n";
			output += "Birthdate: " + Teams[i].Player[j].BD + "\n\n";

		}
	}
	return output;
}


void ManuallyAddPlayer(int teamIndex, int playerIndex, int playerID, std::string name, std::string nationality, std::string bd, System::Windows::Forms::ListBox^ AddPlayerList)
{
	Teams[teamIndex].Player[playerIndex].ID = playerID;
	Teams[teamIndex].Player[playerIndex].Name = name;
	Teams[teamIndex].Player[playerIndex].Nationality = nationality;
	Teams[teamIndex].Player[playerIndex].BD = bd;
	AddPlayerList->Items->Add(gcnew System::String(("ID: " + std::to_string(Teams[teamIndex].Player[playerIndex].ID) + " || " + name + " (" + nationality + ")").c_str()));
}

void ManuallyAddTeam(int manualTeamCount, std::string name, System::Windows::Forms::ListBox^ listbox) {
	Teams[manualTeamCount].ID = (rand() % 9000) + 1000;
	Teams[manualTeamCount].NAME = name;
	std::string preview = "Team ID: " + std::to_string(Teams[manualTeamCount].ID) + " | Name: " + Teams[manualTeamCount].NAME;
	listbox->Items->Add(gcnew System::String(preview.c_str()));
}

void AutoFillPlayer(int playerID, System::Windows::Forms::ListBox^ listBox){
	std::string FirstName[27] = { "Eren", "Levi", "Sung", "Klein", "Kim", "Arthur", "Kirito", "Subaru", "Naruto", "Ichigo", "Kuichiki", "Gojo", "Itadori", "Kilua", "Hyun cha", "Dunn", "Leonard", "Ken", "Arima", "Shin","Aizen", "Angelo","Madara","Thorfinn", "Miyamura", "Denji","David" };
	std::string LastName[27] = { "Yeager", "Ackreman", "Jin woo", "Moretti", "Dokja", "lewyn", "Kirigaya", "Natsuki", "Uzumaki", "Kurusaki", "Byakuya", "Saturu", "Yuji", "Zuldyk", "Han", "Smith", "Dicaprio", "Kousei", "Kaneki", "Ajiro","Sosuke","Testa Lagusa","Uchiha","Parker","izumi","Evergarden","Martinez" };
	std::string nation[17] = { "Egyptian", "Marlinian", "German", "Italian", "French", "Japanese", "Chinese", "Palestinian", "Brazilian", "Argentine", "Portuguese", "Spanish","Canadian","Indian","Korean","Russian","Saudi Arabian" };

			int teamIndex = playerID / 34;
			int playerIndex = playerID % 34;

			int fi = rand() % 27;
			int li = rand() % 27;
			int ni = rand() % 17;

			int year = (rand() % 17) + 1990;
			int month = (rand() % 12) + 1;
			int day;

			switch (month) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				day = (rand() % 31) + 1;
				break;
			case 4: case 6: case 9: case 11:
				day = (rand() % 30) + 1;
				break;
			case 2:
				day = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? (rand() % 29) + 1 : (rand() % 28) + 1;
				break;
			}

			std::string name = FirstName[fi] + " " + LastName[li];
			std::string nationality = nation[ni];
			std::string bd = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);

			Teams[teamIndex].Player[playerIndex].ID = playerID;
			Teams[teamIndex].Player[playerIndex].Name = name;
			Teams[teamIndex].Player[playerIndex].Nationality = nationality;
			Teams[teamIndex].Player[playerIndex].BD = bd;
            listBox->Items->Add(gcnew System::String(("ID: " + std::to_string(Teams[teamIndex].Player[playerIndex].ID) + " || "  + name + " (" + nationality + ")").c_str()));
}

void AutoFillTeam(int manualTeamCount, bool used[], System::Windows::Forms::ListBox^ listbox) {
	std::string TeamName[27] = { "Black Bulls","Real Madrid","Death Note","Red Devils","Green Ghost","Barcelona","Mancity","Night Hawks", "Man united","Liverpool","Arsenal","Survey Corps","Atomic","Avengers","Blue Lock","Bankai","Milan","Inter Milan","Beyonders","The Akatsuki","Amazon","Warriors"," The Legends","Dortmund","Juventus","Straw Hat","The Hunters" };
	int randIndex;
	do {
		randIndex = rand() % 27;
	} while (used[randIndex]);


	used[randIndex] = true;
	Teams[manualTeamCount].ID = (rand() % 9000) + 1000;
	Teams[manualTeamCount].NAME = TeamName[randIndex];

	std::string preview = "Team ID: " + std::to_string(Teams[manualTeamCount].ID) + " | Name: " + Teams[manualTeamCount].NAME;
	listbox->Items->Add(gcnew System::String(preview.c_str()));
}

bool ADDTEAM()
{
	{
		srand(time(0));
		std::string TeamName[27] = { "Black Bulls","Real Madrid","Death Note","Red Devils","Green Ghost","Barcelona","Mancity","Night Hawks", "Man united","Liverpool","Arsenal","Survey Corps","Atomic","Avengers","Blue Lock","Bankai","Milan","Inter Milan","Beyonders","The Akatsuki","Amazon","Warriors"," The Legends","Dortmund","Juventus","Straw Hat","The Hunters" };

		bool used[27] = { false };


		for (int i = 0;i < 20;i++)
		{
			int Teamindex;
			do
			{
				Teamindex = rand() % 27;
			} while (used[Teamindex]);

			used[Teamindex] = true;

			Teams[i].ID = (rand() % 9000) + 1000;
			Teams[i].NAME = TeamName[Teamindex];

		}
	}
	return true;
}

void GenerateMatchStats(int index)
{
	Matches[index].result.ID = index + 1;

	int baseShotsHome = (Matches[index].result.TeamHomeGoals * 2) + 10;
	Matches[index].SHOTS[0] = baseShotsHome + (rand() % 6);

	int baseShotsAway = (Matches[index].result.TeamAwayGoals * 2) + 10;
	Matches[index].SHOTS[1] = baseShotsAway + (rand() % 6);

	Matches[index].PASSES[0] = (rand() % 201) + 400;
	Matches[index].PASSES[1] = (rand() % 201) + 400;

	int TotalPasses0 = Matches[index].PASSES[0];
	int TotalPasses1 = Matches[index].PASSES[1];
	int successfulPasses0 = (rand() % TotalPasses0) + 1;
	int successfulPasses1 = (rand() % TotalPasses1) + 1;

	Matches[index].PASSACCURACY[0] = round((successfulPasses0 * 1.0 / TotalPasses0) * 100.0);
	Matches[index].PASSACCURACY[1] = round((successfulPasses1 * 1.0 / TotalPasses1) * 100.0);

	Matches[index].FOULS[0] = rand() % 7;
	Matches[index].FOULS[1] = rand() % 7;

	Matches[index].CORNERS[0] = (rand() % 6) + 5;
	Matches[index].CORNERS[1] = (rand() % 6) + 5;

	Matches[index].OFFSIDES[0] = (rand() % 4) + 1;
	Matches[index].OFFSIDES[1] = (rand() % 4) + 1;

	Matches[index].YELLOWCARDS[0] = rand() % 6;
	Matches[index].YELLOWCARDS[1] = rand() % 6;

	Matches[index].REDCARDS[0] = rand() % 3;
	Matches[index].REDCARDS[1] = rand() % 3;

	Matches[index].SHOTSONTARGET[0] = (rand() % (Matches[index].SHOTS[0] - Matches[index].result.TeamHomeGoals + 1)) + Matches[index].result.TeamHomeGoals;
	Matches[index].SHOTSONTARGET[1] = (rand() % (Matches[index].SHOTS[1] - Matches[index].result.TeamAwayGoals + 1)) + Matches[index].result.TeamAwayGoals;

	if (Matches[index].PASSES[0] > Matches[index].PASSES[1])
	{
		Matches[index].POSSESSION[0] = (rand() % 10) + 50;
		Matches[index].POSSESSION[1] = 100 - Matches[index].POSSESSION[0];
	}
	else if (Matches[index].PASSES[1] > Matches[index].PASSES[0])
	{
		Matches[index].POSSESSION[1] = (rand() % 10) + 50;
		Matches[index].POSSESSION[0] = 100 - Matches[index].POSSESSION[1];
	}
	else
	{
		Matches[index].POSSESSION[0] = 50;
		Matches[index].POSSESSION[1] = 50;
	}


	std::string homeTeamName = Matches[index].TeamHome;
	std::string awayTeamName = Matches[index].TeamAway;
	int homeIndex = -1, awayIndex = -1;

	for (int j = 0; j < 20; j++)
	{
		if (Teams[j].NAME == homeTeamName)
		{
			homeIndex = j;
		}
		if (Teams[j].NAME == awayTeamName)
		{
			awayIndex = j;
		}
	}

	if (homeIndex == -1 || awayIndex == -1)
	{
		return;
	}
	Teams[homeIndex].GF += Matches[index].result.TeamHomeGoals;
	Teams[homeIndex].GA += Matches[index].result.TeamAwayGoals;
	Teams[awayIndex].GF += Matches[index].result.TeamAwayGoals;
	Teams[awayIndex].GA += Matches[index].result.TeamHomeGoals;

	Teams[homeIndex].GD = Teams[homeIndex].GF - Teams[homeIndex].GA;
	Teams[awayIndex].GD = Teams[awayIndex].GF - Teams[awayIndex].GA;

	if (Matches[index].result.TeamHomeGoals == Matches[index].result.TeamAwayGoals)
	{
		Teams[homeIndex].Draws++;
		Teams[awayIndex].Draws++;
	}
	else if (Matches[index].result.TeamHomeGoals > Matches[index].result.TeamAwayGoals)
	{
		Teams[homeIndex].Wins++;
		Teams[awayIndex].losses++;
	}
	else
	{
		Teams[awayIndex].Wins++;
		Teams[homeIndex].losses++;
	}
}

void UpdateMatchResultLabels(int Index, System::Windows::Forms::Label^ AddMatchResultName1, System::Windows::Forms::Label^ AddMatchResultName2) {
	if (Index < 0 || Index >= 190) {
		AddMatchResultName1->Text = "Out of range";
		AddMatchResultName2->Text = "Out of range";
		return;
	}
	std::string home = Matches[Index].TeamHome;
	std::string away = Matches[Index].TeamAway;
	AddMatchResultName1->Text = gcnew System::String(home.c_str());
	AddMatchResultName2->Text = gcnew System::String(away.c_str());
}

void ManuallyAddMatchResult(int index, int homeGoals, int awayGoals) {
	Matches[index].result.TeamHomeGoals = homeGoals;
	Matches[index].result.TeamAwayGoals = awayGoals;
}

void AutomaticallyAddMatchResult(int index) {
	Matches[index].result.TeamHomeGoals = rand() % 6;
	Matches[index].result.TeamAwayGoals = rand() % 6;

}

int getDayOfWeek(int d, int m, int y) {
	if (m < 3)
	{
		m += 12;
		y -= 1;
	}
	int K = y % 100;
	int J = y / 100;
	int h = (d + 13 * (m + 1) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;

	return (h + 6) % 7;
}

std::string VIEWTEAMSINFO()
{
	std::string output;

	output += "Teams info ->\n";

	for (int j = 0;j < 20;j++) {
		output += "--------------------\n";
		output += "Team" + std::to_string(j + 1) + ":\n";
		output += "Team ID" + std::to_string(Teams[j].ID) + ":\n";
		output += "Team Name:" + (Teams[j].NAME) + "\n";
		output += "Players of the team: \n";

		for (int i = 0;i < 34;i++) {
			output += "Team Name:" + Teams[j].Player[i].Name + "\n";
		}
	}
	return output;
}

int daysInMonth(int m, int y)
{
	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		return 30;
	}

	if (m == 2)
	{
		bool leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
		return leap ? 29 : 28;
	}
	return 31;
}

void GENERATESCHEDULE(int day, int month, int year)
{
	srand(time(0));
	std::string output;

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

			matchIndex++;
		}
	}
}

void USERGENERATESCHEDULE() {
	int day = 7;
	int month = 8;
	int year = 2025;
	srand(time(0));
	std::string output;

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

			matchIndex++;
		}
	}
}

std::string VIEWSCHEDULE()
{	
	std::string output;

	int MatchIndex2 = 0;

	for (int round = 0;round < 19;round++)
	{
		output += "Round " + std::to_string(round + 1) + "  on  " + Matches[MatchIndex2].StartDate;

		output +=  "-------------------------------- \n\n";

		for (int i = 0; i < 10; i++)
		{
			output += "at  " + Matches[MatchIndex2].Times + ":\n";
			output += "---------- \n\n";
			output += Matches[MatchIndex2].TeamHome + "  Vs  " + Matches[MatchIndex2].TeamAway + "\n\n";
			MatchIndex2++;
		}
	}
	return output;
}

bool ADDMATCHRESULT()
{
	srand(time(0));
	for (int i = 0; i < 190; i++)
	{
		Matches[i].result.ID = i + 1;
		Matches[i].result.TeamHomeGoals = rand() % 6;
		Matches[i].result.TeamAwayGoals = rand() % 6;

		int baseShotsHome = (Matches[i].result.TeamHomeGoals * 2) + 10;
		Matches[i].SHOTS[0] = baseShotsHome + (rand() % 6);

		int baseShotsAway = (Matches[i].result.TeamAwayGoals * 2) + 10;
		Matches[i].SHOTS[1] = baseShotsAway + (rand() % 6);

		Matches[i].PASSES[0] = (rand() % 201) + 400;
		Matches[i].PASSES[1] = (rand() % 201) + 400;

		int TotalPasses0 = Matches[i].PASSES[0];
		int TotalPasses1 = Matches[i].PASSES[1];
		int successfulPasses0 = (rand() % TotalPasses0) + 1;
		int successfulPasses1 = (rand() % TotalPasses1) + 1;
		Matches[i].PASSACCURACY[0] = round((successfulPasses0 * 1.0 / TotalPasses0) * 100.0);
		Matches[i].PASSACCURACY[1] = round((successfulPasses1 * 1.0 / TotalPasses1) * 100.0);

		Matches[i].FOULS[0] = (rand() % 7);
		Matches[i].FOULS[1] = (rand() % 7);

		Matches[i].CORNERS[0] = (rand() % 6) + 5;
		Matches[i].CORNERS[1] = (rand() % 6) + 5;

		Matches[i].OFFSIDES[0] = (rand() % 4) + 1;
		Matches[i].OFFSIDES[1] = (rand() % 4) + 1;

		Matches[i].YELLOWCARDS[0] = rand() % 6;
		Matches[i].YELLOWCARDS[1] = rand() % 6;

		Matches[i].REDCARDS[0] = rand() % 3;
		Matches[i].REDCARDS[1] = rand() % 3;

		Matches[i].SHOTSONTARGET[0] = (rand() % (Matches[i].SHOTS[0] - Matches[i].result.TeamHomeGoals + 1)) + Matches[i].result.TeamHomeGoals;
		Matches[i].SHOTSONTARGET[1] = (rand() % (Matches[i].SHOTS[1] - Matches[i].result.TeamAwayGoals + 1)) + Matches[i].result.TeamAwayGoals;

		if (Matches[i].PASSES[0] > Matches[i].PASSES[1])
		{
			Matches[i].POSSESSION[0] = (rand() % 10) + 50;
			Matches[i].POSSESSION[1] = 100 - Matches[i].POSSESSION[0];

		}
		else if (Matches[i].PASSES[1] > Matches[i].PASSES[0])
		{
			Matches[i].POSSESSION[1] = (rand() % 10) + 50;
			Matches[i].POSSESSION[0] = 100 - Matches[i].POSSESSION[1];
		}
		else
		{
			Matches[i].POSSESSION[0] = 50;
			Matches[i].POSSESSION[1] = 50;
		}
		std::string homeTeamName = Matches[i].TeamHome;
		std::string awayTeamName = Matches[i].TeamAway;

		int homeIndex = -1, awayIndex = -1;


		for (int j = 0; j < 20; j++)
		{
			if (Teams[j].NAME == homeTeamName)
				homeIndex = j;
			if (Teams[j].NAME == awayTeamName)
				awayIndex = j;
		}

		if (homeIndex == -1 || awayIndex == -1)
		{
			return false;
			continue;
		}
		Teams[homeIndex].GF += Matches[i].result.TeamHomeGoals;
		Teams[homeIndex].GA += Matches[i].result.TeamAwayGoals;

		Teams[awayIndex].GF += Matches[i].result.TeamAwayGoals;
		Teams[awayIndex].GA += Matches[i].result.TeamHomeGoals;

		Teams[homeIndex].GD = Teams[homeIndex].GF - Teams[homeIndex].GA;
		Teams[awayIndex].GD = Teams[awayIndex].GF - Teams[awayIndex].GA;



		if (Matches[i].result.TeamHomeGoals == Matches[i].result.TeamAwayGoals)
		{
			Teams[homeIndex].Draws++;
			Teams[awayIndex].Draws++;
		}
		else if (Matches[i].result.TeamHomeGoals > Matches[i].result.TeamAwayGoals)
		{
			Teams[homeIndex].Wins++;
			Teams[awayIndex].losses++;
		}
		else
		{
			Teams[awayIndex].Wins++;
			Teams[homeIndex].losses++;

		}

	}
	return true;
}

std::string VIEWMATCHRESULT()
{
	std::string output;
	int MatchIndex2 = 0;
	for (int round = 0;round < 19;round++)
	{
		output += "Round " + std::to_string(round + 1) + "  on  " + Matches[MatchIndex2].StartDate + "\n";
		output += "-------------------------------- \n\n";
		for (int i = 0; i < 10; i++)
		{
			output += "at  " + Matches[MatchIndex2].Times + ":" + "\n";
			output += "----------\n\n";
			output += Matches[MatchIndex2].TeamHome + "  Vs  " + Matches[MatchIndex2].TeamAway + "\n\n";
			output += "Result:  " + std::to_string(Matches[MatchIndex2].result.TeamHomeGoals) + " : " + std::to_string(Matches[MatchIndex2].result.TeamAwayGoals) + "\n\n";

			MatchIndex2++;


		}
	}
	return output;
}

std::string VIEWTABLE()
{
	const int teamsnum = 20;
	 std::string output;
	for (int i = 0;i < teamsnum;i++)
		Teams[i].Points = (Teams[i].Wins * 3) + Teams[i].Draws;

	for (int j = 0;j < teamsnum-1;j++)
	{
		int maxindex = j;
		for (int z = j + 1;z < teamsnum;z++) {
			if (Teams[z].Points > Teams[maxindex].Points)
				maxindex = z;
		}
		Team x = Teams[j];
		Teams[j] = Teams[maxindex];
		Teams[maxindex] = x;
	}

	for (int i = 0;i < teamsnum - 1;i++)
	{
		if (Teams[i].Points == Teams[i + 1].Points)
		{
			if (Teams[i].GD < Teams[i + 1].GD)
			{
				Team y = Teams[i];
				Teams[i] = Teams[i + 1];
				Teams[i + 1] = y;
			}
		}
	}

	output += "Rank | Team | Wins | Loses | Draws | points" < +"\n";
	for (int i = 0;i < 20;i++) {
		output += std::to_string(i + 1) + " |"
			+ Teams[i].NAME + " |"
			+ std::to_string(Teams[i].losses) + " | "
			+ std::to_string(Teams[i].Draws) + " | "
			+ std::to_string(Teams[i].Points) + "\n";
	}

	return output;
}
#pragma once
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

struct User1 {
	int id;
	std::string password, username, Role;
};


struct player
{
	int ID;
	std::string Name, BD, Nationality;
};


struct Team
{
	int ID, Wins = 0, losses = 0, Draws = 0, Points = 0, GF, GD, GA;
	std::string NAME;
	player Player[34];
} 
extern Teams[20];

struct Result
{
	int ID;
	int TeamHomeGoals, TeamAwayGoals;
};

struct Match
{
	int ID, SHOTS[2], PASSES[2], FOULS[2], OFFSIDES[2], CORNERS[2], SHOTSONTARGET[2], YELLOWCARDS[2], REDCARDS[2], POSSESSION[2], PASSACCURACY[2];
	std::string TeamHome, TeamAway, StartDate, Times;
	Result result;


}
extern Matches[190];
extern Match Matches[190];
bool ADDPLAYER();

void ManuallyAddPlayer(int teamIndex, int playerIndex, int playerID, std::string name, std::string nationality, std::string bd, System::Windows::Forms::ListBox^ AddPlayerList);

void ManuallyAddTeam(int manualTeamCount, std::string name, System::Windows::Forms::ListBox^ listbox);

void AutoFillPlayer(int playerID, System::Windows::Forms::ListBox^ listBox);

void GenerateMatchStats(int index);

void AutoFillTeam(int manualTeamCount, bool used[], System::Windows::Forms::ListBox^ listbox);

bool ADDTEAM();

int daysInMonth(int m, int y);

void GENERATESCHEDULE(int day, int month, int year);

void   USERGENERATESCHEDULE();

int getDayOfWeek(int d, int m, int y);

void UpdateMatchResultLabels(int Index, System::Windows::Forms::Label^ AddMatchResultName1, System::Windows::Forms::Label^ AddMatchResultName2);

void ManuallyAddMatchResult(int Index, int homeGoals, int awayGoals);

void AutomaticallyAddMatchResult(int index);

std::string VIEWSCHEDULE();

bool ADDMATCHRESULT();

std::string VIEWMATCHRESULT();

std::string VIEWTABLE();

std::string VIEWTEAMSINFO();

std::string VIEWPLAYERINFO();

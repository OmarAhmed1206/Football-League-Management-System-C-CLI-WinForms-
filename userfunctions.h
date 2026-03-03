#pragma once
#include <vector>
#include <string>
#include <fstream>

struct User {
	int id;
	std::string password, username, Role;
};

//to load file into program.

std::vector<User> Loaduser();

//to check if user is already logged in.

bool FindUser(std::string UserName, std::vector<User> user);

//to check if the ID has been given before.

bool FindID(int ID, std::vector<User> user);

// login credentials.

bool Findinfo(std::string username, std::string password, int id, std::string role, std::vector<User> user);

//to save the user's data into the file.

void SaveUser(const User& user);

// Signup the user.

User SignUp(std::string username, std::string password, std::string Role, std::vector<User>& user);

// login the user.

bool login(std::string username, std::string password, int id, std::string Role, std::vector<User>& user);

void SaveAllUsers(const std::vector<User>& users);
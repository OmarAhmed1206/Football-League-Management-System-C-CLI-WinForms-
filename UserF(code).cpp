#include "pch.h"
#include "userfunctions.h"

std::vector<User> Loaduser() {
	

		std::vector<User> users;
		std::ifstream file("Users.txt");

		if (!file) {

			return users;
		}
		User user;
		while (file >> user.id >> user.username >> user.password >> user.Role) {
			users.push_back(user);
		}
		return users;
	
}

bool FindUser(std::string UserName, std::vector<User> user) {
	for (int i = 0; i < user.size();i++) {
		if (UserName == user[i].username) {
			return true;
		}
	}
	return false;
}

bool FindID(int ID, std::vector<User> user) {
	for (int i = 0; i < user.size();i++) {
		if (ID == user[i].id) {
			return true;
		}
	}
	return false;
}

bool Findinfo(std::string username, std::string password, int id, std::string role, std::vector<User> user) {
	bool store = 0;
	for (int i = 0; i < user.size(); i++) {
		if (username == user[i].username && password == user[i].password && role == user[i].Role && id == user[i].id)
			return true;
	}

	return false;
}

void SaveUser(const User& user) {
	std::ofstream file("Users.txt", std::ios::app);
	file << user.id << " " << user.username << " " << user.password << " " << user.Role << "\n";
}

User SignUp(std::string username, std::string password, std::string Role, std::vector<User> &user) {
	User Signup;
	Signup.username = username;
	Signup.password = password;
	Signup.Role = Role;
	bool hasletter = false;
	for (char c : Signup.password) {
		if (isalpha(c)) {
			hasletter = true;
			break;
		}
	}
	if (Signup.password.length() < 6 || !hasletter) {
		Signup.id = -2;
		return Signup;
	}
	if (FindUser(Signup.username, user)) {
		Signup.id = -1;
		return Signup;
	}
	
		Signup.id = rand() % 901 + 100;
		while (FindID(Signup.id, user)) {
			Signup.id = rand() % 901 + 100;
	}
		user.push_back(Signup);
		SaveUser(Signup);
		return Signup;
}

bool login(std::string username, std::string password, int id, std::string Role, std::vector<User>& user) {
	User Signup;
	Signup.username = username;
	Signup.password = password;
	Signup.Role = Role;
	Signup.id = id;
	if (Findinfo(Signup.username, Signup.password, Signup.id, Signup.Role, user)) {
		return true;
	}
	else {
		return false;
	}
}

void SaveAllUsers(const std::vector<User>& users) {
	std::ofstream file("Users.txt", std::ios::trunc); 
	for (const User& user : users) {
		file << user.id << " " << user.username << " " << user.password << " " << user.Role << "\n";
	}
}


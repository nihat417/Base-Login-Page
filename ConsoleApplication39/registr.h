#pragma once

class Registration {
	Database _database;
public:
	Registration(const Database& database) {
		_database = database;
	}
	void signIn(string username, string password, string name, string surname) {
		for (size_t i = 0; i < _database.get_size(); i++)
		{
			if (_database.get_userdata()[i].get_surname() == username && _database.get_userdata()[i].get_password() == password && _database.get_userdata()[i].get_name() == name && _database.get_userdata()[i].get_surname() == surname)
				cout << "welcome!!" << endl;
			else
				throw"wrong information";
		}
	}

	void signUp(user user) {
		_database.addUser(user);
	}
};
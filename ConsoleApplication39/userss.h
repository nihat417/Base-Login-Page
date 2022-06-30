#pragma once

class user {
	int _id;
	string _username;
	string _password;
	string _name;
	string _surname;

public:
	user() = default;
	user(int id, string username, string password, string name, string surname) {
		set_id(id);
		set_username(username);
		set_password(password);
		set_name(name);
		set_surname(surname);
	}

	//setters

	void set_id(int id) {
		if (id < 0)
			throw"\nwrong id!";
		else
			_id = id;
	}

	void set_username(string username) {
		if (username.length() < 1)
			throw "\nwrong lenght usurname";
		else
			_username = username;
	}

	void set_password(string password) {
		if (password.length() < 3)
			throw"\nwrong password";
		else
			_password = password;
	}

	void set_name(string name) {
		if (name.length() < 3)
			throw"wrong lenght name";
		else
			_name = name;
	}

	void set_surname(string surname) {
		if (surname.length() < 3)
			throw"\nwrong length surname!";
		else
			_surname = surname;
	}

	//getters

	int get_id() { return _id; }
	string get_username() { return _username; }
	string get_password() { return _password; }
	string get_name() { return _name; }
	string get_surname() { return _surname; }

	void show() const {
		cout << "id:" << _id << endl;
		cout << "username:" << _username << endl;
		cout << "password:" << _password << endl;
		cout << "name:" << _name << endl;
		cout << "surname:" << _surname << endl;
	};
};
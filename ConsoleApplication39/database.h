#pragma once
class Database {
	vector<user>_users;
	//user** _users;
	int user_count = 0;
public:
	void addUser(const user& userrs) {
		_users.push_back(userrs);
	}

	user& getUserByUsername(string username) {
		for (size_t i = 0; i < _users.size(); i++)
		{
			if (_users[i].get_username() == username)
				return _users[i];
			else
				throw"\ncan not find this user!";
		}
	}

	int get_size() { return _users.size(); }

	user* get_userdata() { return _users.data(); }
};
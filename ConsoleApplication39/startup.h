#pragma once
class StartUp {
public:
	static void Start() {
		Database db;
		Registration twitter(db);

		user users(1, "niko", "nikorcv", "nihat", "akremi");

		try
		{
			twitter.signUp(users);
		}
		catch (exception& ex) {
			cout << ex.what() << endl;
		}

		users.show();
	}
};
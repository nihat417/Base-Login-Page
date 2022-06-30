#pragma once

class Exception : public exception
{
	string _message;
	const char* _source;
	const char* _time;
	int _line;

public:
	Exception(const char* message = "exception",
		const char* source = "",
		const char* time = "",
		int line = 0)
		: exception(message)
	{
		_source = source;
		_time = time;
		_line = line;


		_message = "Message: " + (string)message
			+ "\nSource: " + _source
			+ "\nTime: " + _time
			+ "\nLine: " + to_string(_line);
	}


	int line() const { return _line; }
	const char* source() const { return _source; }
	const char* time() const { return _time; }
	const char* message() const { return exception::what(); }


	const char* what() const override
	{
		return _message.c_str();;
	}
};

class invalidargumentException :public Exception {
	invalidargumentException() { throw Exception("invalid argument exception", __FILE__, __FILE__, __LINE__); }
};


class databaseException :public Exception {
	databaseException() { throw Exception("database exception", __FILE__, __FILE__, __LINE__); }
};
#pragma once

#include <string>


class Session
{
private:
	std::string userId;
	static Session* _session;

public:
	std::string getUserId() const;
	static void createSession(std::string userId);
	static Session* getSessionInstance();
	~Session()=default;
	static void logout();

protected:
	Session(std::string userId) ;

};


#pragma once
#include<string>

class Ressource;

class ObservateurAbs
{

public:

	virtual void update() const = 0;
	void sabonner(Ressource* sujet);
	void sedesabonner(Ressource* sujet);
	
};

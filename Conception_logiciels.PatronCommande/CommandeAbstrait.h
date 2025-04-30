#pragma once
class CommandeAbstrait
{
public:
	virtual void executer() = 0;
	virtual void annuler() = 0;
	~CommandeAbstrait() = default;
};


#pragma once
class EtatAbstrait
{

public:
	virtual EtatAbstrait* etablirConnexion()=0;
	virtual EtatAbstrait* deconnecter()=0;
	virtual EtatAbstrait* connexionReussie() = 0;

	virtual ~EtatAbstrait() = default;
};


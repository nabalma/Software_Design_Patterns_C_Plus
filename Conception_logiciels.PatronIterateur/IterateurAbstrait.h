#pragma once

template <typename T>
class IterateurAbstrait
{
public:
	virtual void Suivant()=0;
	virtual void Premier()=0;
	virtual bool testFin() const = 0;
	virtual T getCourant() const = 0;

	virtual ~IterateurAbstrait() = default;
};


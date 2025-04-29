#pragma once
#include "IterateurAbstrait.h"


template <typename T>
class DepotDocumentAbstrait
{
public:
	virtual IterateurAbstrait<T>* creerIterateur() const = 0;
	virtual ~DepotDocumentAbstrait() = default;
};


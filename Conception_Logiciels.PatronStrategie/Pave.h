#pragma once
#ifndef PAVE_H
#define PAVE_H

#include "StrategieNettoyage.h"

class Pave : public StrategieNettoyage {
public:
    std::string nettoyer() const override;
};

#endif

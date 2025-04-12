#pragma once
#ifndef CARRELAGE_H
#define CARRELAGE_H

#include "StrategieNettoyage.h"

class Carrelage : public StrategieNettoyage {
public:
    std::string nettoyer() const override;
};

#endif


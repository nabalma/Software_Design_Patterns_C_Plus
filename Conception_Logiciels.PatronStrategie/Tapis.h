#pragma once

#ifndef TAPIS_H
#define TAPIS_H

#include "StrategieNettoyage.h"

class Tapis : public StrategieNettoyage {
public:
    std::string nettoyer() const override;
};

#endif


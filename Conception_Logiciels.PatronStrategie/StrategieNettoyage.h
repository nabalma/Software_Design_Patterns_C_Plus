#pragma once
#ifndef STRATEGIENETTOYAGE_H
#define STRATEGIENETTOYAGE_H

#include <string>

class StrategieNettoyage {
public:
    virtual std::string nettoyer() const = 0;
    virtual ~StrategieNettoyage() = default;
};

#endif


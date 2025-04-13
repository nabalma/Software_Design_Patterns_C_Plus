#pragma once
#include "ObservateurAbs.h"
class PlanifDepartement :
    public ObservateurAbs
    
{
    void update() const override;
};


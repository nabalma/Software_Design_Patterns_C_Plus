#pragma once
#include "AbstractAcceuilClient.h"
class AcceuilClientLuxe :
    public AbstractAcceuilClient
{
public:
    void decrireProduit() override;
    void guiderClient() override;
};


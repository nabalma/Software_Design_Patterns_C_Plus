#pragma once
#include "AbstractAcceuilClient.h"
class AcceuilClientStandard :
    public AbstractAcceuilClient
{
public:
    void decrireProduit() override;
    void guiderClient() override;
};


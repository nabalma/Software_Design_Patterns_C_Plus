#pragma once
class PasserellePaiement
{
public:
    virtual void payerMontant(double montant) = 0;
    virtual ~PasserellePaiement() = default;
};


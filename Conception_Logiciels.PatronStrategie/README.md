
Problème :
Un robot nettoyeur se déplace pour son nettoyage. 
Selon le type de sol détecté, il doit changer sa stratégie de nettoyage :

Sur un tapis, il doit aspirer en profondeur.
Sur du carrelage, il doit laver à l’eau.
Sur une zone pavée, il doit plutot souffler a l'air.
....

Le robot ne doit pas changer de logique : 
il délègue à une stratégie la bonne manière de nettoyer. 
Pendant son nettoyage, Il peut changer dynamiquement de stratégie quand le sol change.

-----------------------------------------------------------
Solution Possible :
Robot : Contexte (qui a comme attribut une strategie de nettoyage)
Tapis : StrategieConcrete 1 (comportement nettoyer() specifique au tapis)
Carrelage : StrategieConcrete 2 (comportement nettoyer() specifique au carrelage)
Pavee :  StrategieConcrete 3 (comportement nettoyer() specifique au pavee)
StrategieNettoyage : StrategieAbstraite (comportement nettoyer() a heriter)
Client : main 


Schema du patron:

|---------------------------------------------------|
|                Robot                              |              |--------------------|
|---------------------------------------------------|              |StrategieNettoyage  |
|StrategieNettoyage* strategiNettoyage              |<>------------|--------------------|
|---------------------------------------------------|              |string nettoyer()   |
|string nettoyer()                                  |              |                    |
|setStrategie(StrategieNettoyage* nouvelleStrategie)|              |--------------------|
|---------------------------------------------------|                        Δ
                                                                             |
                                                    ------------------------------------------------
                                                    |                        |                      |
                                           |------------------|     |------------------|   |------------------|                                    
                                           |      Tapis       |     |    Carrelage     |   |    Paves         |     
                                           |------------------|     |------------------|   |------------------|                  
                                           |string nettoyer() |     |string nettoyer() |   |string nettoyer() |                           
                                           |------------------|     |------------------|   |------------------|
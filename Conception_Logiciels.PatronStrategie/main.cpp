// Includes
#include <iostream>
#include "Robot.h"
#include "StrategieNettoyage.h"
#include "Tapis.h"
#include "Pave.h"
#include "Carrelage.h"


//Namespaces
using namespace std;

// Client
int main() {
	Tapis tapis;
	Robot robot =Robot(&tapis) ;
	cout << "-----Test 1 : Sur un Tapis ------------";
	cout << robot.nettoyer();
	cout << endl;

	cout << "-----Test 2 : Sur un Pave ------------";
	Pave pave;
	robot.setStrategieNettoyage(&pave);
	cout << robot.nettoyer();
	cout << endl;

	cout << "-----Test 3 : Sur du carreau ------------";
	Carrelage carreau;
	robot.setStrategieNettoyage(&carreau);
	cout << robot.nettoyer();
	cout << endl;


}


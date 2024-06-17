#include "StartoweOkno.h"
#include "BazaDanych.h"

using namespace System;
using namespace System::Windows::Forms;

vector	<Pociag> daneOPociagach;
vector	<OpoznionyPociag> daneOOpoznionychPociagach;
vector	<OdwolanyPociag> daneOOdwolanychPociagach;
vector	<Administrator> daneAdministratorow;

void main()
{
	BazaDanych bazaDanch;

	bazaDanch.odczytDanych();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AutomatInformacjiKolejowej::StartoweOkno form;
	Application::Run(% form);
}
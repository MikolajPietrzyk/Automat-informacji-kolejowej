#pragma once
#include "OknoDodajNowyPociag.h"
#include "OknoZmianaInformacjiOPociagu.h"
#include "OknoTworzenieOpoznionegoPociagu.h"
#include "OknoTworzenieOdwolanegoPociagu.h"
#include "OknoUsuwaniaPociagu.h"
#include "OknoDodawaniaAdministratora.h"
#include "OknoUsuwanieAdministratora.h"
#include "BazaDanych.h"

namespace AutomatInformacjiKolejowej {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o OknoAdministratoraZalogowany
	/// </summary>
	public ref class OknoAdministratoraZalogowany : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoAdministratoraZalogowany(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoAdministratoraZalogowany(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~OknoAdministratoraZalogowany()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnDodawanieAdministratora;
	protected:
	private: System::Windows::Forms::Button^ btnUsuwanieAdministratora;
	private: System::Windows::Forms::Button^ btnDodawaniePociagu;
	private: System::Windows::Forms::Button^ btnZmianaDanychPociagu;
	private: System::Windows::Forms::Button^ btnTworzenieOpoznionegoPociagu;
	private: System::Windows::Forms::Button^ btnTworzenieOdwolanegoPociagu;
	private: System::Windows::Forms::Button^ btnUsuwaniePociagu;
	private: System::Windows::Forms::Button^ btnWylogowanie;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnDodawanieAdministratora = (gcnew System::Windows::Forms::Button());
			this->btnUsuwanieAdministratora = (gcnew System::Windows::Forms::Button());
			this->btnDodawaniePociagu = (gcnew System::Windows::Forms::Button());
			this->btnZmianaDanychPociagu = (gcnew System::Windows::Forms::Button());
			this->btnTworzenieOpoznionegoPociagu = (gcnew System::Windows::Forms::Button());
			this->btnTworzenieOdwolanegoPociagu = (gcnew System::Windows::Forms::Button());
			this->btnUsuwaniePociagu = (gcnew System::Windows::Forms::Button());
			this->btnWylogowanie = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnDodawanieAdministratora
			// 
			this->btnDodawanieAdministratora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->btnDodawanieAdministratora->Location = System::Drawing::Point(655, 12);
			this->btnDodawanieAdministratora->Name = L"btnDodawanieAdministratora";
			this->btnDodawanieAdministratora->Size = System::Drawing::Size(152, 74);
			this->btnDodawanieAdministratora->TabIndex = 0;
			this->btnDodawanieAdministratora->Text = L"Dodaj nowego administratora";
			this->btnDodawanieAdministratora->UseVisualStyleBackColor = true;
			this->btnDodawanieAdministratora->Click += gcnew System::EventHandler(this, &OknoAdministratoraZalogowany::btnDodawanieAdministratora_Click);
			// 
			// btnUsuwanieAdministratora
			// 
			this->btnUsuwanieAdministratora->Location = System::Drawing::Point(655, 148);
			this->btnUsuwanieAdministratora->Name = L"btnUsuwanieAdministratora";
			this->btnUsuwanieAdministratora->Size = System::Drawing::Size(152, 74);
			this->btnUsuwanieAdministratora->TabIndex = 1;
			this->btnUsuwanieAdministratora->Text = L"Usuwanie administratora";
			this->btnUsuwanieAdministratora->UseVisualStyleBackColor = true;
			this->btnUsuwanieAdministratora->Click += gcnew System::EventHandler(this, &OknoAdministratoraZalogowany::btnUsuwanieAdministratora_Click);
			// 
			// btnDodawaniePociagu
			// 
			this->btnDodawaniePociagu->Location = System::Drawing::Point(12, 12);
			this->btnDodawaniePociagu->Name = L"btnDodawaniePociagu";
			this->btnDodawaniePociagu->Size = System::Drawing::Size(152, 74);
			this->btnDodawaniePociagu->TabIndex = 2;
			this->btnDodawaniePociagu->Text = L"Dodaj nowy poci¹g";
			this->btnDodawaniePociagu->UseVisualStyleBackColor = true;
			this->btnDodawaniePociagu->Click += gcnew System::EventHandler(this, &OknoAdministratoraZalogowany::btnDodawaniePociagu_Click);
			// 
			// btnZmianaDanychPociagu
			// 
			this->btnZmianaDanychPociagu->Location = System::Drawing::Point(12, 293);
			this->btnZmianaDanychPociagu->Name = L"btnZmianaDanychPociagu";
			this->btnZmianaDanychPociagu->Size = System::Drawing::Size(152, 74);
			this->btnZmianaDanychPociagu->TabIndex = 3;
			this->btnZmianaDanychPociagu->Text = L"Zmiana informacji o poci¹gu";
			this->btnZmianaDanychPociagu->UseVisualStyleBackColor = true;
			this->btnZmianaDanychPociagu->Click += gcnew System::EventHandler(this, &OknoAdministratoraZalogowany::btnZmianaDanychPociagu_Click);
			// 
			// btnTworzenieOpoznionegoPociagu
			// 
			this->btnTworzenieOpoznionegoPociagu->Location = System::Drawing::Point(323, 12);
			this->btnTworzenieOpoznionegoPociagu->Name = L"btnTworzenieOpoznionegoPociagu";
			this->btnTworzenieOpoznionegoPociagu->Size = System::Drawing::Size(152, 74);
			this->btnTworzenieOpoznionegoPociagu->TabIndex = 4;
			this->btnTworzenieOpoznionegoPociagu->Text = L"Tworzenie opóŸnionego poci¹gu";
			this->btnTworzenieOpoznionegoPociagu->UseVisualStyleBackColor = true;
			this->btnTworzenieOpoznionegoPociagu->Click += gcnew System::EventHandler(this, &OknoAdministratoraZalogowany::btnTworzenieOpoznionegoPociagu_Click);
			// 
			// btnTworzenieOdwolanegoPociagu
			// 
			this->btnTworzenieOdwolanegoPociagu->Location = System::Drawing::Point(323, 148);
			this->btnTworzenieOdwolanegoPociagu->Name = L"btnTworzenieOdwolanegoPociagu";
			this->btnTworzenieOdwolanegoPociagu->Size = System::Drawing::Size(152, 74);
			this->btnTworzenieOdwolanegoPociagu->TabIndex = 5;
			this->btnTworzenieOdwolanegoPociagu->Text = L"Tworzenie odwo³anego poci¹gu";
			this->btnTworzenieOdwolanegoPociagu->UseVisualStyleBackColor = true;
			this->btnTworzenieOdwolanegoPociagu->Click += gcnew System::EventHandler(this, &OknoAdministratoraZalogowany::btnTworzenieOdwolanegoPociagu_Click);
			// 
			// btnUsuwaniePociagu
			// 
			this->btnUsuwaniePociagu->Location = System::Drawing::Point(12, 148);
			this->btnUsuwaniePociagu->Name = L"btnUsuwaniePociagu";
			this->btnUsuwaniePociagu->Size = System::Drawing::Size(152, 74);
			this->btnUsuwaniePociagu->TabIndex = 6;
			this->btnUsuwaniePociagu->Text = L"Usuwanie Poci¹gu";
			this->btnUsuwaniePociagu->UseVisualStyleBackColor = true;
			this->btnUsuwaniePociagu->Click += gcnew System::EventHandler(this, &OknoAdministratoraZalogowany::btnUsuwaniePociagu_Click);
			// 
			// btnWylogowanie
			// 
			this->btnWylogowanie->Location = System::Drawing::Point(1291, 452);
			this->btnWylogowanie->Name = L"btnWylogowanie";
			this->btnWylogowanie->Size = System::Drawing::Size(152, 74);
			this->btnWylogowanie->TabIndex = 7;
			this->btnWylogowanie->Text = L"Wyloguj";
			this->btnWylogowanie->UseVisualStyleBackColor = true;
			this->btnWylogowanie->Click += gcnew System::EventHandler(this, &OknoAdministratoraZalogowany::btnWylogowanie_Click);
			// 
			// OknoAdministratoraZalogowany
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1455, 538);
			this->Controls->Add(this->btnWylogowanie);
			this->Controls->Add(this->btnUsuwaniePociagu);
			this->Controls->Add(this->btnTworzenieOdwolanegoPociagu);
			this->Controls->Add(this->btnTworzenieOpoznionegoPociagu);
			this->Controls->Add(this->btnZmianaDanychPociagu);
			this->Controls->Add(this->btnDodawaniePociagu);
			this->Controls->Add(this->btnUsuwanieAdministratora);
			this->Controls->Add(this->btnDodawanieAdministratora);
			this->Name = L"OknoAdministratoraZalogowany";
			this->Text = L"OknoAdministratoraZalogowany";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnDodawaniePociagu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoDodajNowyPociag^ oknoDodajNowyPociag = gcnew OknoDodajNowyPociag(this);
		oknoDodajNowyPociag->ShowDialog();

	}
	private: System::Void btnWylogowanie_Click(System::Object^ sender, System::EventArgs^ e) {
		FunkcjeAdministratorow adminFnc{};
		bool result = adminFnc.wylogowanie();

		BazaDanych bazaDanych;
		bazaDanych.zapisDanych();

		if (result) {
			this->Close();
			obj->Show();
		}

	}
	private: System::Void btnZmianaDanychPociagu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoZmianaInformacjiOPociagu^ oknoZmianaInformacjiOPociagu = gcnew OknoZmianaInformacjiOPociagu(this);
		oknoZmianaInformacjiOPociagu->ShowDialog();
	}
	private: System::Void btnTworzenieOpoznionegoPociagu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoTworzenieOpoznionegoPociagu^ oknoTworzenieOpoznionegoPociagu = gcnew OknoTworzenieOpoznionegoPociagu(this);
		oknoTworzenieOpoznionegoPociagu->ShowDialog();
	}
	private: System::Void btnTworzenieOdwolanegoPociagu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoTworzenieOdwolanegoPociagu^ oknoTworzenieOdwolanegoPociagu = gcnew OknoTworzenieOdwolanegoPociagu(this);
		oknoTworzenieOdwolanegoPociagu->ShowDialog();
	}
	private: System::Void btnUsuwaniePociagu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoUsuwaniaPociagu^ oknoUsuwaniaPociagu = gcnew OknoUsuwaniaPociagu(this);
		oknoUsuwaniaPociagu->ShowDialog();
	}
	private: System::Void btnDodawanieAdministratora_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoDodawaniaAdministratora^ oknoDodawaniaAdministratora = gcnew OknoDodawaniaAdministratora(this);
		oknoDodawaniaAdministratora->ShowDialog();
	}
	private: System::Void btnUsuwanieAdministratora_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoUsuwanieAdministratora^ oknoUsuwanieAdministratora = gcnew OknoUsuwanieAdministratora(this);
		oknoUsuwanieAdministratora->ShowDialog();
	}
};
}

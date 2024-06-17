#pragma once
#include "BazaDanych.h"
#include "Konwersja.h"

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

namespace AutomatInformacjiKolejowej {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o OknoRozkladuJazdy
	/// </summary>
	public ref class OknoRozkladuJazdy : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoRozkladuJazdy(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoRozkladuJazdy(void)
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
		~OknoRozkladuJazdy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPowrot;
	private: System::Windows::Forms::Label^ TabelaInformacji;
	private: System::Windows::Forms::Button^ btnWyswietlInformacje;

	protected:

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
			this->btnPowrot = (gcnew System::Windows::Forms::Button());
			this->TabelaInformacji = (gcnew System::Windows::Forms::Label());
			this->btnWyswietlInformacje = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1323, 458);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(119, 69);
			this->btnPowrot->TabIndex = 0;
			this->btnPowrot->Text = L"Powrót";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoRozkladuJazdy::btnPowrot_Click);
			// 
			// TabelaInformacji
			// 
			this->TabelaInformacji->AutoSize = true;
			this->TabelaInformacji->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TabelaInformacji->Location = System::Drawing::Point(12, 118);
			this->TabelaInformacji->Name = L"TabelaInformacji";
			this->TabelaInformacji->Size = System::Drawing::Size(0, 25);
			this->TabelaInformacji->TabIndex = 1;
			// 
			// btnWyswietlInformacje
			// 
			this->btnWyswietlInformacje->Location = System::Drawing::Point(601, 12);
			this->btnWyswietlInformacje->Name = L"btnWyswietlInformacje";
			this->btnWyswietlInformacje->Size = System::Drawing::Size(155, 75);
			this->btnWyswietlInformacje->TabIndex = 2;
			this->btnWyswietlInformacje->Text = L"Rozk³ad Jazdy";
			this->btnWyswietlInformacje->UseVisualStyleBackColor = true;
			this->btnWyswietlInformacje->Click += gcnew System::EventHandler(this, &OknoRozkladuJazdy::btnWyswietlInformacje_Click);
			// 
			// OknoRozkladuJazdy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1454, 539);
			this->Controls->Add(this->btnWyswietlInformacje);
			this->Controls->Add(this->TabelaInformacji);
			this->Controls->Add(this->btnPowrot);
			this->Name = L"OknoRozkladuJazdy";
			this->Text = L"OknoRozkladuJazdy";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPowrot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}


	private: System::Void btnWyswietlInformacje_Click(System::Object^ sender, System::EventArgs^ e) {
		WypisywaniePociagow wypPociagow;

		string combinedInfo = wypPociagow.wypisaniePociagow();

		System::String^ resultString = zStringa(combinedInfo);

		TabelaInformacji->Text = resultString;

	}
};
}

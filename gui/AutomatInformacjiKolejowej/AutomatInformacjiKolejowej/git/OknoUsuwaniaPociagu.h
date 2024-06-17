#pragma once
#include "BazaDanych.h"
#include "Konwersja.h"

namespace AutomatInformacjiKolejowej {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o OknoUsuwaniaPociagu
	/// </summary>
	public ref class OknoUsuwaniaPociagu : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoUsuwaniaPociagu(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoUsuwaniaPociagu(void)
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
		~OknoUsuwaniaPociagu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textNumerPociagu;
	private: System::Windows::Forms::Button^ btnZatwierdz;
	private: System::Windows::Forms::Button^ btnPowrot;
	private: System::Windows::Forms::Label^ Komunikat;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textNumerPociagu = (gcnew System::Windows::Forms::TextBox());
			this->btnZatwierdz = (gcnew System::Windows::Forms::Button());
			this->btnPowrot = (gcnew System::Windows::Forms::Button());
			this->Komunikat = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(623, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuwanie poci¹gu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(647, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Podaj numer poci¹gu:";
			// 
			// textNumerPociagu
			// 
			this->textNumerPociagu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNumerPociagu->Location = System::Drawing::Point(652, 98);
			this->textNumerPociagu->Name = L"textNumerPociagu";
			this->textNumerPociagu->Size = System::Drawing::Size(197, 28);
			this->textNumerPociagu->TabIndex = 2;
			// 
			// btnZatwierdz
			// 
			this->btnZatwierdz->Location = System::Drawing::Point(687, 183);
			this->btnZatwierdz->Name = L"btnZatwierdz";
			this->btnZatwierdz->Size = System::Drawing::Size(121, 69);
			this->btnZatwierdz->TabIndex = 3;
			this->btnZatwierdz->Text = L"ZatwierdŸ";
			this->btnZatwierdz->UseVisualStyleBackColor = true;
			this->btnZatwierdz->Click += gcnew System::EventHandler(this, &OknoUsuwaniaPociagu::btnZatwierdz_Click);
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1318, 456);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(127, 70);
			this->btnPowrot->TabIndex = 4;
			this->btnPowrot->Text = L"Powrót";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoUsuwaniaPociagu::btnPowrot_Click);
			// 
			// Komunikat
			// 
			this->Komunikat->AutoSize = true;
			this->Komunikat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Komunikat->Location = System::Drawing::Point(624, 365);
			this->Komunikat->Name = L"Komunikat";
			this->Komunikat->Size = System::Drawing::Size(0, 25);
			this->Komunikat->TabIndex = 5;
			// 
			// OknoUsuwaniaPociagu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1457, 538);
			this->Controls->Add(this->Komunikat);
			this->Controls->Add(this->btnPowrot);
			this->Controls->Add(this->btnZatwierdz);
			this->Controls->Add(this->textNumerPociagu);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OknoUsuwaniaPociagu";
			this->Text = L"OknoUsuwaniaPociagu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPowrot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}
	private: System::Void btnZatwierdz_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string numerPociagu = doStringa(textNumerPociagu->Text);

		textNumerPociagu->Text = Text->Empty;

		ZmianaInformacjiOPociagach zmianaInformacjiOPociagach;

		bool odpowiedz = zmianaInformacjiOPociagach.usuwaniePociagu(numerPociagu);

		if (odpowiedz) {
			Komunikat->Text = "Poprawnie usuniêto poci¹g";
		}else {
			Komunikat->Text = "Nie ma takiego poci¹gu";
		}

	}
};
}

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
	/// Podsumowanie informacji o OknoWyszukiwaniaPoNumerze
	/// </summary>
	public ref class OknoWyszukiwaniaPoNumerze : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoWyszukiwaniaPoNumerze(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoWyszukiwaniaPoNumerze(void)
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
		~OknoWyszukiwaniaPoNumerze()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPowrot;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textNumerPociagu;
	private: System::Windows::Forms::Button^ btnSzukaj;
	private: System::Windows::Forms::Label^ txtOdpowiedz;
	private: System::Windows::Forms::Label^ label2;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textNumerPociagu = (gcnew System::Windows::Forms::TextBox());
			this->btnSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtOdpowiedz = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1310, 465);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(133, 63);
			this->btnPowrot->TabIndex = 0;
			this->btnPowrot->Text = L"Powrót";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoWyszukiwaniaPoNumerze::btnPowrot_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(620, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Podaj numer poci¹gu:";
			// 
			// textNumerPociagu
			// 
			this->textNumerPociagu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNumerPociagu->Location = System::Drawing::Point(625, 125);
			this->textNumerPociagu->Name = L"textNumerPociagu";
			this->textNumerPociagu->Size = System::Drawing::Size(197, 28);
			this->textNumerPociagu->TabIndex = 2;
			// 
			// btnSzukaj
			// 
			this->btnSzukaj->Location = System::Drawing::Point(668, 190);
			this->btnSzukaj->Name = L"btnSzukaj";
			this->btnSzukaj->Size = System::Drawing::Size(110, 70);
			this->btnSzukaj->TabIndex = 3;
			this->btnSzukaj->Text = L"Szukaj";
			this->btnSzukaj->UseVisualStyleBackColor = true;
			this->btnSzukaj->Click += gcnew System::EventHandler(this, &OknoWyszukiwaniaPoNumerze::btnSzukaj_Click);
			// 
			// txtOdpowiedz
			// 
			this->txtOdpowiedz->AutoSize = true;
			this->txtOdpowiedz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtOdpowiedz->Location = System::Drawing::Point(12, 368);
			this->txtOdpowiedz->Name = L"txtOdpowiedz";
			this->txtOdpowiedz->Size = System::Drawing::Size(0, 25);
			this->txtOdpowiedz->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(472, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(489, 32);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Wyszukiwanie poci¹gu po numerze";
			// 
			// OknoWyszukiwaniaPoNumerze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1455, 540);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtOdpowiedz);
			this->Controls->Add(this->btnSzukaj);
			this->Controls->Add(this->textNumerPociagu);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnPowrot);
			this->Name = L"OknoWyszukiwaniaPoNumerze";
			this->Text = L"OknoWyszukiwaniaPoNumerze";
			this->Load += gcnew System::EventHandler(this, &OknoWyszukiwaniaPoNumerze::OknoWyszukiwaniaPoNumerze_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPowrot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}
	private: System::Void OknoWyszukiwaniaPoNumerze_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSzukaj_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string numerPociagu = doStringa(textNumerPociagu->Text);

		WyszukiwaniePociagu wszPociagow;

		string combinedInfo = wszPociagow.wyszukiwaniePoNumerze(numerPociagu);

		System::String^ resultString = zStringa(combinedInfo);
		txtOdpowiedz->Text = resultString;

	}
};
}

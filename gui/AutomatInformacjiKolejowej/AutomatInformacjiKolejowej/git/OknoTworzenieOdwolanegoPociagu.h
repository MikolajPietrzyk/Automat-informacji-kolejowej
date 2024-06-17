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
	/// Podsumowanie informacji o OknoTworzenieOdwolanegoPociagu
	/// </summary>
	public ref class OknoTworzenieOdwolanegoPociagu : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoTworzenieOdwolanegoPociagu(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoTworzenieOdwolanegoPociagu(void)
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
		~OknoTworzenieOdwolanegoPociagu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textCzyZmienionoTransport;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textNowyTransport;
	private: System::Windows::Forms::Button^ btnZatwierdz;
	private: System::Windows::Forms::Button^ btnPowrot;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textNumerPociagu;
	private: System::Windows::Forms::Label^ KomunikatOZlymNumerze;

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
			this->textCzyZmienionoTransport = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textNowyTransport = (gcnew System::Windows::Forms::TextBox());
			this->btnZatwierdz = (gcnew System::Windows::Forms::Button());
			this->btnPowrot = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textNumerPociagu = (gcnew System::Windows::Forms::TextBox());
			this->KomunikatOZlymNumerze = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(502, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(452, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tworzenie odwo³anego poci¹gu:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(569, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(385, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Czy jest zastepczy transport: 1 - tak, 0 - nie";
			// 
			// textCzyZmienionoTransport
			// 
			this->textCzyZmienionoTransport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->textCzyZmienionoTransport->Location = System::Drawing::Point(574, 187);
			this->textCzyZmienionoTransport->Name = L"textCzyZmienionoTransport";
			this->textCzyZmienionoTransport->Size = System::Drawing::Size(270, 28);
			this->textCzyZmienionoTransport->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(569, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(275, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Podaj nowy srodek transportu:";
			// 
			// textNowyTransport
			// 
			this->textNowyTransport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNowyTransport->Location = System::Drawing::Point(574, 276);
			this->textNowyTransport->Name = L"textNowyTransport";
			this->textNowyTransport->Size = System::Drawing::Size(270, 28);
			this->textNowyTransport->TabIndex = 4;
			// 
			// btnZatwierdz
			// 
			this->btnZatwierdz->Location = System::Drawing::Point(637, 340);
			this->btnZatwierdz->Name = L"btnZatwierdz";
			this->btnZatwierdz->Size = System::Drawing::Size(123, 69);
			this->btnZatwierdz->TabIndex = 5;
			this->btnZatwierdz->Text = L"ZatwierdŸ";
			this->btnZatwierdz->UseVisualStyleBackColor = true;
			this->btnZatwierdz->Click += gcnew System::EventHandler(this, &OknoTworzenieOdwolanegoPociagu::btnZatwierdz_Click);
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1317, 457);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(127, 71);
			this->btnPowrot->TabIndex = 6;
			this->btnPowrot->Text = L"Powrót";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoTworzenieOdwolanegoPociagu::btnPowrot_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(569, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Podaj numer poci¹gu:";
			// 
			// textNumerPociagu
			// 
			this->textNumerPociagu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNumerPociagu->Location = System::Drawing::Point(574, 95);
			this->textNumerPociagu->Name = L"textNumerPociagu";
			this->textNumerPociagu->Size = System::Drawing::Size(270, 28);
			this->textNumerPociagu->TabIndex = 8;
			// 
			// KomunikatOZlymNumerze
			// 
			this->KomunikatOZlymNumerze->AutoSize = true;
			this->KomunikatOZlymNumerze->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->KomunikatOZlymNumerze->Location = System::Drawing::Point(954, 98);
			this->KomunikatOZlymNumerze->Name = L"KomunikatOZlymNumerze";
			this->KomunikatOZlymNumerze->Size = System::Drawing::Size(0, 25);
			this->KomunikatOZlymNumerze->TabIndex = 9;
			// 
			// OknoTworzenieOdwolanegoPociagu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1456, 540);
			this->Controls->Add(this->KomunikatOZlymNumerze);
			this->Controls->Add(this->textNumerPociagu);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnPowrot);
			this->Controls->Add(this->btnZatwierdz);
			this->Controls->Add(this->textNowyTransport);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textCzyZmienionoTransport);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OknoTworzenieOdwolanegoPociagu";
			this->Text = L"OknoTworzenieOdwolanegoPociagu";
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
		std::string czyZmienionoTransport = doStringa(textCzyZmienionoTransport->Text);
		std::string nowyTransport = doStringa(textNowyTransport->Text);
		
		textNumerPociagu->Text = Text->Empty;
		textNowyTransport->Text = Text->Empty;
		textCzyZmienionoTransport->Text = Text->Empty;

		ZmianaRodzajuPociagu zmianaRodzajuPociagu;

		bool odpowiedz = zmianaRodzajuPociagu.tworzenieOdwolanegoPociagu(numerPociagu, czyZmienionoTransport, nowyTransport);

		if (!odpowiedz) {
			KomunikatOZlymNumerze->Text = "Podano blêdny numer";
		}

	}
};
}

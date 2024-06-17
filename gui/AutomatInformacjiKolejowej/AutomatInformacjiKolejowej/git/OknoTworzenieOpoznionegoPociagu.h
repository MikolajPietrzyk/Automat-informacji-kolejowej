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
	/// Podsumowanie informacji o OknoTworzenieOpoznionegoPociagu
	/// </summary>
	public ref class OknoTworzenieOpoznionegoPociagu : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoTworzenieOpoznionegoPociagu(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoTworzenieOpoznionegoPociagu(void)
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
		~OknoTworzenieOpoznionegoPociagu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textOpoznienie;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textZmianaPeronu;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textNowyPeron;
	private: System::Windows::Forms::Button^ btnZatwierdz;
	private: System::Windows::Forms::Button^ btnPowrot;
	private: System::Windows::Forms::Label^ KomunikatOZlymNumerze;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textNumerPociagu;
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
			this->textOpoznienie = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textZmianaPeronu = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textNowyPeron = (gcnew System::Windows::Forms::TextBox());
			this->btnZatwierdz = (gcnew System::Windows::Forms::Button());
			this->btnPowrot = (gcnew System::Windows::Forms::Button());
			this->KomunikatOZlymNumerze = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textNumerPociagu = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(475, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(480, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Toworzenie opoŸnionego poci¹gu:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(593, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Podaj opoŸnienie:  (min)";
			// 
			// textOpoznienie
			// 
			this->textOpoznienie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textOpoznienie->Location = System::Drawing::Point(598, 177);
			this->textOpoznienie->Name = L"textOpoznienie";
			this->textOpoznienie->Size = System::Drawing::Size(218, 28);
			this->textOpoznienie->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(593, 239);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(330, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Czy zmieniono peron: 1 - tak, 0 - nie ";
			// 
			// textZmianaPeronu
			// 
			this->textZmianaPeronu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textZmianaPeronu->Location = System::Drawing::Point(598, 267);
			this->textZmianaPeronu->Name = L"textZmianaPeronu";
			this->textZmianaPeronu->Size = System::Drawing::Size(218, 28);
			this->textZmianaPeronu->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(593, 329);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Podaj peron:";
			// 
			// textNowyPeron
			// 
			this->textNowyPeron->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNowyPeron->Location = System::Drawing::Point(598, 357);
			this->textNowyPeron->Name = L"textNowyPeron";
			this->textNowyPeron->Size = System::Drawing::Size(218, 28);
			this->textNowyPeron->TabIndex = 6;
			this->textNowyPeron->TextChanged += gcnew System::EventHandler(this, &OknoTworzenieOpoznionegoPociagu::textNowyPeron_TextChanged);
			// 
			// btnZatwierdz
			// 
			this->btnZatwierdz->Location = System::Drawing::Point(645, 423);
			this->btnZatwierdz->Name = L"btnZatwierdz";
			this->btnZatwierdz->Size = System::Drawing::Size(125, 71);
			this->btnZatwierdz->TabIndex = 7;
			this->btnZatwierdz->Text = L"ZatwierdŸ";
			this->btnZatwierdz->UseVisualStyleBackColor = true;
			this->btnZatwierdz->Click += gcnew System::EventHandler(this, &OknoTworzenieOpoznionegoPociagu::btnZatwierdz_Click);
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1315, 452);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(128, 78);
			this->btnPowrot->TabIndex = 8;
			this->btnPowrot->Text = L"Powrót";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoTworzenieOpoznionegoPociagu::btnPowrot_Click);
			// 
			// KomunikatOZlymNumerze
			// 
			this->KomunikatOZlymNumerze->AutoSize = true;
			this->KomunikatOZlymNumerze->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->KomunikatOZlymNumerze->Location = System::Drawing::Point(891, 91);
			this->KomunikatOZlymNumerze->Name = L"KomunikatOZlymNumerze";
			this->KomunikatOZlymNumerze->Size = System::Drawing::Size(0, 25);
			this->KomunikatOZlymNumerze->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(593, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(202, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Podaj numer poci¹gu:";
			// 
			// textNumerPociagu
			// 
			this->textNumerPociagu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNumerPociagu->Location = System::Drawing::Point(598, 90);
			this->textNumerPociagu->Name = L"textNumerPociagu";
			this->textNumerPociagu->Size = System::Drawing::Size(218, 28);
			this->textNumerPociagu->TabIndex = 11;
			// 
			// OknoTworzenieOpoznionegoPociagu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1455, 542);
			this->Controls->Add(this->textNumerPociagu);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->KomunikatOZlymNumerze);
			this->Controls->Add(this->btnPowrot);
			this->Controls->Add(this->btnZatwierdz);
			this->Controls->Add(this->textNowyPeron);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textZmianaPeronu);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textOpoznienie);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OknoTworzenieOpoznionegoPociagu";
			this->Text = L"OknoTworzenieOpoznionegoPociagu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textNowyPeron_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnPowrot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}
	private: System::Void btnZatwierdz_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string opoznienie = doStringa(textOpoznienie->Text);
		std::string numerPociagu = doStringa(textNumerPociagu->Text);
		std::string czyZmienionoPeron = doStringa(textZmianaPeronu->Text);
		std::string nowyPeron = doStringa(textNowyPeron->Text);

		textOpoznienie->Text = Text->Empty;
		textNumerPociagu->Text = Text->Empty;
		textZmianaPeronu->Text = Text->Empty;
		textNowyPeron->Text = Text->Empty;

		ZmianaRodzajuPociagu zmianaRodzajuPociagu;

		bool odpowiedz = zmianaRodzajuPociagu.tworzenieOpoznionegoPociagu(numerPociagu, opoznienie, czyZmienionoPeron, nowyPeron);

		if (!odpowiedz) {
			KomunikatOZlymNumerze->Text = "Podano blêdny numer";
		}

	}
};
}

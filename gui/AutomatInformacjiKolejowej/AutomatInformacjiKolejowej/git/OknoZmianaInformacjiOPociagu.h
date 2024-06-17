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
	/// Podsumowanie informacji o OknoZmianaInformacjiOPociagu
	/// </summary>
	public ref class OknoZmianaInformacjiOPociagu : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoZmianaInformacjiOPociagu(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoZmianaInformacjiOPociagu(void)
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
		~OknoZmianaInformacjiOPociagu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPowrot;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textNowaNazwa;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textNowyNumer;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textNowaStacja;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textNowyPeron;


	private: System::Windows::Forms::Button^ btnZastosuj;
	private: System::Windows::Forms::TextBox^ textMinuta;
	private: System::Windows::Forms::TextBox^ textGodzina;
	private: System::Windows::Forms::TextBox^ textRok;
	private: System::Windows::Forms::TextBox^ textMiesiac;
	private: System::Windows::Forms::TextBox^ textDzien;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textNumerPoprawianegoPociagu;
	private: System::Windows::Forms::Label^ label7;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textNowaNazwa = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textNowyNumer = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textNowaStacja = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textNowyPeron = (gcnew System::Windows::Forms::TextBox());
			this->btnZastosuj = (gcnew System::Windows::Forms::Button());
			this->textMinuta = (gcnew System::Windows::Forms::TextBox());
			this->textGodzina = (gcnew System::Windows::Forms::TextBox());
			this->textRok = (gcnew System::Windows::Forms::TextBox());
			this->textMiesiac = (gcnew System::Windows::Forms::TextBox());
			this->textDzien = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textNumerPoprawianegoPociagu = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1331, 460);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(111, 65);
			this->btnPowrot->TabIndex = 0;
			this->btnPowrot->Text = L"Powrót";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoZmianaInformacjiOPociagu::btnPowrot_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(514, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(406, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Zmiana informacji o poci¹gu.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(514, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Zmiana nazwy poci¹gu:";
			// 
			// textNowaNazwa
			// 
			this->textNowaNazwa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNowaNazwa->Location = System::Drawing::Point(519, 81);
			this->textNowaNazwa->Name = L"textNowaNazwa";
			this->textNowaNazwa->Size = System::Drawing::Size(213, 28);
			this->textNowaNazwa->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(514, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Zmiana numeru poci¹gu:";
			// 
			// textNowyNumer
			// 
			this->textNowyNumer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNowyNumer->Location = System::Drawing::Point(519, 160);
			this->textNowyNumer->Name = L"textNowyNumer";
			this->textNowyNumer->Size = System::Drawing::Size(213, 28);
			this->textNowyNumer->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(514, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(298, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Zmiana stacji docelowej pociagu:";
			// 
			// textNowaStacja
			// 
			this->textNowaStacja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNowaStacja->Location = System::Drawing::Point(519, 238);
			this->textNowaStacja->Name = L"textNowaStacja";
			this->textNowaStacja->Size = System::Drawing::Size(213, 28);
			this->textNowaStacja->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(514, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(297, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Zmiana peronu odjazdu poci¹gu:";
			this->label5->Click += gcnew System::EventHandler(this, &OknoZmianaInformacjiOPociagu::label5_Click);
			// 
			// textNowyPeron
			// 
			this->textNowyPeron->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNowyPeron->Location = System::Drawing::Point(519, 321);
			this->textNowyPeron->Name = L"textNowyPeron";
			this->textNowyPeron->Size = System::Drawing::Size(213, 28);
			this->textNowyPeron->TabIndex = 9;
			// 
			// btnZastosuj
			// 
			this->btnZastosuj->Location = System::Drawing::Point(553, 448);
			this->btnZastosuj->Name = L"btnZastosuj";
			this->btnZastosuj->Size = System::Drawing::Size(125, 65);
			this->btnZastosuj->TabIndex = 12;
			this->btnZastosuj->Text = L"Zastosuj";
			this->btnZastosuj->UseVisualStyleBackColor = true;
			this->btnZastosuj->Click += gcnew System::EventHandler(this, &OknoZmianaInformacjiOPociagu::btnZastosuj_Click);
			// 
			// textMinuta
			// 
			this->textMinuta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textMinuta->Location = System::Drawing::Point(806, 400);
			this->textMinuta->Name = L"textMinuta";
			this->textMinuta->Size = System::Drawing::Size(61, 28);
			this->textMinuta->TabIndex = 22;
			// 
			// textGodzina
			// 
			this->textGodzina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textGodzina->Location = System::Drawing::Point(739, 400);
			this->textGodzina->Name = L"textGodzina";
			this->textGodzina->Size = System::Drawing::Size(61, 28);
			this->textGodzina->TabIndex = 21;
			// 
			// textRok
			// 
			this->textRok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textRok->Location = System::Drawing::Point(643, 400);
			this->textRok->Name = L"textRok";
			this->textRok->Size = System::Drawing::Size(90, 28);
			this->textRok->TabIndex = 20;
			// 
			// textMiesiac
			// 
			this->textMiesiac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textMiesiac->Location = System::Drawing::Point(579, 400);
			this->textMiesiac->Name = L"textMiesiac";
			this->textMiesiac->Size = System::Drawing::Size(58, 28);
			this->textMiesiac->TabIndex = 19;
			// 
			// textDzien
			// 
			this->textDzien->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textDzien->Location = System::Drawing::Point(519, 400);
			this->textDzien->Name = L"textDzien";
			this->textDzien->Size = System::Drawing::Size(54, 28);
			this->textDzien->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(514, 372);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(530, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Podaj date odjazdu poci¹gu:  (format DD MM RRRR gg mm)";
			// 
			// textNumerPoprawianegoPociagu
			// 
			this->textNumerPoprawianegoPociagu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->textNumerPoprawianegoPociagu->Location = System::Drawing::Point(806, 81);
			this->textNumerPoprawianegoPociagu->Name = L"textNumerPoprawianegoPociagu";
			this->textNumerPoprawianegoPociagu->Size = System::Drawing::Size(238, 28);
			this->textNumerPoprawianegoPociagu->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(801, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(260, 25);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Numer zmienianego pociagu";
			// 
			// OknoZmianaInformacjiOPociagu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1454, 537);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textNumerPoprawianegoPociagu);
			this->Controls->Add(this->textMinuta);
			this->Controls->Add(this->textGodzina);
			this->Controls->Add(this->textRok);
			this->Controls->Add(this->textMiesiac);
			this->Controls->Add(this->textDzien);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnZastosuj);
			this->Controls->Add(this->textNowyPeron);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textNowaStacja);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textNowyNumer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textNowaNazwa);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnPowrot);
			this->Name = L"OknoZmianaInformacjiOPociagu";
			this->Text = L"OknoZmianaInformacjiOPociagu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnPowrot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}
	private: System::Void btnZastosuj_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string nowaNazwa = doStringa(textNowaNazwa->Text);
		std::string nowyNumer = doStringa(textNowyNumer->Text);
		std::string nowaStacja = doStringa(textNowaStacja->Text);
		std::string nowyPeron = doStringa(textNowyPeron->Text);
		std::string dataDzien = doStringa(textDzien->Text);
		std::string dataMiesiac = doStringa(textMiesiac->Text);
		std::string dataRok = doStringa(textRok->Text);
		std::string dataGodzina = doStringa(textGodzina->Text);
		std::string dataMinuta = doStringa(textMinuta->Text);
		std::string numerZmienianegoPociagu = doStringa(textNumerPoprawianegoPociagu->Text);

		textNowaNazwa->Text = Text->Empty;
		textNowyNumer->Text = Text->Empty;
		textNowaStacja->Text = Text->Empty;
		textNowyPeron->Text = Text->Empty;
		textDzien->Text = Text->Empty;
		textMiesiac->Text = Text->Empty;
		textRok->Text = Text->Empty;
		textGodzina->Text = Text->Empty;
		textMinuta->Text = Text->Empty;

		ZmianaInformacjiOPociagach zmianainfOP;

		zmianainfOP.zmianaDanychPociagu(numerZmienianegoPociagu, nowaNazwa, nowyNumer, nowaStacja, nowyPeron, dataDzien, dataMiesiac, dataRok, dataGodzina, dataMinuta);
	}
};
}

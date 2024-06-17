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
	/// Podsumowanie informacji o OknoDodajNowyPociag
	/// </summary>
	public ref class OknoDodajNowyPociag : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoDodajNowyPociag(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoDodajNowyPociag(void)
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
		~OknoDodajNowyPociag()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textNazwaPociagu;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textNumerPociagu;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textStacjaDocelowa;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textPoronOdjazdu;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textDzien;

	private: System::Windows::Forms::Button^ btnDodanieNowegoPociagu;
	private: System::Windows::Forms::Button^ btnPowrot;
	private: System::Windows::Forms::TextBox^ textMiesiac;
	private: System::Windows::Forms::TextBox^ textRok;
	private: System::Windows::Forms::TextBox^ textGodzina;
	private: System::Windows::Forms::TextBox^ textMinuta;

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
			this->textNazwaPociagu = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textNumerPociagu = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textStacjaDocelowa = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textPoronOdjazdu = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textDzien = (gcnew System::Windows::Forms::TextBox());
			this->btnDodanieNowegoPociagu = (gcnew System::Windows::Forms::Button());
			this->btnPowrot = (gcnew System::Windows::Forms::Button());
			this->textMiesiac = (gcnew System::Windows::Forms::TextBox());
			this->textRok = (gcnew System::Windows::Forms::TextBox());
			this->textGodzina = (gcnew System::Windows::Forms::TextBox());
			this->textMinuta = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(535, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(291, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dodawanie poci¹gu.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(555, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Podaj nazwê poci¹gu:";
			this->label2->Click += gcnew System::EventHandler(this, &OknoDodajNowyPociag::label2_Click);
			// 
			// textNazwaPociagu
			// 
			this->textNazwaPociagu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNazwaPociagu->Location = System::Drawing::Point(560, 84);
			this->textNazwaPociagu->Name = L"textNazwaPociagu";
			this->textNazwaPociagu->Size = System::Drawing::Size(199, 28);
			this->textNazwaPociagu->TabIndex = 2;
			this->textNazwaPociagu->TextChanged += gcnew System::EventHandler(this, &OknoDodajNowyPociag::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(555, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Podaj numer poci¹gu:";
			// 
			// textNumerPociagu
			// 
			this->textNumerPociagu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textNumerPociagu->Location = System::Drawing::Point(560, 165);
			this->textNumerPociagu->Name = L"textNumerPociagu";
			this->textNumerPociagu->Size = System::Drawing::Size(197, 28);
			this->textNumerPociagu->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(555, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(286, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Podaj stacjê docelow¹ poci¹gu:";
			// 
			// textStacjaDocelowa
			// 
			this->textStacjaDocelowa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textStacjaDocelowa->Location = System::Drawing::Point(560, 245);
			this->textStacjaDocelowa->Name = L"textStacjaDocelowa";
			this->textStacjaDocelowa->Size = System::Drawing::Size(199, 28);
			this->textStacjaDocelowa->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(555, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(271, 25);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Podaj peron odjazdu poci¹gu:";
			// 
			// textPoronOdjazdu
			// 
			this->textPoronOdjazdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textPoronOdjazdu->Location = System::Drawing::Point(560, 322);
			this->textPoronOdjazdu->Name = L"textPoronOdjazdu";
			this->textPoronOdjazdu->Size = System::Drawing::Size(199, 28);
			this->textPoronOdjazdu->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(555, 374);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(530, 25);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Podaj date odjazdu poci¹gu:  (format DD MM RRRR gg mm)";
			// 
			// textDzien
			// 
			this->textDzien->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textDzien->Location = System::Drawing::Point(560, 402);
			this->textDzien->Name = L"textDzien";
			this->textDzien->Size = System::Drawing::Size(54, 28);
			this->textDzien->TabIndex = 10;
			// 
			// btnDodanieNowegoPociagu
			// 
			this->btnDodanieNowegoPociagu->Location = System::Drawing::Point(593, 459);
			this->btnDodanieNowegoPociagu->Name = L"btnDodanieNowegoPociagu";
			this->btnDodanieNowegoPociagu->Size = System::Drawing::Size(134, 62);
			this->btnDodanieNowegoPociagu->TabIndex = 11;
			this->btnDodanieNowegoPociagu->Text = L"Dodaj";
			this->btnDodanieNowegoPociagu->UseVisualStyleBackColor = true;
			this->btnDodanieNowegoPociagu->Click += gcnew System::EventHandler(this, &OknoDodajNowyPociag::btnDodanieNowegoPociagu_Click);
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1316, 459);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(129, 66);
			this->btnPowrot->TabIndex = 12;
			this->btnPowrot->Text = L"Powrót";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoDodajNowyPociag::btnPowrot_Click);
			// 
			// textMiesiac
			// 
			this->textMiesiac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textMiesiac->Location = System::Drawing::Point(620, 402);
			this->textMiesiac->Name = L"textMiesiac";
			this->textMiesiac->Size = System::Drawing::Size(58, 28);
			this->textMiesiac->TabIndex = 13;
			// 
			// textRok
			// 
			this->textRok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textRok->Location = System::Drawing::Point(684, 402);
			this->textRok->Name = L"textRok";
			this->textRok->Size = System::Drawing::Size(90, 28);
			this->textRok->TabIndex = 14;
			// 
			// textGodzina
			// 
			this->textGodzina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textGodzina->Location = System::Drawing::Point(780, 402);
			this->textGodzina->Name = L"textGodzina";
			this->textGodzina->Size = System::Drawing::Size(61, 28);
			this->textGodzina->TabIndex = 15;
			// 
			// textMinuta
			// 
			this->textMinuta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textMinuta->Location = System::Drawing::Point(847, 402);
			this->textMinuta->Name = L"textMinuta";
			this->textMinuta->Size = System::Drawing::Size(61, 28);
			this->textMinuta->TabIndex = 16;
			// 
			// OknoDodajNowyPociag
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1457, 537);
			this->Controls->Add(this->textMinuta);
			this->Controls->Add(this->textGodzina);
			this->Controls->Add(this->textRok);
			this->Controls->Add(this->textMiesiac);
			this->Controls->Add(this->btnPowrot);
			this->Controls->Add(this->btnDodanieNowegoPociagu);
			this->Controls->Add(this->textDzien);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textPoronOdjazdu);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textStacjaDocelowa);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textNumerPociagu);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textNazwaPociagu);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OknoDodajNowyPociag";
			this->Text = L"OknoDodajNowyPociag";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnPowrot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}
	private: System::Void btnDodanieNowegoPociagu_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string nazwaPociagu = doStringa(textNazwaPociagu->Text);
		std::string numerPociagu = doStringa(textNumerPociagu->Text);
		std::string stacjaDocelowaPociagu = doStringa(textStacjaDocelowa->Text);
		std::string peronOdjazdu = doStringa(textPoronOdjazdu->Text);
		std::string dataDzien = doStringa(textDzien->Text);
		std::string dataMiesiac = doStringa(textMiesiac->Text);
		std::string dataRok = doStringa(textRok->Text);
		std::string dataGodzina = doStringa(textGodzina->Text);
		std::string dataMinuta = doStringa(textMinuta->Text);

		textNazwaPociagu->Text = Text->Empty;
		textNumerPociagu->Text = Text->Empty;
		textStacjaDocelowa->Text = Text->Empty;
		textPoronOdjazdu->Text = Text->Empty;
		textDzien->Text = Text->Empty;
		textMiesiac->Text = Text->Empty;
		textRok->Text = Text->Empty;
		textGodzina->Text = Text->Empty;
		textMinuta->Text = Text->Empty;



		ZmianaInformacjiOPociagach zmianainfOP;

		zmianainfOP.dodawaniePociagu(nazwaPociagu, numerPociagu, stacjaDocelowaPociagu, peronOdjazdu, dataDzien, dataMiesiac, dataRok, dataGodzina, dataMinuta);
	}
};
}

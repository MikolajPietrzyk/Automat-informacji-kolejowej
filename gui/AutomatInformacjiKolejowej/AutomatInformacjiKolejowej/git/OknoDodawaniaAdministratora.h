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
	/// Podsumowanie informacji o OknoDodawaniaAdministratora
	/// </summary>
	public ref class OknoDodawaniaAdministratora : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoDodawaniaAdministratora(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoDodawaniaAdministratora(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~OknoDodawaniaAdministratora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textLogin;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textHaslo;
	private: System::Windows::Forms::Button^ btnZatwierdz;
	private: System::Windows::Forms::Button^ btnPowrot;
	private: System::Windows::Forms::Label^ Komunikat;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
		/// jej zawarto�ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textLogin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textHaslo = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Location = System::Drawing::Point(532, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(369, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dodawanie administratora";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(577, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Podaj login:";
			// 
			// textLogin
			// 
			this->textLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textLogin->Location = System::Drawing::Point(582, 101);
			this->textLogin->Name = L"textLogin";
			this->textLogin->Size = System::Drawing::Size(232, 28);
			this->textLogin->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(577, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Podaj has�o:";
			// 
			// textHaslo
			// 
			this->textHaslo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textHaslo->Location = System::Drawing::Point(582, 198);
			this->textHaslo->Name = L"textHaslo";
			this->textHaslo->Size = System::Drawing::Size(232, 28);
			this->textHaslo->TabIndex = 4;
			// 
			// btnZatwierdz
			// 
			this->btnZatwierdz->Location = System::Drawing::Point(632, 266);
			this->btnZatwierdz->Name = L"btnZatwierdz";
			this->btnZatwierdz->Size = System::Drawing::Size(125, 67);
			this->btnZatwierdz->TabIndex = 5;
			this->btnZatwierdz->Text = L"Zatwierd�";
			this->btnZatwierdz->UseVisualStyleBackColor = true;
			this->btnZatwierdz->Click += gcnew System::EventHandler(this, &OknoDodawaniaAdministratora::btnZatwierdz_Click);
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1323, 456);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(121, 72);
			this->btnPowrot->TabIndex = 6;
			this->btnPowrot->Text = L"Powr�t";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoDodawaniaAdministratora::btnPowrot_Click);
			// 
			// Komunikat
			// 
			this->Komunikat->AutoSize = true;
			this->Komunikat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Komunikat->Location = System::Drawing::Point(533, 389);
			this->Komunikat->Name = L"Komunikat";
			this->Komunikat->Size = System::Drawing::Size(0, 25);
			this->Komunikat->TabIndex = 7;
			// 
			// OknoDodawaniaAdministratora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1456, 540);
			this->Controls->Add(this->Komunikat);
			this->Controls->Add(this->btnPowrot);
			this->Controls->Add(this->btnZatwierdz);
			this->Controls->Add(this->textHaslo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OknoDodawaniaAdministratora";
			this->Text = L"OknoDodawaniaAdministratora";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPowrot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}
	private: System::Void btnZatwierdz_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string haslo = doStringa(textHaslo->Text);
		std::string login = doStringa(textLogin->Text);

		textHaslo->Text = Text->Empty;
		textLogin->Text = Text->Empty;

		FunkcjeAdministratorow funkcjeAdministratorow;

		funkcjeAdministratorow.dodawanieAdministratora(login, haslo);


		Komunikat->Text = "Poprawnie dodano administratora";
	}
};
}

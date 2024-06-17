#pragma once
#include "OknoAdministratoraZalogowany.h"
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
	/// Podsumowanie informacji o OknoAdministratora
	/// </summary>
	public ref class OknoAdministratora : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoAdministratora(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoAdministratora(void)
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
		~OknoAdministratora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnPowrot;
	private: System::Windows::Forms::Button^ btnZaloguj;
	private: System::Windows::Forms::TextBox^ textLogin;
	private: System::Windows::Forms::TextBox^ textHaslo;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->btnPowrot = (gcnew System::Windows::Forms::Button());
			this->btnZaloguj = (gcnew System::Windows::Forms::Button());
			this->textLogin = (gcnew System::Windows::Forms::TextBox());
			this->textHaslo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(642, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Logowanie";
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1329, 456);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(110, 68);
			this->btnPowrot->TabIndex = 1;
			this->btnPowrot->Text = L"Powrót";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoAdministratora::btnPowrot_Click);
			// 
			// btnZaloguj
			// 
			this->btnZaloguj->Location = System::Drawing::Point(648, 325);
			this->btnZaloguj->Name = L"btnZaloguj";
			this->btnZaloguj->Size = System::Drawing::Size(127, 69);
			this->btnZaloguj->TabIndex = 2;
			this->btnZaloguj->Text = L"Zaloguj";
			this->btnZaloguj->UseVisualStyleBackColor = true;
			this->btnZaloguj->Click += gcnew System::EventHandler(this, &OknoAdministratora::btnZaloguj_Click);
			// 
			// textLogin
			// 
			this->textLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textLogin->Location = System::Drawing::Point(648, 161);
			this->textLogin->Name = L"textLogin";
			this->textLogin->Size = System::Drawing::Size(127, 28);
			this->textLogin->TabIndex = 3;
			// 
			// textHaslo
			// 
			this->textHaslo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textHaslo->Location = System::Drawing::Point(648, 258);
			this->textHaslo->Name = L"textHaslo";
			this->textHaslo->Size = System::Drawing::Size(127, 28);
			this->textHaslo->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(643, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Login:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(643, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Has³o";
			// 
			// OknoAdministratora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1451, 536);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textHaslo);
			this->Controls->Add(this->textLogin);
			this->Controls->Add(this->btnZaloguj);
			this->Controls->Add(this->btnPowrot);
			this->Controls->Add(this->label1);
			this->Name = L"OknoAdministratora";
			this->Text = L"OknoAdministratora";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPowrot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}
	private: System::Void btnZaloguj_Click(System::Object^ sender, System::EventArgs^ e) {

		std::string login = doStringa(textLogin->Text);
		std::string haslo = doStringa(textHaslo->Text);

		FunkcjeAdministratorow adminFnc{};
		bool result = adminFnc.logowanie(login, haslo);

		if (result) {
			this->Hide();
			OknoAdministratoraZalogowany^ oknoAdministratoraZalogowany = gcnew OknoAdministratoraZalogowany(this);
			oknoAdministratoraZalogowany->ShowDialog();
		}
	}
};
}

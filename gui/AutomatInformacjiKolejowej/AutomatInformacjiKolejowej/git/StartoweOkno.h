#pragma once
#include "OknoUzytkownika.h"
#include "OknoAdministratora.h"


namespace AutomatInformacjiKolejowej {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o StartoweOkno
	/// </summary>
	public ref class StartoweOkno : public System::Windows::Forms::Form
	{
	public:
		StartoweOkno(void)
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
		~StartoweOkno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnUzytkownik;
	private: System::Windows::Forms::Button^ btnAdministrator;
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
			this->btnUzytkownik = (gcnew System::Windows::Forms::Button());
			this->btnAdministrator = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(538, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(409, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Automat Informacji Kolejowej";
			// 
			// btnUzytkownik
			// 
			this->btnUzytkownik->Location = System::Drawing::Point(557, 301);
			this->btnUzytkownik->Name = L"btnUzytkownik";
			this->btnUzytkownik->Size = System::Drawing::Size(161, 72);
			this->btnUzytkownik->TabIndex = 1;
			this->btnUzytkownik->Text = L"Uzytkownik";
			this->btnUzytkownik->UseVisualStyleBackColor = true;
			this->btnUzytkownik->Click += gcnew System::EventHandler(this, &StartoweOkno::btnUzytkownik_Click);
			// 
			// btnAdministrator
			// 
			this->btnAdministrator->Location = System::Drawing::Point(772, 301);
			this->btnAdministrator->Name = L"btnAdministrator";
			this->btnAdministrator->Size = System::Drawing::Size(142, 72);
			this->btnAdministrator->TabIndex = 2;
			this->btnAdministrator->Text = L"Administrator";
			this->btnAdministrator->UseVisualStyleBackColor = true;
			this->btnAdministrator->Click += gcnew System::EventHandler(this, &StartoweOkno::btnAdministrator_Click);
			// 
			// StartoweOkno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1453, 537);
			this->Controls->Add(this->btnAdministrator);
			this->Controls->Add(this->btnUzytkownik);
			this->Controls->Add(this->label1);
			this->Name = L"StartoweOkno";
			this->Text = L"StartoweOkno";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnUzytkownik_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();

		OknoUzytkownika^ oknoUzytkownika = gcnew OknoUzytkownika(this); 
		oknoUzytkownika->ShowDialog();
	}
	private: System::Void btnAdministrator_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();

		OknoAdministratora^ oknoAdministratora = gcnew OknoAdministratora(this);
		oknoAdministratora->ShowDialog();
	}
	};
}

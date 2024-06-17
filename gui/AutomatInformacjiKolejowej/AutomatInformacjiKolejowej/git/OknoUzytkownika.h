#pragma once
#include "OknoRozkladuJazdy.h"
#include "OknoWyszukiwaniaPoNazwie.h"
#include "OknoWyszukiwaniaPoNumerze.h"
#include "OknoWyszukiwaniaPoStacjiDocelowej.h"

namespace AutomatInformacjiKolejowej {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o OknoUzytkownika
	/// </summary>
	public ref class OknoUzytkownika : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		OknoUzytkownika(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		OknoUzytkownika(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~OknoUzytkownika()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPowrot;
	private: System::Windows::Forms::Button^ btnWyswietleniePociagow;
	private: System::Windows::Forms::Button^ btnWyszukiwaniePoNazwie;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnWyszukiwaniePoNumerze;
	private: System::Windows::Forms::Button^ btnWyszukiwaniePoStacjiDocelowej;
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
			this->btnWyswietleniePociagow = (gcnew System::Windows::Forms::Button());
			this->btnWyszukiwaniePoNazwie = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnWyszukiwaniePoNumerze = (gcnew System::Windows::Forms::Button());
			this->btnWyszukiwaniePoStacjiDocelowej = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnPowrot
			// 
			this->btnPowrot->Location = System::Drawing::Point(1314, 455);
			this->btnPowrot->Name = L"btnPowrot";
			this->btnPowrot->Size = System::Drawing::Size(131, 72);
			this->btnPowrot->TabIndex = 0;
			this->btnPowrot->Text = L"Powrót";
			this->btnPowrot->UseVisualStyleBackColor = true;
			this->btnPowrot->Click += gcnew System::EventHandler(this, &OknoUzytkownika::btnPowrot_Click);
			// 
			// btnWyswietleniePociagow
			// 
			this->btnWyswietleniePociagow->Location = System::Drawing::Point(643, 12);
			this->btnWyswietleniePociagow->Name = L"btnWyswietleniePociagow";
			this->btnWyswietleniePociagow->Size = System::Drawing::Size(128, 71);
			this->btnWyswietleniePociagow->TabIndex = 1;
			this->btnWyswietleniePociagow->Text = L"Rozk³ad Jazdy";
			this->btnWyswietleniePociagow->UseVisualStyleBackColor = true;
			this->btnWyswietleniePociagow->Click += gcnew System::EventHandler(this, &OknoUzytkownika::btnWyswietleniePociagow_Click);
			// 
			// btnWyszukiwaniePoNazwie
			// 
			this->btnWyszukiwaniePoNazwie->Location = System::Drawing::Point(643, 189);
			this->btnWyszukiwaniePoNazwie->Name = L"btnWyszukiwaniePoNazwie";
			this->btnWyszukiwaniePoNazwie->Size = System::Drawing::Size(128, 72);
			this->btnWyszukiwaniePoNazwie->TabIndex = 2;
			this->btnWyszukiwaniePoNazwie->Text = L"Nazwie";
			this->btnWyszukiwaniePoNazwie->UseVisualStyleBackColor = true;
			this->btnWyszukiwaniePoNazwie->Click += gcnew System::EventHandler(this, &OknoUzytkownika::btnWyszukiwaniePoNazwie_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(638, 161);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Wyszukiwanie po:";
			// 
			// btnWyszukiwaniePoNumerze
			// 
			this->btnWyszukiwaniePoNumerze->Location = System::Drawing::Point(643, 267);
			this->btnWyszukiwaniePoNumerze->Name = L"btnWyszukiwaniePoNumerze";
			this->btnWyszukiwaniePoNumerze->Size = System::Drawing::Size(128, 72);
			this->btnWyszukiwaniePoNumerze->TabIndex = 4;
			this->btnWyszukiwaniePoNumerze->Text = L"Numerze";
			this->btnWyszukiwaniePoNumerze->UseVisualStyleBackColor = true;
			this->btnWyszukiwaniePoNumerze->Click += gcnew System::EventHandler(this, &OknoUzytkownika::btnWyszukiwaniePoNumerze_Click);
			// 
			// btnWyszukiwaniePoStacjiDocelowej
			// 
			this->btnWyszukiwaniePoStacjiDocelowej->Location = System::Drawing::Point(643, 345);
			this->btnWyszukiwaniePoStacjiDocelowej->Name = L"btnWyszukiwaniePoStacjiDocelowej";
			this->btnWyszukiwaniePoStacjiDocelowej->Size = System::Drawing::Size(128, 72);
			this->btnWyszukiwaniePoStacjiDocelowej->TabIndex = 5;
			this->btnWyszukiwaniePoStacjiDocelowej->Text = L"Stacji Docelowej";
			this->btnWyszukiwaniePoStacjiDocelowej->UseVisualStyleBackColor = true;
			this->btnWyszukiwaniePoStacjiDocelowej->Click += gcnew System::EventHandler(this, &OknoUzytkownika::btnWyszukiwaniePoStacjiDocelowej_Click);
			// 
			// OknoUzytkownika
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1457, 539);
			this->Controls->Add(this->btnWyszukiwaniePoStacjiDocelowej);
			this->Controls->Add(this->btnWyszukiwaniePoNumerze);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnWyszukiwaniePoNazwie);
			this->Controls->Add(this->btnWyswietleniePociagow);
			this->Controls->Add(this->btnPowrot);
			this->Name = L"OknoUzytkownika";
			this->Text = L"OknoUzytkownika";
			this->Load += gcnew System::EventHandler(this, &OknoUzytkownika::OknoUzytkownika_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPowrot_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		obj->Show();
	}
	private: System::Void OknoUzytkownika_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnWyswietleniePociagow_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoRozkladuJazdy^ oknoRozkladuJazdy = gcnew OknoRozkladuJazdy(this);
		oknoRozkladuJazdy->ShowDialog();
	}
	private: System::Void btnWyszukiwaniePoNazwie_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoWyszukiwaniaPoNazwie^ oknoWyszukiwaniaPoNazwie = gcnew OknoWyszukiwaniaPoNazwie(this);
		oknoWyszukiwaniaPoNazwie->ShowDialog();
	}
	private: System::Void btnWyszukiwaniePoNumerze_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoWyszukiwaniaPoNumerze^ oknoWyszukiwaniaPoNumerze = gcnew OknoWyszukiwaniaPoNumerze(this);
		oknoWyszukiwaniaPoNumerze->ShowDialog();
	}
	private: System::Void btnWyszukiwaniePoStacjiDocelowej_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		OknoWyszukiwaniaPoStacjiDocelowej^ oknoWyszukiwaniaPoStacjiDocelowej = gcnew OknoWyszukiwaniaPoStacjiDocelowej(this);
		oknoWyszukiwaniaPoStacjiDocelowej->ShowDialog();
	}
};
}

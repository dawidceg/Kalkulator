#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Podsumowanie informacji o Pomoc
	/// </summary>
	public ref class Pomoc : public System::Windows::Forms::Form
	{
	public:
		Pomoc(void)
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
		~Pomoc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lblPomoc;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Pomoc::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblPomoc = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(99, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Zamknij";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pomoc::button1_Click);
			// 
			// lblPomoc
			// 
			this->lblPomoc->AutoSize = true;
			this->lblPomoc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblPomoc->Location = System::Drawing::Point(64, 30);
			this->lblPomoc->Name = L"lblPomoc";
			this->lblPomoc->Size = System::Drawing::Size(46, 17);
			this->lblPomoc->TabIndex = 1;
			this->lblPomoc->Text = L"label1";
			this->lblPomoc->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// linkLabel1
			// 
			this->linkLabel1->Location = System::Drawing::Point(0, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(100, 23);
			this->linkLabel1->TabIndex = 0;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(64, 108);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(146, 13);
			this->linkLabel2->TabIndex = 2;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"https://github.com/dawidceg";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Pomoc::linkLabel2_LinkClicked);
			// 
			// Pomoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->lblPomoc);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Pomoc";
			this->Text = L"Pomoc";
			this->Load += gcnew System::EventHandler(this, &Pomoc::Pomoc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Close();
	}
	private: System::Void Pomoc_Load(System::Object^  sender, System::EventArgs^  e) {

		lblPomoc->Text = "Program Kalkulator\n\nautor: Dawid Cegielski\nZapraszam na github:\n";
	}

private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

	Process^ x = gcnew Process;
	x->Start("https://github.com/dawidceg");
}
};
}

#pragma once
#include"TelaPontos.h"
#include"TelaNome.h"

namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaPontuacao2
	/// </summary>
	public ref class TelaPontuacao2 : public System::Windows::Forms::Form
	{
		int Pontos;
	public:
		TelaPontuacao2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TelaPontuacao2(int Pontucao)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			setPontos(Pontucao);

		}
		void setPontos(int);
		int getPontos(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaPontuacao2()
		{
			if (components)
			{
				delete components;
			}
			Pontos = 0;
		}
	private: System::Windows::Forms::Button^  BotaoVoltarMenu;
	protected:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_MostrarPontos;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaPontuacao2::typeid));
			this->BotaoVoltarMenu = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_MostrarPontos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BotaoVoltarMenu
			// 
			this->BotaoVoltarMenu->BackColor = System::Drawing::Color::Transparent;
			this->BotaoVoltarMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoVoltarMenu->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->BotaoVoltarMenu->FlatAppearance->BorderSize = 2;
			this->BotaoVoltarMenu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoVoltarMenu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->BotaoVoltarMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoVoltarMenu->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotaoVoltarMenu->ForeColor = System::Drawing::Color::Gold;
			this->BotaoVoltarMenu->Location = System::Drawing::Point(3, 528);
			this->BotaoVoltarMenu->Name = L"BotaoVoltarMenu";
			this->BotaoVoltarMenu->Size = System::Drawing::Size(120, 30);
			this->BotaoVoltarMenu->TabIndex = 24;
			this->BotaoVoltarMenu->Text = L"Voltar";
			this->BotaoVoltarMenu->UseVisualStyleBackColor = false;
			this->BotaoVoltarMenu->Click += gcnew System::EventHandler(this, &TelaPontuacao2::BotaoVoltarMenu_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(253, 519);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(170, 19);
			this->label4->TabIndex = 23;
			this->label4->Text = L"- Guerreiro Dos Dragões.";
			this->label4->Click += gcnew System::EventHandler(this, &TelaPontuacao2::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(21, 493);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 23);
			this->label3->TabIndex = 22;
			this->label3->Text = L"seu verdadeiro objetivo.\"";
			this->label3->Click += gcnew System::EventHandler(this, &TelaPontuacao2::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(21, 470);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(505, 23);
			this->label2->TabIndex = 21;
			this->label2->Text = L"o pode de um senhor dos dragões, se esforce mais para alcançar";
			this->label2->Click += gcnew System::EventHandler(this, &TelaPontuacao2::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(21, 447);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(422, 23);
			this->label1->TabIndex = 20;
			this->label1->Text = L"\"Você ainda precisa trilhar um longo caminho para ter";
			this->label1->Click += gcnew System::EventHandler(this, &TelaPontuacao2::label1_Click);
			// 
			// btn_MostrarPontos
			// 
			this->btn_MostrarPontos->BackColor = System::Drawing::Color::Transparent;
			this->btn_MostrarPontos->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->btn_MostrarPontos->FlatAppearance->BorderSize = 2;
			this->btn_MostrarPontos->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_MostrarPontos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_MostrarPontos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_MostrarPontos->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_MostrarPontos->ForeColor = System::Drawing::Color::Gold;
			this->btn_MostrarPontos->Location = System::Drawing::Point(873, 528);
			this->btn_MostrarPontos->Name = L"btn_MostrarPontos";
			this->btn_MostrarPontos->Size = System::Drawing::Size(158, 30);
			this->btn_MostrarPontos->TabIndex = 19;
			this->btn_MostrarPontos->Text = L"Mostrar Pontuação";
			this->btn_MostrarPontos->UseVisualStyleBackColor = false;
			this->btn_MostrarPontos->Click += gcnew System::EventHandler(this, &TelaPontuacao2::btn_MostrarPontos_Click);
			// 
			// TelaPontuacao2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1034, 561);
			this->Controls->Add(this->BotaoVoltarMenu);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_MostrarPontos);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaPontuacao2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaPontuacao2";
			this->Load += gcnew System::EventHandler(this, &TelaPontuacao2::TelaPontuacao2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_MostrarPontos_Click(System::Object^  sender, System::EventArgs^  e) 
{

	this->Visible = false;
	Close();
	TelaNome tn(getPontos());
	tn.ShowDialog();
	this->Visible = true;
}
private: System::Void BotaoVoltarMenu_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Visible = false;
	Close();
}
private: System::Void TelaPontuacao2_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

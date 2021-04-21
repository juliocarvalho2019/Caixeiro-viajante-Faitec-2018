#pragma once
#include"TelaNome.h"

namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaPontuacao
	/// </summary>
	public ref class TelaPontuacao : public System::Windows::Forms::Form
	{
	private:
		int Pontos;
	public:
		TelaPontuacao(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TelaPontuacao(int Pontucao)
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
		~TelaPontuacao()
		{
			if (components)
			{
				delete components;
			}
			Pontos = 0;
		}
	private: System::Windows::Forms::Button^  BotaoVoltarMenu;
	protected:



	private: System::Windows::Forms::Button^  btn_MostrarPontuacao;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaPontuacao::typeid));
			this->BotaoVoltarMenu = (gcnew System::Windows::Forms::Button());
			this->btn_MostrarPontuacao = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->BotaoVoltarMenu->Location = System::Drawing::Point(2, 526);
			this->BotaoVoltarMenu->Name = L"BotaoVoltarMenu";
			this->BotaoVoltarMenu->Size = System::Drawing::Size(120, 30);
			this->BotaoVoltarMenu->TabIndex = 23;
			this->BotaoVoltarMenu->Text = L"Voltar";
			this->BotaoVoltarMenu->UseVisualStyleBackColor = false;
			this->BotaoVoltarMenu->Click += gcnew System::EventHandler(this, &TelaPontuacao::BotaoVoltarMenu_Click);
			// 
			// btn_MostrarPontuacao
			// 
			this->btn_MostrarPontuacao->BackColor = System::Drawing::Color::Transparent;
			this->btn_MostrarPontuacao->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->btn_MostrarPontuacao->FlatAppearance->BorderSize = 2;
			this->btn_MostrarPontuacao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_MostrarPontuacao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_MostrarPontuacao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_MostrarPontuacao->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_MostrarPontuacao->ForeColor = System::Drawing::Color::Gold;
			this->btn_MostrarPontuacao->Location = System::Drawing::Point(874, 526);
			this->btn_MostrarPontuacao->Name = L"btn_MostrarPontuacao";
			this->btn_MostrarPontuacao->Size = System::Drawing::Size(158, 30);
			this->btn_MostrarPontuacao->TabIndex = 19;
			this->btn_MostrarPontuacao->Text = L"Mostrar Pontuação";
			this->btn_MostrarPontuacao->UseVisualStyleBackColor = false;
			this->btn_MostrarPontuacao->Click += gcnew System::EventHandler(this, &TelaPontuacao::btn_MostrarPontuacao_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(452, 526);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 23);
			this->label4->TabIndex = 25;
			this->label4->Text = L"- - Dragonborn";
			this->label4->Click += gcnew System::EventHandler(this, &TelaPontuacao::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gold;
			this->label5->Location = System::Drawing::Point(269, 502);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(521, 24);
			this->label5->TabIndex = 24;
			this->label5->Text = L"\"Você tem o conhecimento e a força do senhor dos dragões.\"";
			this->label5->Click += gcnew System::EventHandler(this, &TelaPontuacao::label5_Click);
			// 
			// TelaPontuacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1034, 561);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->BotaoVoltarMenu);
			this->Controls->Add(this->btn_MostrarPontuacao);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaPontuacao";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaPontuacao";
			this->Load += gcnew System::EventHandler(this, &TelaPontuacao::TelaPontuacao_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TelaPontuacao_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btn_MostrarPontuacao_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Visible = false;
		Close();
		TelaNome tn(getPontos());
		tn.ShowDialog();
		this->Visible = true;
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void BotaoVoltarMenu_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Visible = false;
	Close();
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

#pragma once
#include"TelaNome.h"
#include"TelaJogo0.h"
#include"TelaJogo.h"
#include"TelaJogo2.h"
#include"TelaJogo3.h"
#include"TelaJogo4.h"
#include"TelaJogo5.h"
#include"TelaJogo6.h"


#include<iostream>
#include<string>

namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaPontuacao1
	/// </summary>
	public ref class TelaPontuacao1 : public System::Windows::Forms::Form
	{
	private:
		int Pontos;
	public:
		TelaPontuacao1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TelaPontuacao1(int Pontucao)
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
		~TelaPontuacao1()
		{
			if (components)
			{
				delete components;
			}
			Pontos = 0;
		}
	private: System::Windows::Forms::Button^  BotaoVoltarMenu;
	protected:


	private: System::Windows::Forms::Button^  btn_MostrarPontos;
	private: System::Windows::Forms::Label^  label3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaPontuacao1::typeid));
			this->BotaoVoltarMenu = (gcnew System::Windows::Forms::Button());
			this->btn_MostrarPontos = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->BotaoVoltarMenu->Location = System::Drawing::Point(3, 529);
			this->BotaoVoltarMenu->Name = L"BotaoVoltarMenu";
			this->BotaoVoltarMenu->Size = System::Drawing::Size(120, 30);
			this->BotaoVoltarMenu->TabIndex = 22;
			this->BotaoVoltarMenu->Text = L"Voltar";
			this->BotaoVoltarMenu->UseVisualStyleBackColor = false;
			this->BotaoVoltarMenu->Click += gcnew System::EventHandler(this, &TelaPontuacao1::BotaoVoltarMenu_Click);
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
			this->btn_MostrarPontos->Location = System::Drawing::Point(878, 529);
			this->btn_MostrarPontos->Name = L"btn_MostrarPontos";
			this->btn_MostrarPontos->Size = System::Drawing::Size(154, 30);
			this->btn_MostrarPontos->TabIndex = 18;
			this->btn_MostrarPontos->Text = L"Mostrar Pontuação";
			this->btn_MostrarPontos->UseVisualStyleBackColor = false;
			this->btn_MostrarPontos->Click += gcnew System::EventHandler(this, &TelaPontuacao1::btn_MostrarPontos_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(586, 529);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 21);
			this->label3->TabIndex = 25;
			this->label3->Text = L"- Dovahkin\r\n";
			this->label3->Click += gcnew System::EventHandler(this, &TelaPontuacao1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(273, 504);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(382, 23);
			this->label4->TabIndex = 24;
			this->label4->Text = L"mais um pouco e estará ainda muito mais forte.\"";
			this->label4->Click += gcnew System::EventHandler(this, &TelaPontuacao1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gold;
			this->label5->Location = System::Drawing::Point(273, 481);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(310, 23);
			this->label5->TabIndex = 23;
			this->label5->Text = L"\"Você está no caminho certo guerreiro,";
			this->label5->Click += gcnew System::EventHandler(this, &TelaPontuacao1::label5_Click);
			// 
			// TelaPontuacao1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1034, 561);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->BotaoVoltarMenu);
			this->Controls->Add(this->btn_MostrarPontos);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaPontuacao1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaPontuacao1";
			this->Load += gcnew System::EventHandler(this, &TelaPontuacao1::TelaPontuacao1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_MostrarPontos_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Visible = false;
		Close();
		TelaNome tn(getPontos());
		tn.ShowDialog();
		this->Visible = true;
	}
	private: System::Void TelaPontuacao1_Load(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	private: System::Void BotaoVoltarMenu_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Visible = false;
		Close();
	}
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}

	};
	}

#ifndef TelaMenuH
#define TelaMenuH

#include <iostream>
using namespace std;
#include <string>
#include "TelaBemVindo.h"
#include"TeoriaEscolha.h"
#include"Sobre.h"
#include"TelaJogo0.h"
#include"TelaJogo2.h"



namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::IO;
	using namespace System::Threading;

	/// <summary>
	/// Summary for TelaMenu
	/// </summary>
	public ref class TelaMenu : public System::Windows::Forms::Form
	{
   
	private:
		System::Media::SoundPlayer ^player = gcnew System::Media::SoundPlayer();
		//System::Media::SoundPlayer ^player1 = gcnew System::Media::SoundPlayer();
 	public:
		TelaMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//player->SoundLocation = "Músicas/Back-in-Black.wav";
			player->SoundLocation = "Músicas/Musica.wav";
			//player->SoundLocation = "Músicas/Dragao.wav";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  NomeDaAplicacao;
	private: System::Windows::Forms::Button^  btn_Sair;
	private: System::Windows::Forms::Button^  btn_Sobre;



	private: System::Windows::Forms::Button^  btn_Teoria;

	private: System::Windows::Forms::Button^  btnMusica;

	private: System::Windows::Forms::Button^  btnStopMusic;
	private: System::Windows::Forms::Button^  btn_Praticar;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaMenu::typeid));
			this->NomeDaAplicacao = (gcnew System::Windows::Forms::Label());
			this->btn_Sair = (gcnew System::Windows::Forms::Button());
			this->btn_Sobre = (gcnew System::Windows::Forms::Button());
			this->btn_Teoria = (gcnew System::Windows::Forms::Button());
			this->btnMusica = (gcnew System::Windows::Forms::Button());
			this->btnStopMusic = (gcnew System::Windows::Forms::Button());
			this->btn_Praticar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NomeDaAplicacao
			// 
			this->NomeDaAplicacao->AutoSize = true;
			this->NomeDaAplicacao->BackColor = System::Drawing::Color::Transparent;
			this->NomeDaAplicacao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 80.24999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NomeDaAplicacao->ForeColor = System::Drawing::Color::Black;
			this->NomeDaAplicacao->Location = System::Drawing::Point(202, 9);
			this->NomeDaAplicacao->Name = L"NomeDaAplicacao";
			this->NomeDaAplicacao->Size = System::Drawing::Size(0, 120);
			this->NomeDaAplicacao->TabIndex = 6;
			this->NomeDaAplicacao->Click += gcnew System::EventHandler(this, &TelaMenu::NomeDaAplicacao_Click);
			// 
			// btn_Sair
			// 
			this->btn_Sair->BackColor = System::Drawing::Color::Black;
			this->btn_Sair->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_Sair->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->btn_Sair->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_Sair->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_Sair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Sair->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 12, System::Drawing::FontStyle::Bold));
			this->btn_Sair->ForeColor = System::Drawing::Color::Gold;
			this->btn_Sair->Location = System::Drawing::Point(909, 525);
			this->btn_Sair->Name = L"btn_Sair";
			this->btn_Sair->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->btn_Sair->Size = System::Drawing::Size(120, 30);
			this->btn_Sair->TabIndex = 13;
			this->btn_Sair->Text = L"Sair";
			this->btn_Sair->UseVisualStyleBackColor = false;
			this->btn_Sair->Click += gcnew System::EventHandler(this, &TelaMenu::btn_Sair_Click);
			// 
			// btn_Sobre
			// 
			this->btn_Sobre->BackColor = System::Drawing::Color::Black;
			this->btn_Sobre->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_Sobre->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->btn_Sobre->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_Sobre->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_Sobre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Sobre->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 12, System::Drawing::FontStyle::Bold));
			this->btn_Sobre->ForeColor = System::Drawing::Color::Gold;
			this->btn_Sobre->Location = System::Drawing::Point(909, 489);
			this->btn_Sobre->Name = L"btn_Sobre";
			this->btn_Sobre->Size = System::Drawing::Size(120, 30);
			this->btn_Sobre->TabIndex = 13;
			this->btn_Sobre->Text = L"Sobre";
			this->btn_Sobre->UseVisualStyleBackColor = false;
			this->btn_Sobre->Click += gcnew System::EventHandler(this, &TelaMenu::btn_Sobre_Click);
			// 
			// btn_Teoria
			// 
			this->btn_Teoria->BackColor = System::Drawing::Color::Black;
			this->btn_Teoria->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_Teoria->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_Teoria->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->btn_Teoria->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_Teoria->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_Teoria->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Teoria->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 12, System::Drawing::FontStyle::Bold));
			this->btn_Teoria->ForeColor = System::Drawing::Color::Gold;
			this->btn_Teoria->Location = System::Drawing::Point(909, 453);
			this->btn_Teoria->Name = L"btn_Teoria";
			this->btn_Teoria->Size = System::Drawing::Size(120, 30);
			this->btn_Teoria->TabIndex = 15;
			this->btn_Teoria->Text = L"Teoria";
			this->btn_Teoria->UseVisualStyleBackColor = false;
			this->btn_Teoria->Click += gcnew System::EventHandler(this, &TelaMenu::btn_Teoria_Click);
			// 
			// btnMusica
			// 
			this->btnMusica->BackColor = System::Drawing::Color::Transparent;
			this->btnMusica->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMusica.BackgroundImage")));
			this->btnMusica->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnMusica->FlatAppearance->BorderSize = 0;
			this->btnMusica->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMusica->Location = System::Drawing::Point(0, 0);
			this->btnMusica->Name = L"btnMusica";
			this->btnMusica->Size = System::Drawing::Size(34, 33);
			this->btnMusica->TabIndex = 1;
			this->btnMusica->UseVisualStyleBackColor = false;
			this->btnMusica->Click += gcnew System::EventHandler(this, &TelaMenu::btnMusica_Click);
			// 
			// btnStopMusic
			// 
			this->btnStopMusic->BackColor = System::Drawing::Color::Transparent;
			this->btnStopMusic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStopMusic.BackgroundImage")));
			this->btnStopMusic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnStopMusic->ForeColor = System::Drawing::Color::Transparent;
			this->btnStopMusic->Location = System::Drawing::Point(0, 0);
			this->btnStopMusic->Name = L"btnStopMusic";
			this->btnStopMusic->Size = System::Drawing::Size(34, 33);
			this->btnStopMusic->TabIndex = 0;
			this->btnStopMusic->UseVisualStyleBackColor = false;
			this->btnStopMusic->Click += gcnew System::EventHandler(this, &TelaMenu::btnStopMusic_Click);
			// 
			// btn_Praticar
			// 
			this->btn_Praticar->BackColor = System::Drawing::Color::Black;
			this->btn_Praticar->FlatAppearance->BorderColor = System::Drawing::Color::GhostWhite;
			this->btn_Praticar->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->btn_Praticar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_Praticar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_Praticar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Praticar->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Praticar->ForeColor = System::Drawing::Color::Gold;
			this->btn_Praticar->Location = System::Drawing::Point(909, 417);
			this->btn_Praticar->Name = L"btn_Praticar";
			this->btn_Praticar->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn_Praticar->Size = System::Drawing::Size(120, 30);
			this->btn_Praticar->TabIndex = 10;
			this->btn_Praticar->Text = L"Praticar";
			this->btn_Praticar->UseMnemonic = false;
			this->btn_Praticar->UseVisualStyleBackColor = false;
			this->btn_Praticar->Click += gcnew System::EventHandler(this, &TelaMenu::btn_Praticar_Click);
			// 
			// TelaMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1030, 557);
			this->Controls->Add(this->btn_Praticar);
			this->Controls->Add(this->btnStopMusic);
			this->Controls->Add(this->btnMusica);
			this->Controls->Add(this->btn_Teoria);
			this->Controls->Add(this->btn_Sobre);
			this->Controls->Add(this->btn_Sair);
			this->Controls->Add(this->NomeDaAplicacao);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaMenu";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProjetoCaixeiro Viajante";
			this->Load += gcnew System::EventHandler(this, &TelaMenu::TelaMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
private: System::Void btn_Teoria_Click(System::Object^  sender, System::EventArgs^  e) {
			 TeoriaEscolha te;
			 this->Visible = false;
			 te.ShowDialog();
			 this->Visible = true;
}
private: System::Void btn_Praticar_Click(System::Object^  sender, System::EventArgs^  e) {

	             TelaBemVindo tbv;
				 this->Visible = false;
			     tbv.ShowDialog();
				 this->Visible = true;

	}

private: System::Void btn_Sobre_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
			 Sobre ts;
			 ts.ShowDialog();
			 this->Visible = true;
			 player->PlayLooping();
}

private: System::Void btn_Sair_Click(System::Object^  sender, System::EventArgs^  e) {
	
			 Close();
}
private: System::Void btnStopMusic_Click(System::Object^  sender, System::EventArgs^  e) {
			 btnStopMusic->Visible = false;
			 btnMusica->Visible = true;
			 player->PlayLooping();
			 MessageBox::Show(" Som ativado !");
}
private: System::Void btnMusica_Click(System::Object^  sender, System::EventArgs^  e) {

			 btnMusica->Visible = false;
			 btnStopMusic->Visible = true;
			 player->Stop();
			 MessageBox::Show(" Som desativado !");
}
private: System::Void NomeDaAplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void TelaMenu_Load(System::Object^  sender, System::EventArgs^  e) {
	player->PlayLooping();
	btnStopMusic->Visible = false;
}
public: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};


}

#endif
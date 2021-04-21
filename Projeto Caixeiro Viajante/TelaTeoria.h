#pragma once
#include"TeleTeoria2.h"
using namespace std;
#include <string>


namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaTeoria
	/// </summary>
	public ref class TelaTeoria : public System::Windows::Forms::Form
	{
	public:
		TelaTeoria(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~TelaTeoria()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Voltar;
	protected:


	private: System::Windows::Forms::Button^  btn_Avancar;

	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte do Designer - não modifique
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaTeoria::typeid));
			this->btn_Voltar = (gcnew System::Windows::Forms::Button());
			this->btn_Avancar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_Voltar
			// 
			this->btn_Voltar->BackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->BorderSize = 0;
			this->btn_Voltar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Voltar->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Voltar->ForeColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn_Voltar->Location = System::Drawing::Point(23, 524);
			this->btn_Voltar->Name = L"btn_Voltar";
			this->btn_Voltar->Size = System::Drawing::Size(164, 60);
			this->btn_Voltar->TabIndex = 2;
			this->btn_Voltar->UseVisualStyleBackColor = false;
			this->btn_Voltar->Click += gcnew System::EventHandler(this, &TelaTeoria::btn_Voltar_Click);
			// 
			// btn_Avancar
			// 
			this->btn_Avancar->BackColor = System::Drawing::Color::Transparent;
			this->btn_Avancar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Avancar->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btn_Avancar->FlatAppearance->BorderSize = 0;
			this->btn_Avancar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Avancar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Avancar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Avancar->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Avancar->ForeColor = System::Drawing::Color::Black;
			this->btn_Avancar->Location = System::Drawing::Point(843, 524);
			this->btn_Avancar->Name = L"btn_Avancar";
			this->btn_Avancar->Size = System::Drawing::Size(164, 60);
			this->btn_Avancar->TabIndex = 15;
			this->btn_Avancar->UseVisualStyleBackColor = false;
			this->btn_Avancar->Click += gcnew System::EventHandler(this, &TelaTeoria::btn_Avancar_Click);
			// 
			// TelaTeoria
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1034, 591);
			this->Controls->Add(this->btn_Avancar);
			this->Controls->Add(this->btn_Voltar);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaTeoria";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaTeoria";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &TelaTeoria::TelaTeoria_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TelaTeoria_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btn_Voltar_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Visible = false;
		Close();
	}
	private: System::Void btn_Avancar_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Visible = false;
		Close();
		TeleTeoria2 telateoria2;
		telateoria2.ShowDialog();
		this->Visible = true;
		
	}
};
}

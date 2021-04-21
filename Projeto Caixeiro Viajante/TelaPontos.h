#pragma once
#include<iostream>
#include<string>
using namespace std;

namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaPontos
	/// </summary>
	public ref class TelaPontos : public System::Windows::Forms::Form
	{
	private:
		int Pontos;
	public:
		TelaPontos(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TelaPontos(int Pontucao)
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
		~TelaPontos()
		{
			if (components)
			{
				delete components;
			}
			Pontos = 0;
		}

	protected:

	private: System::Windows::Forms::Button^  btn_Voltar;





	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaPontos::typeid));
			this->btn_Voltar = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_Voltar
			// 
			this->btn_Voltar->BackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->btn_Voltar->FlatAppearance->BorderSize = 2;
			this->btn_Voltar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Voltar->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Voltar->ForeColor = System::Drawing::Color::Gold;
			this->btn_Voltar->Location = System::Drawing::Point(3, 528);
			this->btn_Voltar->Name = L"btn_Voltar";
			this->btn_Voltar->Size = System::Drawing::Size(120, 30);
			this->btn_Voltar->TabIndex = 1;
			this->btn_Voltar->Text = L"Voltar";
			this->btn_Voltar->UseVisualStyleBackColor = false;
			this->btn_Voltar->Click += gcnew System::EventHandler(this, &TelaPontos::btn_Voltar_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(443, 184);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 46);
			this->button4->TabIndex = 20;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TelaPontos::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::Transparent;
			this->button5->Location = System::Drawing::Point(889, 251);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(124, 185);
			this->button5->TabIndex = 49;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &TelaPontos::button5_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(912, 132);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(97, 135);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 48;
			this->pictureBox5->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(34, 229);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 185);
			this->button1->TabIndex = 51;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(57, 110);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(97, 135);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 50;
			this->pictureBox2->TabStop = false;
			// 
			// TelaPontos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1034, 561);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btn_Voltar);
			this->ForeColor = System::Drawing::Color::Gold;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaPontos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaPontos";
			this->Load += gcnew System::EventHandler(this, &TelaPontos::TelaPontos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TelaPontos_Load(System::Object^  sender, System::EventArgs^  e) {
		//arquivo.escreverArquivo(Convert::ToString(Pontos));
		button4->Text = Convert::ToString(getPontos());
	}
	private: System::Void btn_Resultado_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		
	}
	private: System::Void btn_Voltar_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
		this->Visible = false;
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

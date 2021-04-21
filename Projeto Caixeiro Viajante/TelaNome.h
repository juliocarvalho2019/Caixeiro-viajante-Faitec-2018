#pragma once
#include"TelaPontos.h"



namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaNome
	/// </summary>
	public ref class TelaNome : public System::Windows::Forms::Form
	{
	private: int Pontos;
	public:
		TelaNome(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TelaNome(int Pontuacao)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			setPontos(Pontuacao);
		}
		void setPontos(int);
		int getPontos(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaNome()
		{
			if (components)
			{
				delete components;
			}
			Pontos = 0;
		}
	private: System::Windows::Forms::Button^  btn_Jogar;
	protected:
	private: System::Windows::Forms::Button^  btn_Voltar;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaNome::typeid));
			this->btn_Jogar = (gcnew System::Windows::Forms::Button());
			this->btn_Voltar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_Jogar
			// 
			this->btn_Jogar->BackColor = System::Drawing::Color::Transparent;
			this->btn_Jogar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Jogar->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->btn_Jogar->FlatAppearance->BorderSize = 2;
			this->btn_Jogar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Jogar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Jogar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Jogar->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Jogar->ForeColor = System::Drawing::Color::Gold;
			this->btn_Jogar->Location = System::Drawing::Point(913, 529);
			this->btn_Jogar->Name = L"btn_Jogar";
			this->btn_Jogar->Size = System::Drawing::Size(120, 30);
			this->btn_Jogar->TabIndex = 18;
			this->btn_Jogar->Text = L"Ok";
			this->btn_Jogar->UseVisualStyleBackColor = false;
			this->btn_Jogar->Click += gcnew System::EventHandler(this, &TelaNome::btn_Jogar_Click);
			// 
			// btn_Voltar
			// 
			this->btn_Voltar->BackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Voltar->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->btn_Voltar->FlatAppearance->BorderSize = 2;
			this->btn_Voltar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Voltar->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Voltar->ForeColor = System::Drawing::Color::Gold;
			this->btn_Voltar->Location = System::Drawing::Point(2, 529);
			this->btn_Voltar->Name = L"btn_Voltar";
			this->btn_Voltar->Size = System::Drawing::Size(120, 30);
			this->btn_Voltar->TabIndex = 17;
			this->btn_Voltar->Text = L"Voltar";
			this->btn_Voltar->UseVisualStyleBackColor = false;
			this->btn_Voltar->Click += gcnew System::EventHandler(this, &TelaNome::btn_Voltar_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->ForeColor = System::Drawing::Color::Maroon;
			this->textBox1->Location = System::Drawing::Point(376, 229);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(541, 20);
			this->textBox1->TabIndex = 15;
			this->textBox1->Text = L"Insira seu nome aqui";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &TelaNome::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(478, 396);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(127, 118);
			this->pictureBox1->TabIndex = 102;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(376, 427);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(108, 87);
			this->pictureBox3->TabIndex = 101;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(611, 381);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(127, 168);
			this->pictureBox2->TabIndex = 103;
			this->pictureBox2->TabStop = false;
			// 
			// TelaNome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1034, 561);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->btn_Jogar);
			this->Controls->Add(this->btn_Voltar);
			this->Controls->Add(this->textBox1);
			this->Name = L"TelaNome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaNome";
			this->Load += gcnew System::EventHandler(this, &TelaNome::TelaNome_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TelaNome_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btn_Voltar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Visible = false;
	Close();
}
private: System::Void btn_Jogar_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (textBox1->Text != "Insira seu nome aqui" && textBox1->Text != ""&& textBox1->Text != " "){

		String ^Nome = textBox1->Text;
		/*MessageBox::Show("Seja bem vindo(a) !",textBox1->Text);*/
		if (Pontos < 0)
			Pontos = 0;
		this->Visible = false;
		Close();
		TelaPontos tp(getPontos());
		tp.ShowDialog();
		this->Visible = true;
		
	}

	else
	{
		MessageBox::Show("Digite seu nome no campo indicado !");
	}

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

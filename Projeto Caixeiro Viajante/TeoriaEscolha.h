#pragma once
#include"TelaTeoria.h"
using namespace std;
#include <string>
#include"TeoriaPCV.h"

namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeoriaEscolha
	/// </summary>
	public ref class TeoriaEscolha : public System::Windows::Forms::Form
	{
	public:
		TeoriaEscolha(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeoriaEscolha()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_PCV;
	private: System::Windows::Forms::Button^  btn_Grafos;
	private: System::Windows::Forms::Button^  btn_sair;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;




	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TeoriaEscolha::typeid));
			this->btn_PCV = (gcnew System::Windows::Forms::Button());
			this->btn_Grafos = (gcnew System::Windows::Forms::Button());
			this->btn_sair = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_PCV
			// 
			this->btn_PCV->BackColor = System::Drawing::Color::Transparent;
			this->btn_PCV->FlatAppearance->BorderColor = System::Drawing::Color::RoyalBlue;
			this->btn_PCV->FlatAppearance->BorderSize = 3;
			this->btn_PCV->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_PCV->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_PCV->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_PCV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_PCV->ForeColor = System::Drawing::Color::RoyalBlue;
			this->btn_PCV->Location = System::Drawing::Point(324, 369);
			this->btn_PCV->Name = L"btn_PCV";
			this->btn_PCV->Size = System::Drawing::Size(127, 53);
			this->btn_PCV->TabIndex = 0;
			this->btn_PCV->Text = L"TEORIA CAIXEIRO VIAJANTE";
			this->btn_PCV->UseVisualStyleBackColor = false;
			this->btn_PCV->Click += gcnew System::EventHandler(this, &TeoriaEscolha::btn_PCV_Click);
			// 
			// btn_Grafos
			// 
			this->btn_Grafos->BackColor = System::Drawing::Color::Transparent;
			this->btn_Grafos->FlatAppearance->BorderColor = System::Drawing::Color::RoyalBlue;
			this->btn_Grafos->FlatAppearance->BorderSize = 3;
			this->btn_Grafos->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Grafos->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Grafos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Grafos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Grafos->ForeColor = System::Drawing::Color::RoyalBlue;
			this->btn_Grafos->Location = System::Drawing::Point(585, 369);
			this->btn_Grafos->Name = L"btn_Grafos";
			this->btn_Grafos->Size = System::Drawing::Size(127, 53);
			this->btn_Grafos->TabIndex = 1;
			this->btn_Grafos->Text = L"TEORIA GRAFOS";
			this->btn_Grafos->UseVisualStyleBackColor = false;
			this->btn_Grafos->Click += gcnew System::EventHandler(this, &TeoriaEscolha::btn_Grafos_Click);
			// 
			// btn_sair
			// 
			this->btn_sair->BackColor = System::Drawing::Color::Transparent;
			this->btn_sair->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_sair->FlatAppearance->BorderSize = 0;
			this->btn_sair->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_sair->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_sair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sair->Location = System::Drawing::Point(52, 540);
			this->btn_sair->Name = L"btn_sair";
			this->btn_sair->Size = System::Drawing::Size(102, 28);
			this->btn_sair->TabIndex = 2;
			this->btn_sair->UseVisualStyleBackColor = false;
			this->btn_sair->Click += gcnew System::EventHandler(this, &TeoriaEscolha::btn_sair_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(376, 128);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(306, 235);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
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
			this->button5->Location = System::Drawing::Point(742, 237);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(124, 185);
			this->button5->TabIndex = 49;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(765, 118);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(97, 135);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 48;
			this->pictureBox2->TabStop = false;
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
			this->button1->Location = System::Drawing::Point(183, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 185);
			this->button1->TabIndex = 51;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(206, 118);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(97, 135);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 50;
			this->pictureBox3->TabStop = false;
			// 
			// TeoriaEscolha
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1034, 591);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_sair);
			this->Controls->Add(this->btn_Grafos);
			this->Controls->Add(this->btn_PCV);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TeoriaEscolha";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TeoriaEscolha";
			this->Load += gcnew System::EventHandler(this, &TeoriaEscolha::TeoriaEscolha_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TeoriaEscolha_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btn_PCV_Click(System::Object^  sender, System::EventArgs^  e) {
		TeoriaPCV tpcv0;
		this->Visible = false;
		tpcv0.ShowDialog();
		this->Visible = true;
	}
	private: System::Void btn_Grafos_Click(System::Object^  sender, System::EventArgs^  e) {
		TelaTeoria telateoria;
		this->Visible = false;
		telateoria.ShowDialog();
		this->Visible = true;
	}
	private: System::Void btn_sair_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}

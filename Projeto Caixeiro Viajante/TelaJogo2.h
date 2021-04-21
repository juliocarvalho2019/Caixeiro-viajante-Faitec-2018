#pragma once
#include"TelaJogo.h"
#include"TelaJogo4.h"

namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for TelaJogo2
	/// </summary>
	public ref class TelaJogo2 : public System::Windows::Forms::Form
	{

	public:

	public:
		TelaJogo2(void);
		TelaJogo2(int);
	protected:
		~TelaJogo2();

	private:
		int ContadorTempo = 0;
		array<int> ^VetorVisitas1;
		int CasaAtual1, Contador1, CasaAnterior;
		int Distancia1 = 0;
		int MenorCaminho1 = 50;
		int Pontos;
		bool Casa_1,
			Caminhos1_3, Caminhos1_4,
			Caminhos2_4, Caminhos2_5,
			Caminhos3_1, Caminhos3_5,
			Caminhos4_1, Caminhos4_2,
			Caminhos5_2, Caminhos5_3;
	private: System::Windows::Forms::Button^  btnCasa1;
	private: System::Windows::Forms::Button^  btnCasa2;
	private: System::Windows::Forms::Button^  btnCasa3;
	private: System::Windows::Forms::Button^  btnCasa4;
	private: System::Windows::Forms::Button^  btnCasa5;


	private: System::Windows::Forms::Button^  Caminho1e2;
	private: System::Windows::Forms::Button^  Caminho1e3;
	private: System::Windows::Forms::Button^  Caminho1e4;
	private: System::Windows::Forms::Button^  Caminho1e5;


	private: System::Windows::Forms::Button^  Caminho2e1;
	private: System::Windows::Forms::Button^  Caminho2e3;
	private: System::Windows::Forms::Button^  Caminho2e4;
	private: System::Windows::Forms::Button^  Caminho2e5;

	
	private: System::Windows::Forms::Button^  Caminho3e1;
	private: System::Windows::Forms::Button^  Caminho3e2;
	private: System::Windows::Forms::Button^  Caminho3e4;
	private: System::Windows::Forms::Button^  Caminho3e5;
	
	
	
	private: System::Windows::Forms::Button^  Caminho4e1;
	private: System::Windows::Forms::Button^  Caminho4e2;
	private: System::Windows::Forms::Button^  Caminho4e3;
	private: System::Windows::Forms::Button^  Caminho4e5;


	private: System::Windows::Forms::Button^  Caminho5e1;
	private: System::Windows::Forms::Button^  Caminho5e2;
	private: System::Windows::Forms::Button^  Caminho5e3;
	private: System::Windows::Forms::Button^  Caminho5e4;



	private: System::Windows::Forms::Button^  btn_Recomecar;
	private: System::Windows::Forms::Button^  btn_ProximaFase;

	private: System::Windows::Forms::Button^  btn_Caminho_1_Inicio;

	private: System::Windows::Forms::Button^  btn_Seta_Caminho_1;
	private: System::Windows::Forms::Button^  btn_Caminho_2;
	private: System::Windows::Forms::Button^  btn_Seta_Caminho_2;
	private: System::Windows::Forms::Button^  btn_Caminho_3;
	private: System::Windows::Forms::Button^  btn_Seta_Caminho_3;
	private: System::Windows::Forms::Button^  btn_Caminho_4;
	private: System::Windows::Forms::Button^  btn_Seta_Caminho_4;
	private: System::Windows::Forms::Button^  btn_Caminho_5;
	private: System::Windows::Forms::Button^  btn_Caminho_1_Fim;
	private: System::Windows::Forms::Button^  btn_Seta_Caminho_5;
	private: System::Windows::Forms::Button^  btn_Caminho_2_1;
	private: System::Windows::Forms::Button^  btn_Caminho_2_2;
	private: System::Windows::Forms::Button^  btn_Caminho_2_3;
	private: System::Windows::Forms::Button^  btn_Caminho_3_1;
	private: System::Windows::Forms::Button^  btn_Caminho_3_2;
	private: System::Windows::Forms::Button^  btn_Caminho_3_3;
	private: System::Windows::Forms::Button^  btn_Caminho_4_1;
	private: System::Windows::Forms::Button^  btn_Caminho_4_2;

	private: System::Windows::Forms::Button^  btn_Caminho_5_1;
	private: System::Windows::Forms::Button^  btn_Caminho_5_2;
	private: System::Windows::Forms::Button^  btn_Caminho_5_3;
	private: System::Windows::Forms::Label^  labelTemporizador;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  btn_Caminho_4_3;





	private: System::ComponentModel::IContainer^  components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaJogo2::typeid));
			this->btnCasa1 = (gcnew System::Windows::Forms::Button());
			this->btnCasa2 = (gcnew System::Windows::Forms::Button());
			this->btnCasa3 = (gcnew System::Windows::Forms::Button());
			this->btnCasa4 = (gcnew System::Windows::Forms::Button());
			this->btnCasa5 = (gcnew System::Windows::Forms::Button());
			this->Caminho1e2 = (gcnew System::Windows::Forms::Button());
			this->Caminho1e3 = (gcnew System::Windows::Forms::Button());
			this->Caminho1e4 = (gcnew System::Windows::Forms::Button());
			this->Caminho1e5 = (gcnew System::Windows::Forms::Button());
			this->Caminho2e1 = (gcnew System::Windows::Forms::Button());
			this->Caminho2e3 = (gcnew System::Windows::Forms::Button());
			this->Caminho2e4 = (gcnew System::Windows::Forms::Button());
			this->Caminho2e5 = (gcnew System::Windows::Forms::Button());
			this->Caminho3e1 = (gcnew System::Windows::Forms::Button());
			this->Caminho3e2 = (gcnew System::Windows::Forms::Button());
			this->Caminho3e4 = (gcnew System::Windows::Forms::Button());
			this->Caminho3e5 = (gcnew System::Windows::Forms::Button());
			this->Caminho4e1 = (gcnew System::Windows::Forms::Button());
			this->Caminho4e2 = (gcnew System::Windows::Forms::Button());
			this->Caminho4e3 = (gcnew System::Windows::Forms::Button());
			this->Caminho4e5 = (gcnew System::Windows::Forms::Button());
			this->Caminho5e1 = (gcnew System::Windows::Forms::Button());
			this->Caminho5e2 = (gcnew System::Windows::Forms::Button());
			this->Caminho5e3 = (gcnew System::Windows::Forms::Button());
			this->Caminho5e4 = (gcnew System::Windows::Forms::Button());
			this->btn_Recomecar = (gcnew System::Windows::Forms::Button());
			this->btn_ProximaFase = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_1_Inicio = (gcnew System::Windows::Forms::Button());
			this->btn_Seta_Caminho_1 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_2 = (gcnew System::Windows::Forms::Button());
			this->btn_Seta_Caminho_2 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_3 = (gcnew System::Windows::Forms::Button());
			this->btn_Seta_Caminho_3 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_4 = (gcnew System::Windows::Forms::Button());
			this->btn_Seta_Caminho_4 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_5 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_1_Fim = (gcnew System::Windows::Forms::Button());
			this->btn_Seta_Caminho_5 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_2_1 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_2_2 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_2_3 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_3_1 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_3_2 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_3_3 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_4_1 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_4_2 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_5_1 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_5_2 = (gcnew System::Windows::Forms::Button());
			this->btn_Caminho_5_3 = (gcnew System::Windows::Forms::Button());
			this->labelTemporizador = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btn_Caminho_4_3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnCasa1
			// 
			this->btnCasa1->BackColor = System::Drawing::Color::Transparent;
			this->btnCasa1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCasa1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCasa1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnCasa1->FlatAppearance->BorderSize = 0;
			this->btnCasa1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnCasa1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnCasa1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnCasa1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCasa1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCasa1->Location = System::Drawing::Point(913, 419);
			this->btnCasa1->Name = L"btnCasa1";
			this->btnCasa1->Size = System::Drawing::Size(91, 54);
			this->btnCasa1->TabIndex = 47;
			this->btnCasa1->UseVisualStyleBackColor = false;
			this->btnCasa1->Click += gcnew System::EventHandler(this, &TelaJogo2::btnCasa1_Click);
			// 
			// btnCasa2
			// 
			this->btnCasa2->BackColor = System::Drawing::Color::Transparent;
			this->btnCasa2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCasa2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCasa2->FlatAppearance->BorderSize = 0;
			this->btnCasa2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnCasa2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnCasa2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnCasa2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCasa2->Location = System::Drawing::Point(208, 282);
			this->btnCasa2->Name = L"btnCasa2";
			this->btnCasa2->Size = System::Drawing::Size(78, 34);
			this->btnCasa2->TabIndex = 54;
			this->btnCasa2->UseVisualStyleBackColor = false;
			this->btnCasa2->Click += gcnew System::EventHandler(this, &TelaJogo2::btnCasa2_Click);
			// 
			// btnCasa3
			// 
			this->btnCasa3->BackColor = System::Drawing::Color::Transparent;
			this->btnCasa3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCasa3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCasa3->FlatAppearance->BorderSize = 0;
			this->btnCasa3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnCasa3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnCasa3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnCasa3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCasa3->Location = System::Drawing::Point(913, 68);
			this->btnCasa3->Name = L"btnCasa3";
			this->btnCasa3->Size = System::Drawing::Size(82, 75);
			this->btnCasa3->TabIndex = 49;
			this->btnCasa3->UseVisualStyleBackColor = false;
			this->btnCasa3->Click += gcnew System::EventHandler(this, &TelaJogo2::btnCasa3_Click);
			// 
			// btnCasa4
			// 
			this->btnCasa4->BackColor = System::Drawing::Color::Transparent;
			this->btnCasa4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCasa4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCasa4->FlatAppearance->BorderSize = 0;
			this->btnCasa4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnCasa4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnCasa4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnCasa4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCasa4->Location = System::Drawing::Point(371, 26);
			this->btnCasa4->Name = L"btnCasa4";
			this->btnCasa4->Size = System::Drawing::Size(90, 72);
			this->btnCasa4->TabIndex = 48;
			this->btnCasa4->UseVisualStyleBackColor = false;
			this->btnCasa4->Click += gcnew System::EventHandler(this, &TelaJogo2::btnCasa4_Click);
			// 
			// btnCasa5
			// 
			this->btnCasa5->BackColor = System::Drawing::Color::Transparent;
			this->btnCasa5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnCasa5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCasa5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnCasa5->FlatAppearance->BorderSize = 0;
			this->btnCasa5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btnCasa5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnCasa5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnCasa5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCasa5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCasa5->Location = System::Drawing::Point(12, 133);
			this->btnCasa5->Name = L"btnCasa5";
			this->btnCasa5->Size = System::Drawing::Size(81, 60);
			this->btnCasa5->TabIndex = 67;
			this->btnCasa5->UseVisualStyleBackColor = false;
			this->btnCasa5->Click += gcnew System::EventHandler(this, &TelaJogo2::btnCasa5_Click);
			// 
			// Caminho1e2
			// 
			this->Caminho1e2->BackColor = System::Drawing::Color::Transparent;
			this->Caminho1e2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho1e2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho1e2->FlatAppearance->BorderSize = 0;
			this->Caminho1e2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho1e2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho1e2.Image")));
			this->Caminho1e2->Location = System::Drawing::Point(208, 257);
			this->Caminho1e2->Name = L"Caminho1e2";
			this->Caminho1e2->Size = System::Drawing::Size(73, 85);
			this->Caminho1e2->TabIndex = 57;
			this->Caminho1e2->UseVisualStyleBackColor = false;
			this->Caminho1e2->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho1e2_Click);
			// 
			// Caminho1e3
			// 
			this->Caminho1e3->BackColor = System::Drawing::Color::Transparent;
			this->Caminho1e3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho1e3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho1e3->FlatAppearance->BorderSize = 0;
			this->Caminho1e3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho1e3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho1e3.Image")));
			this->Caminho1e3->Location = System::Drawing::Point(913, 60);
			this->Caminho1e3->Name = L"Caminho1e3";
			this->Caminho1e3->Size = System::Drawing::Size(74, 91);
			this->Caminho1e3->TabIndex = 65;
			this->Caminho1e3->UseVisualStyleBackColor = false;
			// 
			// Caminho1e4
			// 
			this->Caminho1e4->BackColor = System::Drawing::Color::Transparent;
			this->Caminho1e4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho1e4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho1e4->FlatAppearance->BorderSize = 0;
			this->Caminho1e4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho1e4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho1e4.Image")));
			this->Caminho1e4->Location = System::Drawing::Point(387, 26);
			this->Caminho1e4->Name = L"Caminho1e4";
			this->Caminho1e4->Size = System::Drawing::Size(74, 72);
			this->Caminho1e4->TabIndex = 66;
			this->Caminho1e4->Text = L" ";
			this->Caminho1e4->UseVisualStyleBackColor = false;
			// 
			// Caminho1e5
			// 
			this->Caminho1e5->BackColor = System::Drawing::Color::Transparent;
			this->Caminho1e5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho1e5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho1e5->FlatAppearance->BorderSize = 0;
			this->Caminho1e5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho1e5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho1e5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho1e5.Image")));
			this->Caminho1e5->Location = System::Drawing::Point(12, 133);
			this->Caminho1e5->Name = L"Caminho1e5";
			this->Caminho1e5->Size = System::Drawing::Size(69, 73);
			this->Caminho1e5->TabIndex = 68;
			this->Caminho1e5->Text = L" ";
			this->Caminho1e5->UseVisualStyleBackColor = false;
			this->Caminho1e5->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho1e5_Click);
			// 
			// Caminho2e1
			// 
			this->Caminho2e1->BackColor = System::Drawing::Color::Transparent;
			this->Caminho2e1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho2e1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho2e1->FlatAppearance->BorderSize = 0;
			this->Caminho2e1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho2e1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho2e1.Image")));
			this->Caminho2e1->Location = System::Drawing::Point(917, 405);
			this->Caminho2e1->Name = L"Caminho2e1";
			this->Caminho2e1->Size = System::Drawing::Size(78, 78);
			this->Caminho2e1->TabIndex = 52;
			this->Caminho2e1->UseVisualStyleBackColor = false;
			this->Caminho2e1->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho2e1_Click);
			// 
			// Caminho2e3
			// 
			this->Caminho2e3->BackColor = System::Drawing::Color::Transparent;
			this->Caminho2e3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho2e3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho2e3->FlatAppearance->BorderSize = 0;
			this->Caminho2e3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho2e3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho2e3.Image")));
			this->Caminho2e3->Location = System::Drawing::Point(913, 60);
			this->Caminho2e3->Name = L"Caminho2e3";
			this->Caminho2e3->Size = System::Drawing::Size(74, 91);
			this->Caminho2e3->TabIndex = 53;
			this->Caminho2e3->UseVisualStyleBackColor = false;
			this->Caminho2e3->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho2e3_Click_1);
			// 
			// Caminho2e4
			// 
			this->Caminho2e4->BackColor = System::Drawing::Color::Transparent;
			this->Caminho2e4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho2e4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho2e4->FlatAppearance->BorderSize = 0;
			this->Caminho2e4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho2e4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho2e4.Image")));
			this->Caminho2e4->Location = System::Drawing::Point(387, 26);
			this->Caminho2e4->Name = L"Caminho2e4";
			this->Caminho2e4->Size = System::Drawing::Size(74, 72);
			this->Caminho2e4->TabIndex = 55;
			this->Caminho2e4->UseVisualStyleBackColor = false;
			this->Caminho2e4->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho2e4_Click);
			// 
			// Caminho2e5
			// 
			this->Caminho2e5->BackColor = System::Drawing::Color::Transparent;
			this->Caminho2e5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho2e5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho2e5->FlatAppearance->BorderSize = 0;
			this->Caminho2e5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho2e5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho2e5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho2e5.Image")));
			this->Caminho2e5->Location = System::Drawing::Point(12, 133);
			this->Caminho2e5->Name = L"Caminho2e5";
			this->Caminho2e5->Size = System::Drawing::Size(69, 73);
			this->Caminho2e5->TabIndex = 69;
			this->Caminho2e5->Text = L" ";
			this->Caminho2e5->UseVisualStyleBackColor = false;
			this->Caminho2e5->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho2e5_Click);
			// 
			// Caminho3e1
			// 
			this->Caminho3e1->BackColor = System::Drawing::Color::Transparent;
			this->Caminho3e1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho3e1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho3e1->FlatAppearance->BorderSize = 0;
			this->Caminho3e1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho3e1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho3e1.Image")));
			this->Caminho3e1->Location = System::Drawing::Point(917, 409);
			this->Caminho3e1->Name = L"Caminho3e1";
			this->Caminho3e1->Size = System::Drawing::Size(78, 74);
			this->Caminho3e1->TabIndex = 61;
			this->Caminho3e1->UseVisualStyleBackColor = false;
			this->Caminho3e1->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho3e1_Click);
			// 
			// Caminho3e2
			// 
			this->Caminho3e2->BackColor = System::Drawing::Color::Transparent;
			this->Caminho3e2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho3e2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho3e2->FlatAppearance->BorderSize = 0;
			this->Caminho3e2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho3e2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho3e2.Image")));
			this->Caminho3e2->Location = System::Drawing::Point(208, 257);
			this->Caminho3e2->Name = L"Caminho3e2";
			this->Caminho3e2->Size = System::Drawing::Size(73, 85);
			this->Caminho3e2->TabIndex = 58;
			this->Caminho3e2->UseVisualStyleBackColor = false;
			this->Caminho3e2->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho3e2_Click);
			// 
			// Caminho3e4
			// 
			this->Caminho3e4->BackColor = System::Drawing::Color::Transparent;
			this->Caminho3e4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho3e4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho3e4->FlatAppearance->BorderSize = 0;
			this->Caminho3e4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho3e4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho3e4.Image")));
			this->Caminho3e4->Location = System::Drawing::Point(387, 26);
			this->Caminho3e4->Name = L"Caminho3e4";
			this->Caminho3e4->Size = System::Drawing::Size(74, 72);
			this->Caminho3e4->TabIndex = 59;
			this->Caminho3e4->UseVisualStyleBackColor = false;
			this->Caminho3e4->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho3e4_Click);
			// 
			// Caminho3e5
			// 
			this->Caminho3e5->BackColor = System::Drawing::Color::Transparent;
			this->Caminho3e5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho3e5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho3e5->FlatAppearance->BorderSize = 0;
			this->Caminho3e5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho3e5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho3e5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho3e5.Image")));
			this->Caminho3e5->Location = System::Drawing::Point(12, 133);
			this->Caminho3e5->Name = L"Caminho3e5";
			this->Caminho3e5->Size = System::Drawing::Size(69, 73);
			this->Caminho3e5->TabIndex = 70;
			this->Caminho3e5->Text = L" ";
			this->Caminho3e5->UseVisualStyleBackColor = false;
			this->Caminho3e5->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho3e5_Click);
			// 
			// Caminho4e1
			// 
			this->Caminho4e1->BackColor = System::Drawing::Color::Transparent;
			this->Caminho4e1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho4e1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho4e1->FlatAppearance->BorderSize = 0;
			this->Caminho4e1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho4e1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho4e1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho4e1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho4e1.Image")));
			this->Caminho4e1->Location = System::Drawing::Point(917, 407);
			this->Caminho4e1->Name = L"Caminho4e1";
			this->Caminho4e1->Size = System::Drawing::Size(78, 78);
			this->Caminho4e1->TabIndex = 50;
			this->Caminho4e1->UseVisualStyleBackColor = false;
			this->Caminho4e1->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho4e1_Click);
			// 
			// Caminho4e2
			// 
			this->Caminho4e2->BackColor = System::Drawing::Color::Transparent;
			this->Caminho4e2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho4e2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho4e2->FlatAppearance->BorderSize = 0;
			this->Caminho4e2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho4e2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho4e2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho4e2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho4e2.Image")));
			this->Caminho4e2->Location = System::Drawing::Point(208, 257);
			this->Caminho4e2->Name = L"Caminho4e2";
			this->Caminho4e2->Size = System::Drawing::Size(73, 85);
			this->Caminho4e2->TabIndex = 60;
			this->Caminho4e2->UseVisualStyleBackColor = false;
			this->Caminho4e2->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho4e2_Click);
			// 
			// Caminho4e3
			// 
			this->Caminho4e3->BackColor = System::Drawing::Color::Transparent;
			this->Caminho4e3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho4e3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho4e3->FlatAppearance->BorderSize = 0;
			this->Caminho4e3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho4e3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho4e3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho4e3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho4e3.Image")));
			this->Caminho4e3->Location = System::Drawing::Point(913, 60);
			this->Caminho4e3->Name = L"Caminho4e3";
			this->Caminho4e3->Size = System::Drawing::Size(74, 91);
			this->Caminho4e3->TabIndex = 51;
			this->Caminho4e3->UseVisualStyleBackColor = false;
			this->Caminho4e3->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho4e3_Click);
			// 
			// Caminho4e5
			// 
			this->Caminho4e5->BackColor = System::Drawing::Color::Transparent;
			this->Caminho4e5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho4e5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho4e5->FlatAppearance->BorderSize = 0;
			this->Caminho4e5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->Caminho4e5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho4e5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho4e5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho4e5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho4e5.Image")));
			this->Caminho4e5->Location = System::Drawing::Point(12, 133);
			this->Caminho4e5->Name = L"Caminho4e5";
			this->Caminho4e5->Size = System::Drawing::Size(69, 73);
			this->Caminho4e5->TabIndex = 71;
			this->Caminho4e5->Text = L" ";
			this->Caminho4e5->UseVisualStyleBackColor = false;
			this->Caminho4e5->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho4e5_Click);
			// 
			// Caminho5e1
			// 
			this->Caminho5e1->AutoSize = true;
			this->Caminho5e1->BackColor = System::Drawing::Color::Transparent;
			this->Caminho5e1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho5e1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho5e1->FlatAppearance->BorderSize = 0;
			this->Caminho5e1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho5e1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho5e1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho5e1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho5e1.Image")));
			this->Caminho5e1->Location = System::Drawing::Point(917, 407);
			this->Caminho5e1->Name = L"Caminho5e1";
			this->Caminho5e1->Size = System::Drawing::Size(78, 78);
			this->Caminho5e1->TabIndex = 76;
			this->Caminho5e1->UseVisualStyleBackColor = false;
			// 
			// Caminho5e2
			// 
			this->Caminho5e2->BackColor = System::Drawing::Color::Transparent;
			this->Caminho5e2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho5e2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho5e2->FlatAppearance->BorderSize = 0;
			this->Caminho5e2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho5e2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho5e2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho5e2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho5e2.Image")));
			this->Caminho5e2->Location = System::Drawing::Point(208, 257);
			this->Caminho5e2->Name = L"Caminho5e2";
			this->Caminho5e2->Size = System::Drawing::Size(73, 85);
			this->Caminho5e2->TabIndex = 75;
			this->Caminho5e2->Text = L" ";
			this->Caminho5e2->UseVisualStyleBackColor = false;
			this->Caminho5e2->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho5e2_Click);
			// 
			// Caminho5e3
			// 
			this->Caminho5e3->BackColor = System::Drawing::Color::Transparent;
			this->Caminho5e3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho5e3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho5e3->FlatAppearance->BorderSize = 0;
			this->Caminho5e3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho5e3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho5e3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho5e3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho5e3.Image")));
			this->Caminho5e3->Location = System::Drawing::Point(913, 60);
			this->Caminho5e3->Name = L"Caminho5e3";
			this->Caminho5e3->Size = System::Drawing::Size(74, 91);
			this->Caminho5e3->TabIndex = 73;
			this->Caminho5e3->Text = L" ";
			this->Caminho5e3->UseVisualStyleBackColor = false;
			this->Caminho5e3->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho5e3_Click);
			// 
			// Caminho5e4
			// 
			this->Caminho5e4->BackColor = System::Drawing::Color::Transparent;
			this->Caminho5e4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Caminho5e4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Caminho5e4->FlatAppearance->BorderSize = 0;
			this->Caminho5e4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->Caminho5e4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Caminho5e4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Caminho5e4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Caminho5e4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho5e4.Image")));
			this->Caminho5e4->Location = System::Drawing::Point(387, 26);
			this->Caminho5e4->Name = L"Caminho5e4";
			this->Caminho5e4->Size = System::Drawing::Size(74, 72);
			this->Caminho5e4->TabIndex = 72;
			this->Caminho5e4->Text = L" ";
			this->Caminho5e4->UseVisualStyleBackColor = false;
			this->Caminho5e4->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho5e4_Click);
			// 
			// btn_Recomecar
			// 
			this->btn_Recomecar->BackColor = System::Drawing::Color::Transparent;
			this->btn_Recomecar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Recomecar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Recomecar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_Recomecar->FlatAppearance->BorderSize = 2;
			this->btn_Recomecar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Recomecar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Recomecar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Recomecar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Recomecar->Location = System::Drawing::Point(913, 529);
			this->btn_Recomecar->Name = L"btn_Recomecar";
			this->btn_Recomecar->Size = System::Drawing::Size(120, 30);
			this->btn_Recomecar->TabIndex = 63;
			this->btn_Recomecar->Text = L"Recome�ar";
			this->btn_Recomecar->UseVisualStyleBackColor = false;
			this->btn_Recomecar->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Recomecar_Click);
			// 
			// btn_ProximaFase
			// 
			this->btn_ProximaFase->BackColor = System::Drawing::Color::Transparent;
			this->btn_ProximaFase->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_ProximaFase->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ProximaFase->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_ProximaFase->FlatAppearance->BorderSize = 2;
			this->btn_ProximaFase->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_ProximaFase->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_ProximaFase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ProximaFase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ProximaFase->Location = System::Drawing::Point(913, 529);
			this->btn_ProximaFase->Name = L"btn_ProximaFase";
			this->btn_ProximaFase->Size = System::Drawing::Size(120, 30);
			this->btn_ProximaFase->TabIndex = 64;
			this->btn_ProximaFase->Text = L"Pr�xima Fase";
			this->btn_ProximaFase->UseVisualStyleBackColor = false;
			this->btn_ProximaFase->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_ProximaFase_Click);
			// 
			// btn_Caminho_1_Inicio
			// 
			this->btn_Caminho_1_Inicio->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_1_Inicio->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_1_Inicio.BackgroundImage")));
			this->btn_Caminho_1_Inicio->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_1_Inicio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_1_Inicio->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_1_Inicio->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_1_Inicio->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_1_Inicio->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_1_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_1_Inicio->Location = System::Drawing::Point(300, 529);
			this->btn_Caminho_1_Inicio->Name = L"btn_Caminho_1_Inicio";
			this->btn_Caminho_1_Inicio->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_1_Inicio->TabIndex = 78;
			this->btn_Caminho_1_Inicio->Text = L" ";
			this->btn_Caminho_1_Inicio->UseVisualStyleBackColor = false;
			this->btn_Caminho_1_Inicio->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_1_Click);
			// 
			// btn_Seta_Caminho_1
			// 
			this->btn_Seta_Caminho_1->BackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Seta_Caminho_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Seta_Caminho_1->FlatAppearance->BorderSize = 0;
			this->btn_Seta_Caminho_1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Seta_Caminho_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Seta_Caminho_1.Image")));
			this->btn_Seta_Caminho_1->Location = System::Drawing::Point(335, 529);
			this->btn_Seta_Caminho_1->Name = L"btn_Seta_Caminho_1";
			this->btn_Seta_Caminho_1->Size = System::Drawing::Size(30, 30);
			this->btn_Seta_Caminho_1->TabIndex = 79;
			this->btn_Seta_Caminho_1->Text = L" ";
			this->btn_Seta_Caminho_1->UseVisualStyleBackColor = false;
			// 
			// btn_Caminho_2
			// 
			this->btn_Caminho_2->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_2.BackgroundImage")));
			this->btn_Caminho_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_2->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_2->Location = System::Drawing::Point(371, 529);
			this->btn_Caminho_2->Name = L"btn_Caminho_2";
			this->btn_Caminho_2->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_2->TabIndex = 80;
			this->btn_Caminho_2->Text = L" ";
			this->btn_Caminho_2->UseVisualStyleBackColor = false;
			this->btn_Caminho_2->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_2_Click);
			// 
			// btn_Seta_Caminho_2
			// 
			this->btn_Seta_Caminho_2->BackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Seta_Caminho_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Seta_Caminho_2->FlatAppearance->BorderSize = 0;
			this->btn_Seta_Caminho_2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Seta_Caminho_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Seta_Caminho_2.Image")));
			this->btn_Seta_Caminho_2->Location = System::Drawing::Point(407, 529);
			this->btn_Seta_Caminho_2->Name = L"btn_Seta_Caminho_2";
			this->btn_Seta_Caminho_2->Size = System::Drawing::Size(30, 30);
			this->btn_Seta_Caminho_2->TabIndex = 81;
			this->btn_Seta_Caminho_2->Text = L" ";
			this->btn_Seta_Caminho_2->UseVisualStyleBackColor = false;
			this->btn_Seta_Caminho_2->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Seta_Caminho_2_Click);
			// 
			// btn_Caminho_3
			// 
			this->btn_Caminho_3->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_3.BackgroundImage")));
			this->btn_Caminho_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_3->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_3->Location = System::Drawing::Point(371, 529);
			this->btn_Caminho_3->Name = L"btn_Caminho_3";
			this->btn_Caminho_3->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_3->TabIndex = 82;
			this->btn_Caminho_3->Text = L" ";
			this->btn_Caminho_3->UseVisualStyleBackColor = false;
			this->btn_Caminho_3->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_3_Click);
			// 
			// btn_Seta_Caminho_3
			// 
			this->btn_Seta_Caminho_3->BackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Seta_Caminho_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Seta_Caminho_3->FlatAppearance->BorderSize = 0;
			this->btn_Seta_Caminho_3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Seta_Caminho_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Seta_Caminho_3.Image")));
			this->btn_Seta_Caminho_3->Location = System::Drawing::Point(479, 529);
			this->btn_Seta_Caminho_3->Name = L"btn_Seta_Caminho_3";
			this->btn_Seta_Caminho_3->Size = System::Drawing::Size(30, 30);
			this->btn_Seta_Caminho_3->TabIndex = 83;
			this->btn_Seta_Caminho_3->Text = L" ";
			this->btn_Seta_Caminho_3->UseVisualStyleBackColor = false;
			this->btn_Seta_Caminho_3->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Seta_Caminho_3_Click);
			// 
			// btn_Caminho_4
			// 
			this->btn_Caminho_4->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_4.BackgroundImage")));
			this->btn_Caminho_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_4->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_4->Location = System::Drawing::Point(371, 529);
			this->btn_Caminho_4->Name = L"btn_Caminho_4";
			this->btn_Caminho_4->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_4->TabIndex = 84;
			this->btn_Caminho_4->Text = L" ";
			this->btn_Caminho_4->UseVisualStyleBackColor = false;
			this->btn_Caminho_4->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_4_Click);
			// 
			// btn_Seta_Caminho_4
			// 
			this->btn_Seta_Caminho_4->BackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Seta_Caminho_4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Seta_Caminho_4->FlatAppearance->BorderSize = 0;
			this->btn_Seta_Caminho_4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Seta_Caminho_4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Seta_Caminho_4.Image")));
			this->btn_Seta_Caminho_4->Location = System::Drawing::Point(551, 529);
			this->btn_Seta_Caminho_4->Name = L"btn_Seta_Caminho_4";
			this->btn_Seta_Caminho_4->Size = System::Drawing::Size(30, 30);
			this->btn_Seta_Caminho_4->TabIndex = 85;
			this->btn_Seta_Caminho_4->Text = L" ";
			this->btn_Seta_Caminho_4->UseVisualStyleBackColor = false;
			this->btn_Seta_Caminho_4->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Seta_Caminho_4_Click);
			// 
			// btn_Caminho_5
			// 
			this->btn_Caminho_5->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_5.BackgroundImage")));
			this->btn_Caminho_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_5->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_5->Location = System::Drawing::Point(371, 529);
			this->btn_Caminho_5->Name = L"btn_Caminho_5";
			this->btn_Caminho_5->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_5->TabIndex = 86;
			this->btn_Caminho_5->Text = L" ";
			this->btn_Caminho_5->UseVisualStyleBackColor = false;
			this->btn_Caminho_5->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_5_Click);
			// 
			// btn_Caminho_1_Fim
			// 
			this->btn_Caminho_1_Fim->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_1_Fim->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_1_Fim.BackgroundImage")));
			this->btn_Caminho_1_Fim->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_1_Fim->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_1_Fim->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_1_Fim->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_1_Fim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_1_Fim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_1_Fim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_1_Fim->Location = System::Drawing::Point(659, 529);
			this->btn_Caminho_1_Fim->Name = L"btn_Caminho_1_Fim";
			this->btn_Caminho_1_Fim->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_1_Fim->TabIndex = 87;
			this->btn_Caminho_1_Fim->Text = L" ";
			this->btn_Caminho_1_Fim->UseVisualStyleBackColor = false;
			this->btn_Caminho_1_Fim->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_1_Fim_Click);
			// 
			// btn_Seta_Caminho_5
			// 
			this->btn_Seta_Caminho_5->BackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Seta_Caminho_5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Seta_Caminho_5->FlatAppearance->BorderSize = 0;
			this->btn_Seta_Caminho_5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Seta_Caminho_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Seta_Caminho_5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Seta_Caminho_5.Image")));
			this->btn_Seta_Caminho_5->Location = System::Drawing::Point(623, 529);
			this->btn_Seta_Caminho_5->Name = L"btn_Seta_Caminho_5";
			this->btn_Seta_Caminho_5->Size = System::Drawing::Size(30, 30);
			this->btn_Seta_Caminho_5->TabIndex = 88;
			this->btn_Seta_Caminho_5->Text = L" ";
			this->btn_Seta_Caminho_5->UseVisualStyleBackColor = false;
			this->btn_Seta_Caminho_5->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Seta_Caminho_5_Click);
			// 
			// btn_Caminho_2_1
			// 
			this->btn_Caminho_2_1->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_2_1.BackgroundImage")));
			this->btn_Caminho_2_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_2_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_2_1->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_2_1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_2_1->Location = System::Drawing::Point(443, 529);
			this->btn_Caminho_2_1->Name = L"btn_Caminho_2_1";
			this->btn_Caminho_2_1->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_2_1->TabIndex = 89;
			this->btn_Caminho_2_1->Text = L" ";
			this->btn_Caminho_2_1->UseVisualStyleBackColor = false;
			this->btn_Caminho_2_1->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_2_1_Click);
			// 
			// btn_Caminho_2_2
			// 
			this->btn_Caminho_2_2->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_2_2.BackgroundImage")));
			this->btn_Caminho_2_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_2_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_2_2->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_2_2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_2_2->Location = System::Drawing::Point(515, 529);
			this->btn_Caminho_2_2->Name = L"btn_Caminho_2_2";
			this->btn_Caminho_2_2->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_2_2->TabIndex = 90;
			this->btn_Caminho_2_2->Text = L" ";
			this->btn_Caminho_2_2->UseVisualStyleBackColor = false;
			this->btn_Caminho_2_2->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_2_2_Click);
			// 
			// btn_Caminho_2_3
			// 
			this->btn_Caminho_2_3->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_2_3.BackgroundImage")));
			this->btn_Caminho_2_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_2_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_2_3->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_2_3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_2_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_2_3->Location = System::Drawing::Point(587, 529);
			this->btn_Caminho_2_3->Name = L"btn_Caminho_2_3";
			this->btn_Caminho_2_3->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_2_3->TabIndex = 91;
			this->btn_Caminho_2_3->Text = L" ";
			this->btn_Caminho_2_3->UseVisualStyleBackColor = false;
			this->btn_Caminho_2_3->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_2_3_Click);
			// 
			// btn_Caminho_3_1
			// 
			this->btn_Caminho_3_1->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_3_1.BackgroundImage")));
			this->btn_Caminho_3_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_3_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_3_1->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_3_1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_3_1->Location = System::Drawing::Point(443, 529);
			this->btn_Caminho_3_1->Name = L"btn_Caminho_3_1";
			this->btn_Caminho_3_1->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_3_1->TabIndex = 92;
			this->btn_Caminho_3_1->Text = L" ";
			this->btn_Caminho_3_1->UseVisualStyleBackColor = false;
			this->btn_Caminho_3_1->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_3_1_Click);
			// 
			// btn_Caminho_3_2
			// 
			this->btn_Caminho_3_2->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_3_2.BackgroundImage")));
			this->btn_Caminho_3_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_3_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_3_2->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_3_2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_3_2->Location = System::Drawing::Point(515, 529);
			this->btn_Caminho_3_2->Name = L"btn_Caminho_3_2";
			this->btn_Caminho_3_2->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_3_2->TabIndex = 93;
			this->btn_Caminho_3_2->Text = L" ";
			this->btn_Caminho_3_2->UseVisualStyleBackColor = false;
			this->btn_Caminho_3_2->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_3_2_Click);
			// 
			// btn_Caminho_3_3
			// 
			this->btn_Caminho_3_3->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_3_3.BackgroundImage")));
			this->btn_Caminho_3_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_3_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_3_3->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_3_3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_3_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_3_3->Location = System::Drawing::Point(587, 529);
			this->btn_Caminho_3_3->Name = L"btn_Caminho_3_3";
			this->btn_Caminho_3_3->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_3_3->TabIndex = 94;
			this->btn_Caminho_3_3->Text = L" ";
			this->btn_Caminho_3_3->UseVisualStyleBackColor = false;
			this->btn_Caminho_3_3->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_3_3_Click);
			// 
			// btn_Caminho_4_1
			// 
			this->btn_Caminho_4_1->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_4_1.BackgroundImage")));
			this->btn_Caminho_4_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_4_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_4_1->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_4_1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_4_1->Location = System::Drawing::Point(443, 529);
			this->btn_Caminho_4_1->Name = L"btn_Caminho_4_1";
			this->btn_Caminho_4_1->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_4_1->TabIndex = 95;
			this->btn_Caminho_4_1->Text = L" ";
			this->btn_Caminho_4_1->UseVisualStyleBackColor = false;
			this->btn_Caminho_4_1->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_4_1_Click);
			// 
			// btn_Caminho_4_2
			// 
			this->btn_Caminho_4_2->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_4_2.BackgroundImage")));
			this->btn_Caminho_4_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_4_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_4_2->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_4_2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_4_2->Location = System::Drawing::Point(515, 529);
			this->btn_Caminho_4_2->Name = L"btn_Caminho_4_2";
			this->btn_Caminho_4_2->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_4_2->TabIndex = 96;
			this->btn_Caminho_4_2->Text = L" ";
			this->btn_Caminho_4_2->UseVisualStyleBackColor = false;
			this->btn_Caminho_4_2->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_4_2_Click);
			// 
			// btn_Caminho_5_1
			// 
			this->btn_Caminho_5_1->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_5_1.BackgroundImage")));
			this->btn_Caminho_5_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_5_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_5_1->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_5_1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_5_1->Location = System::Drawing::Point(443, 529);
			this->btn_Caminho_5_1->Name = L"btn_Caminho_5_1";
			this->btn_Caminho_5_1->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_5_1->TabIndex = 98;
			this->btn_Caminho_5_1->Text = L" ";
			this->btn_Caminho_5_1->UseVisualStyleBackColor = false;
			this->btn_Caminho_5_1->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_5_1_Click);
			// 
			// btn_Caminho_5_2
			// 
			this->btn_Caminho_5_2->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_5_2.BackgroundImage")));
			this->btn_Caminho_5_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_5_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_5_2->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_5_2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_5_2->Location = System::Drawing::Point(515, 529);
			this->btn_Caminho_5_2->Name = L"btn_Caminho_5_2";
			this->btn_Caminho_5_2->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_5_2->TabIndex = 99;
			this->btn_Caminho_5_2->Text = L" ";
			this->btn_Caminho_5_2->UseVisualStyleBackColor = false;
			this->btn_Caminho_5_2->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_5_2_Click);
			// 
			// btn_Caminho_5_3
			// 
			this->btn_Caminho_5_3->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_5_3.BackgroundImage")));
			this->btn_Caminho_5_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_5_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_5_3->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_5_3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_5_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_5_3->Location = System::Drawing::Point(587, 529);
			this->btn_Caminho_5_3->Name = L"btn_Caminho_5_3";
			this->btn_Caminho_5_3->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_5_3->TabIndex = 100;
			this->btn_Caminho_5_3->Text = L" ";
			this->btn_Caminho_5_3->UseVisualStyleBackColor = false;
			this->btn_Caminho_5_3->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_5_3_Click);
			// 
			// labelTemporizador
			// 
			this->labelTemporizador->BackColor = System::Drawing::Color::Transparent;
			this->labelTemporizador->Location = System::Drawing::Point(933, 9);
			this->labelTemporizador->Name = L"labelTemporizador";
			this->labelTemporizador->Size = System::Drawing::Size(100, 18);
			this->labelTemporizador->TabIndex = 101;
			this->labelTemporizador->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelTemporizador->Click += gcnew System::EventHandler(this, &TelaJogo2::labelTemporizador_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &TelaJogo2::timer1_Tick);
			// 
			// btn_Caminho_4_3
			// 
			this->btn_Caminho_4_3->BackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Caminho_4_3.BackgroundImage")));
			this->btn_Caminho_4_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_Caminho_4_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Caminho_4_3->FlatAppearance->BorderSize = 0;
			this->btn_Caminho_4_3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Caminho_4_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Caminho_4_3->Location = System::Drawing::Point(587, 529);
			this->btn_Caminho_4_3->Name = L"btn_Caminho_4_3";
			this->btn_Caminho_4_3->Size = System::Drawing::Size(30, 30);
			this->btn_Caminho_4_3->TabIndex = 97;
			this->btn_Caminho_4_3->Text = L" ";
			this->btn_Caminho_4_3->UseVisualStyleBackColor = false;
			this->btn_Caminho_4_3->Click += gcnew System::EventHandler(this, &TelaJogo2::btn_Caminho_4_3_Click);
			// 
			// TelaJogo2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1034, 561);
			this->Controls->Add(this->labelTemporizador);
			this->Controls->Add(this->btn_Caminho_5_3);
			this->Controls->Add(this->btn_Caminho_5_2);
			this->Controls->Add(this->btn_Caminho_5_1);
			this->Controls->Add(this->btn_Caminho_4_3);
			this->Controls->Add(this->btn_Caminho_4_2);
			this->Controls->Add(this->btn_Caminho_4_1);
			this->Controls->Add(this->btn_Caminho_3_3);
			this->Controls->Add(this->btn_Caminho_3_2);
			this->Controls->Add(this->btn_Caminho_3_1);
			this->Controls->Add(this->btn_Caminho_2_3);
			this->Controls->Add(this->btn_Caminho_2_2);
			this->Controls->Add(this->btn_Caminho_2_1);
			this->Controls->Add(this->btn_Seta_Caminho_5);
			this->Controls->Add(this->btn_Caminho_1_Fim);
			this->Controls->Add(this->btn_Caminho_5);
			this->Controls->Add(this->btn_Seta_Caminho_4);
			this->Controls->Add(this->btn_Caminho_4);
			this->Controls->Add(this->btn_Seta_Caminho_3);
			this->Controls->Add(this->btn_Caminho_3);
			this->Controls->Add(this->btn_Seta_Caminho_2);
			this->Controls->Add(this->btn_Caminho_2);
			this->Controls->Add(this->btn_Seta_Caminho_1);
			this->Controls->Add(this->btn_Caminho_1_Inicio);
			this->Controls->Add(this->Caminho5e1);
			this->Controls->Add(this->Caminho5e2);
			this->Controls->Add(this->Caminho5e3);
			this->Controls->Add(this->Caminho5e4);
			this->Controls->Add(this->Caminho4e5);
			this->Controls->Add(this->Caminho3e5);
			this->Controls->Add(this->Caminho2e5);
			this->Controls->Add(this->Caminho1e5);
			this->Controls->Add(this->btnCasa5);
			this->Controls->Add(this->Caminho1e4);
			this->Controls->Add(this->Caminho1e3);
			this->Controls->Add(this->btn_ProximaFase);
			this->Controls->Add(this->btn_Recomecar);
			this->Controls->Add(this->Caminho3e1);
			this->Controls->Add(this->Caminho4e2);
			this->Controls->Add(this->Caminho3e4);
			this->Controls->Add(this->Caminho3e2);
			this->Controls->Add(this->Caminho1e2);
			this->Controls->Add(this->Caminho2e4);
			this->Controls->Add(this->btnCasa2);
			this->Controls->Add(this->Caminho2e3);
			this->Controls->Add(this->Caminho2e1);
			this->Controls->Add(this->Caminho4e3);
			this->Controls->Add(this->Caminho4e1);
			this->Controls->Add(this->btnCasa3);
			this->Controls->Add(this->btnCasa4);
			this->Controls->Add(this->btnCasa1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoubleBuffered = true;
			this->Location = System::Drawing::Point(604, 197);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaJogo2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fase 3";
			this->Load += gcnew System::EventHandler(this, &TelaJogo2::TelaJogo2_Load);
			this->Click += gcnew System::EventHandler(this, &TelaJogo2::Caminho1e4_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Tela Principal jogo
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void TelaJogo2_Load(System::Object^  sender, System::EventArgs^e);

private: System::Void labelTemporizador_Click(System::Object^  sender, System::EventArgs^  e);

//Bot�es casas
private: System::Void btnCasa1_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btnCasa4_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btnCasa3_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btnCasa2_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btnCasa5_Click(System::Object^  sender, System::EventArgs^e);

//Caminhos de casa 1
private: void TelaJogo2::Caminho1e2_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho1e3_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho1e4_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho1e5_Click(System::Object^  sender, System::EventArgs^  e);

//Caminhos de casa 2
private: void TelaJogo2::Caminho2e1_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho2e3_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho2e4_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho2e5_Click(System::Object^  sender, System::EventArgs^  e);

//Caminhos de casa 3
private: void TelaJogo2::Caminho3e1_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho3e2_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho3e4_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho3e5_Click(System::Object^  sender, System::EventArgs^  e);

//Caminhos de casa 4
private: void TelaJogo2::Caminho4e1_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho4e2_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho4e3_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho4e5_Click(System::Object^  sender, System::EventArgs^  e);

//Caminhos de casa 5
private: void TelaJogo2::Caminho5e1_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho5e2_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho5e3_Click(System::Object^  sender, System::EventArgs^  e);
private: void TelaJogo2::Caminho5e4_Click(System::Object^  sender, System::EventArgs^  e);


private: System::Void Caminho2e3_Click_1(System::Object^  sender, System::EventArgs^  e);
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e);



private: System::Void btn_Caminho_1_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btn_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void btn_Seta_Caminho_2_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btn_Caminho_3_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btn_Seta_Caminho_3_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btn_Caminho_4_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btn_Seta_Caminho_4_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btn_Caminho_5_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btn_Seta_Caminho_5_Click(System::Object^  sender, System::EventArgs^e);
private: System::Void btn_Caminho_1_Fim_Click(System::Object^  sender, System::EventArgs^e);


private: System::Void btn_Recomecar_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void btn_ProximaFase_Click(System::Object^  sender, System::EventArgs^  e);


//M�todos do Jogo
private: void PercorrerCaminho(int);
private: void mostrarCaminho(int,int);
private: void mostrarMenorCaminho(int);
public: void TelaJogo2::setPontos(int OsPontos);
public: int TelaJogo2::getPontos();



private: System::Void btn_Caminho_2_1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_2_2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_2_3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_3_1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_3_2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_3_3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_4_1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_5_1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_5_2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_5_3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_4_3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Caminho_4_2_Click(System::Object^  sender, System::EventArgs^  e) {
}


};
}

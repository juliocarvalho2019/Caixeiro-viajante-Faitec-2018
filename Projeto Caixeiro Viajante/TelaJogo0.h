#pragma once
#include<time.h> 
#include"TelaJogo.h"

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
	public ref class TelaJogo0 : public System::Windows::Forms::Form
	{

	public:
		
	public:
		TelaJogo0(void);
	protected:
		~TelaJogo0();

	private:
		int ContadorTempo = 0;//Contar o tempo que o usuario permanece na fase;
		array<int> ^VetorVisitas1;
		int CasaAtual, Contador, CasaAnterior, Pontos;
		int Distancia = 0;
		int MenorCaminho = 29;
		bool Casa_1,
			Caminhos1_3, Caminhos1_4,
			Caminhos2_4, Caminhos2_5,
			Caminhos3_1, Caminhos3_5,
			Caminhos4_1, Caminhos4_2,
			Caminhos5_2, Caminhos5_3;

	private: System::Windows::Forms::Button^  btnCasa1;
	private: System::Windows::Forms::Button^  btnCasa3;
	



	private: System::Windows::Forms::Button^  Caminho1e3;



	private: System::Windows::Forms::Button^  Caminho2e1;
	private: System::Windows::Forms::Button^  Caminho2e3;
	private: System::Windows::Forms::Button^  Caminho3e1;

	private: System::Windows::Forms::Label^  labelInicioJogo;
	private: System::Windows::Forms::Button^  btn_Recomecar;
	private: System::Windows::Forms::Button^  btn_ProximaFase;

	private: System::Windows::Forms::Button^  btn_Caminho_1_Inicio;

	private: System::Windows::Forms::Button^  btn_Seta_Caminho_1;
	private: System::Windows::Forms::Button^  btn_Caminho_2;
	private: System::Windows::Forms::Button^  btn_Seta_Caminho_2;
	private: System::Windows::Forms::Button^  btn_Caminho_3;
	private: System::Windows::Forms::Button^  btn_Seta_Caminho_3;

	private: System::Windows::Forms::Button^  btn_Caminho_1_Fim;

	private: System::Windows::Forms::Button^  btn_Caminho_2_1;


	private: System::Windows::Forms::Button^  btn_Caminho_3_1;


	private: System::Windows::Forms::Button^  Caminho1e2;
	private: System::Windows::Forms::Button^  btnCasa2;
	private: System::Windows::Forms::Button^  Caminho3e2;
	private: System::Windows::Forms::Label^  labelTemporizador;
	private: System::Windows::Forms::Timer^  timer1;














	private: System::ComponentModel::IContainer^  components;


#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaJogo0::typeid));
				 this->labelInicioJogo = (gcnew System::Windows::Forms::Label());
				 this->btnCasa1 = (gcnew System::Windows::Forms::Button());
				 this->btnCasa3 = (gcnew System::Windows::Forms::Button());
				 this->Caminho1e3 = (gcnew System::Windows::Forms::Button());
				 this->Caminho2e1 = (gcnew System::Windows::Forms::Button());
				 this->Caminho2e3 = (gcnew System::Windows::Forms::Button());
				 this->Caminho3e1 = (gcnew System::Windows::Forms::Button());
				 this->btn_Recomecar = (gcnew System::Windows::Forms::Button());
				 this->btn_ProximaFase = (gcnew System::Windows::Forms::Button());
				 this->btn_Caminho_1_Inicio = (gcnew System::Windows::Forms::Button());
				 this->btn_Seta_Caminho_1 = (gcnew System::Windows::Forms::Button());
				 this->btn_Caminho_2 = (gcnew System::Windows::Forms::Button());
				 this->btn_Seta_Caminho_2 = (gcnew System::Windows::Forms::Button());
				 this->btn_Caminho_3 = (gcnew System::Windows::Forms::Button());
				 this->btn_Seta_Caminho_3 = (gcnew System::Windows::Forms::Button());
				 this->btn_Caminho_1_Fim = (gcnew System::Windows::Forms::Button());
				 this->btn_Caminho_2_1 = (gcnew System::Windows::Forms::Button());
				 this->btn_Caminho_3_1 = (gcnew System::Windows::Forms::Button());
				 this->Caminho1e2 = (gcnew System::Windows::Forms::Button());
				 this->btnCasa2 = (gcnew System::Windows::Forms::Button());
				 this->Caminho3e2 = (gcnew System::Windows::Forms::Button());
				 this->labelTemporizador = (gcnew System::Windows::Forms::Label());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->SuspendLayout();
				 // 
				 // labelInicioJogo
				 // 
				 this->labelInicioJogo->AutoSize = true;
				 this->labelInicioJogo->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->labelInicioJogo->Location = System::Drawing::Point(500, 293);
				 this->labelInicioJogo->Name = L"labelInicioJogo";
				 this->labelInicioJogo->Size = System::Drawing::Size(0, 27);
				 this->labelInicioJogo->TabIndex = 43;
				 // 
				 // btnCasa1
				 // 
				 this->btnCasa1->BackColor = System::Drawing::Color::Transparent;
				 this->btnCasa1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->btnCasa1->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnCasa1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
				 this->btnCasa1->FlatAppearance->BorderSize = 0;
				 this->btnCasa1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				 this->btnCasa1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				 this->btnCasa1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnCasa1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnCasa1->Location = System::Drawing::Point(391, 9);
				 this->btnCasa1->Name = L"btnCasa1";
				 this->btnCasa1->Size = System::Drawing::Size(63, 77);
				 this->btnCasa1->TabIndex = 47;
				 this->btnCasa1->UseVisualStyleBackColor = false;
				 this->btnCasa1->Click += gcnew System::EventHandler(this, &TelaJogo0::btnCasa1_Click);
				 // 
				 // btnCasa3
				 // 
				 this->btnCasa3->BackColor = System::Drawing::Color::Transparent;
				 this->btnCasa3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->btnCasa3->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnCasa3->FlatAppearance->BorderSize = 0;
				 this->btnCasa3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				 this->btnCasa3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				 this->btnCasa3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnCasa3->Location = System::Drawing::Point(907, 426);
				 this->btnCasa3->Name = L"btnCasa3";
				 this->btnCasa3->Size = System::Drawing::Size(97, 68);
				 this->btnCasa3->TabIndex = 49;
				 this->btnCasa3->UseVisualStyleBackColor = false;
				 this->btnCasa3->Click += gcnew System::EventHandler(this, &TelaJogo0::btnCasa3_Click);
				 // 
				 // Caminho1e3
				 // 
				 this->Caminho1e3->BackColor = System::Drawing::Color::Transparent;
				 this->Caminho1e3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->Caminho1e3->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Caminho1e3->FlatAppearance->BorderSize = 0;
				 this->Caminho1e3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
				 this->Caminho1e3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				 this->Caminho1e3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				 this->Caminho1e3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Caminho1e3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho1e3.Image")));
				 this->Caminho1e3->Location = System::Drawing::Point(925, 416);
				 this->Caminho1e3->Name = L"Caminho1e3";
				 this->Caminho1e3->Size = System::Drawing::Size(79, 88);
				 this->Caminho1e3->TabIndex = 65;
				 this->Caminho1e3->UseVisualStyleBackColor = false;
				 // 
				 // Caminho2e1
				 // 
				 this->Caminho2e1->BackColor = System::Drawing::Color::Transparent;
				 this->Caminho2e1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->Caminho2e1->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Caminho2e1->FlatAppearance->BorderSize = 0;
				 this->Caminho2e1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Caminho2e1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho2e1.Image")));
				 this->Caminho2e1->Location = System::Drawing::Point(391, 22);
				 this->Caminho2e1->Name = L"Caminho2e1";
				 this->Caminho2e1->Size = System::Drawing::Size(77, 83);
				 this->Caminho2e1->TabIndex = 52;
				 this->Caminho2e1->UseVisualStyleBackColor = false;
				 this->Caminho2e1->Click += gcnew System::EventHandler(this, &TelaJogo0::Caminho2e1_Click);
				 // 
				 // Caminho2e3
				 // 
				 this->Caminho2e3->BackColor = System::Drawing::Color::Transparent;
				 this->Caminho2e3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->Caminho2e3->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Caminho2e3->FlatAppearance->BorderSize = 0;
				 this->Caminho2e3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
				 this->Caminho2e3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				 this->Caminho2e3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				 this->Caminho2e3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Caminho2e3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho2e3.Image")));
				 this->Caminho2e3->Location = System::Drawing::Point(925, 416);
				 this->Caminho2e3->Name = L"Caminho2e3";
				 this->Caminho2e3->Size = System::Drawing::Size(75, 88);
				 this->Caminho2e3->TabIndex = 53;
				 this->Caminho2e3->UseVisualStyleBackColor = false;
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
				 this->Caminho3e1->Location = System::Drawing::Point(391, 22);
				 this->Caminho3e1->Name = L"Caminho3e1";
				 this->Caminho3e1->Size = System::Drawing::Size(77, 83);
				 this->Caminho3e1->TabIndex = 61;
				 this->Caminho3e1->UseVisualStyleBackColor = false;
				 this->Caminho3e1->Click += gcnew System::EventHandler(this, &TelaJogo0::Caminho3e1_Click);
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
				 this->btn_Recomecar->Location = System::Drawing::Point(907, 531);
				 this->btn_Recomecar->Name = L"btn_Recomecar";
				 this->btn_Recomecar->Size = System::Drawing::Size(120, 30);
				 this->btn_Recomecar->TabIndex = 63;
				 this->btn_Recomecar->Text = L"Recomeçar";
				 this->btn_Recomecar->UseVisualStyleBackColor = false;
				 this->btn_Recomecar->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_Recomecar_Click);
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
				 this->btn_ProximaFase->Location = System::Drawing::Point(907, 531);
				 this->btn_ProximaFase->Name = L"btn_ProximaFase";
				 this->btn_ProximaFase->Size = System::Drawing::Size(120, 30);
				 this->btn_ProximaFase->TabIndex = 64;
				 this->btn_ProximaFase->Text = L"Próxima Fase";
				 this->btn_ProximaFase->UseVisualStyleBackColor = false;
				 this->btn_ProximaFase->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_ProximaFase_Click);
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
				 this->btn_Caminho_1_Inicio->Location = System::Drawing::Point(340, 531);
				 this->btn_Caminho_1_Inicio->Name = L"btn_Caminho_1_Inicio";
				 this->btn_Caminho_1_Inicio->Size = System::Drawing::Size(30, 30);
				 this->btn_Caminho_1_Inicio->TabIndex = 78;
				 this->btn_Caminho_1_Inicio->Text = L" ";
				 this->btn_Caminho_1_Inicio->UseVisualStyleBackColor = false;
				 this->btn_Caminho_1_Inicio->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_Caminho_1_Click);
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
				 this->btn_Seta_Caminho_1->Location = System::Drawing::Point(376, 531);
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
				 this->btn_Caminho_2->Location = System::Drawing::Point(412, 531);
				 this->btn_Caminho_2->Name = L"btn_Caminho_2";
				 this->btn_Caminho_2->Size = System::Drawing::Size(30, 30);
				 this->btn_Caminho_2->TabIndex = 80;
				 this->btn_Caminho_2->Text = L" ";
				 this->btn_Caminho_2->UseVisualStyleBackColor = false;
				 this->btn_Caminho_2->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_Caminho_2_Click);
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
				 this->btn_Seta_Caminho_2->Location = System::Drawing::Point(448, 531);
				 this->btn_Seta_Caminho_2->Name = L"btn_Seta_Caminho_2";
				 this->btn_Seta_Caminho_2->Size = System::Drawing::Size(30, 30);
				 this->btn_Seta_Caminho_2->TabIndex = 81;
				 this->btn_Seta_Caminho_2->Text = L" ";
				 this->btn_Seta_Caminho_2->UseVisualStyleBackColor = false;
				 this->btn_Seta_Caminho_2->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_Seta_Caminho_2_Click);
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
				 this->btn_Caminho_3->Location = System::Drawing::Point(412, 531);
				 this->btn_Caminho_3->Name = L"btn_Caminho_3";
				 this->btn_Caminho_3->Size = System::Drawing::Size(30, 30);
				 this->btn_Caminho_3->TabIndex = 82;
				 this->btn_Caminho_3->Text = L" ";
				 this->btn_Caminho_3->UseVisualStyleBackColor = false;
				 this->btn_Caminho_3->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_Caminho_3_Click);
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
				 this->btn_Seta_Caminho_3->Location = System::Drawing::Point(520, 531);
				 this->btn_Seta_Caminho_3->Name = L"btn_Seta_Caminho_3";
				 this->btn_Seta_Caminho_3->Size = System::Drawing::Size(30, 30);
				 this->btn_Seta_Caminho_3->TabIndex = 83;
				 this->btn_Seta_Caminho_3->Text = L" ";
				 this->btn_Seta_Caminho_3->UseVisualStyleBackColor = false;
				 this->btn_Seta_Caminho_3->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_Seta_Caminho_3_Click);
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
				 this->btn_Caminho_1_Fim->Location = System::Drawing::Point(556, 531);
				 this->btn_Caminho_1_Fim->Name = L"btn_Caminho_1_Fim";
				 this->btn_Caminho_1_Fim->Size = System::Drawing::Size(30, 30);
				 this->btn_Caminho_1_Fim->TabIndex = 87;
				 this->btn_Caminho_1_Fim->Text = L" ";
				 this->btn_Caminho_1_Fim->UseVisualStyleBackColor = false;
				 this->btn_Caminho_1_Fim->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_Caminho_1_Fim_Click);
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
				 this->btn_Caminho_2_1->Location = System::Drawing::Point(484, 531);
				 this->btn_Caminho_2_1->Name = L"btn_Caminho_2_1";
				 this->btn_Caminho_2_1->Size = System::Drawing::Size(30, 30);
				 this->btn_Caminho_2_1->TabIndex = 89;
				 this->btn_Caminho_2_1->Text = L" ";
				 this->btn_Caminho_2_1->UseVisualStyleBackColor = false;
				 this->btn_Caminho_2_1->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_Caminho_2_1_Click);
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
				 this->btn_Caminho_3_1->Location = System::Drawing::Point(484, 531);
				 this->btn_Caminho_3_1->Name = L"btn_Caminho_3_1";
				 this->btn_Caminho_3_1->Size = System::Drawing::Size(30, 30);
				 this->btn_Caminho_3_1->TabIndex = 92;
				 this->btn_Caminho_3_1->Text = L" ";
				 this->btn_Caminho_3_1->UseVisualStyleBackColor = false;
				 this->btn_Caminho_3_1->Click += gcnew System::EventHandler(this, &TelaJogo0::btn_Caminho_3_1_Click);
				 // 
				 // Caminho1e2
				 // 
				 this->Caminho1e2->BackColor = System::Drawing::Color::Transparent;
				 this->Caminho1e2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->Caminho1e2->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Caminho1e2->FlatAppearance->BorderSize = 0;
				 this->Caminho1e2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
				 this->Caminho1e2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				 this->Caminho1e2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				 this->Caminho1e2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Caminho1e2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho1e2.Image")));
				 this->Caminho1e2->Location = System::Drawing::Point(199, 254);
				 this->Caminho1e2->Name = L"Caminho1e2";
				 this->Caminho1e2->Size = System::Drawing::Size(77, 83);
				 this->Caminho1e2->TabIndex = 57;
				 this->Caminho1e2->UseVisualStyleBackColor = false;
				 this->Caminho1e2->Click += gcnew System::EventHandler(this, &TelaJogo0::Caminho1e2_Click);
				 // 
				 // btnCasa2
				 // 
				 this->btnCasa2->BackColor = System::Drawing::Color::Transparent;
				 this->btnCasa2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->btnCasa2->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnCasa2->FlatAppearance->BorderSize = 0;
				 this->btnCasa2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				 this->btnCasa2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				 this->btnCasa2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnCasa2->Location = System::Drawing::Point(212, 265);
				 this->btnCasa2->Name = L"btnCasa2";
				 this->btnCasa2->Size = System::Drawing::Size(64, 61);
				 this->btnCasa2->TabIndex = 54;
				 this->btnCasa2->UseVisualStyleBackColor = false;
				 this->btnCasa2->Click += gcnew System::EventHandler(this, &TelaJogo0::btnCasa2_Click);
				 // 
				 // Caminho3e2
				 // 
				 this->Caminho3e2->BackColor = System::Drawing::Color::Transparent;
				 this->Caminho3e2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->Caminho3e2->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->Caminho3e2->FlatAppearance->BorderSize = 0;
				 this->Caminho3e2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
				 this->Caminho3e2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
				 this->Caminho3e2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
				 this->Caminho3e2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->Caminho3e2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Caminho3e2.Image")));
				 this->Caminho3e2->Location = System::Drawing::Point(199, 254);
				 this->Caminho3e2->Name = L"Caminho3e2";
				 this->Caminho3e2->Size = System::Drawing::Size(77, 83);
				 this->Caminho3e2->TabIndex = 95;
				 this->Caminho3e2->UseVisualStyleBackColor = false;
				 this->Caminho3e2->Click += gcnew System::EventHandler(this, &TelaJogo0::Caminho3e2_Click_1);
				 // 
				 // labelTemporizador
				 // 
				 this->labelTemporizador->BackColor = System::Drawing::Color::Transparent;
				 this->labelTemporizador->Location = System::Drawing::Point(904, 9);
				 this->labelTemporizador->Name = L"labelTemporizador";
				 this->labelTemporizador->Size = System::Drawing::Size(100, 18);
				 this->labelTemporizador->TabIndex = 96;
				 this->labelTemporizador->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 this->labelTemporizador->Click += gcnew System::EventHandler(this, &TelaJogo0::labelTemporizador_Click);
				 // 
				 // timer1
				 // 
				 this->timer1->Enabled = true;
				 this->timer1->Tick += gcnew System::EventHandler(this, &TelaJogo0::timer1_Tick);
				 // 
				 // TelaJogo0
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->AutoSize = true;
				 this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->ClientSize = System::Drawing::Size(1034, 561);
				 this->Controls->Add(this->labelTemporizador);
				 this->Controls->Add(this->Caminho3e2);
				 this->Controls->Add(this->btn_Caminho_3_1);
				 this->Controls->Add(this->btn_Caminho_2_1);
				 this->Controls->Add(this->btn_Caminho_1_Fim);
				 this->Controls->Add(this->btn_Seta_Caminho_3);
				 this->Controls->Add(this->btn_Caminho_3);
				 this->Controls->Add(this->btn_Seta_Caminho_2);
				 this->Controls->Add(this->btn_Caminho_2);
				 this->Controls->Add(this->btn_Seta_Caminho_1);
				 this->Controls->Add(this->btn_Caminho_1_Inicio);
				 this->Controls->Add(this->Caminho1e3);
				 this->Controls->Add(this->btn_ProximaFase);
				 this->Controls->Add(this->btn_Recomecar);
				 this->Controls->Add(this->Caminho3e1);
				 this->Controls->Add(this->Caminho1e2);
				 this->Controls->Add(this->btnCasa2);
				 this->Controls->Add(this->Caminho2e3);
				 this->Controls->Add(this->Caminho2e1);
				 this->Controls->Add(this->btnCasa3);
				 this->Controls->Add(this->btnCasa1);
				 this->Controls->Add(this->labelInicioJogo);
				 this->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->DoubleBuffered = true;
				 this->Location = System::Drawing::Point(604, 197);
				 this->MaximizeBox = false;
				 this->MinimizeBox = false;
				 this->Name = L"TelaJogo0";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Fase 1";
				 this->Load += gcnew System::EventHandler(this, &TelaJogo0::TelaJogo0_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
			 //Tela Principal jogo
	
	private: System::Void TelaJogo0_Load(System::Object^  sender, System::EventArgs^e);

			 //Botões casas
	private: System::Void btnCasa1_Click(System::Object^  sender, System::EventArgs^e);
	private: System::Void btnCasa4_Click(System::Object^  sender, System::EventArgs^e);
	private: System::Void btnCasa3_Click(System::Object^  sender, System::EventArgs^e);
	private: System::Void btnCasa2_Click(System::Object^  sender, System::EventArgs^e);
	private: System::Void btnCasa5_Click(System::Object^  sender, System::EventArgs^e);

			 //Caminhos de casa 1
	private: void TelaJogo0::Caminho1e2_Click(System::Object^  sender, System::EventArgs^  e);
	private: void TelaJogo0::Caminho1e3_Click(System::Object^  sender, System::EventArgs^  e);


			 //Caminhos de casa 2
	private: void TelaJogo0::Caminho2e1_Click(System::Object^  sender, System::EventArgs^  e);
	private: void TelaJogo0::Caminho2e3_Click(System::Object^  sender, System::EventArgs^  e);


			 //Caminhos de casa 3
	private: void TelaJogo0::Caminho3e1_Click(System::Object^  sender, System::EventArgs^  e);
	private: void TelaJogo0::Caminho3e2_Click(System::Object^  sender, System::EventArgs^  e);
	
			
			 //private: System::Void Caminho2e3_Click_1(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e);



	private: System::Void btn_Caminho_1_Click(System::Object^  sender, System::EventArgs^e);
	private: System::Void btn_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_Seta_Caminho_2_Click(System::Object^  sender, System::EventArgs^e);
	private: System::Void btn_Caminho_3_Click(System::Object^  sender, System::EventArgs^e);
	private: System::Void btn_Seta_Caminho_3_Click(System::Object^  sender, System::EventArgs^e);
	private: System::Void btn_Caminho_1_Fim_Click(System::Object^  sender, System::EventArgs^e);

	private: System::Void btn_Caminho_2_1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_Caminho_2_2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_Caminho_2_3_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_Caminho_3_1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_Caminho_3_2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_Caminho_3_3_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void btn_Recomecar_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btn_ProximaFase_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Caminho3e2_Click_1(System::Object^  sender, System::EventArgs^  e);

	private: System::Void labelTemporizador_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);


			 //Métodos do Jogo
	private: void PercorrerCaminho(int);
	private: void mostrarCaminho(int, int);
	private: void mostrarMenorCaminho(int);
	public: void TelaJogo0::setPontos(int OsPontos);
	public: int TelaJogo0::getPontos();



};
}

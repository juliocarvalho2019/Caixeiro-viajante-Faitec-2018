#pragma once
#include"TelaJogo0.h"
namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaBemVindo
	/// </summary>
	public ref class TelaBemVindo : public System::Windows::Forms::Form
	{
	public:
		TelaBemVindo(void)
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
		~TelaBemVindo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Nao;
	protected:
	private: System::Windows::Forms::Button^  btn_Sim;

	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaBemVindo::typeid));
			this->btn_Nao = (gcnew System::Windows::Forms::Button());
			this->btn_Sim = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_Nao
			// 
			this->btn_Nao->BackColor = System::Drawing::Color::Black;
			this->btn_Nao->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Nao->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->btn_Nao->FlatAppearance->BorderSize = 2;
			this->btn_Nao->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->btn_Nao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_Nao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_Nao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Nao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Nao->ForeColor = System::Drawing::Color::Gold;
			this->btn_Nao->Location = System::Drawing::Point(610, 462);
			this->btn_Nao->Name = L"btn_Nao";
			this->btn_Nao->Size = System::Drawing::Size(120, 30);
			this->btn_Nao->TabIndex = 19;
			this->btn_Nao->Text = L"Não";
			this->btn_Nao->UseVisualStyleBackColor = false;
			this->btn_Nao->Click += gcnew System::EventHandler(this, &TelaBemVindo::btn_Nao_Click);
			// 
			// btn_Sim
			// 
			this->btn_Sim->BackColor = System::Drawing::Color::Black;
			this->btn_Sim->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Sim->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->btn_Sim->FlatAppearance->BorderSize = 2;
			this->btn_Sim->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->btn_Sim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_Sim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->btn_Sim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Sim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Sim->ForeColor = System::Drawing::Color::Gold;
			this->btn_Sim->Location = System::Drawing::Point(303, 462);
			this->btn_Sim->Name = L"btn_Sim";
			this->btn_Sim->Size = System::Drawing::Size(120, 30);
			this->btn_Sim->TabIndex = 18;
			this->btn_Sim->Text = L"Sim";
			this->btn_Sim->UseVisualStyleBackColor = false;
			this->btn_Sim->Click += gcnew System::EventHandler(this, &TelaBemVindo::btn_Sim_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(-1, -1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1037, 562);
			this->button1->TabIndex = 16;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TelaBemVindo::button1_Click);
			// 
			// TelaBemVindo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1034, 561);
			this->Controls->Add(this->btn_Nao);
			this->Controls->Add(this->btn_Sim);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaBemVindo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaBemVindo";
			this->Load += gcnew System::EventHandler(this, &TelaBemVindo::TelaBemVindo_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BotaoVoltarMenu_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Visible = false;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn_Sim_Click(System::Object^  sender, System::EventArgs^  e) 
{
	TelaJogo0 tj0;
	this->Visible = false;
	tj0.ShowDialog();
}
private: System::Void btn_Nao_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Visible = false;
}
private: System::Void TelaBemVindo_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

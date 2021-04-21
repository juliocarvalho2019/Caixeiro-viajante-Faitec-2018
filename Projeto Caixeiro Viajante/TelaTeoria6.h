#pragma once
#include"TelaTeoria7.h"
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
	/// Summary for TelaTeoria6
	/// </summary>
	public ref class TelaTeoria6 : public System::Windows::Forms::Form
	{
	public:
		TelaTeoria6(void)
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
		~TelaTeoria6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Avancar;
	protected:
	private: System::Windows::Forms::Button^  BotaoVoltarMenu;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaTeoria6::typeid));
			this->btn_Avancar = (gcnew System::Windows::Forms::Button());
			this->BotaoVoltarMenu = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->btn_Avancar->Location = System::Drawing::Point(854, 529);
			this->btn_Avancar->Name = L"btn_Avancar";
			this->btn_Avancar->Size = System::Drawing::Size(164, 60);
			this->btn_Avancar->TabIndex = 21;
			this->btn_Avancar->UseVisualStyleBackColor = false;
			this->btn_Avancar->Click += gcnew System::EventHandler(this, &TelaTeoria6::btn_Avancar_Click_1);
			// 
			// BotaoVoltarMenu
			// 
			this->BotaoVoltarMenu->BackColor = System::Drawing::Color::Transparent;
			this->BotaoVoltarMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoVoltarMenu->FlatAppearance->BorderSize = 0;
			this->BotaoVoltarMenu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoVoltarMenu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoVoltarMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoVoltarMenu->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotaoVoltarMenu->ForeColor = System::Drawing::Color::Transparent;
			this->BotaoVoltarMenu->Location = System::Drawing::Point(25, 518);
			this->BotaoVoltarMenu->Name = L"BotaoVoltarMenu";
			this->BotaoVoltarMenu->Size = System::Drawing::Size(164, 71);
			this->BotaoVoltarMenu->TabIndex = 20;
			this->BotaoVoltarMenu->UseVisualStyleBackColor = false;
			this->BotaoVoltarMenu->Click += gcnew System::EventHandler(this, &TelaTeoria6::BotaoVoltarMenu_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(416, 311);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(125, 125);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// TelaTeoria6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1034, 601);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_Avancar);
			this->Controls->Add(this->BotaoVoltarMenu);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaTeoria6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaTeoria6";
			this->Load += gcnew System::EventHandler(this, &TelaTeoria6::TelaTeoria6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TelaTeoria6_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void btn_Avancar_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
		this->Visible = false;
		Close();
		TelaTeoria7 telateoria7;
		telateoria7.ShowDialog();
		this->Visible = true;
	}
private: System::Void BotaoVoltarMenu_Click_1(System::Object^  sender, System::EventArgs^  e)
{
	this->Visible = false;
	Close();
}
};
}

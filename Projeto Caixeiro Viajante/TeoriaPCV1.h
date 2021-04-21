#pragma once
#include"TeoriaPCV2.h"
namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeoriaPCV1
	/// </summary>
	public ref class TeoriaPCV1 : public System::Windows::Forms::Form
	{
	public:
		TeoriaPCV1(void)
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
		~TeoriaPCV1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Voltar;
	protected:
	private: System::Windows::Forms::Button^  btn_Proximo;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TeoriaPCV1::typeid));
			this->btn_Voltar = (gcnew System::Windows::Forms::Button());
			this->btn_Proximo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_Voltar
			// 
			this->btn_Voltar->BackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->BorderSize = 0;
			this->btn_Voltar->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Voltar->Location = System::Drawing::Point(53, 540);
			this->btn_Voltar->Name = L"btn_Voltar";
			this->btn_Voltar->Size = System::Drawing::Size(106, 30);
			this->btn_Voltar->TabIndex = 0;
			this->btn_Voltar->UseVisualStyleBackColor = false;
			this->btn_Voltar->Click += gcnew System::EventHandler(this, &TeoriaPCV1::btn_Voltar_Click);
			// 
			// btn_Proximo
			// 
			this->btn_Proximo->BackColor = System::Drawing::Color::Transparent;
			this->btn_Proximo->FlatAppearance->BorderSize = 0;
			this->btn_Proximo->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Proximo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Proximo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Proximo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Proximo->Location = System::Drawing::Point(885, 540);
			this->btn_Proximo->Name = L"btn_Proximo";
			this->btn_Proximo->Size = System::Drawing::Size(129, 36);
			this->btn_Proximo->TabIndex = 1;
			this->btn_Proximo->UseVisualStyleBackColor = false;
			this->btn_Proximo->Click += gcnew System::EventHandler(this, &TeoriaPCV1::btn_Proximo_Click);
			// 
			// TeoriaPCV1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1035, 598);
			this->Controls->Add(this->btn_Proximo);
			this->Controls->Add(this->btn_Voltar);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TeoriaPCV1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TeoriaPCV1";
			this->Load += gcnew System::EventHandler(this, &TeoriaPCV1::TeoriaPCV1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_Proximo_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Close();
		TeoriaPCV2 tpcv2;
		tpcv2.ShowDialog();
		this->Visible = true;
	}
	private: System::Void btn_Voltar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Close();
	}
	private: System::Void TeoriaPCV1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

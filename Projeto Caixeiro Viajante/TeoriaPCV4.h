#pragma once
#include"TeoriaPCV5.h"
namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeoriaPCV4
	/// </summary>
	public ref class TeoriaPCV4 : public System::Windows::Forms::Form
	{
	public:
		TeoriaPCV4(void)
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
		~TeoriaPCV4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_proximo;
	protected:
	private: System::Windows::Forms::Button^  btn_voltar;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TeoriaPCV4::typeid));
			this->btn_proximo = (gcnew System::Windows::Forms::Button());
			this->btn_voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_proximo
			// 
			this->btn_proximo->BackColor = System::Drawing::Color::Transparent;
			this->btn_proximo->FlatAppearance->BorderSize = 0;
			this->btn_proximo->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_proximo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_proximo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_proximo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_proximo->Location = System::Drawing::Point(887, 541);
			this->btn_proximo->Name = L"btn_proximo";
			this->btn_proximo->Size = System::Drawing::Size(123, 34);
			this->btn_proximo->TabIndex = 0;
			this->btn_proximo->UseVisualStyleBackColor = false;
			this->btn_proximo->Click += gcnew System::EventHandler(this, &TeoriaPCV4::btn_proximo_Click);
			// 
			// btn_voltar
			// 
			this->btn_voltar->BackColor = System::Drawing::Color::Transparent;
			this->btn_voltar->FlatAppearance->BorderSize = 0;
			this->btn_voltar->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_voltar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_voltar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_voltar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_voltar->Location = System::Drawing::Point(52, 541);
			this->btn_voltar->Name = L"btn_voltar";
			this->btn_voltar->Size = System::Drawing::Size(111, 30);
			this->btn_voltar->TabIndex = 1;
			this->btn_voltar->UseVisualStyleBackColor = false;
			this->btn_voltar->Click += gcnew System::EventHandler(this, &TeoriaPCV4::btn_voltar_Click);
			// 
			// TeoriaPCV4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1038, 598);
			this->Controls->Add(this->btn_voltar);
			this->Controls->Add(this->btn_proximo);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TeoriaPCV4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TeoriaPCV4";
			this->Load += gcnew System::EventHandler(this, &TeoriaPCV4::TeoriaPCV4_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_voltar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Close();
	}
	private: System::Void btn_proximo_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Close();
		TeoriaPCV5 tpcv5;
		tpcv5.ShowDialog();
		this->Visible = true;
	}
	private: System::Void TeoriaPCV4_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}

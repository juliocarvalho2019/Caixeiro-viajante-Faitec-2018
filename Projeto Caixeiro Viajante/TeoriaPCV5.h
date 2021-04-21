#pragma once

namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeoriaPCV5
	/// </summary>
	public ref class TeoriaPCV5 : public System::Windows::Forms::Form
	{
	public:
		TeoriaPCV5(void)
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
		~TeoriaPCV5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_sair;
	private: System::Windows::Forms::Button^  btn_Voltar;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TeoriaPCV5::typeid));
			this->btn_sair = (gcnew System::Windows::Forms::Button());
			this->btn_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_sair
			// 
			this->btn_sair->BackColor = System::Drawing::Color::Transparent;
			this->btn_sair->FlatAppearance->BorderSize = 0;
			this->btn_sair->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_sair->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_sair->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_sair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sair->Location = System::Drawing::Point(-1, 588);
			this->btn_sair->Name = L"btn_sair";
			this->btn_sair->Size = System::Drawing::Size(10, 10);
			this->btn_sair->TabIndex = 0;
			this->btn_sair->UseVisualStyleBackColor = false;
			this->btn_sair->Click += gcnew System::EventHandler(this, &TeoriaPCV5::btn_sair_Click);
			// 
			// btn_Voltar
			// 
			this->btn_Voltar->BackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->BorderSize = 0;
			this->btn_Voltar->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Voltar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Voltar->Location = System::Drawing::Point(52, 547);
			this->btn_Voltar->Name = L"btn_Voltar";
			this->btn_Voltar->Size = System::Drawing::Size(99, 30);
			this->btn_Voltar->TabIndex = 1;
			this->btn_Voltar->UseVisualStyleBackColor = false;
			this->btn_Voltar->Click += gcnew System::EventHandler(this, &TeoriaPCV5::btn_Voltar_Click);
			// 
			// TeoriaPCV5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1038, 598);
			this->Controls->Add(this->btn_Voltar);
			this->Controls->Add(this->btn_sair);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TeoriaPCV5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TeoriaPCV5";
			this->Load += gcnew System::EventHandler(this, &TeoriaPCV5::TeoriaPCV5_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_sair_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Close();
	}
	private: System::Void btn_Voltar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Close();
	}
	private: System::Void TeoriaPCV5_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

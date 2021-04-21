#pragma once

namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaTeoria12
	/// </summary>
	public ref class TelaTeoria12 : public System::Windows::Forms::Form
	{
	public:
		TelaTeoria12(void)
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
		~TelaTeoria12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BotaoVoltarMenu;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaTeoria12::typeid));
			this->BotaoVoltarMenu = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->BotaoVoltarMenu->Location = System::Drawing::Point(24, 518);
			this->BotaoVoltarMenu->Name = L"BotaoVoltarMenu";
			this->BotaoVoltarMenu->Size = System::Drawing::Size(164, 71);
			this->BotaoVoltarMenu->TabIndex = 20;
			this->BotaoVoltarMenu->UseVisualStyleBackColor = false;
			this->BotaoVoltarMenu->Click += gcnew System::EventHandler(this, &TelaTeoria12::BotaoVoltarMenu_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(756, 188);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(125, 125);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// TelaTeoria12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1049, 601);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->BotaoVoltarMenu);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaTeoria12";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TelaTeoria12";
			this->Load += gcnew System::EventHandler(this, &TelaTeoria12::TelaTeoria12_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TelaTeoria12_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void BotaoVoltarMenu_Click_1(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Visible = false;
		Close();
	}
	};
}

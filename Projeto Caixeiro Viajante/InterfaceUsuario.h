#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH

#include <iostream>
#include <stdlib.h>
using namespace std;
#include <string>

namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for TelaInicial
	/// </summary>
	public ref class InterfaceUsuario : public System::Windows::Forms::Form
	{
	public:
		InterfaceUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			i = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InterfaceUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::ProgressBar^  progressBar1;




	private:
		int i;
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(InterfaceUsuario::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 110;
			this->timer1->Tick += gcnew System::EventHandler(this, &InterfaceUsuario::timer1_Tick);
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->progressBar1->Location = System::Drawing::Point(475, 479);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(120, 20);
			this->progressBar1->TabIndex = 0;
			this->progressBar1->Click += gcnew System::EventHandler(this, &InterfaceUsuario::progressBar1_Click);
			// 
			// InterfaceUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(596, 500);
			this->Controls->Add(this->progressBar1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"InterfaceUsuario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InterfaceUsuario";
			this->Load += gcnew System::EventHandler(this, &InterfaceUsuario::InterfaceUsuario_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

				 progressBar1->Increment(1);

				 if (progressBar1->Value == 120)
				 {
					 timer1->Stop();
				 }

				 if (i < 105 ) {
					 i++;
				 }

				 else{
					 timer1->Enabled = false;
					 this->Close();
				 }
	}

	private: System::Void InterfaceUsuario_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		system("cls");
	}

	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
#endif;
#include "TelaJogo5.h"
#include "TelaJogo3.h"

namespace ProjetoCaixeiroViajante
{
	TelaJogo5::TelaJogo5(void)
	{
		InitializeComponent();

		//Declaração variaveis jogo;
		VetorVisitas1 = gcnew array<int>(5);
		timer1->Interval = 1000;
	}
	TelaJogo5::TelaJogo5(int Pontuacao)
	{
		InitializeComponent();

		//Declaração variaveis jogo;
		VetorVisitas1 = gcnew array<int>(5);
		setPontos(Pontuacao);
		timer1->Interval = 1000;
	}

	TelaJogo5::~TelaJogo5()
	{
		for (int i = 0; i < 5; ++i)
		{
			VetorVisitas1[i] = 0;
		}
		CasaAtual1 = 1;
		Contador1 = 0;
		Pontos = 0;
		Casa_1,
			Caminhos1_3, Caminhos1_4,
			Caminhos2_4, Caminhos2_5,
			Caminhos3_1, Caminhos3_5,
			Caminhos4_1, Caminhos4_2,
			Caminhos5_2, Caminhos5_3 = false;
		if (components)
		{
			delete components;
		}
	}
	void TelaJogo5::TelaJogo5_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//Método onde deixar os botões invisiveis
		this->Caminho1e2->Visible = false;
		this->Caminho1e3->Visible = false;
		this->Caminho1e4->Visible = false;
		this->Caminho1e5->Visible = false;

		this->Caminho2e1->Visible = false;
		this->Caminho2e3->Visible = false;
		this->Caminho2e4->Visible = false;
		this->Caminho2e5->Visible = false;

		this->Caminho3e1->Visible = false;
		this->Caminho3e2->Visible = false;
		this->Caminho3e4->Visible = false;
		this->Caminho3e5->Visible = false;

		this->Caminho4e1->Visible = false;
		this->Caminho4e2->Visible = false;
		this->Caminho4e3->Visible = false;
		this->Caminho4e5->Visible = false;


		this->Caminho5e1->Visible = false;
		this->Caminho5e2->Visible = false;
		this->Caminho5e3->Visible = false;
		this->Caminho5e4->Visible = false;



		this->btn_ProximaFase->Visible = false;
		this->btn_Recomecar->Visible = false;

		this->btn_Caminho_1_Inicio->Visible = false;

		this->btn_Caminho_2->Visible = false;
		this->btn_Caminho_2_1->Visible = false;
		this->btn_Caminho_2_2->Visible = false;
		this->btn_Caminho_2_3->Visible = false;

		this->btn_Caminho_3->Visible = false;
		this->btn_Caminho_3_1->Visible = false;
		this->btn_Caminho_3_2->Visible = false;
		this->btn_Caminho_3_3->Visible = false;

		this->btn_Caminho_4->Visible = false;
		this->btn_Caminho_4_1->Visible = false;
		this->btn_Caminho_4_2->Visible = false;
		this->btn_Caminho_4_3->Visible = false;

		this->btn_Caminho_5->Visible = false;
		this->btn_Caminho_5_1->Visible = false;
		this->btn_Caminho_5_2->Visible = false;
		this->btn_Caminho_5_3->Visible = false;

		this->btn_Caminho_1_Fim->Visible = false;

		this->btn_Seta_Caminho_1->Visible = false;
		this->btn_Seta_Caminho_2->Visible = false;
		this->btn_Seta_Caminho_3->Visible = false;
		this->btn_Seta_Caminho_4->Visible = false;
		this->btn_Seta_Caminho_5->Visible = false;




	}
	void TelaJogo5::timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		ContadorTempo++;
		labelTemporizador->Text = "Tempo: " + ContadorTempo;
	}
	void TelaJogo5::labelTemporizador_Click(System::Object^  sender, System::EventArgs^  e) 
	{

	}
	void TelaJogo5::Caminho5e1_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::labelInicioJogo_Click(System::Object^  sender, System::EventArgs^  e)
	{
    }
	void TelaJogo5::Caminho1e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho1e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho1e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho1e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}


	void TelaJogo5::Caminho2e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo5::Caminho2e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo5::Caminho2e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho2e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho3e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho3e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho3e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho3e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo5::Caminho4e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo5::Caminho4e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo5::Caminho4e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo5::Caminho4e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho5e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho5e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho5e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo5::Caminho5e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo5::btnCasa1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (Contador1 == 0 || Contador1 == 4)
		{
			Casa_1 = true;
			this->btn_Caminho_1_Inicio->Visible = true;
			this->btn_Seta_Caminho_1->Visible = true;
			PercorrerCaminho(1);
		}
	}

	void TelaJogo5::btnCasa2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 2 && this->btn_Caminho_2->Visible == false && this->Caminho3e2->Visible == false && this->Caminho4e2->Visible == false && this->Caminho5e2->Visible == false)
			PercorrerCaminho(2);
	}

	void TelaJogo5::btnCasa3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 3 && this->btn_Caminho_3->Visible == false && this->Caminho2e3->Visible == false && this->Caminho4e3->Visible == false && this->Caminho5e3->Visible == false)
			PercorrerCaminho(3);
	}

	void TelaJogo5::btnCasa4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 4 && this->btn_Caminho_4->Visible == false && this->Caminho2e4->Visible == false && this->Caminho3e4->Visible == false && this->Caminho5e4->Visible == false)
			PercorrerCaminho(4);
	}
	void TelaJogo5::btnCasa5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 5 && this->btn_Caminho_5->Visible == false && this->Caminho2e5->Visible == false && this->Caminho3e5->Visible == false && this->Caminho4e5->Visible == false)
			PercorrerCaminho(5);
	}
	void TelaJogo5::btn_Recomecar_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Casa_1 = false;
		this->Visible = false;
		Close();
		TelaJogo5 tj5;
		tj5.ShowDialog();
		this->Visible = true;
	}
	void TelaJogo5::label1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Seta_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Seta_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Seta_Caminho_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Seta_Caminho_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_1_Fim_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_2_1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo5::btn_Caminho_2_2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo5::btn_Caminho_2_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_3_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_3_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_3_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_4_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_4_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_4_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_5_1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo5::btn_Caminho_5_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo5::btn_Caminho_5_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}

	void TelaJogo5::btn_ProximaFase_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
		this->Visible = false;
		TelaJogo3 tj3(getPontos());
		tj3.ShowDialog();
		this->Visible = true;
	}

	//Metodos jogo;
	void TelaJogo5::PercorrerCaminho(int NovaCasa1)
	{

		if (Casa_1 == true)
		{
			CasaAnterior = CasaAtual1;

			if (Contador1 < 5)
			{
				if (CasaAtual1 == 0 && NovaCasa1 == 1 && CasaAtual1 == 0 && NovaCasa1 == 2 && CasaAtual1 == 0 && NovaCasa1 == 3 && CasaAtual1 == 0 && NovaCasa1 == 4 && CasaAtual1 == 0 && NovaCasa1 == 5)
				{

				}
				if (NovaCasa1 == CasaAnterior)
				{
					MessageBox::Show("Movimento não permitido");
				}
				else
				{
					//MessageBox::Show("De: " + CasaAtual1 + "  Para: " + NovaCasa1 + "Contador: " + Contador1);
					mostrarCaminho(CasaAtual1, NovaCasa1);
					CasaAtual1 = NovaCasa1;

				}
			}
			else
			{
				MessageBox::Show("Limite de Movimentos Atingidos.");
				this->btn_Recomecar->Visible = true;
			}
		}
		else
		{
			MessageBox::Show("Iniciar o Jogo sempre na casa 1.");

		}

	}
	void TelaJogo5::mostrarCaminho(int CasaAtual1, int NovaCasa1)
	{

		if (Contador1 < 5)
		{
			if (CasaAtual1 == NovaCasa1)
			{
				MessageBox::Show("Impossivel selecionar o mesmo destino!");
			}
			if (CasaAtual1 == 0 && NovaCasa1 == 1)
			{
				Contador1 = Contador1;
			}
			else if (CasaAtual1 == 1 && NovaCasa1 == 2)
			{
				if (Contador1 == 0)
				{
					this->btn_Caminho_2->Visible = true;
					this->btn_Seta_Caminho_2->Visible = true;
				}

				Contador1++;
				Distancia1 += 8;
				this->Caminho1e2->Visible = true;
				this->Caminho2e1->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;

			}
			else if (CasaAtual1 == 1 && NovaCasa1 == 3)
			{
				if (Contador1 == 0)
				{
					this->btn_Caminho_3->Visible = true;
					this->btn_Seta_Caminho_2->Visible = true;
				}
				Caminhos1_3 = true;
				Distancia1 += 20;
				this->Caminho1e3->Visible = true;
				this->Caminho3e1->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;

			}
			else if (CasaAtual1 == 1 && NovaCasa1 == 4)
			{
				if (Contador1 == 0)
				{
					this->btn_Caminho_4->Visible = true;
					this->btn_Seta_Caminho_2->Visible = true;
					Caminhos1_4 = true;
					Distancia1 += 17;
					this->Caminho1e4->Visible = true;
					this->Caminho4e1->Visible = false;
					VetorVisitas1[Contador1] = NovaCasa1;
					Contador1++;
				}
			}
			else if (CasaAtual1 == 1 && NovaCasa1 == 5)
			{
				if (Contador1 == 0)
				{
					this->btn_Caminho_5->Visible = true;
					this->btn_Seta_Caminho_2->Visible = true;
				}

				Distancia1 += 12;
				this->Caminho1e5->Visible = true;
				this->Caminho5e1->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 2 && NovaCasa1 == 1)
			{
				if (Contador1 == 4)
				{
					this->btn_Caminho_1_Fim->Visible = true;

					Distancia1 += 8;
					this->Caminho2e1->Visible = true;
					this->Caminho1e2->Visible = false;
					VetorVisitas1[Contador1] = NovaCasa1;
					Contador1++;
					mostrarMenorCaminho(Distancia1);
					Distancia1 = 0;
				}
				else
				{
					MessageBox::Show("Movimento não permitido");
					Contador1 = Contador1;
				}
			}
			else if (CasaAtual1 == 2 && NovaCasa1 == 3)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_3_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_3_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;

				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_3_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;

					this->Caminho2e3->Visible = true;
					this->Caminho3e2->Visible = false;

				}
				Contador1++;
				Distancia1 += 5;
				this->Caminho2e3->Visible = true;
				this->Caminho3e2->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
			}
			else if (CasaAtual1 == 2 && NovaCasa1 == 4)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_4_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_4_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_4_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}

				Caminhos2_4 = true;
				Distancia1 += 3;
				this->Caminho2e4->Visible = true;
				this->Caminho4e2->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 2 && NovaCasa1 == 5)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_5_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_5_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_5_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}

				Caminhos2_5 = true;
				Distancia1 += 22;
				this->Caminho2e5->Visible = true;
				this->Caminho5e2->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 3 && NovaCasa1 == 1)
			{
				if (Contador1 == 4)
				{
					this->btn_Caminho_1_Fim->Visible = true;

					Caminhos3_1 = true;
					Distancia1 += 20;
					this->Caminho3e1->Visible = true;
					this->Caminho1e3->Visible = false;
					VetorVisitas1[Contador1] = NovaCasa1;
					Contador1++;
					mostrarMenorCaminho(Distancia1);
					Distancia1 = 0;
				}
				else
				{
					MessageBox::Show("Movimento não permitido");
					Contador1 = Contador1;
				}
			}
			if (CasaAtual1 == 3 && NovaCasa1 == 2)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_2_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_2_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_2_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}

				Distancia1 += 5;
				this->Caminho3e2->Visible = true;
				this->Caminho2e3->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 3 && NovaCasa1 == 4)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_4_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_4_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_4_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				Contador1 = Contador1 + 1;
				Distancia1 += 7;
				this->Caminho3e4->Visible = true;
				this->Caminho4e3->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
			}
			else if (CasaAtual1 == 3 && NovaCasa1 == 5)
			{

				if (Contador1 == 1)
				{
					this->btn_Caminho_5_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_5_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}

				if (Contador1 == 3)
				{
					this->btn_Caminho_5_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}

				Caminhos3_5 = true;
				Distancia1 += 14;
				this->Caminho3e5->Visible = true;
				this->Caminho5e3->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 4 && NovaCasa1 == 1)
			{
				if (Contador1 == 4)
				{
					this->btn_Caminho_1_Fim->Visible = true;
					Caminhos4_1 = true;
					Distancia1 += 17;
					this->Caminho4e1->Visible = true;
					this->Caminho1e4->Visible = false;
					VetorVisitas1[Contador1] = NovaCasa1;
					Contador1++;
					mostrarMenorCaminho(Distancia1);
					Distancia1 = 0;
				}
				else
				{
					MessageBox::Show("Movimento não permitido");
					Contador1 = Contador1;
				}
			}
			if (CasaAtual1 == 4 && NovaCasa1 == 2)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_2_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_2_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_2_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}


				Caminhos4_2 = true;
				Distancia1 += 3;
				this->Caminho4e2->Visible = true;
				this->Caminho2e4->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 4 && NovaCasa1 == 3)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_3_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_3_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_3_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}

				Distancia1 += 7;
				this->Caminho4e3->Visible = true;
				this->Caminho3e4->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 4 && NovaCasa1 == 5)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_5_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_5_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_5_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				Contador1 = Contador1 + 1;
				Distancia1 += 10;
				this->Caminho4e5->Visible = true;
				this->Caminho5e4->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;

			}
			else if (CasaAtual1 == 5 && NovaCasa1 == 1)
			{
				if (Contador1 == 4)
				{
					this->btn_Caminho_1_Fim->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
					Distancia1 += 12;
					this->Caminho5e1->Visible = true;
					this->Caminho1e5->Visible = false;
					VetorVisitas1[Contador1] = NovaCasa1;
					Contador1++;
					mostrarMenorCaminho(Distancia1);
					Distancia1 = 0;
				}
				else
				{
					MessageBox::Show("Movimento não permitido");
					Contador1 = Contador1;
				}
			}
			else if (CasaAtual1 == 5 && NovaCasa1 == 2)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_2_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_2_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_2_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}

				Caminhos5_2 = true;
				Distancia1 += 22;
				this->Caminho5e2->Visible = true;
				this->Caminho2e5->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 5 && NovaCasa1 == 3)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_3_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_3_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_3_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}

				Caminhos5_3 = true;
				Distancia1 += 14;
				this->Caminho5e3->Visible = true;
				this->Caminho3e5->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 5 && NovaCasa1 == 4)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_4_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_4_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_4_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}

				Distancia1 += 10;
				this->Caminho5e4->Visible = true;
				this->Caminho4e5->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
		}
	}
	void TelaJogo5::mostrarMenorCaminho(int Distancia1)
	{
		if (MenorCaminho1 != Distancia1)
		{

			MessageBox::Show("Desculpe nao e o  Menor Caminho!");
			this->btn_Recomecar->Visible = true;
			Pontos = 100;

		}
		else
		{
			timer1->Stop();
			MessageBox::Show("Parabens Menor Caminho: " + MenorCaminho1 + " Km");
			this->btn_ProximaFase->Visible = true;
			Pontos = getPontos() - ContadorTempo;
		}
	}
	void TelaJogo5::setPontos(int OsPontos)
	{
		if (OsPontos <= 0)
		{
			Pontos = 0;
		}
		else
		{
			Pontos = OsPontos;
		}
	}

	int TelaJogo5::getPontos()
	{
		return Pontos;
	}
}
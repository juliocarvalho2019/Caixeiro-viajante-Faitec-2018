#include "TelaJogo.h"
using namespace std;
#include<iostream>

namespace ProjetoCaixeiroViajante
{
	TelaJogo::TelaJogo(void)
	{
		InitializeComponent();

		//Declaração variaveis jogo;
		VetorVisitas1 = gcnew array<int>(4);
		timer1->Interval = 1000;
	}
	TelaJogo::TelaJogo(int Pontuacao)
	{
		InitializeComponent();

		//Declaração variaveis jogo;
		VetorVisitas1 = gcnew array<int>(4);
		setPontos(Pontuacao);
		timer1->Interval = 1000;
	}

	TelaJogo::~TelaJogo()
	{
		for (int i = 0; i < 4; ++i)
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
	void TelaJogo::TelaJogo_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//Método onde deixar os botões invisiveis
		this->Caminho1e2->Visible = false;
		this->Caminho1e3->Visible = false;
		this->Caminho1e4->Visible = false;
	

		this->Caminho2e1->Visible = false;
		this->Caminho2e3->Visible = false;
		this->Caminho2e4->Visible = false;
	

		this->Caminho3e1->Visible = false;
		this->Caminho3e2->Visible = false;
		this->Caminho3e4->Visible = false;


		this->Caminho4e1->Visible = false;
		this->Caminho4e2->Visible = false;
		this->Caminho4e3->Visible = false;

		this->btn_ProximaFase->Visible = false;
		this->btn_Recomecar->Visible = false;

		this->btn_Caminho_1_Inicio->Visible = false;

		this->btn_Caminho_2->Visible = false;
		this->btn_Caminho_2_1->Visible = false;
		this->btn_Caminho_2_2->Visible = false;
	

		this->btn_Caminho_3->Visible = false;
		this->btn_Caminho_3_1->Visible = false;
		this->btn_Caminho_3_2->Visible = false;
	

		this->btn_Caminho_4->Visible = false;
		this->btn_Caminho_4_1->Visible = false;
		this->btn_Caminho_4_2->Visible = false;




		this->btn_Caminho_1_Fim->Visible = false;

		this->btn_Seta_Caminho_1->Visible = false;
		this->btn_Seta_Caminho_2->Visible = false;
		this->btn_Seta_Caminho_3->Visible = false;
		this->btn_Seta_Caminho_4->Visible = false;
	


	}
	void TelaJogo::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
    {
		ContadorTempo++;
		labelTemporizador->Text = "Tempo: " + ContadorTempo;

    }
	void TelaJogo::labelTemporizador_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	

	}
	void TelaJogo::Caminho1e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho1e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho1e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho1e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}


	void TelaJogo::Caminho2e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo::Caminho2e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo::Caminho2e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho2e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho3e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho3e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho3e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho3e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo::Caminho4e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo::Caminho4e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo::Caminho4e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo::Caminho4e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho5e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho5e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho5e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo::Caminho5e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo::btnCasa1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (Contador1 == 0 || Contador1 == 3)
		{
			Casa_1 = true;
			this->btn_Caminho_1_Inicio->Visible = true;
			this->btn_Seta_Caminho_1->Visible = true;
			PercorrerCaminho(1);
		}
	}

	void TelaJogo::btnCasa2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 2 && this->btn_Caminho_2->Visible == false && this->Caminho3e2->Visible == false)
		PercorrerCaminho(2);
	}

	void TelaJogo::btnCasa3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 3 && this->btn_Caminho_3->Visible == false && this->Caminho2e3->Visible == false)
		PercorrerCaminho(3);
	}

	void TelaJogo::btnCasa4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 4)
		PercorrerCaminho(4);
	}
	void TelaJogo::btnCasa5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		PercorrerCaminho(5);
	}
	void TelaJogo::btn_Recomecar_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		Casa_1 = false;
		this->Visible = false;
		Close();
		TelaJogo tj;
		tj.ShowDialog();
		this->Visible = true;
	}

	void TelaJogo::Caminho2e3_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::label1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Caminho_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Seta_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Seta_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Caminho_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Seta_Caminho_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Caminho_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Seta_Caminho_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Caminho_1_Fim_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Caminho_4_3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo::btn_Caminho_4_2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo::btn_Caminho_2_1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo::btn_Caminho_2_2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo::btn_Caminho_2_3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo::btn_Caminho_3_1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo::btn_Caminho_3_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo::btn_Caminho_3_3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo::btn_Caminho_4_1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}


	void TelaJogo::btn_ProximaFase_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Visible = false;
		Close();
		//cout << "Pontos Atuais:" << getPontos();
		//cout << "Pontos Feito:" << Pontos;
		TelaJogo2 tj2(getPontos());
		tj2.ShowDialog();
		this->Visible = true;
	}

	//Metodos jogo;
	void TelaJogo::PercorrerCaminho(int NovaCasa1)
	{

		if (Casa_1 == true)
		{
			CasaAnterior = CasaAtual1;

			if (Contador1 < 4)
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
				//	MessageBox::Show("De: " + CasaAtual1 + "  Para: " + NovaCasa1 + "Contador: " + Contador1);
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
	void TelaJogo::mostrarCaminho(int CasaAtual1, int NovaCasa1)
	{

		if (Contador1 < 4)
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
				Distancia1 += 11;
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
				Distancia1 += 10;
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
					Distancia1 += 7;
					this->Caminho1e4->Visible = true;
					this->Caminho4e1->Visible = false;
					VetorVisitas1[Contador1] = NovaCasa1;
					Contador1++;
				}
			}
			
			else if (CasaAtual1 == 2 && NovaCasa1 == 1)
			{
				if (Contador1 == 3)
				{
					this->btn_Caminho_1_Fim->Visible = true;

					Distancia1 += 11;
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
				Contador1++;
				Distancia1 += 15;
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
				Caminhos2_4 = true;
				Distancia1 += 10;
				this->Caminho2e4->Visible = true;
				this->Caminho4e2->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			
			else if (CasaAtual1 == 3 && NovaCasa1 == 1)
			{
				if (Contador1 == 3)
				{
					this->btn_Caminho_1_Fim->Visible = true;

					Caminhos3_1 = true;
					Distancia1 += 10;
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
				Distancia1 += 15;
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
				Contador1 = Contador1 + 1;
				Distancia1 += 12;
				this->Caminho3e4->Visible = true;
				this->Caminho4e3->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
			}
			else if (CasaAtual1 == 4 && NovaCasa1 == 1)
			{
				if (Contador1 == 3)
				{
					this->btn_Caminho_1_Fim->Visible = true;
					Caminhos4_1 = true;
					Distancia1 += 7;
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
				Caminhos4_2 = true;
				Distancia1 += 10;
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
				Distancia1 += 12;
				this->Caminho4e3->Visible = true;
				this->Caminho3e4->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
		}
	}
	void TelaJogo::mostrarMenorCaminho(int Distancia1)
	{
		if (MenorCaminho1 != Distancia1)
		{

			MessageBox::Show("Desculpe nao e o  Menor Caminho!");
			this->btn_Recomecar->Visible = true;

		}
		else
		{
			timer1->Stop();
			MessageBox::Show("Parabens Menor Caminho: " + MenorCaminho1 + " Km");
			this->btn_ProximaFase->Visible = true;
			Pontos = getPontos() - ContadorTempo;
			
		}
	}
	void TelaJogo::setPontos(int OsPontos)
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

	int TelaJogo::getPontos()
	{
		return Pontos;
	}
}
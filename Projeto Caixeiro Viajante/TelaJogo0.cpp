#include "TelaJogo0.h"

namespace ProjetoCaixeiroViajante
{

	
	TelaJogo0::TelaJogo0(void)
	{
		InitializeComponent();

		//Declaração variaveis jogo;
		VetorVisitas1 = gcnew array<int>(5);

		timer1->Interval = 1000;
		//timer1->Tick += new EventHandler(Timer1_Tick);
		//timer1->Enabled = true;

	}

	TelaJogo0::~TelaJogo0()
	{
		for (int i = 0; i < 3; ++i)
		{
			VetorVisitas1[i] = 0;
		}
		CasaAtual = 1;
		Contador = 0;
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
	void TelaJogo0::TelaJogo0_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//Método onde deixar os botões invisiveis
		this->Caminho1e2->Visible = false;
		this->Caminho1e3->Visible = false;


		this->Caminho2e1->Visible = false;
		this->Caminho2e3->Visible = false;
	

		this->Caminho3e1->Visible = false;
		this->Caminho3e2->Visible = false;



		this->btn_ProximaFase->Visible = false;
		this->btn_Recomecar->Visible = false;

		this->btn_Caminho_1_Inicio->Visible = false;

		this->btn_Caminho_2->Visible = false;
		this->btn_Caminho_2_1->Visible = false;
	

		this->btn_Caminho_3->Visible = false;
		this->btn_Caminho_3_1->Visible = false;
	





		this->btn_Caminho_1_Fim->Visible = false;

		this->btn_Seta_Caminho_1->Visible = false;
		this->btn_Seta_Caminho_2->Visible = false;
		this->btn_Seta_Caminho_3->Visible = false;





	}
	//Contador Tempo da fase
	
	void TelaJogo0::timer1_Tick(System::Object^  sender, System::EventArgs^  e)  
	{
		
		ContadorTempo++;
		labelTemporizador->Text = "Tempo: " + ContadorTempo;

    }
	void TelaJogo0::labelTemporizador_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo0::Caminho1e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo0::Caminho1e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo0::Caminho2e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo0::Caminho2e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo0::Caminho3e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo0::Caminho3e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo0::btnCasa1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (Contador == 0 || Contador == 2)
		{
			Casa_1 = true;
			this->btn_Caminho_1_Inicio->Visible = true;
			this->btn_Seta_Caminho_1->Visible = true;
			PercorrerCaminho(1);
		}
	}

	void TelaJogo0::btnCasa2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->btn_Caminho_2->Visible == false)
		PercorrerCaminho(2);
	}

	void TelaJogo0::btnCasa3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->btn_Caminho_3->Visible == false && this->Caminho2e3->Visible == false)
		PercorrerCaminho(3);
	}

	void TelaJogo0::btnCasa4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		PercorrerCaminho(4);
	}
	void TelaJogo0::btnCasa5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		PercorrerCaminho(5);
	}
	void TelaJogo0::btn_Recomecar_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Casa_1 = false;
		this->Visible = false;
		Close();
		TelaJogo0 tj0;
		tj0.ShowDialog();
		this->Visible = true;
	}
	void TelaJogo0::label1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo0::btn_Caminho_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo0::btn_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo0::btn_Seta_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo0::btn_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo0::btn_Seta_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo0::btn_Caminho_1_Fim_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo0::btn_Caminho_2_1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo0::btn_Caminho_2_2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo0::btn_Caminho_2_3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo0::btn_Caminho_3_1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo0::btn_Caminho_3_2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo0::btn_Caminho_3_3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo0::Caminho3e2_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
	}

	void TelaJogo0::btn_ProximaFase_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//MessageBox::Show("Pontuacao Fase 1: " + getPontos());
		Close();
		this->Visible = false;
		TelaJogo tj(getPontos());
		tj.ShowDialog();
		this->Visible = true;
		tj.setPontos(getPontos());
	}

	//Metodos jogo;
	void TelaJogo0::PercorrerCaminho(int NovaCasa)
	{

		if (Casa_1 == true)
		{
			CasaAnterior = CasaAtual;

			if (Contador < 3)
			{
				if (CasaAtual == 0 && NovaCasa == 1 && CasaAtual == 0 && NovaCasa == 2 && CasaAtual == 0 && NovaCasa == 3 && CasaAtual == 0 && NovaCasa == 4 && CasaAtual == 0 && NovaCasa == 5)
				{

				}
				if (NovaCasa == CasaAnterior)
				{
					MessageBox::Show("Movimento não permitido");
				}
				else
				{
				//	MessageBox::Show("De: " + CasaAtual + "  Para: " + NovaCasa + "Contador: " + Contador);
					mostrarCaminho(CasaAtual, NovaCasa);
					CasaAtual = NovaCasa;

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
	void TelaJogo0::mostrarCaminho(int CasaAtual, int NovaCasa)
	{

		if (Contador < 3)
		{
			if (CasaAtual == NovaCasa)
			{
				MessageBox::Show("Impossivel selecionar o mesmo destino!");
			}
			if (CasaAtual == 0 && NovaCasa == 1)
			{
				Contador = Contador;
			}
			else if (CasaAtual == 1 && NovaCasa == 2)
			{
				if (Contador == 0)
				{
					this->btn_Caminho_2->Visible = true;
					this->btn_Seta_Caminho_2->Visible = true;
				}

				Contador++;
				Distancia += 10;
				this->Caminho1e2->Visible = true;
				this->Caminho2e1->Visible = false;
				VetorVisitas1[Contador] = NovaCasa;

			}
			else if (CasaAtual == 1 && NovaCasa == 3)
			{
				if (Contador == 0)
				{
					this->btn_Caminho_3->Visible = true;
					this->btn_Seta_Caminho_2->Visible = true;
				}
				Caminhos1_3 = true;
				Distancia += 12;
				this->Caminho1e3->Visible = true;
				this->Caminho3e1->Visible = false;
				VetorVisitas1[Contador] = NovaCasa;
				Contador++;

			}
			else if (CasaAtual == 2 && NovaCasa == 1)
			{
				if (Contador == 2)
				{
					this->btn_Caminho_1_Fim->Visible = true;

					Distancia += 10;
					this->Caminho2e1->Visible = true;
					this->Caminho1e2->Visible = false;
					VetorVisitas1[Contador] = NovaCasa;
					Contador++;
					mostrarMenorCaminho(Distancia);
					Distancia = 0;
				}
				else
				{
					MessageBox::Show("Movimento não permitido");
					Contador = Contador;
				}
			}
			else if (CasaAtual == 2 && NovaCasa == 3)
			{
				if (Contador == 1)
				{
					this->btn_Caminho_3_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador == 2)
				{
					this->btn_Caminho_3_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;

				}
				Contador++;
				Distancia += 7;
				this->Caminho2e3->Visible = true;
				this->Caminho3e2->Visible = false;
				VetorVisitas1[Contador] = NovaCasa;
			}
			else if (CasaAtual == 3 && NovaCasa == 1)
			{
				if (Contador == 2)
				{
					this->btn_Caminho_1_Fim->Visible = true;

					Caminhos3_1 = true;
					Distancia += 12;
					this->Caminho3e1->Visible = true;
					this->Caminho1e3->Visible = false;
					VetorVisitas1[Contador] = NovaCasa;
					Contador++;
					mostrarMenorCaminho(Distancia);
					Distancia = 0;
				}
				else
				{
					MessageBox::Show("Movimento não permitido");
					Contador = Contador;
				}
			}
			if (CasaAtual == 3 && NovaCasa == 2)
			{
				if (Contador == 0)
				{
					this->btn_Caminho_2->Visible = true;
					this->btn_Seta_Caminho_2->Visible = true;
				}
				if (Contador == 1)
				{
					this->btn_Caminho_2_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				Distancia += 7;
				this->Caminho3e2->Visible = true;
				this->Caminho2e3->Visible = false;
				VetorVisitas1[Contador] = NovaCasa;
				Contador++;
			}
		}
	}
	void TelaJogo0::mostrarMenorCaminho(int Distancia1)
	{
		if (MenorCaminho != Distancia1)
		{

			MessageBox::Show("Desculpe nao e o  Menor Caminho!");
			this->btn_Recomecar->Visible = true;

		}
		else
		{
			timer1->Stop();
			Pontos = 500 - ContadorTempo;
			setPontos(Pontos);
			MessageBox::Show("Parabens Menor Caminho: "+MenorCaminho+" Km");
			//MessageBox::Show(" Pontuacao: " +getPontos());
			this->btn_ProximaFase->Visible = true;
			

		}
	}
	void TelaJogo0::setPontos(int OsPontos)
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

	int TelaJogo0::getPontos()
	{
		return Pontos;
	}
}
#include "TelaJogo2.h"
#include "TelaJogo6.h"
#include<iostream>
using namespace std;
namespace ProjetoCaixeiroViajante
{
	TelaJogo2::TelaJogo2(void)
	{
		InitializeComponent();

		//Declaração variaveis jogo;
		VetorVisitas1 = gcnew array<int>(5);
		timer1->Interval = 1000;
	}
	TelaJogo2::TelaJogo2(int Pontuacao)
	{
		InitializeComponent();

		//Declaração variaveis jogo;
		VetorVisitas1 = gcnew array<int>(5);
		setPontos(Pontuacao);
		timer1->Interval = 1000;
	}
	TelaJogo2::~TelaJogo2()
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
	void TelaJogo2::TelaJogo2_Load(System::Object^  sender, System::EventArgs^  e)
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
	void TelaJogo2::timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		ContadorTempo++;
		labelTemporizador->Text = "Tempo: " + ContadorTempo;

	}
	void TelaJogo2::labelTemporizador_Click(System::Object^  sender, System::EventArgs^  e)
	{
	
	}
	void TelaJogo2::Caminho1e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo2::Caminho1e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho1e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho1e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}


	void TelaJogo2::Caminho2e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo2::Caminho2e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo2::Caminho2e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho2e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho3e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho3e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho3e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho3e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo2::Caminho4e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo2::Caminho4e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo2::Caminho4e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo2::Caminho4e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho5e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho5e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho5e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo2::Caminho5e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo2::btnCasa1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (Contador1 == 0 || Contador1 == 4)
		{
			Casa_1 = true;
			this->btn_Caminho_1_Inicio->Visible = true;
			this->btn_Seta_Caminho_1->Visible = true;
			PercorrerCaminho(1);
		}
	}

	void TelaJogo2::btnCasa2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 2 && this->btn_Caminho_2->Visible == false && this->Caminho3e2->Visible == false && this->Caminho4e2->Visible == false && this->Caminho5e2->Visible == false)
		PercorrerCaminho(2);
	}

	void TelaJogo2::btnCasa3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 3 && this->btn_Caminho_3->Visible == false && this->Caminho2e3->Visible == false && this->Caminho4e3->Visible == false && this->Caminho5e3->Visible == false)
		PercorrerCaminho(3);
	}

	void TelaJogo2::btnCasa4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 4 && this->btn_Caminho_4->Visible == false && this->Caminho2e4->Visible == false && this->Caminho3e4->Visible == false && this->Caminho5e4->Visible == false)
		PercorrerCaminho(4);
	}
	void TelaJogo2::btnCasa5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CasaAtual1 != 5 && this->btn_Caminho_5->Visible == false && this->Caminho2e5->Visible == false && this->Caminho3e5->Visible == false && this->Caminho4e5->Visible == false)
		PercorrerCaminho(5);
	}
	void TelaJogo2::btn_Recomecar_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
		Casa_1 = false;
		TelaJogo2 tj2;
		this->Visible = false;
		tj2.ShowDialog();
		this->Visible = true;
	}

	void TelaJogo2::Caminho2e3_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::label1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Caminho_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Seta_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Seta_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Caminho_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Seta_Caminho_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Caminho_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Seta_Caminho_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo2::btn_Caminho_1_Fim_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}

	void TelaJogo2::btn_ProximaFase_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		Close();
		this->Visible = false;
		//cout << "\nPontos Atuais fase 3:" << getPontos();
		//cout << "\nPontos Feitos fase 3:" << Pontos;
		TelaJogo4 tj4(getPontos());
		tj4.ShowDialog();
		this->Visible = true;
	}

	//Metodos jogo;
	void TelaJogo2::PercorrerCaminho(int NovaCasa1)
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
					//MessageBox::Show("De: " + CasaAtual1 + "  Para: " + NovaCasa1 + "Contador: " +Contador1);
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
	void TelaJogo2::mostrarCaminho(int CasaAtual1, int NovaCasa1)
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
					Distancia1 += 15;
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
						Distancia1 += 4;
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
						Distancia1 += 13;
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
				
						Distancia1 += 14;
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
						
						Distancia1 += 15;
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
						Distancia1 += 11;
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
					Distancia1 += 10;
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
					Distancia1 += 15;
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
						Distancia1 += 4;
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

					Distancia1 += 11;
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
					Distancia1 += 10;
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
						Distancia1 += 13;
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
					Distancia1 += 12;
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
						Distancia1 += 14;
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
					Distancia1 += 15;
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
					Distancia1 += 10;
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
					
					Distancia1 += 12;
					this->Caminho5e4->Visible = true;
					this->Caminho4e5->Visible = false;
					VetorVisitas1[Contador1] = NovaCasa1;
					Contador1++;
				}
			}
			}
	void TelaJogo2::mostrarMenorCaminho(int Distancia1)
	{
		if (MenorCaminho1 != Distancia1)
		{
			timer1->Stop();
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
	void TelaJogo2::setPontos(int OsPontos)
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

	int TelaJogo2::getPontos()
	{
		return Pontos;
	}
}
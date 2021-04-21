#include "TelaJogo6.h"


namespace ProjetoCaixeiroViajante
{
	TelaJogo6::TelaJogo6(void)
	{
		InitializeComponent();

		//Declaração variaveis jogo;
		VetorVisitas1 = gcnew array<int>(7);
		timer1->Interval = 1000;
	}
	TelaJogo6::TelaJogo6(int Pontuacao)
	{
		InitializeComponent();

		//Declaração variaveis jogo;
		VetorVisitas1 = gcnew array<int>(7);
		setPontos(Pontuacao);
		timer1->Interval = 1000;
	}

	TelaJogo6::~TelaJogo6()
	{
		for (int i = 0; i < 7; ++i)
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
			Caminhos5_2, Caminhos5_3,
			Caminhos2_6, Caminhos3_6,
			Caminhos3_7, Caminhos4_6,
			Caminhos4_7, Caminhos5_6,
			Caminhos5_7, Caminhos6_4,
			Caminhos6_5, Caminhos6_7,
			Caminhos7_3, Caminhos7_4,
			Caminhos7_5, Caminhos7_6,
			Caminhos6_2, Caminhos6_3 = false;
		if (components)
		{
			delete components;
		}
	}
	void TelaJogo6::TelaJogo6_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//Método onde deixar os botões invisiveis
		this->Caminho1e2->Visible = false;
		this->Caminho1e3->Visible = false;
		this->Caminho1e4->Visible = false;
		this->Caminho1e5->Visible = false;
		this->Caminho1e6->Visible = false;
		this->Caminho1e7->Visible = false;

		this->Caminho2e1->Visible = false;
		this->Caminho2e3->Visible = false;
		this->Caminho2e4->Visible = false;
		this->Caminho2e5->Visible = false;
		this->Caminho2e6->Visible = false;
		this->Caminho2e7->Visible = false;

		this->Caminho3e1->Visible = false;
		this->Caminho3e2->Visible = false;
		this->Caminho3e4->Visible = false;
		this->Caminho3e5->Visible = false;
		this->Caminho3e6->Visible = false;
		this->Caminho3e7->Visible = false;

		this->Caminho4e1->Visible = false;
		this->Caminho4e2->Visible = false;
		this->Caminho4e3->Visible = false;
		this->Caminho4e5->Visible = false;
		this->Caminho4e6->Visible = false;
		this->Caminho4e7->Visible = false;


		this->Caminho5e1->Visible = false;
		this->Caminho5e2->Visible = false;
		this->Caminho5e3->Visible = false;
		this->Caminho5e4->Visible = false;
		this->Caminho5e6->Visible = false;
		this->Caminho5e7->Visible = false;


		this->Caminho6e1->Visible = false;
		this->Caminho6e2->Visible = false;
		this->Caminho6e3->Visible = false;
		this->Caminho6e4->Visible = false;
		this->Caminho6e5->Visible = false;
		this->Caminho6e7->Visible = false;

		this->Caminho7e1->Visible = false;
		this->Caminho7e2->Visible = false;
		this->Caminho7e3->Visible = false;
		this->Caminho7e4->Visible = false;
		this->Caminho7e5->Visible = false;
		this->Caminho7e6->Visible = false;



		this->btn_ProximaFase->Visible = false;
		this->btn_Recomecar->Visible = false;

		this->btn_Caminho_1_Inicio->Visible = false;

		this->btn_Caminho_2->Visible = false;
		this->btn_Caminho_2_1->Visible = false;
		this->btn_Caminho_2_2->Visible = false;
		this->btn_Caminho_2_3->Visible = false;
		this->btn_Caminho_2_4->Visible = false;
		this->btn_Caminho_2_5->Visible = false;

		this->btn_Caminho_3->Visible = false;
		this->btn_Caminho_3_1->Visible = false;
		this->btn_Caminho_3_2->Visible = false;
		this->btn_Caminho_3_3->Visible = false;
		this->btn_Caminho_3_4->Visible = false;
		this->btn_Caminho_3_5->Visible = false;

		this->btn_Caminho_4->Visible = false;
		this->btn_Caminho_4_1->Visible = false;
		this->btn_Caminho_4_2->Visible = false;
		this->btn_Caminho_4_3->Visible = false;
		this->btn_Caminho_4_4->Visible = false;
		this->btn_Caminho_4_5->Visible = false;

		this->btn_Caminho_5->Visible = false;
		this->btn_Caminho_5_1->Visible = false;
		this->btn_Caminho_5_2->Visible = false;
		this->btn_Caminho_5_3->Visible = false;
		this->btn_Caminho_5_4->Visible = false;
		this->btn_Caminho_5_5->Visible = false;

		this->btn_Caminho_6->Visible = false;
		this->btn_Caminho_6_1->Visible = false;
		this->btn_Caminho_6_2->Visible = false;
		this->btn_Caminho_6_3->Visible = false;
		this->btn_Caminho_6_4->Visible = false;
		this->btn_Caminho_6_5->Visible = false;

		this->btn_Caminho_7->Visible = false;
		this->btn_Caminho_7_1->Visible = false;
		this->btn_Caminho_7_2->Visible = false;
		this->btn_Caminho_7_3->Visible = false;
		this->btn_Caminho_7_4->Visible = false;
		this->btn_Caminho_7_5->Visible = false;

		this->btn_Caminho_1_Fim->Visible = false;

		this->btn_Seta_Caminho_1->Visible = false;
		this->btn_Seta_Caminho_2->Visible = false;
		this->btn_Seta_Caminho_3->Visible = false;
		this->btn_Seta_Caminho_4->Visible = false;
		this->btn_Seta_Caminho_5->Visible = false;
		this->btn_Seta_Caminho_6->Visible = false;
		this->btn_Seta_Caminho_7->Visible = false;




	}
	void TelaJogo6::timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		ContadorTempo++;
		labelTemporizador->Text = "Tempo: " + ContadorTempo;
	}
	void TelaJogo6::labelTemporizador_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho1e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho1e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho1e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho1e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho1e6_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho1e7_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho2e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho2e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho2e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho2e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho2e6_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho2e7_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho3e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho3e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho3e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho3e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho3e6_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho3e7_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho4e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho4e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho4e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho4e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho4e6_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho4e7_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho5e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho5e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho5e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho5e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho5e6_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho5e7_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho6e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho6e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho6e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho6e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho6e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho6e7_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho7e1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho7e2_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho7e3_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}

	void TelaJogo6::Caminho7e4_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho7e5_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::Caminho7e6_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	void TelaJogo6::btnCasa1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//MessageBox::Show("Pontuacao Fase 7: " + getPontos());
		Casa_1 = true;
		this->btn_Caminho_1_Inicio->Visible = true;
		this->btn_Seta_Caminho_1->Visible = true;
		PercorrerCaminho(1);
	}

	void TelaJogo6::btnCasa2_Click(System::Object^  sender, System::EventArgs^  e)
	{

		PercorrerCaminho(2);
	}

	void TelaJogo6::btnCasa3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		PercorrerCaminho(3);
	}

	void TelaJogo6::btnCasa4_Click(System::Object^  sender, System::EventArgs^  e)
	{

		PercorrerCaminho(4);
	}
	void TelaJogo6::btnCasa5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		PercorrerCaminho(5);
	}
	void TelaJogo6::btnCasa6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		PercorrerCaminho(6);
	}
	void TelaJogo6::btnCasa7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		PercorrerCaminho(7);
	}
	void TelaJogo6::btn_Recomecar_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Casa_1 = false;
		this->Visible = false;
		Close();
		TelaJogo6 tj6;
		tj6.ShowDialog();
		this->Visible = true;
	}
	void TelaJogo6::label1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_1_Fim_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Seta_Caminho_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	
	void TelaJogo6::btn_Seta_Caminho_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	
	void TelaJogo6::btn_Seta_Caminho_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	
	void TelaJogo6::btn_Seta_Caminho_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Seta_Caminho_6_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Seta_Caminho_7_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	
	void TelaJogo6::btn_Caminho_2_1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo6::btn_Caminho_2_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_2_3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo6::btn_Caminho_2_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_2_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_3_1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo6::btn_Caminho_3_2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo6::btn_Caminho_3_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_3_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_3_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_4_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_4_2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo6::btn_Caminho_4_3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo6::btn_Caminho_4_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_4_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_5_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_5_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_5_3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	void TelaJogo6::btn_Caminho_5_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_5_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_6_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_6_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_6_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_6_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_6_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_6_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_7_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_7_1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_7_2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_7_3_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_7_4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::btn_Caminho_7_5_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void TelaJogo6::labelInicioJogo_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}

	void TelaJogo6::btn_ProximaFase_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
		this->Visible = false;
		if (Pontos >= 110)
		{
			TelaPontuacao tp(getPontos()+100);
			tp.ShowDialog();
			this->Visible = true;
		}
		if (Pontos > 90 && Pontos<=110)
		{
			TelaPontuacao1 tp1(getPontos()+109);
			tp1.ShowDialog();
			this->Visible = true;

		}
		if (Pontos < 90)
		{
			TelaPontuacao2 tp2(getPontos()+87);
			tp2.ShowDialog();
			this->Visible = true;
		}

	}

	//Metodos jogo;
	void TelaJogo6::PercorrerCaminho(int NovaCasa1)
	{

		if (Casa_1 == true)
		{
			CasaAnterior = CasaAtual1;

			if (Contador1 < 7)
			{
				if (CasaAtual1 == 0 && NovaCasa1 == 1 && CasaAtual1 == 0 && NovaCasa1 == 2 && CasaAtual1 == 0 && NovaCasa1 == 3 && CasaAtual1 == 0 && NovaCasa1 == 4 && CasaAtual1 == 0 && NovaCasa1 == 5 && CasaAtual1 == 0 && NovaCasa1 == 6 && CasaAtual1 == 0 && NovaCasa1 == 7)
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
	void TelaJogo6::mostrarCaminho(int CasaAtual1, int NovaCasa1)
	{

		if (Contador1 < 7)
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
				Distancia1 += 9;
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
				Distancia1 += 7;
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
					Distancia1 += 8;
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
			else if (CasaAtual1 == 1 && NovaCasa1 == 6)
			{
				if (Contador1 == 0)
				{
					this->btn_Caminho_6->Visible = true;
					this->btn_Seta_Caminho_2->Visible = true;
				}

				Distancia1 += 13;
				this->Caminho1e6->Visible = true;
				this->Caminho6e1->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 1 && NovaCasa1 == 7)
			{
				if (Contador1 == 0)
				{
					this->btn_Caminho_7->Visible = true;
					this->btn_Seta_Caminho_2->Visible = true;
				}

				Distancia1 += 15;
				this->Caminho1e7->Visible = true;
				this->Caminho7e1->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 2 && NovaCasa1 == 1)
			{
				if (Contador1 == 6)
				{
					this->btn_Caminho_1_Fim->Visible = true;

					Distancia1 += 9;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_3_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;

					this->Caminho2e3->Visible = true;
					this->Caminho3e2->Visible = false;

				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_3_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}
				Contador1++;
				Distancia1 += 13;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_4_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_4_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos2_4 = true;
				Distancia1 += 18;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_5_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_5_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos2_5 = true;
				Distancia1 += 23;
				this->Caminho2e5->Visible = true;
				this->Caminho5e2->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 2 && NovaCasa1 == 6)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_6_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_6_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_6_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_6_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_6_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos2_6 = true;
				Distancia1 += 28;
				this->Caminho2e6->Visible = true;
				this->Caminho6e2->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 2 && NovaCasa1 == 7)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_7_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_7_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_7_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_7_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_7_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos2_7 = true;
				Distancia1 += 30;
				this->Caminho2e7->Visible = true;
				this->Caminho7e2->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 3 && NovaCasa1 == 1)
			{
				if (Contador1 == 6)
				{
					this->btn_Caminho_1_Fim->Visible = true;

					Caminhos3_1 = true;
					Distancia1 += 7;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_2_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_2_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Distancia1 += 13;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_4_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_4_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}
				Contador1 = Contador1 + 1;
				Distancia1 += 12;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_5_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_5_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos3_5 = true;
				Distancia1 += 15;
				this->Caminho3e5->Visible = true;
				this->Caminho5e3->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 3 && NovaCasa1 == 6)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_6_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_6_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_6_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_6_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_6_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos3_6 = true;
				Distancia1 += 30;
				this->Caminho3e6->Visible = true;
				this->Caminho6e3->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 3 && NovaCasa1 == 7)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_7_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_7_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_7_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_7_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_7_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos3_7 = true;
				Distancia1 += 25;
				this->Caminho3e7->Visible = true;
				this->Caminho7e3->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 4 && NovaCasa1 == 1)
			{
				if (Contador1 == 6)
				{
					this->btn_Caminho_1_Fim->Visible = true;
					Caminhos4_1 = true;
					Distancia1 += 8;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_2_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_2_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}


				Caminhos4_2 = true;
				Distancia1 += 18;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_3_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_3_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Distancia1 += 12;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_5_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_5_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}
				Contador1 = Contador1 + 1;
				Distancia1 += 15;
				this->Caminho4e5->Visible = true;
				this->Caminho5e4->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;

			}
			else if (CasaAtual1 == 4 && NovaCasa1 == 6)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_6_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_6_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_6_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_6_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_6_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos4_6 = true;
				Distancia1 += 23;
				this->Caminho4e6->Visible = true;
				this->Caminho6e4->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 4 && NovaCasa1 == 7)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_7_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_7_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_7_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_7_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_7_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos4_7 = true;
				Distancia1 += 21;
				this->Caminho4e7->Visible = true;
				this->Caminho7e4->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 5 && NovaCasa1 == 1)
			{
				if (Contador1 == 6)
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_2_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_2_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos5_2 = true;
				Distancia1 += 23;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_3_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_3_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos5_3 = true;
				Distancia1 += 15;
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_4_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_4_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Distancia1 += 15;
				this->Caminho5e4->Visible = true;
				this->Caminho4e5->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 5 && NovaCasa1 == 6)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_6_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_6_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_6_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_6_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_6_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos5_6 = true;
				Distancia1 += 17;
				this->Caminho5e6->Visible = true;
				this->Caminho6e5->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 5 && NovaCasa1 == 7)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_7_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_7_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_7_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_7_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_7_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos5_7 = true;
				Distancia1 += 19;
				this->Caminho5e7->Visible = true;
				this->Caminho7e5->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 6 && NovaCasa1 == 1)
			{
				if (Contador1 == 6)
				{
					this->btn_Caminho_1_Fim->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
					Distancia1 += 13;
					this->Caminho6e1->Visible = true;
					this->Caminho1e6->Visible = false;
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
			else if (CasaAtual1 == 6 && NovaCasa1 == 2)
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_2_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_2_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos6_2 = true;
				Distancia1 += 28;
				this->Caminho6e2->Visible = true;
				this->Caminho2e6->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 6 && NovaCasa1 == 3)
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_3_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_3_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos6_3 = true;
				Distancia1 += 30;
				this->Caminho6e3->Visible = true;
				this->Caminho3e6->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 6 && NovaCasa1 == 4)
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_4_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_4_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}
				Caminhos6_4 = true;
				Distancia1 += 23;
				this->Caminho6e4->Visible = true;
				this->Caminho4e6->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 6 && NovaCasa1 == 5)
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_5_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_5_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos6_5 = true;
				Distancia1 += 17;
				this->Caminho6e5->Visible = true;
				this->Caminho5e6->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 6 && NovaCasa1 == 7)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_7_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_7_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_7_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_7_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_7_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos6_7 = true;
				Distancia1 += 13;
				this->Caminho6e7->Visible = true;
				this->Caminho7e6->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 7 && NovaCasa1 == 1)
			{
				if (Contador1 == 6)
				{
					this->btn_Caminho_1_Fim->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
					Distancia1 += 15;
					this->Caminho7e1->Visible = true;
					this->Caminho1e7->Visible = false;
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
			else if (CasaAtual1 == 7 && NovaCasa1 == 2)
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_2_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_2_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos7_2 = true;
				Distancia1 += 30;
				this->Caminho7e2->Visible = true;
				this->Caminho2e7->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 7 && NovaCasa1 == 3)
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_3_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_3_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos7_3 = true;
				Distancia1 += 25;
				this->Caminho7e3->Visible = true;
				this->Caminho3e7->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 7 && NovaCasa1 == 4)
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_4_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_4_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}
				Caminhos7_4 = true;
				Distancia1 += 21;
				this->Caminho7e4->Visible = true;
				this->Caminho4e7->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 7 && NovaCasa1 == 5)
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
				if (Contador1 == 4)
				{
					this->btn_Caminho_5_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_5_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos7_5 = true;
				Distancia1 += 19;
				this->Caminho7e5->Visible = true;
				this->Caminho5e7->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
			else if (CasaAtual1 == 7 && NovaCasa1 == 6)
			{
				if (Contador1 == 1)
				{
					this->btn_Caminho_6_1->Visible = true;
					this->btn_Seta_Caminho_3->Visible = true;
				}
				if (Contador1 == 2)
				{
					this->btn_Caminho_6_2->Visible = true;
					this->btn_Seta_Caminho_4->Visible = true;
				}
				if (Contador1 == 3)
				{
					this->btn_Caminho_6_3->Visible = true;
					this->btn_Seta_Caminho_5->Visible = true;
				}
				if (Contador1 == 4)
				{
					this->btn_Caminho_6_4->Visible = true;
					this->btn_Seta_Caminho_6->Visible = true;
				}
				if (Contador1 == 5)
				{
					this->btn_Caminho_6_5->Visible = true;
					this->btn_Seta_Caminho_7->Visible = true;
				}

				Caminhos7_6 = true;
				Distancia1 += 13;
				this->Caminho7e6->Visible = true;
				this->Caminho6e7->Visible = false;
				VetorVisitas1[Contador1] = NovaCasa1;
				Contador1++;
			}
		}
	}
	void TelaJogo6::mostrarMenorCaminho(int Distancia1)
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
	void TelaJogo6::setPontos(int OsPontos)
	{
		Pontos = OsPontos;
	}

	int TelaJogo6::getPontos()
	{
		return Pontos;
	}
}
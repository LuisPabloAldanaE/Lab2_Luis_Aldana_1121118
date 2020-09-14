#pragma once
#include<stdlib.h>
#include<time.h>

namespace Lab2LuisAldana1121118 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//Vectores que son el camino de los concursantes.
	int Conejo[70];
	int Tortuga[70];
	//Apuntadores para modificar y trasladar valores dentro del vector.
	int* posC = Conejo;
	int* posT = Tortuga;
	//Contadores para ayudar a marcar los limites de los vectores.
	int ContadorC = 0;
	int ContadorT = 0;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblDisplay;
	protected:
	private: System::Windows::Forms::Button^ btmCarrera;
	private: System::Windows::Forms::Timer^ timerCarrera;


	private: System::Windows::Forms::ListBox^ lbMostrarConejo;
	private: System::Windows::Forms::ListBox^ lbMostrarTortuga;
	private: System::Windows::Forms::Label^ lblInfo;
	private: System::Windows::Forms::Button^ btmCerrar;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btmCarrera = (gcnew System::Windows::Forms::Button());
			this->timerCarrera = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbMostrarConejo = (gcnew System::Windows::Forms::ListBox());
			this->lbMostrarTortuga = (gcnew System::Windows::Forms::ListBox());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->btmCerrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->AutoSize = true;
			this->lblDisplay->Location = System::Drawing::Point(26, 44);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(222, 17);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"Presióne el boton para comenzar:";
			// 
			// btmCarrera
			// 
			this->btmCarrera->Location = System::Drawing::Point(29, 77);
			this->btmCarrera->Name = L"btmCarrera";
			this->btmCarrera->Size = System::Drawing::Size(75, 37);
			this->btmCarrera->TabIndex = 1;
			this->btmCarrera->Text = L"Empezar";
			this->btmCarrera->UseVisualStyleBackColor = true;
			this->btmCarrera->Click += gcnew System::EventHandler(this, &MyForm::btmCarrera_Click);
			// 
			// timerCarrera
			// 
			this->timerCarrera->Interval = 1500;
			this->timerCarrera->Tick += gcnew System::EventHandler(this, &MyForm::timerCarrera_Tick);
			// 
			// lbMostrarConejo
			// 
			this->lbMostrarConejo->FormattingEnabled = true;
			this->lbMostrarConejo->ItemHeight = 16;
			this->lbMostrarConejo->Location = System::Drawing::Point(254, 12);
			this->lbMostrarConejo->Name = L"lbMostrarConejo";
			this->lbMostrarConejo->Size = System::Drawing::Size(103, 724);
			this->lbMostrarConejo->TabIndex = 4;
			// 
			// lbMostrarTortuga
			// 
			this->lbMostrarTortuga->FormattingEnabled = true;
			this->lbMostrarTortuga->ItemHeight = 16;
			this->lbMostrarTortuga->Location = System::Drawing::Point(377, 12);
			this->lbMostrarTortuga->Name = L"lbMostrarTortuga";
			this->lbMostrarTortuga->Size = System::Drawing::Size(107, 724);
			this->lbMostrarTortuga->TabIndex = 5;
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->Location = System::Drawing::Point(26, 143);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(175, 17);
			this->lblInfo->TabIndex = 6;
			this->lblInfo->Text = L"Aun no empieza la carrera";
			// 
			// btmCerrar
			// 
			this->btmCerrar->Location = System::Drawing::Point(13, 718);
			this->btmCerrar->Name = L"btmCerrar";
			this->btmCerrar->Size = System::Drawing::Size(75, 23);
			this->btmCerrar->TabIndex = 7;
			this->btmCerrar->Text = L"Cerrar";
			this->btmCerrar->UseVisualStyleBackColor = true;
			this->btmCerrar->Click += gcnew System::EventHandler(this, &MyForm::btmCerrar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 753);
			this->Controls->Add(this->btmCerrar);
			this->Controls->Add(this->lblInfo);
			this->Controls->Add(this->lbMostrarTortuga);
			this->Controls->Add(this->lbMostrarConejo);
			this->Controls->Add(this->btmCarrera);
			this->Controls->Add(this->lblDisplay);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btmCarrera_Click(System::Object^ sender, System::EventArgs^ e) {
		
		lbMostrarConejo->Items->Clear();
		lbMostrarTortuga->Items->Clear();

		/*for (int i = 0; i < 70; i++)
		{
			DataGridViewColumn^ ColumnaConejo = gcnew DataGridViewColumn();
			ColumnaConejo->Width = 10;
			DataGridViewCell^ Tipo = gcnew DataGridViewTextBoxCell();
			ColumnaConejo->CellTemplate = Tipo;
			dgvConejo->Columns->Add(ColumnaConejo);
		}
		for (int i = 0; i < 70; i++)
		{
			DataGridViewColumn^ ColumnaTortuga = gcnew DataGridViewColumn();
			ColumnaTortuga->Width = 10;
			DataGridViewCell^ Tipo = gcnew DataGridViewTextBoxCell();
			ColumnaTortuga->CellTemplate = Tipo;
			dgvTortuga->Columns->Add(ColumnaTortuga);
		}*/
		//Llenar las listbox para mostrar el inicio.
		for (int i = 0; i < 70; i++)
		{
			if (i==0)
			{
				Conejo[i] = 0;
				lbMostrarConejo->Items->Add("H");
			}
			else
			{
				Conejo[i] = 0;
				lbMostrarConejo->Items->Add(" ");
			}
		}

		for (int i = 0; i < 70; i++)
		{
			if (i == 0)
			{
				Tortuga[i] = 1;
				lbMostrarTortuga->Items->Add("T");
			}
			else
			{
				Tortuga[i] = 0;
				lbMostrarTortuga->Items->Add(" ");
			}
		}
		//El Timer se inicualiza 
		timerCarrera->Start();
		

	}
	private: System::Void timerCarrera_Tick(System::Object^ sender, System::EventArgs^ e) {
		lbMostrarConejo->Items->Clear();
		lbMostrarTortuga->Items->Clear();
		//Si el contador llega a ser menor que 0 se iguala a 0 haciendo marcar el principio del vector
		if (ContadorC < 0)
		{
			ContadorC = 0;
		}
		if (ContadorT < 0)
		{
			ContadorT = 0;
		}
		//Función para Crear número random
		int random = rand() % 11;
  		if (random == 0)
		{
			random = 1;
		}
		lblInfo->Text = "Y arranca!";

		//Limpia los valores dentro de la posición inicial o anterior.
		*posC = 0;
		*posT = 0;
		//Movimientos del Conejo
		if (random >= 1 && random <= 2)
		{
			posC = posC + 0;
			if ((ContadorC + 0) >= 69)
			{
				posC = &Conejo[69];
				*posC = 1;
			}
			else
			{
				*posC = 1;
			}
			ContadorC = ContadorC + 0;
		}
		if (random >= 3 && random <= 4)
		{
			posC = posC + 9;
			if ((ContadorC + 9) >= 69)
			{
				posC = &Conejo[69];
				*posC = 1;
			}
			else
			{
				*posC = 1;
			}
			ContadorC = ContadorC + 9;
		}
		if (random == 5)
		{
			posC = posC - 12;
			if ((ContadorC - 12) <= 0)
			{
				posC = &Conejo[0];
				*posC = 1;
			}
			else
			{
				*posC = 1;
			}
			ContadorC = ContadorC - 12;
		}
		if (random >= 6 && random <= 8)
		{
			posC = posC + 1;
			if ((ContadorC + 1) >= 69)
			{
				posC = &Conejo[69];
				*posC = 1;
			}
			else
			{
				*posC = 1;
			}
			ContadorC = ContadorC + 1;
		}
		if (random >= 9 && random <= 10)
		{
			posC = posC - 2;
			if ((ContadorC - 2)<=0)
			{
				posC = &Conejo[0];
				*posC = 1;
			}
			else
			{
				*posC = 1;
			}
			ContadorC = ContadorC -2;
		}
		//Para la tortuga
		if (random >=1 && random <=5)
		{
			posT = posT + 3;
			if ((ContadorT + 3) >= 69)
			{
				posT = &Tortuga[69];
				*posT= 1;
			}
			else
			{
				*posT = 1;
			}
			ContadorT = ContadorT + 3;
		}
		if (random >= 6 && random <= 7)
		{
			posT = posT - 6;
			if ((ContadorT -6) <= 0)
			{
				posT = &Tortuga[0];
				*posT = 1;
			}
			else
			{
				*posT = 1;
			}
			ContadorT = ContadorT - 6;
		}
		if (random >= 8 && random <= 10)
		{
			posT = posT + 1;
			if ((ContadorT + 1) >= 69)
			{
				posT = &Tortuga[69];
				*posT = 1;
			}
			else
			{
				*posT = 1;
			}
			ContadorT = ContadorT + 1;
		}
		
		//Llenar las listbox según la posición del Conejo y de la tortuga
		for (int i = 0; i < 70; i++)
		{
			if (Conejo[i] == 1 && Tortuga[i] == 0)
			{
				lbMostrarConejo->Items->Add("H");
			}
			else
			{
				lbMostrarConejo->Items->Add(" ");
			}

			if (Conejo[i] == 1 && Tortuga[i] == 1)
			{
				lbMostrarConejo->Items->Add("OUCH!!");
			}
		}
		
		for (int i = 0; i < 70; i++)
		{
			if (Tortuga[i] == 1 && Conejo[i] == 0)
			{
				lbMostrarTortuga->Items->Add("T");
			}
			else
			{
				lbMostrarTortuga->Items->Add(" ");
			}

			if (Conejo[i] == 1 && Tortuga[i] == 1)
			{
				lbMostrarTortuga->Items->Add("OUCH!!");
			}
		}
		//Comprobación su hay ganador, es empate y si no sigue el ciclo.
		if (Tortuga[69] == 1 && Conejo[69] == 0)
		{
			lblInfo->Text = "LA TORTUGA GANA!";
			timerCarrera->Stop();
		}
		else if (Tortuga[69] == 0 && Conejo[69] == 1)
		{
			lblInfo->Text = "Vaya, ganó la liebre";
			timerCarrera->Stop();
		}
		else if (Tortuga[69] == 1 && Conejo[69] == 1)
		{
			lblInfo->Text = "Es empate!";
			timerCarrera->Stop();
		}

	}	
	private: System::Void btmCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}
};
}

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
	private: System::Windows::Forms::DataGridView^ dgvConejo;
	private: System::Windows::Forms::DataGridView^ dgvTortuga;
	private: System::Windows::Forms::ListBox^ lbMostrarConejo;
	private: System::Windows::Forms::ListBox^ lbMostrarTortuga;

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
			this->dgvConejo = (gcnew System::Windows::Forms::DataGridView());
			this->dgvTortuga = (gcnew System::Windows::Forms::DataGridView());
			this->lbMostrarConejo = (gcnew System::Windows::Forms::ListBox());
			this->lbMostrarTortuga = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvConejo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTortuga))->BeginInit();
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
			// dgvConejo
			// 
			this->dgvConejo->AllowUserToAddRows = false;
			this->dgvConejo->AllowUserToDeleteRows = false;
			this->dgvConejo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvConejo->Location = System::Drawing::Point(29, 146);
			this->dgvConejo->Name = L"dgvConejo";
			this->dgvConejo->RowHeadersWidth = 51;
			this->dgvConejo->RowTemplate->Height = 24;
			this->dgvConejo->Size = System::Drawing::Size(32, 34);
			this->dgvConejo->TabIndex = 2;
			// 
			// dgvTortuga
			// 
			this->dgvTortuga->AllowUserToAddRows = false;
			this->dgvTortuga->AllowUserToDeleteRows = false;
			this->dgvTortuga->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTortuga->Location = System::Drawing::Point(29, 214);
			this->dgvTortuga->Name = L"dgvTortuga";
			this->dgvTortuga->RowHeadersWidth = 51;
			this->dgvTortuga->RowTemplate->Height = 24;
			this->dgvTortuga->Size = System::Drawing::Size(32, 34);
			this->dgvTortuga->TabIndex = 3;
			// 
			// lbMostrarConejo
			// 
			this->lbMostrarConejo->FormattingEnabled = true;
			this->lbMostrarConejo->ItemHeight = 16;
			this->lbMostrarConejo->Location = System::Drawing::Point(254, 12);
			this->lbMostrarConejo->Name = L"lbMostrarConejo";
			this->lbMostrarConejo->Size = System::Drawing::Size(56, 676);
			this->lbMostrarConejo->TabIndex = 4;
			// 
			// lbMostrarTortuga
			// 
			this->lbMostrarTortuga->FormattingEnabled = true;
			this->lbMostrarTortuga->ItemHeight = 16;
			this->lbMostrarTortuga->Location = System::Drawing::Point(336, 12);
			this->lbMostrarTortuga->Name = L"lbMostrarTortuga";
			this->lbMostrarTortuga->Size = System::Drawing::Size(58, 676);
			this->lbMostrarTortuga->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 707);
			this->Controls->Add(this->lbMostrarTortuga);
			this->Controls->Add(this->lbMostrarConejo);
			this->Controls->Add(this->dgvTortuga);
			this->Controls->Add(this->dgvConejo);
			this->Controls->Add(this->btmCarrera);
			this->Controls->Add(this->lblDisplay);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvConejo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTortuga))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btmCarrera_Click(System::Object^ sender, System::EventArgs^ e) {
		char Conejo[70];
		char Tortuga[70];
		/*Conejo[0] = 'C';
		Tortuga[0] = 'T';*/

		for (int i = 0; i < 70; i++)
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
		}
		for (int i = 0; i < 70; i++)
		{
			if (i==0)
			{
				Conejo[i] = 'C';
				lbMostrarConejo->Items->Add(1);
			}
			else
			{
				Conejo[i] = ' ';
				lbMostrarConejo->Items->Add(0);
			}
		}

		for (int i = 0; i < 70; i++)
		{
			if (i == 0)
			{
				Tortuga[i] = 'C';
				lbMostrarTortuga->Items->Add(1);
			}
			else
			{
				Tortuga[i] = ' ';
				lbMostrarTortuga->Items->Add(0);
			}
		}

		int Num = rand() % 11;
		lblDisplay->Text = "" + Num;

	}
};
}

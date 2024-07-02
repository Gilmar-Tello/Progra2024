#pragma once

namespace Tarea20240504 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FORM2
	/// </summary>
	public ref class FORM2 : public System::Windows::Forms::Form
	{
	public:
		FORM2(void)
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
		~FORM2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtVIN;
	private: System::Windows::Forms::TextBox^ txtMotor;
	private: System::Windows::Forms::TextBox^ txtAnio;
	private: System::Windows::Forms::TextBox^ txtLinea;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ cmbTipoMotor;
	private: System::Windows::Forms::ComboBox^ cmbTipoDeVehiculo;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtVIN = (gcnew System::Windows::Forms::TextBox());
			this->txtMotor = (gcnew System::Windows::Forms::TextBox());
			this->txtAnio = (gcnew System::Windows::Forms::TextBox());
			this->txtLinea = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->cmbTipoMotor = (gcnew System::Windows::Forms::ComboBox());
			this->cmbTipoDeVehiculo = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(104, 364);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 31);
			this->label7->TabIndex = 27;
			this->label7->Text = L"VIN";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(101, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 31);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Motor";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(104, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 31);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Año";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(101, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 31);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Linea";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(101, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 31);
			this->label3->TabIndex = 23;
			this->label3->Text = L"T. Vehiculo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 31);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Motor";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 31);
			this->label1->TabIndex = 21;
			this->label1->Text = L"ID";
			// 
			// txtVIN
			// 
			this->txtVIN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtVIN->Location = System::Drawing::Point(257, 361);
			this->txtVIN->Name = L"txtVIN";
			this->txtVIN->Size = System::Drawing::Size(332, 38);
			this->txtVIN->TabIndex = 20;
			// 
			// txtMotor
			// 
			this->txtMotor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMotor->Location = System::Drawing::Point(257, 317);
			this->txtMotor->Name = L"txtMotor";
			this->txtMotor->Size = System::Drawing::Size(332, 38);
			this->txtMotor->TabIndex = 19;
			// 
			// txtAnio
			// 
			this->txtAnio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAnio->Location = System::Drawing::Point(257, 273);
			this->txtAnio->Name = L"txtAnio";
			this->txtAnio->Size = System::Drawing::Size(331, 38);
			this->txtAnio->TabIndex = 18;
			// 
			// txtLinea
			// 
			this->txtLinea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLinea->Location = System::Drawing::Point(257, 229);
			this->txtLinea->Name = L"txtLinea";
			this->txtLinea->Size = System::Drawing::Size(332, 38);
			this->txtLinea->TabIndex = 17;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(257, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(332, 38);
			this->textBox1->TabIndex = 16;
			// 
			// cmbTipoMotor
			// 
			this->cmbTipoMotor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbTipoMotor->FormattingEnabled = true;
			this->cmbTipoMotor->Location = System::Drawing::Point(257, 130);
			this->cmbTipoMotor->Name = L"cmbTipoMotor";
			this->cmbTipoMotor->Size = System::Drawing::Size(332, 39);
			this->cmbTipoMotor->TabIndex = 15;
			// 
			// cmbTipoDeVehiculo
			// 
			this->cmbTipoDeVehiculo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmbTipoDeVehiculo->FormattingEnabled = true;
			this->cmbTipoDeVehiculo->Location = System::Drawing::Point(257, 184);
			this->cmbTipoDeVehiculo->Name = L"cmbTipoDeVehiculo";
			this->cmbTipoDeVehiculo->Size = System::Drawing::Size(332, 39);
			this->cmbTipoDeVehiculo->TabIndex = 14;
			// 
			// FORM2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 486);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtVIN);
			this->Controls->Add(this->txtMotor);
			this->Controls->Add(this->txtAnio);
			this->Controls->Add(this->txtLinea);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->cmbTipoMotor);
			this->Controls->Add(this->cmbTipoDeVehiculo);
			this->Name = L"FORM2";
			this->Text = L"FORM2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

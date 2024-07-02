#pragma once
#include <string>
namespace Clase20Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmVentana2
	/// </summary>
	public ref class frmVentana2 : public System::Windows::Forms::Form
	{
	public:
		frmVentana2(String^ parametro)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			nombre = parametro;
		}
		frmVentana2(void)
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
		~frmVentana2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNombre;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		String^ nombre;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombre->Location = System::Drawing::Point(39, 78);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(193, 28);
			this->lblNombre->TabIndex = 0;
			this->lblNombre->Text = L"lblnombre";
			// 
			// frmVentana2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->lblNombre);
			this->Name = L"frmVentana2";
			this->Text = L"frmVentana2";
			this->Load += gcnew System::EventHandler(this, &frmVentana2::frmVentana2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmVentana2_Load(System::Object^ sender, System::EventArgs^ e) {
		lblNombre->Text = nombre;
	}	  
	};
}

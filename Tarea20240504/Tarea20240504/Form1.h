#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include "Vehiculo.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;


namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;
  using namespace System;
  using namespace System::Collections::Generic;



  /// <summary>
  /// Summary for Form1
  /// </summary>44
  /// 
  /// 
  /// 
  std::string valorTipoDeVehiculoCMB;
  std::string valorTipoDeMotorCMB;
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::ComboBox^ cmbTipoMotor;
  private: System::Windows::Forms::TextBox^ txtId;
  protected:


  private: System::Windows::Forms::TextBox^ txtLinea;
  private: System::Windows::Forms::TextBox^ txtAnio;
  private: System::Windows::Forms::TextBox^ txtMotor;
  private: System::Windows::Forms::TextBox^ txtVIN;




  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ label2;
  protected:

  protected:
  private: 
      System::String^ selectedItemTipoVehiculo;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Label^ label5;
  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::Label^ label7;
  private: System::Windows::Forms::Label^ label8;
  private: System::Windows::Forms::Button^ button1;


  private: System::Windows::Forms::ComboBox^ cmbTipoDeVehiculo;

      




  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container^ components;
    System::String^ selectedItemTipoMotor;
  private: System::Windows::Forms::DataGridView^ grdVehiculos;



         // Crear una lista de vehículos
    List<Vehiculo^>^ Lista_vehiculos = gcnew List<Vehiculo^>();


    void AgregarTiposDeVehiculos(System::Windows::Forms::ComboBox^ comboBox) {
        // Iterar sobre todos los valores del enum TipoVehiculo
        for (int i = 0; i < Enum::GetValues(TipoVehiculo::typeid)->Length; ++i) {
            comboBox->Items->Add(Enum::GetName(TipoVehiculo::typeid, i));
        }
        // SE CREA LA LISTA PARA GUARDA CADA OBJETO DE TIPO VEHÍCULO
      
    }

    void AgregarTiposMotor(System::Windows::Forms::ComboBox^ comboBox) {
        // Iterar sobre todos los valores del enum TipoVehiculo
        for (int i = 0; i < Enum::GetValues(TipoMotor::typeid)->Length; ++i) {
            comboBox->Items->Add(Enum::GetName(TipoMotor::typeid, i));
        }
    }

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->cmbTipoDeVehiculo = (gcnew System::Windows::Forms::ComboBox());
        this->cmbTipoMotor = (gcnew System::Windows::Forms::ComboBox());
        this->txtId = (gcnew System::Windows::Forms::TextBox());
        this->txtLinea = (gcnew System::Windows::Forms::TextBox());
        this->txtAnio = (gcnew System::Windows::Forms::TextBox());
        this->txtMotor = (gcnew System::Windows::Forms::TextBox());
        this->txtVIN = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->grdVehiculos = (gcnew System::Windows::Forms::DataGridView());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdVehiculos))->BeginInit();
        this->SuspendLayout();
        // 
        // cmbTipoDeVehiculo
        // 
        this->cmbTipoDeVehiculo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->cmbTipoDeVehiculo->FormattingEnabled = true;
        this->cmbTipoDeVehiculo->Location = System::Drawing::Point(168, 195);
        this->cmbTipoDeVehiculo->Name = L"cmbTipoDeVehiculo";
        this->cmbTipoDeVehiculo->Size = System::Drawing::Size(332, 39);
        this->cmbTipoDeVehiculo->TabIndex = 0;
        // 
        // cmbTipoMotor
        // 
        this->cmbTipoMotor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->cmbTipoMotor->FormattingEnabled = true;
        this->cmbTipoMotor->Location = System::Drawing::Point(168, 141);
        this->cmbTipoMotor->Name = L"cmbTipoMotor";
        this->cmbTipoMotor->Size = System::Drawing::Size(332, 39);
        this->cmbTipoMotor->TabIndex = 1;
        // 
        // txtId
        // 
        this->txtId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->txtId->Location = System::Drawing::Point(168, 98);
        this->txtId->Name = L"txtId";
        this->txtId->Size = System::Drawing::Size(332, 38);
        this->txtId->TabIndex = 2;
        // 
        // txtLinea
        // 
        this->txtLinea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->txtLinea->Location = System::Drawing::Point(168, 240);
        this->txtLinea->Name = L"txtLinea";
        this->txtLinea->Size = System::Drawing::Size(332, 38);
        this->txtLinea->TabIndex = 3;
        // 
        // txtAnio
        // 
        this->txtAnio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->txtAnio->Location = System::Drawing::Point(168, 284);
        this->txtAnio->Name = L"txtAnio";
        this->txtAnio->Size = System::Drawing::Size(331, 38);
        this->txtAnio->TabIndex = 4;
        // 
        // txtMotor
        // 
        this->txtMotor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->txtMotor->Location = System::Drawing::Point(168, 328);
        this->txtMotor->Name = L"txtMotor";
        this->txtMotor->Size = System::Drawing::Size(332, 38);
        this->txtMotor->TabIndex = 5;
        // 
        // txtVIN
        // 
        this->txtVIN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->txtVIN->Location = System::Drawing::Point(168, 372);
        this->txtVIN->Name = L"txtVIN";
        this->txtVIN->Size = System::Drawing::Size(332, 38);
        this->txtVIN->TabIndex = 6;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->Location = System::Drawing::Point(12, 101);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(42, 31);
        this->label1->TabIndex = 7;
        this->label1->Text = L"ID";
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label2->Location = System::Drawing::Point(12, 144);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(143, 31);
        this->label2->TabIndex = 8;
        this->label2->Text = L"Tipo Motor";
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->Location = System::Drawing::Point(12, 203);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(150, 31);
        this->label3->TabIndex = 9;
        this->label3->Text = L"T. Vehiculo";
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label4->Location = System::Drawing::Point(12, 247);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(80, 31);
        this->label4->TabIndex = 10;
        this->label4->Text = L"Linea";
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label5->Location = System::Drawing::Point(15, 287);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(62, 31);
        this->label5->TabIndex = 11;
        this->label5->Text = L"Año";
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label6->Location = System::Drawing::Point(12, 331);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(83, 31);
        this->label6->TabIndex = 12;
        this->label6->Text = L"Motor";
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label7->Location = System::Drawing::Point(15, 375);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(60, 31);
        this->label7->TabIndex = 13;
        this->label7->Text = L"VIN";
        // 
        // label8
        // 
        this->label8->AutoSize = true;
        this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label8->Location = System::Drawing::Point(42, 9);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(608, 73);
        this->label8->TabIndex = 14;
        this->label8->Text = L"FORM VEHICULOS";
        // 
        // button1
        // 
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(543, 144);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(213, 38);
        this->button1->TabIndex = 15;
        this->button1->Text = L"Agregar";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // grdVehiculos
        // 
        this->grdVehiculos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->grdVehiculos->Location = System::Drawing::Point(100, 461);
        this->grdVehiculos->Name = L"grdVehiculos";
        this->grdVehiculos->Size = System::Drawing::Size(550, 150);
        this->grdVehiculos->TabIndex = 16;
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(777, 652);
        this->Controls->Add(this->grdVehiculos);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->label8);
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
        this->Controls->Add(this->txtId);
        this->Controls->Add(this->cmbTipoMotor);
        this->Controls->Add(this->cmbTipoDeVehiculo);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grdVehiculos))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.



  private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
     AgregarTiposDeVehiculos(cmbTipoDeVehiculo);
     AgregarTiposMotor(cmbTipoMotor);

  }
  private: System::Void cmbTipoDeVehiculo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
  
      // Obtener el elemento seleccionado
     selectedItemTipoVehiculo = cmbTipoDeVehiculo->SelectedItem->ToString();

      // Mostrar el elemento seleccionado en la consola
      
  }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
   
    Vehiculo^ itemVehiculo = gcnew Vehiculo();

    int idVehiculo  = Int32::Parse(txtId->Text); // Convierte un texto a entero
    itemVehiculo->setIdVehiculo(idVehiculo);

    int anio = Int32::Parse(txtAnio->Text);
    itemVehiculo->setAnio(anio);

    itemVehiculo->setLinea(txtLinea->Text);
    itemVehiculo->setMotor(txtMotor->Text);
    
    // Obtener el índice seleccionado
    int seleccionarPosicionCMBTipoMotor = cmbTipoMotor->SelectedIndex;
    int seleccionarPosicionCMBTipoVehiculo = cmbTipoDeVehiculo->SelectedIndex;

    // Convertir el índice al enum TipoMotor
    TipoMotor motorSeleccionado = static_cast<TipoMotor>(seleccionarPosicionCMBTipoMotor);
    TipoVehiculo VehiculoSeleccionado = static_cast<TipoVehiculo>(seleccionarPosicionCMBTipoVehiculo);

    // Establecer el tipo de motor en el objeto Vehiculo
    itemVehiculo->setTipoMotor(motorSeleccionado);
    itemVehiculo->setTipoVehiculo(VehiculoSeleccionado);
    itemVehiculo->setVinNumber(txtVIN->Text);
    
    Lista_vehiculos->Add(itemVehiculo);

    
    this->grdVehiculos->DataSource = ListToDataTable(Lista_vehiculos);

   
  
}
                //FUNCION QUE SE REALIZA PARA QUE SE MUESTRE EN LA GRIDVIEW
              DataTable^ ListToDataTable(List<Vehiculo^>^ vehiculos)
              {
                  // Crear un DataTable
                  DataTable^ dataTable = gcnew DataTable();

                  // Agregar columnas correspondientes a las propiedades de Vehiculo
                  dataTable->Columns->Add("ID Vehiculo", System::Type::GetType("System.Int32"));
                  dataTable->Columns->Add("Línea", System::Type::GetType("System.String"));
                  dataTable->Columns->Add("Año", System::Type::GetType("System.Int32"));
                  dataTable->Columns->Add("Motor", System::Type::GetType("System.String"));
                  dataTable->Columns->Add("Tipo Vehiculo", System::Type::GetType("System.String"));
                  dataTable->Columns->Add("Tipo Motor", System::Type::GetType("System.String"));
                  dataTable->Columns->Add("VIN", System::Type::GetType("System.String"));

                  // Agregar filas para cada objeto Vehiculo
                  for each (Vehiculo ^ vehiculo in vehiculos)
                  {
                      DataRow^ row = dataTable->NewRow();
                      row["ID Vehiculo"] = vehiculo->getIdVehiculo();
                      row["Línea"] = vehiculo->getLinea();
                      row["Año"] = vehiculo->getAnio();
                      row["Motor"] = vehiculo->getMotor();
                      row["Tipo Vehiculo"] = vehiculo->getTipoVehiculo().ToString();
                      row["Tipo Motor"] = vehiculo->getTipoMotor().ToString();
                      row["VIN"] = vehiculo->getVinNumber();

                      dataTable->Rows->Add(row);
                  }

                  return dataTable;
              }
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject


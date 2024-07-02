#pragma once

#include "MySQLConnector.h"

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        MySQLConnector^ connector;
        public:
            MySqlConnection^ connection;

        Form1(void)
        {
            InitializeComponent();
            /**/connector = gcnew MySQLConnector();
            /**/connection = gcnew MySqlConnection(connector->connectionString);
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;

    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::DataGridView^ dataGridView1;


    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->label6 = (gcnew System::Windows::Forms::Label());
               this->label7 = (gcnew System::Windows::Forms::Label());
               this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->textBox4 = (gcnew System::Windows::Forms::TextBox());
               this->textBox5 = (gcnew System::Windows::Forms::TextBox());
               this->textBox6 = (gcnew System::Windows::Forms::TextBox());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->button3 = (gcnew System::Windows::Forms::Button());
               this->button4 = (gcnew System::Windows::Forms::Button());
               this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(21, 96);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(56, 16);
               this->label1->TabIndex = 0;
               this->label1->Text = L"Nombre";
               // 
               // textBox2
               // 
               this->textBox2->Location = System::Drawing::Point(100, 96);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(263, 22);
               this->textBox2->TabIndex = 1;
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(21, 144);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(31, 16);
               this->label3->TabIndex = 2;
               this->label3->Text = L"Año";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(21, 209);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(108, 16);
               this->label4->TabIndex = 3;
               this->label4->Text = L"País Fabricación";
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Location = System::Drawing::Point(403, 96);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(42, 16);
               this->label5->TabIndex = 4;
               this->label5->Text = L"Placa";
               // 
               // label6
               // 
               this->label6->AutoSize = true;
               this->label6->Location = System::Drawing::Point(403, 144);
               this->label6->Name = L"label6";
               this->label6->Size = System::Drawing::Size(45, 16);
               this->label6->TabIndex = 5;
               this->label6->Text = L"Marca";
               // 
               // label7
               // 
               this->label7->AutoSize = true;
               this->label7->Location = System::Drawing::Point(403, 209);
               this->label7->Name = L"label7";
               this->label7->Size = System::Drawing::Size(45, 16);
               this->label7->TabIndex = 6;
               this->label7->Text = L"Fecha";
               // 
               // dateTimePicker1
               // 
               this->dateTimePicker1->Location = System::Drawing::Point(481, 209);
               this->dateTimePicker1->Name = L"dateTimePicker1";
               this->dateTimePicker1->Size = System::Drawing::Size(263, 22);
               this->dateTimePicker1->TabIndex = 11;
               // 
               // textBox3
               // 
               this->textBox3->Location = System::Drawing::Point(100, 144);
               this->textBox3->Name = L"textBox3";
               this->textBox3->Size = System::Drawing::Size(263, 22);
               this->textBox3->TabIndex = 2;
               // 
               // textBox4
               // 
               this->textBox4->Location = System::Drawing::Point(481, 96);
               this->textBox4->Name = L"textBox4";
               this->textBox4->Size = System::Drawing::Size(263, 22);
               this->textBox4->TabIndex = 4;
               // 
               // textBox5
               // 
               this->textBox5->Location = System::Drawing::Point(481, 144);
               this->textBox5->Name = L"textBox5";
               this->textBox5->Size = System::Drawing::Size(263, 22);
               this->textBox5->TabIndex = 5;
               // 
               // textBox6
               // 
               this->textBox6->Location = System::Drawing::Point(149, 209);
               this->textBox6->Name = L"textBox6";
               this->textBox6->Size = System::Drawing::Size(214, 22);
               this->textBox6->TabIndex = 3;
               // 
               // button1
               // 
               this->button1->Location = System::Drawing::Point(24, 270);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(75, 23);
               this->button1->TabIndex = 12;
               this->button1->Text = L"Agregar";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
               // 
               // button2
               // 
               this->button2->Location = System::Drawing::Point(149, 270);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(75, 23);
               this->button2->TabIndex = 13;
               this->button2->Text = L"Modificar";
               this->button2->UseVisualStyleBackColor = true;
               this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
               // 
               // button3
               // 
               this->button3->Location = System::Drawing::Point(274, 270);
               this->button3->Name = L"button3";
               this->button3->Size = System::Drawing::Size(75, 23);
               this->button3->TabIndex = 14;
               this->button3->Text = L"Eliminar";
               this->button3->UseVisualStyleBackColor = true;
               this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
               // 
               // button4
               // 
               this->button4->Location = System::Drawing::Point(400, 270);
               this->button4->Name = L"button4";
               this->button4->Size = System::Drawing::Size(75, 23);
               this->button4->TabIndex = 15;
               this->button4->Text = L"Mostrar";
               this->button4->UseVisualStyleBackColor = true;
               this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
               // 
               // dataGridView1
               // 
               this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView1->Location = System::Drawing::Point(24, 313);
               this->dataGridView1->Name = L"dataGridView1";
               this->dataGridView1->RowHeadersWidth = 51;
               this->dataGridView1->RowTemplate->Height = 24;
               this->dataGridView1->Size = System::Drawing::Size(720, 207);
               this->dataGridView1->TabIndex = 16;
               // 
               // Form1
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(782, 553);
               this->Controls->Add(this->dataGridView1);
               this->Controls->Add(this->button4);
               this->Controls->Add(this->button3);
               this->Controls->Add(this->button2);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->textBox6);
               this->Controls->Add(this->textBox5);
               this->Controls->Add(this->textBox4);
               this->Controls->Add(this->textBox3);
               this->Controls->Add(this->dateTimePicker1);
               this->Controls->Add(this->label7);
               this->Controls->Add(this->label6);
               this->Controls->Add(this->label5);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->textBox2);
               this->Controls->Add(this->label1);
               this->Name = L"Form1";
               this->Text = L"Form1";
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (connector->OpenConnection()) {
            try {
                String^ nombre = textBox2->Text;
                int anio = Convert::ToInt32(textBox3->Text);
                String^ pais = textBox6->Text;
                String^ placa = textBox4->Text;
                String^ marca = textBox5->Text;
                // Suponiendo que tienes una columna de ID en el DataGridView y TextBox oculto para ID
               

                MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE vehiculo SET nombre = @nombre, ANIO = @anio, PAIS_FABRICACION = @pais, PLACA = @placa, MARCA = @marca WHERE ID = @id", connector->getConnection());

                cmd->Parameters->AddWithValue("@nombre", nombre);
                cmd->Parameters->AddWithValue("@anio", anio);
                cmd->Parameters->AddWithValue("@pais", pais);
                cmd->Parameters->AddWithValue("@placa", placa);
                cmd->Parameters->AddWithValue("@marca", marca);
                cmd->ExecuteNonQuery();

                MessageBox::Show("Datos actualizados correctamente.");

                // Actualiza el DataGridView
                UpdateDataGridView();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message);
            }
            finally {
                connector->CloseConnection();
            }
        }
        else {
            MessageBox::Show("No se pudo abrir la conexión a la base de datos.");
        }
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (connector->OpenConnection()) {
            try {
                
                String^ nombre = textBox2->Text;
                int anio = Convert::ToInt32(textBox3->Text);
                String^ pais = textBox6->Text;
                String^ placa = textBox4->Text;
                String^ marca = textBox5->Text;
                DateTime fecha = dateTimePicker1->Value;

                MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE vehiculo SET NOMBRE = @nombre, ANIO = @anio, PAIS_FABRICACION = @pais, PLACA = @placa, MARCA = @marca, FECHA = @fecha WHERE", connector->getConnection());
                
                cmd->Parameters->AddWithValue("@nombre", nombre);
                cmd->Parameters->AddWithValue("@anio", anio);
                cmd->Parameters->AddWithValue("@pais", pais);
                cmd->Parameters->AddWithValue("@placa", placa);
                cmd->Parameters->AddWithValue("@marca", marca);
                cmd->Parameters->AddWithValue("@fecha", fecha);
                cmd->ExecuteNonQuery();
                MessageBox::Show("Datos actualizados correctamente.");
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message);
            }
            finally {
                connector->CloseConnection();
            }
        }
        else {
            MessageBox::Show("No se pudo abrir la conexión a la base de datos.");
        }
    }

    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        if (connector->OpenConnection()) {
            try {

                MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM vehiculo WHERE ID = @id", connector->getConnection());
                
                cmd->ExecuteNonQuery();
                MessageBox::Show("Datos eliminados correctamente.");
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message);
            }
            finally {
                connector->CloseConnection();
            }
        }
        else {
            MessageBox::Show("No se pudo abrir la conexión a la base de datos.");
        }
    }

    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        if (connector->OpenConnection()) {
            try {
                MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT * FROM vehiculo", connector->getConnection());
                DataTable^ dt = gcnew DataTable();
                sda->Fill(dt);

                dataGridView1->DataSource = dt;

            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message);
            }
            finally {
                connector->CloseConnection();
            }
        }
        else {
            MessageBox::Show("No se pudo abrir la conexión a la base de datos.");
        }
    }
           private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
               if (dataGridView1->SelectedRows->Count > 0) {
                   DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
                   textBox2->Text = selectedRow->Cells["NOMBRE"]->Value->ToString();
                   textBox3->Text = selectedRow->Cells["ANIO"]->Value->ToString();
                   textBox6->Text = selectedRow->Cells["PAIS_FABRICACION"]->Value->ToString();
                   textBox4->Text = selectedRow->Cells["PLACA"]->Value->ToString();
                   textBox5->Text = selectedRow->Cells["MARCA"]->Value->ToString();
               }
           }

                  private: System::Void UpdateDataGridView() {
                      try {
                          MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT * FROM vehiculo", connector->getConnection());
                          DataTable^ dt = gcnew DataTable();
                          sda->Fill(dt);
                          dataGridView1->DataSource = dt;
                      }
                      catch (Exception^ ex) {
                          MessageBox::Show("Error: " + ex->Message);
                      }
                  }

    };
}

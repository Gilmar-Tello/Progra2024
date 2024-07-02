#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//agrega la conexión a la base de datos
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
		//código conexión sql
	private: String^ connectionString = "datasource=localhost;username=root;password=;database=colegio";
	private: MySqlConnection^ connector = gcnew MySqlConnection(connectionString);

	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(349, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CURSOS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CURSO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 38);
			this->label3->TabIndex = 2;
			this->label3->Text = L"SECCION";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"JORNADA";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(349, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 38);
			this->label5->TabIndex = 4;
			this->label5->Text = L"CUPO";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(652, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 49);
			this->button1->TabIndex = 5;
			this->button1->Text = L"CREAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(638, 122);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 45);
			this->button2->TabIndex = 6;
			this->button2->Text = L"MOSTRAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(626, 179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(243, 54);
			this->button3->TabIndex = 7;
			this->button3->Text = L"ACTUALIZAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(640, 245);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(189, 47);
			this->button4->TabIndex = 8;
			this->button4->Text = L"ELIMINAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(159, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(459, 45);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(199, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(419, 45);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(192, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 45);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(471, 223);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(147, 45);
			this->textBox4->TabIndex = 12;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(19, 316);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(832, 206);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &Form1::dataGridView1_SelectionChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 534);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		// Nueva función para obtener los datos de la base de datos y llenar el DataGridView
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->DataSource = ObtenerUsuarios();
		// Asegúrate de que las columnas están configuradas correctamente
		if (dataGridView1->Columns["idCurso"] == nullptr) {
			dataGridView1->Columns->Add("idCurso", "Curso ID");
		}
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   DataTable^ ObtenerUsuarios() {
			   MySqlCommand^ cmd = gcnew MySqlCommand("SELECT idCurso, nombreCurso, seccion, jornada, cupo FROM curso", connector);
			   MySqlDataAdapter^ da = gcnew MySqlDataAdapter(cmd);
			   DataTable^ dt = gcnew DataTable();

			   try {
				   da->Fill(dt);
				   return dt;
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error: " + ex->Message);
				   return nullptr;
			   }
		   }

	private: void MostrarCursos() {
		// Cadena de conexión a la base de datos
		String^ connectionString = "datasource=localhost;username=root;password=;database=colegio";
		MySqlConnection^ connector = gcnew MySqlConnection(connectionString);

		try {
			// Abrir la conexión
			connector->Open();

			// Crear el comando SQL para obtener los cursos
			String^ query = "SELECT idCurso, nombreCurso, seccion, jornada, cupo FROM curso";
			MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter(query, connector);
			DataTable^ dataTable = gcnew DataTable();
			dataAdapter->Fill(dataTable);

			// Mostrar los datos en el DataGridView
			dataGridView1->DataSource = dataTable;
		}
		catch (Exception^ ex) {
			// Manejar cualquier error que ocurra
			MessageBox::Show("Error al mostrar los cursos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Cerrar la conexión
			connector->Close();
		}
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Obtener los valores de los TextBox
		String^ curso = textBox1->Text;
		String^ seccion = textBox3->Text;
		String^ jornada = textBox2->Text;
		int cupo;

		// Validar que el campo cupo sea un número entero
		try {
			cupo = Int32::Parse(textBox4->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Por favor, ingrese un número válido para el cupo.", "Error de entrada", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Cadena de conexión a la base de datos
		String^ connectionString = "datasource=localhost;username=root;password=;database=colegio";
		MySqlConnection^ connector = gcnew MySqlConnection(connectionString);

		try {
			// Abrir la conexión
			connector->Open();

			// Crear el comando SQL para insertar el nuevo curso
			String^ query = "INSERT INTO curso (nombreCurso, seccion, jornada, cupo) VALUES (@nombreCurso, @seccion, @jornada, @cupo)";
			MySqlCommand^ cmd = gcnew MySqlCommand(query, connector);

			// Agregar los parámetros
			cmd->Parameters->AddWithValue("@nombreCurso", curso);
			cmd->Parameters->AddWithValue("@seccion", seccion);
			cmd->Parameters->AddWithValue("@jornada", jornada);
			cmd->Parameters->AddWithValue("@cupo", cupo);

			// Ejecutar el comando
			cmd->ExecuteNonQuery();

			// Mostrar mensaje de éxito
			MessageBox::Show("Curso agregado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			// Manejar cualquier error que ocurra
			MessageBox::Show("Error al agregar el curso: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Cerrar la conexión
			connector->Close();
		}

		// Limpiar los TextBox después de agregar el curso
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();

		//llama a la funcion para mostrar registros
		dataGridView1->DataSource = ObtenerUsuarios();
	}
	//FUNCION SELECCION DATAGRID
	private: System::Void dataGridView1_SelectionChanged(System::Object ^ sender, System::EventArgs ^ e) {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			if (selectedRow->Cells["nombreCurso"] != nullptr)
				textBox1->Text = selectedRow->Cells["nombreCurso"]->Value->ToString();
			if (selectedRow->Cells["seccion"] != nullptr)
				textBox3->Text = selectedRow->Cells["seccion"]->Value->ToString();
			if (selectedRow->Cells["jornada"] != nullptr)
				textBox2->Text = selectedRow->Cells["jornada"]->Value->ToString();
			if (selectedRow->Cells["fecha_de_creacion"] != nullptr)
				textBox4->Text = selectedRow->Cells["fecha_de_creacion"]->Value->ToString();
		}
	}

	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Obtener los valores de los TextBox
		String^ curso = textBox1->Text;
		String^ seccion = textBox3->Text;
		String^ jornada = textBox2->Text;
		int cupo;

		// Validar que el campo cupo sea un número entero
		try {
			cupo = Int32::Parse(textBox4->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Por favor, ingrese un número válido para el cupo.", "Error de entrada", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Obtener el ID del curso seleccionado para actualizar el registro
		if (dataGridView1->SelectedRows->Count > 0) {
			int selectedRowIndex = dataGridView1->SelectedRows[0]->Index;
			if (dataGridView1->Rows[selectedRowIndex]->Cells["idCurso"] != nullptr) {
				int idCurso = Convert::ToInt32(dataGridView1->Rows[selectedRowIndex]->Cells["idCurso"]->Value);

				// Cadena de conexión a la base de datos
				String^ connectionString = "datasource=localhost;username=root;password=;database=colegio";
				MySqlConnection^ connector = gcnew MySqlConnection(connectionString);

				try {
					// Abrir la conexión
					connector->Open();

					// Crear el comando SQL para actualizar el curso
					String^ query = "UPDATE curso SET nombreCurso = @curso, seccion = @seccion, jornada = @jornada, cupo = @cupo WHERE idCurso = @idCurso";
					MySqlCommand^ cmd = gcnew MySqlCommand(query, connector);

					// Agregar los parámetros
					cmd->Parameters->AddWithValue("@curso", curso);
					cmd->Parameters->AddWithValue("@seccion", seccion);
					cmd->Parameters->AddWithValue("@jornada", jornada);
					cmd->Parameters->AddWithValue("@cupo", cupo);
					cmd->Parameters->AddWithValue("@idCurso", idCurso);

					// Ejecutar el comando
					cmd->ExecuteNonQuery();

					// Mostrar mensaje de éxito
					MessageBox::Show("Curso actualizado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					// Manejar cualquier error que ocurra
					MessageBox::Show("Error al actualizar el curso: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				finally {
					// Cerrar la conexión
					connector->Close();
				}

				textBox1->Clear();
				textBox2->Clear();
				textBox3->Clear();
				textBox4->Clear();

				// Actualizar el DataGridView para reflejar los cambios
				MostrarCursos();
			}
		}
		else {
			MessageBox::Show("Por favor, seleccione un curso para actualizar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		int selectedRowIndex = dataGridView1->SelectedRows[0]->Index;
		int idCurso = Convert::ToInt32(dataGridView1->Rows[selectedRowIndex]->Cells["idCurso"]->Value);

		// Cadena de conexión a la base de datos
		String^ connectionString = "datasource=localhost;username=root;password=;database=colegio";
		MySqlConnection^ connector = gcnew MySqlConnection(connectionString);

		try {
			// Abrir la conexión
			connector->Open();

			// Crear el comando SQL para eliminar el curso
			String^ query = "DELETE FROM curso WHERE idCurso = @idCurso";
			MySqlCommand^ cmd = gcnew MySqlCommand(query, connector);

			// Agregar el parámetro
			cmd->Parameters->AddWithValue("@idCurso", idCurso);

			// Ejecutar el comando
			cmd->ExecuteNonQuery();

			// Mostrar mensaje de éxito
			MessageBox::Show("Curso eliminado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			// Manejar cualquier error que ocurra
			MessageBox::Show("Error al eliminar el curso: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Cerrar la conexión
			connector->Close();
		}

		// Actualizar el DataGridView para reflejar los cambios
		MostrarCursos();
	}
	else {
		MessageBox::Show("Por favor, seleccione un curso para eliminar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};

}


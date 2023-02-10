#pragma once
#include "DB_class.h"
#include "modificar.h"
#include "conftodo.h"
#include "xlsxwriter.h"
#include <iostream>


using namespace System::Runtime::InteropServices;
using namespace std;


namespace inventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Resumen de verdatos
	/// </summary>
	public ref class verdatos : public System::Windows::Forms::Form
	{
	public:
		verdatos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB_class();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~verdatos()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;



	public: System::Windows::Forms::DataGridView^ grid_db;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_borrarTODO;
	private: System::Windows::Forms::Button^ btn_excel;
	private: System::Windows::Forms::Button^ button1;

	public:
	private:

	public:


	private: DB_class^ data;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->grid_db = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_borrarTODO = (gcnew System::Windows::Forms::Button());
			this->btn_excel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_db))->BeginInit();
			this->SuspendLayout();
			// 
			// grid_db
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->grid_db->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->grid_db->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->grid_db->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->grid_db->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->grid_db->BackgroundColor = System::Drawing::Color::Snow;
			this->grid_db->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grid_db->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->grid_db->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ScrollBar;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->grid_db->DefaultCellStyle = dataGridViewCellStyle3;
			this->grid_db->Location = System::Drawing::Point(12, 74);
			this->grid_db->Name = L"grid_db";
			this->grid_db->ReadOnly = true;
			this->grid_db->RowHeadersVisible = false;
			this->grid_db->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->grid_db->Size = System::Drawing::Size(966, 530);
			this->grid_db->TabIndex = 0;
			this->grid_db->DoubleClick += gcnew System::EventHandler(this, &verdatos::grid_db_DoubleClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 607);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(848, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Para modificar o elminar un registro puede hacer doble click en el mismo o selecc"
				L"ionarlo y presionar el botón de Modificar/Eliminar";
			// 
			// btn_borrarTODO
			// 
			this->btn_borrarTODO->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_borrarTODO->BackColor = System::Drawing::Color::Red;
			this->btn_borrarTODO->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_borrarTODO->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_borrarTODO->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_borrarTODO->Location = System::Drawing::Point(840, 12);
			this->btn_borrarTODO->Name = L"btn_borrarTODO";
			this->btn_borrarTODO->Size = System::Drawing::Size(138, 34);
			this->btn_borrarTODO->TabIndex = 2;
			this->btn_borrarTODO->Text = L"Borrar TODO";
			this->btn_borrarTODO->UseVisualStyleBackColor = false;
			this->btn_borrarTODO->Click += gcnew System::EventHandler(this, &verdatos::btn_borrarTODO_Click);
			// 
			// btn_excel
			// 
			this->btn_excel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_excel->BackColor = System::Drawing::Color::PaleGreen;
			this->btn_excel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_excel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_excel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_excel->Location = System::Drawing::Point(451, 12);
			this->btn_excel->Name = L"btn_excel";
			this->btn_excel->Size = System::Drawing::Size(138, 34);
			this->btn_excel->TabIndex = 1;
			this->btn_excel->Text = L"Exportar a Excel";
			this->btn_excel->UseVisualStyleBackColor = false;
			this->btn_excel->Click += gcnew System::EventHandler(this, &verdatos::btn_excel_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(40, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Modificar/Eliminar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &verdatos::button1_Click);
			// 
			// verdatos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(990, 650);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_excel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_borrarTODO);
			this->Controls->Add(this->grid_db);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"verdatos";
			this->Text = L"verdatos";
			this->Load += gcnew System::EventHandler(this, &verdatos::verdatos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_db))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	//clase template llamada T
	template<class T>
	//funcion que servira para mostrar el panel escogido
	void AbrirPanel(T FormHijo)
	{
		if (this->P_MOpcion->Controls->Count > 0)
			this->P_MOpcion->Controls->RemoveAt(0);
		FormHijo->TopLevel = false;
		FormHijo->Dock = DockStyle::Fill;
		this->P_MOpcion->Controls->Add(FormHijo);
		this->P_MOpcion->Tag = FormHijo;
		FormHijo->Show();
	}
#pragma endregion
		//apenas carga la vista activara la funcion que solicitara los datos
	private: System::Void verdatos_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
		this->grid_db->Columns["idinventario"]->Visible = false;
	}
	//funcion que hara la consulta a la tabla en la BD
	public: void Consulta() {
		//abre la BD
		this->data->AbrirConexion();
		//le entrega los datos a el gridview desde la query que esta en getData()
		this->grid_db->DataSource = this->data->getData();
		//cierra la BD
		this->data->CerrarConexion();
	}


	private: System::Void grid_db_DoubleClick(System::Object^ sender, System::EventArgs^ e) 
	{
		//toma los valores del gridview y los guarda en una variable
		String^ id = Convert::ToString(grid_db->SelectedRows[0]->Cells[0]->Value);
		String^ nombres = Convert::ToString(grid_db->SelectedRows[0]->Cells[1]->Value);
		String^ apellidos = Convert::ToString(grid_db->SelectedRows[0]->Cells[2]->Value);
		String^ rut = Convert::ToString(grid_db->SelectedRows[0]->Cells[3]->Value);
		String^ departamento = Convert::ToString(grid_db->SelectedRows[0]->Cells[4]->Value);
		String^ unidad = Convert::ToString(grid_db->SelectedRows[0]->Cells[5]->Value);
		String^ tipo_equipo = Convert::ToString(grid_db->SelectedRows[0]->Cells[6]->Value);
		String^ marca = Convert::ToString(grid_db->SelectedRows[0]->Cells[7]->Value);
		String^ modelo = Convert::ToString(grid_db->SelectedRows[0]->Cells[8]->Value);
		String^ serie = Convert::ToString(grid_db->SelectedRows[0]->Cells[9]->Value);
		String^ inventario = Convert::ToString(grid_db->SelectedRows[0]->Cells[10]->Value);
		String^ usuario = Convert::ToString(grid_db->SelectedRows[0]->Cells[11]->Value);
		String^ nombre_equipo = Convert::ToString(grid_db->SelectedRows[0]->Cells[12]->Value);
		String^ mac = Convert::ToString(grid_db->SelectedRows[0]->Cells[13]->Value);
		String^ memoria_ram = Convert::ToString(grid_db->SelectedRows[0]->Cells[14]->Value);
		String^ espacio_disco = Convert::ToString(grid_db->SelectedRows[0]->Cells[15]->Value);
		String^ procesador = Convert::ToString(grid_db->SelectedRows[0]->Cells[16]->Value);
		String^ version_windows = Convert::ToString(grid_db->SelectedRows[0]->Cells[17]->Value);
		String^ version_office = Convert::ToString(grid_db->SelectedRows[0]->Cells[18]->Value);
		String^ lojack = Convert::ToString(grid_db->SelectedRows[0]->Cells[19]->Value);


		//se crea un objeto llamado form del formulario modificar
		inventario::modificar^ form = gcnew inventario::modificar();
		//envia los valores hacia los inputs que estan en el form de modificar
		form->lbl_id->Text = id;
		form->lbl_usuariomod->Text = nombres;
		form->modificar_nombres->Text = nombres;
		form->modificar_apellidos->Text = apellidos;
		form->modificar_rut->Text = rut;
		form->modificarcbox_departamento->Text = departamento;
		form->modificarcbox_Unidad->Text = unidad;
		form->modificarcbox_tequipo->Text = tipo_equipo;
		form->modificar_marca->Text = marca;
		form->modificar_modelo->Text = modelo;
		form->modificar_serie->Text = serie;
		form->modificar_inventario->Text = inventario;
		form->modificar_usuario->Text = usuario;
		form->modificar_NdeEquipo->Text = nombre_equipo;
		form->modificar_MAC->Text = mac;
		form->modificar_RAM->Text = memoria_ram;
		form->modificar_espacio->Text = espacio_disco;
		form->modificar_procesador->Text = procesador;
		form->modificarcbox_vwindows->Text = version_windows;
		form->modificarcbox_voffice->Text = version_office;
		form->modificarcbox_lojack->Text = lojack;

		//Muestra el formulario de modificar con los datos
		form->ShowDialog();
		this->Consulta();

	}

	private: System::Void btn_borrarTODO_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		inventario::conftodo^ conftodo = gcnew inventario::conftodo();
		conftodo->ShowDialog();
		this->Consulta();
	
	}
private: System::Void btn_excel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//variables que ayudaran a reemplazar por el codigo caracter por problemas de UTF al escribir informe
	//Mayusculas
	const char* A_t = "Á";
	const char* A_tr = "\xC3\x81";
	const char* E_t = "É";
	const char* E_tr = "\xC3\x89";
	const char* I_t = "Í";
	const char* I_tr = "\xC3\x8D";
	const char* O_t = "Ó";
	const char* O_tr = "\xC3\x93";
	const char* U_t = "Ú";
	const char* U_tr = "\xC3\x9A";

	//Minusculas
	const char* a_t = "á";
	const char* a_tr = "\xC3\xA1";
	const char* e_t = "é";
	const char* e_tr = "\xC3\xA9";
	const char* i_t = "í";
	const char* i_tr = "\xC3\xAD";
	const char* o_t = "ó";
	const char* o_tr = "\xC3\xB3";
	const char* u_t = "ú";
	const char* u_tr = "\xC3\xBA";

	// Letra Ñ
	const char* N_t = "Ñ";
	const char* N_tr = "\xC3\x91";
	const char* n_t = "ñ";
	const char* n_tr = "\xC3\xB1";

	//crea el nuevo libro y el archivo xlsx
	lxw_workbook* workbook = workbook_new("inventario.xlsx");
	//crea la hoja del libro excel creado
	lxw_worksheet* worksheet = workbook_add_worksheet(workbook, NULL);

	//formato para bordes de los titulos y letras
	lxw_format* formattitulos = workbook_add_format(workbook);
	format_set_bold(formattitulos);
	format_set_border(formattitulos, LXW_BORDER_THICK);
	format_set_bg_color(formattitulos, LXW_COLOR_GRAY);
	// Adiciòn de los titulos
	worksheet_write_string(worksheet, 0, 1, "Nombre", formattitulos);
	worksheet_write_string(worksheet, 0, 2, "Apellidos", formattitulos);
	worksheet_write_string(worksheet, 0, 3, "RUT", formattitulos);
	worksheet_write_string(worksheet, 0, 4, "Departamento", formattitulos);
	worksheet_write_string(worksheet, 0, 5, "Unidad", formattitulos);
	worksheet_write_string(worksheet, 0, 6, "Tipo de Equipo", formattitulos);
	worksheet_write_string(worksheet, 0, 7, "Marca", formattitulos);
	worksheet_write_string(worksheet, 0, 8, "Modelo", formattitulos);
	worksheet_write_string(worksheet, 0, 9, "Serie", formattitulos);
	worksheet_write_string(worksheet, 0, 10, "Inventario", formattitulos);
	worksheet_write_string(worksheet, 0, 11, "Usuario", formattitulos);
	worksheet_write_string(worksheet, 0, 12, "Nombre de Equipo", formattitulos);
	worksheet_write_string(worksheet, 0, 13, "MAC", formattitulos);
	worksheet_write_string(worksheet, 0, 14, "Memoria RAM", formattitulos);
	worksheet_write_string(worksheet, 0, 15, "Espacio Disco", formattitulos);
	worksheet_write_string(worksheet, 0, 16, "Procesador", formattitulos);
	worksheet_write_string(worksheet, 0, 17, "Version de Windows", formattitulos);
	worksheet_write_string(worksheet, 0, 18, "Version de Office", formattitulos);
	worksheet_write_string(worksheet, 0, 19, "Lojack", formattitulos);
	//guarda la cantidad de columnas y filas
	int columnas = grid_db->ColumnCount;
	int filas = grid_db->RowCount;
	//for para la cantidad de filas
	for (int i = 1; i < filas; i++)
	{	
		//for para l cantidad de columnas
		for (int x = 1; x < columnas; x++)
		{
			
			//guarda el valor de la celda del datagridview en un system string
			String^ dato_grid = Convert::ToString(grid_db->Rows[i-1]->Cells[x]->Value);
			//parsea el valor dato_grid a un char para poder ser usado en la libreria que crea el excel
			char* cconvert = (char*)(void*)Marshal::StringToHGlobalAnsi(dato_grid);
			//guarda el chart en tipo basic string
			string pconvertida = cconvert;
			
			size_t pos;
			//reemplazara mayusculas con su codigo de caracter
			while ((pos = pconvertida.find(A_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, A_tr);
			}
			while ((pos = pconvertida.find(E_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, E_tr);
			}
			while ((pos = pconvertida.find(I_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, I_tr);
			}
			while ((pos = pconvertida.find(O_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, O_tr);
			}
			while ((pos = pconvertida.find(U_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, U_tr);
			}
			//Reemplazo de minusculas
			while ((pos = pconvertida.find(a_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, a_tr);
			}
			while ((pos = pconvertida.find(e_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, e_tr);
			}
			while ((pos = pconvertida.find(i_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, i_tr);
			}
			while ((pos = pconvertida.find(o_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, o_tr);
			}
			while ((pos = pconvertida.find(u_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, u_tr);
			}
			// Letra Ñ
			while ((pos = pconvertida.find(N_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, N_tr);
			}
			while ((pos = pconvertida.find(n_t)) != std::string::npos) {
				pconvertida.replace(pos, 1, n_tr);
			}

			lxw_format* format = workbook_add_format(workbook);

			format_set_border(format, LXW_BORDER_THIN);
			format_set_bg_color(format, LXW_COLOR_SILVER);
			//ingresa el valor al excel
			worksheet_write_string(worksheet, i, x, pconvertida.c_str(), format);
			
			
		}	
	}
	//cierra el archivo y lo guarda
	workbook_close(workbook);
	//muestra que el excel fue creado
	MessageBox::Show("Se ha exportado a un Excel");
	
	
	
	
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//toma los valores del gridview y los guarda en una variable
	String^ id = Convert::ToString(grid_db->SelectedRows[0]->Cells[0]->Value);
	String^ nombres = Convert::ToString(grid_db->SelectedRows[0]->Cells[1]->Value);
	String^ apellidos = Convert::ToString(grid_db->SelectedRows[0]->Cells[2]->Value);
	String^ rut = Convert::ToString(grid_db->SelectedRows[0]->Cells[3]->Value);
	String^ departamento = Convert::ToString(grid_db->SelectedRows[0]->Cells[4]->Value);
	String^ unidad = Convert::ToString(grid_db->SelectedRows[0]->Cells[5]->Value);
	String^ tipo_equipo = Convert::ToString(grid_db->SelectedRows[0]->Cells[6]->Value);
	String^ marca = Convert::ToString(grid_db->SelectedRows[0]->Cells[7]->Value);
	String^ modelo = Convert::ToString(grid_db->SelectedRows[0]->Cells[8]->Value);
	String^ serie = Convert::ToString(grid_db->SelectedRows[0]->Cells[9]->Value);
	String^ inventario = Convert::ToString(grid_db->SelectedRows[0]->Cells[10]->Value);
	String^ usuario = Convert::ToString(grid_db->SelectedRows[0]->Cells[11]->Value);
	String^ nombre_equipo = Convert::ToString(grid_db->SelectedRows[0]->Cells[12]->Value);
	String^ mac = Convert::ToString(grid_db->SelectedRows[0]->Cells[13]->Value);
	String^ memoria_ram = Convert::ToString(grid_db->SelectedRows[0]->Cells[14]->Value);
	String^ espacio_disco = Convert::ToString(grid_db->SelectedRows[0]->Cells[15]->Value);
	String^ procesador = Convert::ToString(grid_db->SelectedRows[0]->Cells[16]->Value);
	String^ version_windows = Convert::ToString(grid_db->SelectedRows[0]->Cells[17]->Value);
	String^ version_office = Convert::ToString(grid_db->SelectedRows[0]->Cells[18]->Value);
	String^ lojack = Convert::ToString(grid_db->SelectedRows[0]->Cells[19]->Value);


	//se crea un objeto llamado form del formulario modificar
	inventario::modificar^ form = gcnew inventario::modificar();
	//envia los valores hacia los inputs que estan en el form de modificar
	form->lbl_id->Text = id;
	form->lbl_usuariomod->Text = nombres;
	form->modificar_nombres->Text = nombres;
	form->modificar_apellidos->Text = apellidos;
	form->modificar_rut->Text = rut;
	form->modificarcbox_departamento->Text = departamento;
	form->modificarcbox_Unidad->Text = unidad;
	form->modificarcbox_tequipo->Text = tipo_equipo;
	form->modificar_marca->Text = marca;
	form->modificar_modelo->Text = modelo;
	form->modificar_serie->Text = serie;
	form->modificar_inventario->Text = inventario;
	form->modificar_usuario->Text = usuario;
	form->modificar_NdeEquipo->Text = nombre_equipo;
	form->modificar_MAC->Text = mac;
	form->modificar_RAM->Text = memoria_ram;
	form->modificar_espacio->Text = espacio_disco;
	form->modificar_procesador->Text = procesador;
	form->modificarcbox_vwindows->Text = version_windows;
	form->modificarcbox_voffice->Text = version_office;
	form->modificarcbox_lojack->Text = lojack;
	//Muestra el formulario de modificar con los datos
	form->ShowDialog();
	this->Consulta();
}
};
}

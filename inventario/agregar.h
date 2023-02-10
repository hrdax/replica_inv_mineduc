#pragma once
#include "DB_class.h"

namespace inventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de agregar
	/// </summary>
	public ref class agregar : public System::Windows::Forms::Form
	{
	public:
		agregar(void)
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
		~agregar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ ingreso_nombres;
	protected:

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ ingreso_apellidos;


	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::ComboBox^ cbox_tequipo;

	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lbl_Rut;
	private: System::Windows::Forms::TextBox^ ingreso_rut;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cbox_departamento;
	private: System::Windows::Forms::ComboBox^ cbox_Unidad;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ingreso_marca;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ ingreso_modelo;
	private: System::Windows::Forms::Label^ lbl_Serie;
	private: System::Windows::Forms::TextBox^ ingreso_serie;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ ingreso_inventario;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ ingrso_usuario;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ ingreso_NdeEquipo;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ ingreso_MAC;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ ingreso_RAM;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ ingreso_espacio;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ ingreso_procesador;
	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::Label^ label18;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::ComboBox^ cbox_lojack;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::ComboBox^ cbox_voffice;
	private: System::Windows::Forms::ComboBox^ cbox_vwindows;






	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

	private: DB_class^ data;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->ingreso_nombres = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ingreso_apellidos = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cbox_tequipo = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl_Rut = (gcnew System::Windows::Forms::Label());
			this->ingreso_rut = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbox_departamento = (gcnew System::Windows::Forms::ComboBox());
			this->cbox_Unidad = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ingreso_marca = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ingreso_modelo = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Serie = (gcnew System::Windows::Forms::Label());
			this->ingreso_serie = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ingreso_inventario = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ingrso_usuario = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->ingreso_NdeEquipo = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ingreso_MAC = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ingreso_RAM = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->ingreso_espacio = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->ingreso_procesador = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->cbox_lojack = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->cbox_voffice = (gcnew System::Windows::Forms::ComboBox());
			this->cbox_vwindows = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// ingreso_nombres
			// 
			this->ingreso_nombres->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_nombres->Location = System::Drawing::Point(183, 89);
			this->ingreso_nombres->Multiline = true;
			this->ingreso_nombres->Name = L"ingreso_nombres";
			this->ingreso_nombres->Size = System::Drawing::Size(204, 29);
			this->ingreso_nombres->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// ingreso_apellidos
			// 
			this->ingreso_apellidos->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_apellidos->Location = System::Drawing::Point(183, 162);
			this->ingreso_apellidos->Multiline = true;
			this->ingreso_apellidos->Name = L"ingreso_apellidos";
			this->ingreso_apellidos->Size = System::Drawing::Size(204, 29);
			this->ingreso_apellidos->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->Location = System::Drawing::Point(445, 559);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &agregar::button1_Click);
			// 
			// cbox_tequipo
			// 
			this->cbox_tequipo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cbox_tequipo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbox_tequipo->FormattingEnabled = true;
			this->cbox_tequipo->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"", L"Notebook", L"Escritorio", L"Data-Show",
					L"Impresora", L"Escáner", L"Data/Proyector"
			});
			this->cbox_tequipo->Location = System::Drawing::Point(626, 308);
			this->cbox_tequipo->Name = L"cbox_tequipo";
			this->cbox_tequipo->Size = System::Drawing::Size(121, 21);
			this->cbox_tequipo->TabIndex = 4;
			this->cbox_tequipo->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(626, 277);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Tipo de Equipo";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(186, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Nombres";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(186, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Apellidos";
			// 
			// lbl_Rut
			// 
			this->lbl_Rut->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbl_Rut->AutoSize = true;
			this->lbl_Rut->Location = System::Drawing::Point(186, 202);
			this->lbl_Rut->Name = L"lbl_Rut";
			this->lbl_Rut->Size = System::Drawing::Size(30, 13);
			this->lbl_Rut->TabIndex = 11;
			this->lbl_Rut->Text = L"RUT";
			// 
			// ingreso_rut
			// 
			this->ingreso_rut->AcceptsTab = true;
			this->ingreso_rut->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_rut->Location = System::Drawing::Point(183, 228);
			this->ingreso_rut->Multiline = true;
			this->ingreso_rut->Name = L"ingreso_rut";
			this->ingreso_rut->Size = System::Drawing::Size(204, 29);
			this->ingreso_rut->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(626, 400);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Departamento";
			// 
			// cbox_departamento
			// 
			this->cbox_departamento->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cbox_departamento->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbox_departamento->FormattingEnabled = true;
			this->cbox_departamento->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"", L"Gabinete", L"Planificación", L"Educación",
					L"Administración"
			});
			this->cbox_departamento->Location = System::Drawing::Point(629, 431);
			this->cbox_departamento->Name = L"cbox_departamento";
			this->cbox_departamento->Size = System::Drawing::Size(121, 21);
			this->cbox_departamento->TabIndex = 14;
			// 
			// cbox_Unidad
			// 
			this->cbox_Unidad->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cbox_Unidad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbox_Unidad->FormattingEnabled = true;
			this->cbox_Unidad->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"", L"Administración", L"Educación", L"Gabinete",
					L"Informática", L"Infraestructura", L"Jurídica", L"Oficina de Partes", L"Presupuesto", L"SAE", L"Subscretaria de Educación parvularia",
					L"Subvencionar"
			});
			this->cbox_Unidad->Location = System::Drawing::Point(629, 373);
			this->cbox_Unidad->Name = L"cbox_Unidad";
			this->cbox_Unidad->Size = System::Drawing::Size(121, 21);
			this->cbox_Unidad->Sorted = true;
			this->cbox_Unidad->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(627, 341);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Unidad";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(183, 272);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Marca";
			// 
			// ingreso_marca
			// 
			this->ingreso_marca->AcceptsTab = true;
			this->ingreso_marca->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_marca->Location = System::Drawing::Point(183, 291);
			this->ingreso_marca->Multiline = true;
			this->ingreso_marca->Name = L"ingreso_marca";
			this->ingreso_marca->Size = System::Drawing::Size(204, 29);
			this->ingreso_marca->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(183, 338);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Modelo";
			// 
			// ingreso_modelo
			// 
			this->ingreso_modelo->AcceptsTab = true;
			this->ingreso_modelo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_modelo->Location = System::Drawing::Point(183, 364);
			this->ingreso_modelo->Multiline = true;
			this->ingreso_modelo->Name = L"ingreso_modelo";
			this->ingreso_modelo->Size = System::Drawing::Size(204, 29);
			this->ingreso_modelo->TabIndex = 19;
			// 
			// lbl_Serie
			// 
			this->lbl_Serie->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbl_Serie->AutoSize = true;
			this->lbl_Serie->Location = System::Drawing::Point(183, 403);
			this->lbl_Serie->Name = L"lbl_Serie";
			this->lbl_Serie->Size = System::Drawing::Size(31, 13);
			this->lbl_Serie->TabIndex = 22;
			this->lbl_Serie->Text = L"Serie";
			// 
			// ingreso_serie
			// 
			this->ingreso_serie->AcceptsTab = true;
			this->ingreso_serie->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_serie->Location = System::Drawing::Point(183, 422);
			this->ingreso_serie->Multiline = true;
			this->ingreso_serie->Name = L"ingreso_serie";
			this->ingreso_serie->Size = System::Drawing::Size(204, 29);
			this->ingreso_serie->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(405, 70);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 13);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Inventario";
			// 
			// ingreso_inventario
			// 
			this->ingreso_inventario->AcceptsTab = true;
			this->ingreso_inventario->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_inventario->Location = System::Drawing::Point(405, 89);
			this->ingreso_inventario->Multiline = true;
			this->ingreso_inventario->Name = L"ingreso_inventario";
			this->ingreso_inventario->Size = System::Drawing::Size(204, 29);
			this->ingreso_inventario->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(405, 136);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Usuario";
			// 
			// ingrso_usuario
			// 
			this->ingrso_usuario->AcceptsTab = true;
			this->ingrso_usuario->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingrso_usuario->Location = System::Drawing::Point(405, 162);
			this->ingrso_usuario->Multiline = true;
			this->ingrso_usuario->Name = L"ingrso_usuario";
			this->ingrso_usuario->Size = System::Drawing::Size(204, 29);
			this->ingrso_usuario->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(402, 202);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 13);
			this->label12->TabIndex = 30;
			this->label12->Text = L"Nombre de Equipo";
			// 
			// ingreso_NdeEquipo
			// 
			this->ingreso_NdeEquipo->AcceptsTab = true;
			this->ingreso_NdeEquipo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_NdeEquipo->Location = System::Drawing::Point(405, 228);
			this->ingreso_NdeEquipo->Multiline = true;
			this->ingreso_NdeEquipo->Name = L"ingreso_NdeEquipo";
			this->ingreso_NdeEquipo->Size = System::Drawing::Size(204, 29);
			this->ingreso_NdeEquipo->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(405, 272);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 13);
			this->label13->TabIndex = 32;
			this->label13->Text = L"MAC";
			// 
			// ingreso_MAC
			// 
			this->ingreso_MAC->AcceptsTab = true;
			this->ingreso_MAC->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_MAC->Location = System::Drawing::Point(405, 291);
			this->ingreso_MAC->Multiline = true;
			this->ingreso_MAC->Name = L"ingreso_MAC";
			this->ingreso_MAC->Size = System::Drawing::Size(204, 29);
			this->ingreso_MAC->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(405, 338);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(74, 13);
			this->label14->TabIndex = 34;
			this->label14->Text = L"Memoria RAM";
			// 
			// ingreso_RAM
			// 
			this->ingreso_RAM->AcceptsTab = true;
			this->ingreso_RAM->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_RAM->Location = System::Drawing::Point(405, 364);
			this->ingreso_RAM->Multiline = true;
			this->ingreso_RAM->Name = L"ingreso_RAM";
			this->ingreso_RAM->Size = System::Drawing::Size(204, 29);
			this->ingreso_RAM->TabIndex = 33;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(405, 403);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(144, 13);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Espacio en Disco HDD/SSD";
			// 
			// ingreso_espacio
			// 
			this->ingreso_espacio->AcceptsTab = true;
			this->ingreso_espacio->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_espacio->Location = System::Drawing::Point(405, 422);
			this->ingreso_espacio->Multiline = true;
			this->ingreso_espacio->Name = L"ingreso_espacio";
			this->ingreso_espacio->Size = System::Drawing::Size(204, 29);
			this->ingreso_espacio->TabIndex = 35;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(183, 458);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(61, 13);
			this->label16->TabIndex = 38;
			this->label16->Text = L"Procesador";
			// 
			// ingreso_procesador
			// 
			this->ingreso_procesador->AcceptsTab = true;
			this->ingreso_procesador->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ingreso_procesador->Location = System::Drawing::Point(183, 477);
			this->ingreso_procesador->Multiline = true;
			this->ingreso_procesador->Name = L"ingreso_procesador";
			this->ingreso_procesador->Size = System::Drawing::Size(204, 29);
			this->ingreso_procesador->TabIndex = 37;
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(629, 70);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(104, 13);
			this->label17->TabIndex = 40;
			this->label17->Text = L"Version de Windows";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(626, 133);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 13);
			this->label18->TabIndex = 42;
			this->label18->Text = L"Version de Office";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(629, 206);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 13);
			this->label19->TabIndex = 44;
			this->label19->Text = L"Lojack";
			// 
			// cbox_lojack
			// 
			this->cbox_lojack->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cbox_lojack->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbox_lojack->FormattingEnabled = true;
			this->cbox_lojack->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Sí", L"No", L"No Aplica" });
			this->cbox_lojack->Location = System::Drawing::Point(629, 237);
			this->cbox_lojack->Name = L"cbox_lojack";
			this->cbox_lojack->Size = System::Drawing::Size(121, 21);
			this->cbox_lojack->TabIndex = 43;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(401, 20);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(172, 21);
			this->label20->TabIndex = 45;
			this->label20->Text = L"Ingresar nuevo registro";
			// 
			// cbox_voffice
			// 
			this->cbox_voffice->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cbox_voffice->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbox_voffice->FormattingEnabled = true;
			this->cbox_voffice->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Office 2016", L"Office 365" });
			this->cbox_voffice->Location = System::Drawing::Point(629, 159);
			this->cbox_voffice->Name = L"cbox_voffice";
			this->cbox_voffice->Size = System::Drawing::Size(121, 21);
			this->cbox_voffice->TabIndex = 46;
			// 
			// cbox_vwindows
			// 
			this->cbox_vwindows->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cbox_vwindows->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbox_vwindows->FormattingEnabled = true;
			this->cbox_vwindows->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Windows 10", L"Windows 11", L"Windows Server" });
			this->cbox_vwindows->Location = System::Drawing::Point(629, 97);
			this->cbox_vwindows->Name = L"cbox_vwindows";
			this->cbox_vwindows->Size = System::Drawing::Size(121, 21);
			this->cbox_vwindows->TabIndex = 47;
			// 
			// agregar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(956, 650);
			this->Controls->Add(this->ingreso_inventario);
			this->Controls->Add(this->ingreso_nombres);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->cbox_vwindows);
			this->Controls->Add(this->ingrso_usuario);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->ingreso_apellidos);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->cbox_voffice);
			this->Controls->Add(this->lbl_Serie);
			this->Controls->Add(this->cbox_tequipo);
			this->Controls->Add(this->ingreso_NdeEquipo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ingreso_serie);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cbox_lojack);
			this->Controls->Add(this->ingreso_MAC);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ingreso_modelo);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->ingreso_rut);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->ingreso_RAM);
			this->Controls->Add(this->lbl_Rut);
			this->Controls->Add(this->ingreso_marca);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->cbox_Unidad);
			this->Controls->Add(this->ingreso_procesador);
			this->Controls->Add(this->ingreso_espacio);
			this->Controls->Add(this->cbox_departamento);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label15);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"agregar";
			this->Text = L"agregar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//abre la conexion
		this->data->AbrirConexion();
		//se entrega al metodo insertar los valores de los campos
		this->data->Insertar(ingreso_nombres->Text,ingreso_apellidos->Text,ingreso_rut->Text,cbox_departamento->Text,
			cbox_Unidad->Text,cbox_tequipo->Text,ingreso_marca->Text,ingreso_modelo->Text,ingreso_serie->Text,
			ingreso_inventario->Text,ingrso_usuario->Text,ingreso_NdeEquipo->Text, ingreso_MAC->Text, ingreso_RAM->Text,
			ingreso_espacio->Text,ingreso_procesador->Text, cbox_vwindows->Text, cbox_voffice->Text, cbox_lojack->Text);
		//cierra la conexion
		this->data->CerrarConexion();
		//limpia los campos
		cbox_departamento->Text = "";
		ingreso_nombres->Text = "";
		ingreso_apellidos->Text = "";
		ingreso_rut->Text = "";
		cbox_departamento->Text = "";
		cbox_Unidad->Text = "";
		cbox_tequipo->Text = "";
		ingreso_marca->Text = "";
		ingreso_modelo->Text = "";
		ingreso_serie->Text = "";
		ingreso_inventario->Text = "";
		ingrso_usuario->Text = "";
		ingreso_NdeEquipo->Text = "";
		ingreso_MAC->Text = "";
		ingreso_RAM->Text = "";
		ingreso_espacio->Text = "";
		ingreso_procesador->Text = "";
		cbox_vwindows->Text = "";
		cbox_voffice->Text = "";
		cbox_lojack->Text = "";
		
		MessageBox::Show("Agregado");
	}
	
};
}

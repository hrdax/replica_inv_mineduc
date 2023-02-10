#pragma once
#include "DB_class.h"
#include "confeliminar.h"
namespace inventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de modificar
	/// </summary>
	public ref class modificar : public System::Windows::Forms::Form
	{
	public:
		modificar(void)
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
		~modificar()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ btn_mod;
	public:


	private: System::Windows::Forms::Label^ lbl_modificacion;
	public: System::Windows::Forms::Label^ lbl_usuariomod;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Button^ btn_cancelar;
	public: System::Windows::Forms::ComboBox^ modificarcbox_vwindows;
	private:
	public: System::Windows::Forms::ComboBox^ modificarcbox_voffice;


	private: System::Windows::Forms::Label^ label19;
	public: System::Windows::Forms::ComboBox^ modificarcbox_lojack;
	private:

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	public: System::Windows::Forms::TextBox^ modificar_procesador;
	private:

	private: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::TextBox^ modificar_espacio;
	private:

	private: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::TextBox^ modificar_RAM;
	private:

	private: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::TextBox^ modificar_MAC;
	private:

	private: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::TextBox^ modificar_NdeEquipo;
	private:

	private: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::TextBox^ modificar_usuario;
	private:

	private: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::TextBox^ modificar_inventario;
	private:

	private: System::Windows::Forms::Label^ lbl_Serie;
	public: System::Windows::Forms::TextBox^ modificar_serie;
	private:

	private: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::TextBox^ modificar_modelo;
	private:

	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ modificar_marca;
	private:
	public: System::Windows::Forms::ComboBox^ modificarcbox_Unidad;


	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::ComboBox^ modificarcbox_departamento;
	private:

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lbl_Rut;
	public: System::Windows::Forms::TextBox^ modificar_rut;
	private:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::ComboBox^ modificarcbox_tequipo;
	private:
	public: System::Windows::Forms::TextBox^ modificar_apellidos;
	public: System::Windows::Forms::TextBox^ modificar_nombres;
public: System::Windows::Forms::Label^ lbl_id;

public:



	public:
	private:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(modificar::typeid));
			this->btn_mod = (gcnew System::Windows::Forms::Button());
			this->lbl_modificacion = (gcnew System::Windows::Forms::Label());
			this->lbl_usuariomod = (gcnew System::Windows::Forms::Label());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->modificarcbox_vwindows = (gcnew System::Windows::Forms::ComboBox());
			this->modificarcbox_voffice = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->modificarcbox_lojack = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->modificar_procesador = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->modificar_espacio = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->modificar_RAM = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->modificar_MAC = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->modificar_NdeEquipo = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->modificar_usuario = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->modificar_inventario = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Serie = (gcnew System::Windows::Forms::Label());
			this->modificar_serie = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->modificar_modelo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->modificar_marca = (gcnew System::Windows::Forms::TextBox());
			this->modificarcbox_Unidad = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->modificarcbox_departamento = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbl_Rut = (gcnew System::Windows::Forms::Label());
			this->modificar_rut = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->modificarcbox_tequipo = (gcnew System::Windows::Forms::ComboBox());
			this->modificar_apellidos = (gcnew System::Windows::Forms::TextBox());
			this->modificar_nombres = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_mod
			// 
			this->btn_mod->Location = System::Drawing::Point(304, 582);
			this->btn_mod->Name = L"btn_mod";
			this->btn_mod->Size = System::Drawing::Size(75, 23);
			this->btn_mod->TabIndex = 2;
			this->btn_mod->Text = L"Modificar";
			this->btn_mod->UseVisualStyleBackColor = true;
			this->btn_mod->Click += gcnew System::EventHandler(this, &modificar::btn_mod_Click);
			// 
			// lbl_modificacion
			// 
			this->lbl_modificacion->AutoSize = true;
			this->lbl_modificacion->Location = System::Drawing::Point(63, 60);
			this->lbl_modificacion->Name = L"lbl_modificacion";
			this->lbl_modificacion->Size = System::Drawing::Size(170, 13);
			this->lbl_modificacion->TabIndex = 5;
			this->lbl_modificacion->Text = L"Se modificara el siguiente usuario: ";
			// 
			// lbl_usuariomod
			// 
			this->lbl_usuariomod->AutoSize = true;
			this->lbl_usuariomod->Location = System::Drawing::Point(229, 60);
			this->lbl_usuariomod->Name = L"lbl_usuariomod";
			this->lbl_usuariomod->Size = System::Drawing::Size(78, 13);
			this->lbl_usuariomod->TabIndex = 6;
			this->lbl_usuariomod->Text = L"No encontrado";
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->Location = System::Drawing::Point(495, 582);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(75, 23);
			this->btn_eliminar->TabIndex = 7;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = true;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &modificar::btn_eliminar_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->Location = System::Drawing::Point(400, 582);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(75, 23);
			this->btn_cancelar->TabIndex = 8;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = true;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &modificar::btn_cancelar_Click);
			// 
			// modificarcbox_vwindows
			// 
			this->modificarcbox_vwindows->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->modificarcbox_vwindows->FormattingEnabled = true;
			this->modificarcbox_vwindows->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Windows 10", L"Windows 11", L"Windows Server" });
			this->modificarcbox_vwindows->Location = System::Drawing::Point(607, 132);
			this->modificarcbox_vwindows->Name = L"modificarcbox_vwindows";
			this->modificarcbox_vwindows->Size = System::Drawing::Size(121, 21);
			this->modificarcbox_vwindows->TabIndex = 85;
			// 
			// modificarcbox_voffice
			// 
			this->modificarcbox_voffice->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->modificarcbox_voffice->FormattingEnabled = true;
			this->modificarcbox_voffice->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Office 2016", L"Office 365" });
			this->modificarcbox_voffice->Location = System::Drawing::Point(607, 194);
			this->modificarcbox_voffice->Name = L"modificarcbox_voffice";
			this->modificarcbox_voffice->Size = System::Drawing::Size(121, 21);
			this->modificarcbox_voffice->TabIndex = 84;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(607, 241);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 13);
			this->label19->TabIndex = 83;
			this->label19->Text = L"Lojack";
			// 
			// modificarcbox_lojack
			// 
			this->modificarcbox_lojack->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->modificarcbox_lojack->FormattingEnabled = true;
			this->modificarcbox_lojack->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Sí", L"No", L"No Aplica" });
			this->modificarcbox_lojack->Location = System::Drawing::Point(607, 272);
			this->modificarcbox_lojack->Name = L"modificarcbox_lojack";
			this->modificarcbox_lojack->Size = System::Drawing::Size(121, 21);
			this->modificarcbox_lojack->TabIndex = 82;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(604, 168);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 13);
			this->label18->TabIndex = 81;
			this->label18->Text = L"Version de Office";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(607, 105);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(104, 13);
			this->label17->TabIndex = 80;
			this->label17->Text = L"Version de Windows";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(161, 493);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(61, 13);
			this->label16->TabIndex = 79;
			this->label16->Text = L"Procesador";
			// 
			// modificar_procesador
			// 
			this->modificar_procesador->AcceptsTab = true;
			this->modificar_procesador->Location = System::Drawing::Point(161, 512);
			this->modificar_procesador->Multiline = true;
			this->modificar_procesador->Name = L"modificar_procesador";
			this->modificar_procesador->Size = System::Drawing::Size(204, 29);
			this->modificar_procesador->TabIndex = 78;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(383, 438);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(136, 13);
			this->label15->TabIndex = 77;
			this->label15->Text = L"Espacio en Disco DD/SSD";
			// 
			// modificar_espacio
			// 
			this->modificar_espacio->AcceptsTab = true;
			this->modificar_espacio->Location = System::Drawing::Point(383, 457);
			this->modificar_espacio->Multiline = true;
			this->modificar_espacio->Name = L"modificar_espacio";
			this->modificar_espacio->Size = System::Drawing::Size(204, 29);
			this->modificar_espacio->TabIndex = 76;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(383, 373);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(74, 13);
			this->label14->TabIndex = 75;
			this->label14->Text = L"Memoria RAM";
			// 
			// modificar_RAM
			// 
			this->modificar_RAM->AcceptsTab = true;
			this->modificar_RAM->Location = System::Drawing::Point(383, 399);
			this->modificar_RAM->Multiline = true;
			this->modificar_RAM->Name = L"modificar_RAM";
			this->modificar_RAM->Size = System::Drawing::Size(204, 29);
			this->modificar_RAM->TabIndex = 74;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(383, 307);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 13);
			this->label13->TabIndex = 73;
			this->label13->Text = L"MAC";
			// 
			// modificar_MAC
			// 
			this->modificar_MAC->AcceptsTab = true;
			this->modificar_MAC->Location = System::Drawing::Point(383, 326);
			this->modificar_MAC->Multiline = true;
			this->modificar_MAC->Name = L"modificar_MAC";
			this->modificar_MAC->Size = System::Drawing::Size(204, 29);
			this->modificar_MAC->TabIndex = 72;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(380, 237);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 13);
			this->label12->TabIndex = 71;
			this->label12->Text = L"Nombre de Equipo";
			// 
			// modificar_NdeEquipo
			// 
			this->modificar_NdeEquipo->AcceptsTab = true;
			this->modificar_NdeEquipo->Location = System::Drawing::Point(383, 263);
			this->modificar_NdeEquipo->Multiline = true;
			this->modificar_NdeEquipo->Name = L"modificar_NdeEquipo";
			this->modificar_NdeEquipo->Size = System::Drawing::Size(204, 29);
			this->modificar_NdeEquipo->TabIndex = 70;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(383, 171);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 69;
			this->label11->Text = L"Usuario";
			// 
			// modificar_usuario
			// 
			this->modificar_usuario->AcceptsTab = true;
			this->modificar_usuario->Location = System::Drawing::Point(383, 197);
			this->modificar_usuario->Multiline = true;
			this->modificar_usuario->Name = L"modificar_usuario";
			this->modificar_usuario->Size = System::Drawing::Size(204, 29);
			this->modificar_usuario->TabIndex = 68;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(383, 105);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 13);
			this->label10->TabIndex = 67;
			this->label10->Text = L"Inventario";
			// 
			// modificar_inventario
			// 
			this->modificar_inventario->AcceptsTab = true;
			this->modificar_inventario->Location = System::Drawing::Point(383, 124);
			this->modificar_inventario->Multiline = true;
			this->modificar_inventario->Name = L"modificar_inventario";
			this->modificar_inventario->Size = System::Drawing::Size(204, 29);
			this->modificar_inventario->TabIndex = 66;
			// 
			// lbl_Serie
			// 
			this->lbl_Serie->AutoSize = true;
			this->lbl_Serie->Location = System::Drawing::Point(161, 438);
			this->lbl_Serie->Name = L"lbl_Serie";
			this->lbl_Serie->Size = System::Drawing::Size(31, 13);
			this->lbl_Serie->TabIndex = 65;
			this->lbl_Serie->Text = L"Serie";
			// 
			// modificar_serie
			// 
			this->modificar_serie->AcceptsTab = true;
			this->modificar_serie->Location = System::Drawing::Point(161, 457);
			this->modificar_serie->Multiline = true;
			this->modificar_serie->Name = L"modificar_serie";
			this->modificar_serie->Size = System::Drawing::Size(204, 29);
			this->modificar_serie->TabIndex = 64;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(161, 373);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 63;
			this->label8->Text = L"Modelo";
			// 
			// modificar_modelo
			// 
			this->modificar_modelo->AcceptsTab = true;
			this->modificar_modelo->Location = System::Drawing::Point(161, 399);
			this->modificar_modelo->Multiline = true;
			this->modificar_modelo->Name = L"modificar_modelo";
			this->modificar_modelo->Size = System::Drawing::Size(204, 29);
			this->modificar_modelo->TabIndex = 62;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(161, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 61;
			this->label7->Text = L"Marca";
			// 
			// modificar_marca
			// 
			this->modificar_marca->AcceptsTab = true;
			this->modificar_marca->Location = System::Drawing::Point(161, 326);
			this->modificar_marca->Multiline = true;
			this->modificar_marca->Name = L"modificar_marca";
			this->modificar_marca->Size = System::Drawing::Size(204, 29);
			this->modificar_marca->TabIndex = 60;
			// 
			// modificarcbox_Unidad
			// 
			this->modificarcbox_Unidad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->modificarcbox_Unidad->FormattingEnabled = true;
			this->modificarcbox_Unidad->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Administración", L"Educación", L"Gabinete",
					L"Informática", L"Infraestructura", L"Jurídica", L"Oficina de Partes", L"Presupuesto", L"SAE", L"Subscretaria de Educación parvularia",
					L"Subvencionar"
			});
			this->modificarcbox_Unidad->Location = System::Drawing::Point(607, 408);
			this->modificarcbox_Unidad->Name = L"modificarcbox_Unidad";
			this->modificarcbox_Unidad->Size = System::Drawing::Size(121, 21);
			this->modificarcbox_Unidad->Sorted = true;
			this->modificarcbox_Unidad->TabIndex = 59;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(605, 376);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 58;
			this->label6->Text = L"Unidad";
			// 
			// modificarcbox_departamento
			// 
			this->modificarcbox_departamento->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->modificarcbox_departamento->FormattingEnabled = true;
			this->modificarcbox_departamento->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Gabinete", L"Planificación",
					L"Educación", L"Administración"
			});
			this->modificarcbox_departamento->Location = System::Drawing::Point(607, 466);
			this->modificarcbox_departamento->Name = L"modificarcbox_departamento";
			this->modificarcbox_departamento->Size = System::Drawing::Size(121, 21);
			this->modificarcbox_departamento->TabIndex = 57;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(604, 435);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 13);
			this->label5->TabIndex = 56;
			this->label5->Text = L"Departamento";
			// 
			// lbl_Rut
			// 
			this->lbl_Rut->AutoSize = true;
			this->lbl_Rut->Location = System::Drawing::Point(164, 237);
			this->lbl_Rut->Name = L"lbl_Rut";
			this->lbl_Rut->Size = System::Drawing::Size(30, 13);
			this->lbl_Rut->TabIndex = 55;
			this->lbl_Rut->Text = L"RUT";
			// 
			// modificar_rut
			// 
			this->modificar_rut->AcceptsTab = true;
			this->modificar_rut->Location = System::Drawing::Point(161, 263);
			this->modificar_rut->Multiline = true;
			this->modificar_rut->Name = L"modificar_rut";
			this->modificar_rut->Size = System::Drawing::Size(204, 29);
			this->modificar_rut->TabIndex = 54;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(164, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Apellidos";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(164, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Nombres";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(604, 312);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Tipo de Equipo";
			// 
			// modificarcbox_tequipo
			// 
			this->modificarcbox_tequipo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->modificarcbox_tequipo->FormattingEnabled = true;
			this->modificarcbox_tequipo->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Notebook", L"Escritorio", L"Data-Show",
					L"Impresora", L"Escáner", L"Data/Proyector"
			});
			this->modificarcbox_tequipo->Location = System::Drawing::Point(604, 343);
			this->modificarcbox_tequipo->Name = L"modificarcbox_tequipo";
			this->modificarcbox_tequipo->Size = System::Drawing::Size(121, 21);
			this->modificarcbox_tequipo->TabIndex = 50;
			this->modificarcbox_tequipo->TabStop = false;
			// 
			// modificar_apellidos
			// 
			this->modificar_apellidos->Location = System::Drawing::Point(161, 197);
			this->modificar_apellidos->Multiline = true;
			this->modificar_apellidos->Name = L"modificar_apellidos";
			this->modificar_apellidos->Size = System::Drawing::Size(204, 29);
			this->modificar_apellidos->TabIndex = 49;
			// 
			// modificar_nombres
			// 
			this->modificar_nombres->Location = System::Drawing::Point(161, 124);
			this->modificar_nombres->Multiline = true;
			this->modificar_nombres->Name = L"modificar_nombres";
			this->modificar_nombres->Size = System::Drawing::Size(204, 29);
			this->modificar_nombres->TabIndex = 48;
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Location = System::Drawing::Point(0, -3);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(35, 13);
			this->lbl_id->TabIndex = 86;
			this->lbl_id->Text = L"label2";
			this->lbl_id->Visible = false;
			// 
			// modificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(889, 646);
			this->Controls->Add(this->lbl_id);
			this->Controls->Add(this->modificarcbox_vwindows);
			this->Controls->Add(this->modificarcbox_voffice);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->modificarcbox_lojack);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->modificar_procesador);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->modificar_espacio);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->modificar_RAM);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->modificar_MAC);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->modificar_NdeEquipo);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->modificar_usuario);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->modificar_inventario);
			this->Controls->Add(this->lbl_Serie);
			this->Controls->Add(this->modificar_serie);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->modificar_modelo);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->modificar_marca);
			this->Controls->Add(this->modificarcbox_Unidad);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->modificarcbox_departamento);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lbl_Rut);
			this->Controls->Add(this->modificar_rut);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->modificarcbox_tequipo);
			this->Controls->Add(this->modificar_apellidos);
			this->Controls->Add(this->modificar_nombres);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->lbl_usuariomod);
			this->Controls->Add(this->lbl_modificacion);
			this->Controls->Add(this->btn_mod);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"modificar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Modificar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_mod_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// crea un objeto de la clase de la base de datos
		DB_class^ data = gcnew DB_class();
		//abre la conexion
		data->AbrirConexion();
		//llama al metodo que modifica los datos en la bd
		data->Modificar(
			lbl_id->Text,modificar_nombres->Text, modificar_apellidos->Text, modificar_rut->Text, modificarcbox_departamento->Text, modificarcbox_Unidad->Text,
			modificarcbox_tequipo->Text, modificar_marca->Text, modificar_modelo->Text, modificar_serie->Text, modificar_inventario->Text,
			modificar_usuario->Text, modificar_NdeEquipo->Text, modificar_MAC->Text, modificar_RAM->Text, modificar_espacio->Text,
		    modificar_procesador->Text, modificarcbox_vwindows->Text, modificarcbox_voffice->Text, modificarcbox_lojack->Text);
		//cierra la conexion
		data->CerrarConexion();
		//muestra que los datos fueron modificados
		MessageBox::Show("Datos Modificados");
		//cierra la ventana
		this->Close();
	}
private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//crea un objeto con la ventana de confirmacion
	inventario::confeliminar^ conf = gcnew inventario::confeliminar();
	//entrega el nombre a eliminar al label
	conf->lbl_conf->Text = modificar_nombres->Text;
	//entrega el id a eliminar al label
	conf->lbl_id->Text = this->lbl_id->Text;
	//muestra la ventana de confirmacion
	conf->ShowDialog();
	this->Close();
}
private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) 
{	
	this->Close();
}
};
}

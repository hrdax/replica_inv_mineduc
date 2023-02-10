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
	/// Resumen de confeliminar
	/// </summary>
	public ref class confeliminar : public System::Windows::Forms::Form
	{
	public:
		confeliminar(void)
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
		~confeliminar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ lbl_conf;
	private:

	protected:

	private: System::Windows::Forms::Button^ btn_si;
	private: System::Windows::Forms::Button^ btn_no;
	public: System::Windows::Forms::Label^ lbl_id;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(confeliminar::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_conf = (gcnew System::Windows::Forms::Label());
			this->btn_si = (gcnew System::Windows::Forms::Button());
			this->btn_no = (gcnew System::Windows::Forms::Button());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Está seguro de eliminar la siguiente columna con el siguiente N° y nombre: ";
			// 
			// lbl_conf
			// 
			this->lbl_conf->AutoSize = true;
			this->lbl_conf->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_conf->Location = System::Drawing::Point(195, 68);
			this->lbl_conf->Name = L"lbl_conf";
			this->lbl_conf->Size = System::Drawing::Size(97, 17);
			this->lbl_conf->TabIndex = 1;
			this->lbl_conf->Text = L"No encontrado";
			// 
			// btn_si
			// 
			this->btn_si->Location = System::Drawing::Point(58, 115);
			this->btn_si->Name = L"btn_si";
			this->btn_si->Size = System::Drawing::Size(75, 23);
			this->btn_si->TabIndex = 2;
			this->btn_si->Text = L"Sí";
			this->btn_si->UseVisualStyleBackColor = true;
			this->btn_si->Click += gcnew System::EventHandler(this, &confeliminar::btn_si_Click);
			// 
			// btn_no
			// 
			this->btn_no->Location = System::Drawing::Point(245, 115);
			this->btn_no->Name = L"btn_no";
			this->btn_no->Size = System::Drawing::Size(75, 23);
			this->btn_no->TabIndex = 3;
			this->btn_no->Text = L"No";
			this->btn_no->UseVisualStyleBackColor = true;
			this->btn_no->Click += gcnew System::EventHandler(this, &confeliminar::btn_no_Click);
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_id->Location = System::Drawing::Point(92, 68);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(97, 17);
			this->lbl_id->TabIndex = 4;
			this->lbl_id->Text = L"No encontrado";
			// 
			// confeliminar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 160);
			this->Controls->Add(this->lbl_id);
			this->Controls->Add(this->btn_no);
			this->Controls->Add(this->btn_si);
			this->Controls->Add(this->lbl_conf);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"confeliminar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Confirmacion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_si_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DB_class^ data = gcnew DB_class();
		data->AbrirConexion();
		data->Eliminar(this->lbl_id->Text);
		data->CerrarConexion();
		MessageBox::Show("Datos ELiminados");
		this->Close();
	}
private: System::Void btn_no_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
};
}

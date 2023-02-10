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
	/// Resumen de conftodo
	/// </summary>
	public ref class conftodo : public System::Windows::Forms::Form
	{
	public:
		conftodo(void)
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
		~conftodo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_tsi;
	private: System::Windows::Forms::Button^ btn_tno;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(conftodo::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_tsi = (gcnew System::Windows::Forms::Button());
			this->btn_tno = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SE ELIMINARAN TODOS LOS REGISTROS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(123, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"¿DESEA CONTINUAR\?";
			// 
			// btn_tsi
			// 
			this->btn_tsi->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_tsi->Location = System::Drawing::Point(60, 125);
			this->btn_tsi->Name = L"btn_tsi";
			this->btn_tsi->Size = System::Drawing::Size(75, 23);
			this->btn_tsi->TabIndex = 2;
			this->btn_tsi->Text = L"Sí";
			this->btn_tsi->UseVisualStyleBackColor = true;
			this->btn_tsi->Click += gcnew System::EventHandler(this, &conftodo::btn_tsi_Click);
			// 
			// btn_tno
			// 
			this->btn_tno->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_tno->Location = System::Drawing::Point(243, 125);
			this->btn_tno->Name = L"btn_tno";
			this->btn_tno->Size = System::Drawing::Size(75, 23);
			this->btn_tno->TabIndex = 3;
			this->btn_tno->Text = L"No";
			this->btn_tno->UseVisualStyleBackColor = true;
			this->btn_tno->Click += gcnew System::EventHandler(this, &conftodo::btn_tno_Click);
			// 
			// conftodo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 160);
			this->Controls->Add(this->btn_tno);
			this->Controls->Add(this->btn_tsi);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"conftodo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Confirmacion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_tsi_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DB_class^ data = gcnew DB_class();
		data->AbrirConexion();
		data->EliminarTODO();
		data->CerrarConexion();
		MessageBox::Show("Se han eliminado todos los registros");
		this->Close();

	}
private: System::Void btn_tno_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
};
}

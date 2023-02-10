#pragma once
#include "verdatos.h"
#include "agregar.h"
#include "modificar.h"
namespace inventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de principal
	/// </summary>
	public ref class principal : public System::Windows::Forms::Form
	{
	public:
		principal(void)
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
		~principal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ P_MLado;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ img_mineduc;
	private: System::Windows::Forms::Panel^ img_seremi;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ P_MOpcion;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(principal::typeid));
			this->P_MLado = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->img_mineduc = (gcnew System::Windows::Forms::Panel());
			this->img_seremi = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->P_MOpcion = (gcnew System::Windows::Forms::Panel());
			this->P_MLado->SuspendLayout();
			this->SuspendLayout();
			// 
			// P_MLado
			// 
			this->P_MLado->BackColor = System::Drawing::SystemColors::Control;
			this->P_MLado->Controls->Add(this->panel1);
			this->P_MLado->Controls->Add(this->img_mineduc);
			this->P_MLado->Controls->Add(this->img_seremi);
			this->P_MLado->Controls->Add(this->button2);
			this->P_MLado->Controls->Add(this->button1);
			this->P_MLado->Dock = System::Windows::Forms::DockStyle::Left;
			this->P_MLado->Location = System::Drawing::Point(0, 0);
			this->P_MLado->Name = L"P_MLado";
			this->P_MLado->Size = System::Drawing::Size(270, 661);
			this->P_MLado->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(276, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(701, 512);
			this->panel1->TabIndex = 1;
			// 
			// img_mineduc
			// 
			this->img_mineduc->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_mineduc.BackgroundImage")));
			this->img_mineduc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->img_mineduc->ForeColor = System::Drawing::SystemColors::ControlText;
			this->img_mineduc->Location = System::Drawing::Point(78, 490);
			this->img_mineduc->Name = L"img_mineduc";
			this->img_mineduc->Size = System::Drawing::Size(109, 100);
			this->img_mineduc->TabIndex = 1;
			// 
			// img_seremi
			// 
			this->img_seremi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"img_seremi.BackgroundImage")));
			this->img_seremi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->img_seremi->Location = System::Drawing::Point(50, 62);
			this->img_seremi->Name = L"img_seremi";
			this->img_seremi->Size = System::Drawing::Size(175, 150);
			this->img_seremi->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(3, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(264, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &principal::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(3, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(264, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ver Datos";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &principal::button1_Click);
			// 
			// P_MOpcion
			// 
			this->P_MOpcion->Location = System::Drawing::Point(276, 13);
			this->P_MOpcion->Name = L"P_MOpcion";
			this->P_MOpcion->Size = System::Drawing::Size(956, 630);
			this->P_MOpcion->TabIndex = 1;
			// 
			// principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(1244, 661);
			this->Controls->Add(this->P_MOpcion);
			this->Controls->Add(this->P_MLado);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"principal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Menu";
			this->P_MLado->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	template<class T>
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew inventario::verdatos);

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirPanel(gcnew inventario::agregar);
}

};
}

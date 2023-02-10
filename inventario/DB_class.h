#pragma once
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;


ref class DB_class
{
//creara los atributos privados de la conexion de la clase DB
private:
	String^ connectionString;
	MySqlConnection^ conexion;
//creara y hara publico los siguientes metodos
public:
	DB_class();
	DataTable^ getData();
	void AbrirConexion();
	void CerrarConexion();
	void Insertar(
		String^, String^, String^, String^, 
		String^, String^, String^, String^, String^, 
		String^, String^, String^, String^, String^,
		String^, String^, String^, String^, String^);
	void Modificar(
		String^, String^, String^, String^, String^,
		String^, String^, String^, String^, String^,
		String^, String^, String^, String^, String^,
		String^, String^, String^, String^, String^);
	void Eliminar(String^);
	void EliminarTODO();
};


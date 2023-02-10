#include "pch.h"
#include "DB_class.h"
//crea desde la clase las variables de conexion
DB_class::DB_class()
{
	this->connectionString = "datasource=localhost; username=root; password=root; database=invseremi;";
	this->conexion = gcnew MySqlConnection(this->connectionString);
}
//crea el metodo para abrir la conexion
void DB_class::AbrirConexion()
{
	this->conexion->Open();
}
//crea el metodo para cerrar la conexion
void DB_class::CerrarConexion()
{
	this->conexion->Close();
}
//crea el motodo que servira para consultar los datos
DataTable^ DB_class::getData()
{
	String^ query = "SELECT * FROM inventario";
	MySqlCommand^ c = gcnew MySqlCommand(query, conexion);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(c);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}
//crea el metodo para poder insertar
void DB_class::Insertar(String^ nombres, String^ apellidos, String^ rut,
	String^ departamento, String^ unidad, String^ tipo_equipo, String^ marca, String^ modelo,
	String^ serie, String^ inventario, String^ usuario, String^ nombre_equipo, String^ mac,
	String^ memoria_ram, String^ espacio_disco, String^ procesador, String^ version_windows, String^ version_office,
	String^ lojack)
{
	//query insert
	String^ query = 
		"INSERT INTO inventario(Nombre, Apellidos, Rut, Departamento, Unidad, Tipo_de_Equipo, Marca, Modelo,"
		"Serie, Inventario, Usuario, Nombre_de_Equipo, MAC, RAM, Espacio_Disco, Procesador, Version_Windows, Version_Office,"
		"Lojack)"
		"values('" + nombres + "','" + apellidos + "', '" + rut + "' , '" + departamento + "', '" + unidad + "',"
		"'" + tipo_equipo + "', '" + marca + "', '" + modelo + "', '" + serie + "', '" + inventario + "', '" + usuario + "',"
		"'" + nombre_equipo + "', '" + mac + "', '" + memoria_ram + "', '" + espacio_disco + "', '" + procesador + "', '" + version_windows + "',"
		"'" + version_office + "', '" + lojack + "')";
	//cursor para la conexion
	MySqlCommand^ c = gcnew MySqlCommand(query, conexion);
	try 
	{
		//ejecuta la query
		c->ExecuteNonQuery();
	}
	//en caso de fallar muestra el mensaje de error
	catch(Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
//crea el metodo para poder modificar
void DB_class::Modificar(
	String^ id, String^ nombres, String^ apellidos, String^ rut,
	String^ departamento, String^ unidad, String^ tipo_equipo, String^ marca, String^ modelo,
	String^ serie, String^ inventario, String^ usuario, String^ nombre_equipo, String^ mac,
	String^ memoria_ram, String^ espacio_disco, String ^ procesador, String^ version_windows, String^ version_office,
    String^ lojack)
{
	String^ query = "UPDATE inventario SET Nombre = '" + nombres + "',"
		"Apellidos = '" + apellidos + "', Rut = '" + rut + "', Departamento = '" + departamento + "', Unidad ='" + unidad + "',"
		"Tipo_de_Equipo = '" + tipo_equipo + "', Marca = '" + marca + "', Modelo = '" + modelo + "', "
		"Serie = '" + serie + "', Inventario = '" + inventario + "', Usuario = '" + usuario + "', Nombre_de_Equipo = '" + nombre_equipo + "',"
		"MAC = '" + mac + "', RAM = '" + memoria_ram + "', Espacio_Disco = '" + espacio_disco + "', Procesador = '" + procesador + "',"
		"Version_Windows = '" + version_windows + "', Version_Office = '" + version_office + "', "
		"Lojack = '" + lojack + "' WHERE  idinventario = '" + id + "'";

	MySqlCommand^ c = gcnew MySqlCommand(query, conexion);
	try
	{
		c->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
//crea el metodo eliminar
void DB_class::Eliminar(String ^ id)
{
	String^ query = "DELETE FROM inventario WHERE idinventario = '" + id + "'";
	MySqlCommand^ c = gcnew MySqlCommand(query, conexion);
	try
	{
		c->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
//metodo para eliminar todo
void DB_class::EliminarTODO()
{
	String^ query = "DELETE FROM inventario";
	MySqlCommand^ c = gcnew MySqlCommand(query, conexion);
	try
	{
		c->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}


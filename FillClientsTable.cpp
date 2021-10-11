/*There are 9000 four-digit numbers, right? Starting from 1000 till 9999. rand() will return a random number from 0 to RAND_MAX. rand() % 9000 will be from 0 to 8999 and rand() % 9000 + 1000; will be from 1000 to 9999 . In general when you want a random number from a to b inclusive the formula is

rand() % (b - a + 1) + a */

#include <iostream>
#include <string>
#include <random>
#include <time.h>
#include <ctime>
//#include <dos.h>
//#include <mysql.h>
using namespace std;
using namespace System;
using namespace System::Data;

using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Devart::Data::PostgreSql;

int mainw()
{

	// Initialize array of pointer
	string first_names[16] = { "Shantelle","Kyle","Shannel","Natasha","Tiffany","Precious","Blessing","Angel","Kyla","Jayden","Liam","Ethan","Aiden","Dylan","Ryan","Tamara" };
	string middle_names[11] = {
		"Akinyi",
		"Zawadi",
		"Chepkirui",
		"Makena",
		"Wawuda",
		"Naserian",
		"Wawira",
		"Kerubo",
		"Rehema",
		"Nekesa",
	"Kioko" };
	string last_names[15] = { "Naserian",
							 "Cheyech",
							 "Gati",
							 "Maweu",
							 "Karuga",
							 "Ndoro",
							 "Mwadime",
							 "Ruwa",
							 "Duba",
							 "Muga",
							 "Nyanchama",
							 "Muchira",
							 "Akello",
							 "Chesire",
	"Gathogo" };

	string first_name_random;

	string middle_names_random;

	string last_names_random;

	string client_id;
	string name;
	
	string email;
	string gender[2] = { "male", "female" };
	string gender_random;
	string id;
	string mobile;
	string address[34] = { "Kiambu", "Makueni", "Kajiado", "Nairobi", "Kileleshwa", "Eldoret", "Moiben", "Kapsabet", "Iten", "Kisumu", "Mombasa", "Thika", "Juja", "Kapseret", "Kericho", "Turakana", "Eldama Ravine", "Nakuru", "Naivasha", "Baringo", "Embu", "Meru", "Laikipia", "Chuka", "Soy", "Kakamega", "Malaba", "Malava", "Webuye", "Kitale", "Kimilili", "Bungoma", "Busia", "Mumias" };
	string address_random;
	
	
	
	srand(time(0));

	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	//std::cout << (now->tm_year + 1900)%100 <<
	//<< (now->tm_mon + 1) << '-'
	// <<  now->tm_mday

	// Printing Strings stored in 2D array
	for (int i = 0; i < 100; i++)
	{
		first_name_random = first_names[rand() % 16];

		middle_names_random = middle_names[rand() % 11];

		last_names_random = last_names[rand() % 15];

		client_id = "WMS" + to_string(rand() % 801 + 100) + "-" + to_string(rand() % 8001 + 1000) + "/" + to_string((now->tm_year + 1900) % 100);
		String^ client_id2 = gcnew String(client_id.c_str());
		name = first_name_random + " " + middle_names_random + " " + last_names_random;

		String^ name2 = gcnew String(name.c_str());

		id = to_string(rand() % 80000001 + 10000000);
		String^ id2 = gcnew String(id.c_str());
		email = first_name_random + "@gmail.com";
		String^ email2 = gcnew String(email.c_str());
		gender_random = gender[rand() % 2];
		String^ gender_random2 = gcnew String(gender_random.c_str());
		mobile = "+2547" + to_string(rand() % 80000001 + 10000000);
		String^ mobile2 = gcnew String(mobile.c_str());
		address_random = address[rand() % 34];
		String^ address_random2 = gcnew String(address_random.c_str());
		
		/*cout << name << endl
			<< uhid << endl
			<< id << endl
			<< email << endl
			<< gender_random << endl
			<< mobile << endl
			<< address_random << endl;*/
			
		String^ constr = "User Id=postgres;Host=localhost;Database=Water_Management_System_Database;Password=electrospark;Persist Security Info=True;Initial Schema=public";

		PgSqlConnection^ conn = gcnew PgSqlConnection(constr);
		try
		{
			conn->Open();
			PgSqlCommand^ cmd = gcnew PgSqlCommand("INSERT INTO clients_tbl(client_id, name,id_no, mobile_no, email,gender,address,  password ) values('" + client_id2 + "', '" + name2 + "','" + id2 + "', '" + mobile2 + "', '" + email2 + "','" + gender_random2 + "','" + address_random2 + "',  'qwerty')", conn);

			cmd->ExecuteNonQuery();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		conn->Close();
		_sleep(50);

		
	}

	return 0;
}
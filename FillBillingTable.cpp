/*There are 9000 four-digit numbers, right? Starting from 1000 till 9999. rand() will return a random number from 0 to RAND_MAX. rand() % 9000 will be from 0 to 8999 and rand() % 9000 + 1000; will be from 1000 to 9999 . In general when you want a random number from a to b inclusive the formula is

rand() % (b - a + 1) + a */

#include <iostream>
#include <string>
#include <random>
#include <time.h>
#include <ctime>
#include <stdio.h>
#include <cstring>
#include <msclr\marshal_cppstd.h>



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

int maine()
{

	// Initialize array of pointer
	

	///string client_id;
	string bill_no;
	string meter_reading_date;
	string meter_reading;
	



	srand(time(0));

	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	// Printing Strings stored in 2D array
	for (int i = 0; i < 100; i++)
	{
		String^ client_id2;


		String^ constr = "User Id=postgres;Host=localhost;Database=Water_Management_System_Database;Password=electrospark;Persist Security Info=True;Initial Schema=public";
		PgSqlConnection^ con = gcnew PgSqlConnection(constr);
		try
		{
			con->Open();
			PgSqlCommand^ cmd = gcnew PgSqlCommand("select client_id from clients_tbl order by random() limit 1; ", con);
			PgSqlDataReader^ dr;
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				client_id2 = dr->GetString("client_id");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		con->Close();

		msclr::interop::marshal_context context;
		std::string client_id = context.marshal_as<std::string>(client_id2);

		char buf[256];
		strcpy(buf, client_id.c_str());
		char* p = strtok(buf, "-");
		char* array[3];

		while (p != NULL)
		{
			array[i++] = p;
			p = strtok(NULL, "/");
		}
		for (i = 0; i < 3; ++i) {
			printf("%s\n", array[1]);
		}
		
		bill_no = to_string((now->tm_year + 1900)) + to_string((now->tm_mon + 1)) + to_string((now->tm_mday))+ "-" + (array[1])+"-" + to_string(rand() % 11 + 0);
		String^ bill_no2 = gcnew String(bill_no.c_str());

		meter_reading = to_string(rand() % 20000001 + 10000000);
		String^ meter_reading2 = gcnew String(meter_reading.c_str());
		
		//meter_reading_date = "2021-10-10";
		meter_reading_date = to_string(rand() % 32 + 1990)+"-" + to_string(rand() % 12 + 1)+"-"+ to_string(rand() % 28 + 1);
		String^ meter_reading_date2 = gcnew String(meter_reading_date.c_str());
		


		/*cout << name << endl
			<< uhid << endl
			<< id << endl
			<< email << endl
			<< gender_random << endl
			<< mobile << endl
			<< address_random << endl;*/

		

		PgSqlConnection^ conn = gcnew PgSqlConnection(constr);
		try
		{
			conn->Open();
			PgSqlCommand^ cmd = gcnew PgSqlCommand("INSERT INTO billing_tbl(client_id,bill_no, meter_reading, meter_reading_date) values('"+ client_id2 +"', '" + bill_no2 + "', '" + meter_reading2 + "', '" + meter_reading_date2 + "')", conn);

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
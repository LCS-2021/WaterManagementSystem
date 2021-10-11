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

int mains()
{

	// Initialize array of pointer


	///string client_id;
	string bill_no;
	string paid_date;
	string credit;
	string transaction_code;




	srand(time(0));

	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	// Printing Strings stored in 2D array
	for (int i = 0; i < 100; i++)
	{
		String^ client_id2;
		String^ bill_no2;


		String^ constr = "User Id=postgres;Host=localhost;Database=Water_Management_System_Database;Password=electrospark;Persist Security Info=True;Initial Schema=public";
		PgSqlConnection^ con = gcnew PgSqlConnection(constr);
		try
		{
			con->Open();
			PgSqlCommand^ cmd = gcnew PgSqlCommand("select client_id,bill_no from billing_tbl order by random() limit 1; ", con);
			PgSqlDataReader^ dr;
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				client_id2 = dr->GetString("client_id");
				bill_no2 = dr->GetString("bill_no");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		con->Close();

		
		

		credit = to_string(rand() % 20001 + 1000);
		String^ credit2 = gcnew String(credit.c_str());

		transaction_code = to_string(rand() % 80001 + 7500);
		String^ transaction_code2 = gcnew String(transaction_code.c_str());

		paid_date = "2021-10-11";
		String^ paid_date2 = gcnew String(paid_date.c_str());

		PgSqlConnection^ conn = gcnew PgSqlConnection(constr);
		try
		{
			conn->Open();
			PgSqlCommand^ cmd = gcnew PgSqlCommand("INSERT INTO payments_tbl(client_id,bill_no, credit, transaction_code,paid_date) values('" + client_id2 + "', '" + bill_no2 + "', '" + credit2 + "', '" + transaction_code2 + "', '" + paid_date2 + "')", conn);

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
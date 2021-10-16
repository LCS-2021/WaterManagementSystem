#include <iostream>
#include <msclr\marshal_cppstd.h>

#pragma once
//#include <string>

namespace WaterManagementSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;
	using namespace Devart::Data::PostgreSql;
	using namespace std;
	

	/// <summary>
	/// Summary for Administrator
	/// </summary>
	public ref class Administrator : public System::Windows::Forms::Form
	{
	public:
		Administrator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Administrator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel1;
	protected:
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel2;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel3;
	private: Bunifu::UI::WinForms::BunifuPages^ bunifuPages1;
	private: System::Windows::Forms::TabPage^ DashboardTabPage;
	private: System::Windows::Forms::TabPage^ GenerateBillTabPage;

	private: DevExpress::XtraCharts::ChartControl^ chartControl1;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel4;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ LatestPaidBillsDataGridView;

	private: Bunifu::UI::WinForms::BunifuDataGridView^ LatestMeterReadingsDataGridView;

	private: Guna::UI2::WinForms::Guna2Button^ guna2Button9;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button8;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button7;
	private: Guna::UI2::WinForms::Guna2Button^ btnAllBills;

	private: Guna::UI2::WinForms::Guna2Button^ btnDueBills;

	private: Guna::UI2::WinForms::Guna2Button^ btnPaidBills;

	private: Guna::UI2::WinForms::Guna2Button^ btnAddClient;

	private: Guna::UI2::WinForms::Guna2Button^ btnGenerateBill;

	private: Guna::UI2::WinForms::Guna2Button^ btnDashboard;

	private: DevExpress::XtraCharts::ChartControl^ chartControl2;

	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel10;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel9;

	private: Bunifu::UI::WinForms::BunifuLabel^ lblTotalPaidBills;

	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel7;

	private: Bunifu::UI::WinForms::BunifuLabel^ lblTotalDueBills;

	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel5;

	private: Bunifu::UI::WinForms::BunifuLabel^ lblTotalBills;

	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel3;

	private: Bunifu::UI::WinForms::BunifuLabel^ lblTotalClients;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel1;

	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel2;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel4;
	private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox1;
	private: Bunifu::UI::WinForms::BunifuLabel^ lblUserName;
	private: Guna::UI2::WinForms::Guna2CirclePictureBox^ guna2CirclePictureBox1;
	private: Bunifu::UI::WinForms::BunifuPages^ bunifuPages2;
	private: System::Windows::Forms::TabPage^ ClientListTabPage;
	private: System::Windows::Forms::TabPage^ BillingTabPage;

	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel6;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ ClientListDataGridView;

	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel5;
	private: Guna::UI2::WinForms::Guna2TextBox^ txt_SearchBox;

	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel7;

	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel18;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel17;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel16;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel15;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel14;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel13;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel12;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel11;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel8;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel6;
	private: Guna::UI2::WinForms::Guna2TextBox^ txt_CurrentMeterReading;
	private: Guna::UI2::WinForms::Guna2TextBox^ txt_PricePerUnit;
	private: Guna::UI2::WinForms::Guna2TextBox^ txt_Balance;

	private: Guna::UI2::WinForms::Guna2TextBox^ txt_UnitsConsumed;

	private: Guna::UI2::WinForms::Guna2TextBox^ txt_PreviousMeterReading;

	private: Guna::UI2::WinForms::Guna2TextBox^ txt_ClientName;

	private: Guna::UI2::WinForms::Guna2TextBox^ txt_ClientID;

	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel8;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel9;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ bunifuDataGridView4;
	private: Guna::UI2::WinForms::Guna2TextBox^ txt_BillNo;

	private: Guna::UI2::WinForms::Guna2TextBox^ txt_TotalPrice;

	private: Guna::UI2::WinForms::Guna2DateTimePicker^ guna2DateTimePicker1;
	private: Guna::UI2::WinForms::Guna2Button^ btnSubmit;
	private: System::Windows::Forms::TabPage^ AddClientTabPage;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel10;
private: Guna::UI2::WinForms::Guna2TextBox^ txt_Search;



	private: System::Windows::Forms::TabPage^ PaidBillsTabPage;
	private: System::Windows::Forms::TabPage^ DueBillsTabPage;
	private: System::Windows::Forms::TabPage^ AllBillsTabPage;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel32;

	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel33;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel34;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: Bunifu::UI::WinForms::BunifuShadowPanel^ bunifuShadowPanel1;
	private: Bunifu::UI::WinForms::BunifuShadowPanel^ bunifuShadowPanel8;
	private: Bunifu::UI::WinForms::BunifuShadowPanel^ bunifuShadowPanel6;
	private: Bunifu::UI::WinForms::BunifuShadowPanel^ bunifuShadowPanel5;
	private: Bunifu::UI::WinForms::BunifuShadowPanel^ bunifuShadowPanel4;
	private: Bunifu::UI::WinForms::BunifuShadowPanel^ bunifuShadowPanel3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel12;

	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel11;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ PaidBillsDataGridView;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel14;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ bunifuDataGridView1;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel13;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel16;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ AllBillsDataGridView;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	private: Guna::UI2::WinForms::Guna2TextBox^ txtAllBillsSearchBox;

	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel17;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ ClientsDataGridView;






	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel18;
private: Bunifu::UI::WinForms::BunifuLabel^ lblTotalNumberofClients;

	private: Guna::UI2::WinForms::Guna2Button^ btn_Back;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column34;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column35;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column36;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column37;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel19;
	private: System::Windows::Forms::GroupBox^ groupBox1;
private: Guna::UI2::WinForms::Guna2RadioButton^ rbtnFemale;

private: Guna::UI2::WinForms::Guna2RadioButton^ rbtnMale;

	private: Guna::UI2::WinForms::Guna2Button^ btn_Submt;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel31;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel30;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel29;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel27;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel20;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel19;
	private: Guna::UI2::WinForms::Guna2TextBox^ txtMobileNo;
	private: Guna::UI2::WinForms::Guna2TextBox^ txtClientID;
	private: Guna::UI2::WinForms::Guna2TextBox^ txtAddress;
	private: Guna::UI2::WinForms::Guna2TextBox^ txtClientName;
	private: Guna::UI2::WinForms::Guna2TextBox^ txtIDNo;
	private: Guna::UI2::WinForms::Guna2TextBox^ txtEmail;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel22;




private: Guna::UI2::WinForms::Guna2VSeparator^ guna2VSeparator1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
private: Guna::UI2::WinForms::Guna2Button^ guna2Button2;
private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: Guna::UI2::WinForms::Guna2Button^ guna2Button3;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel23;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel21;
private: Bunifu::UI::WinForms::BunifuDatePicker^ AllBillsToDatePicker;
private: Bunifu::UI::WinForms::BunifuDatePicker^ AllBillsFromDatePicker;







	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Administrator::typeid));
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation2 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			DevExpress::XtraCharts::XYDiagram^ xyDiagram1 = (gcnew DevExpress::XtraCharts::XYDiagram());
			DevExpress::XtraCharts::Series^ series1 = (gcnew DevExpress::XtraCharts::Series());
			DevExpress::XtraCharts::SplineSeriesView^ splineSeriesView1 = (gcnew DevExpress::XtraCharts::SplineSeriesView());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			DevExpress::XtraCharts::XYDiagram^ xyDiagram2 = (gcnew DevExpress::XtraCharts::XYDiagram());
			DevExpress::XtraCharts::Series^ series2 = (gcnew DevExpress::XtraCharts::Series());
			DevExpress::XtraCharts::SplineSeriesView^ splineSeriesView2 = (gcnew DevExpress::XtraCharts::SplineSeriesView());
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation1 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->guna2Panel1 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->bunifuLabel32 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->guna2PictureBox1 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			this->guna2Button9 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button8 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button7 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnAllBills = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnDueBills = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnPaidBills = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnAddClient = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnGenerateBill = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btnDashboard = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Panel2 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->lblUserName = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->guna2CirclePictureBox1 = (gcnew Guna::UI2::WinForms::Guna2CirclePictureBox());
			this->btn_Back = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Panel3 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->bunifuPages1 = (gcnew Bunifu::UI::WinForms::BunifuPages());
			this->DashboardTabPage = (gcnew System::Windows::Forms::TabPage());
			this->bunifuShadowPanel8 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
			this->bunifuLabel9 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel10 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuShadowPanel6 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
			this->bunifuLabel4 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel2 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuShadowPanel5 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
			this->bunifuLabel7 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->lblTotalPaidBills = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuShadowPanel4 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
			this->bunifuLabel5 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->lblTotalDueBills = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuShadowPanel3 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
			this->bunifuLabel3 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->lblTotalBills = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuShadowPanel1 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
			this->bunifuLabel1 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->lblTotalClients = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel34 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel33 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->chartControl2 = (gcnew DevExpress::XtraCharts::ChartControl());
			this->guna2Panel4 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->LatestPaidBillsDataGridView = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LatestMeterReadingsDataGridView = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chartControl1 = (gcnew DevExpress::XtraCharts::ChartControl());
			this->GenerateBillTabPage = (gcnew System::Windows::Forms::TabPage());
			this->bunifuPages2 = (gcnew Bunifu::UI::WinForms::BunifuPages());
			this->ClientListTabPage = (gcnew System::Windows::Forms::TabPage());
			this->guna2Panel6 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->ClientListDataGridView = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->guna2Panel5 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->txt_SearchBox = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->BillingTabPage = (gcnew System::Windows::Forms::TabPage());
			this->guna2Panel7 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->guna2Panel9 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->bunifuDataGridView4 = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->guna2Panel8 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->btnSubmit = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->txt_BillNo = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txt_TotalPrice = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2DateTimePicker1 = (gcnew Guna::UI2::WinForms::Guna2DateTimePicker());
			this->txt_PreviousMeterReading = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txt_ClientID = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->bunifuLabel18 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->txt_ClientName = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->bunifuLabel17 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->txt_UnitsConsumed = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->bunifuLabel16 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->txt_Balance = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->bunifuLabel15 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->txt_PricePerUnit = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->bunifuLabel14 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->txt_CurrentMeterReading = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->bunifuLabel13 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel6 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel12 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel8 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel11 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->AddClientTabPage = (gcnew System::Windows::Forms::TabPage());
			this->guna2Panel10 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->guna2VSeparator1 = (gcnew Guna::UI2::WinForms::Guna2VSeparator());
			this->guna2Panel19 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->bunifuLabel22 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnFemale = (gcnew Guna::UI2::WinForms::Guna2RadioButton());
			this->rbtnMale = (gcnew Guna::UI2::WinForms::Guna2RadioButton());
			this->btn_Submt = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->bunifuLabel31 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel30 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel29 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel27 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel20 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel19 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->txtMobileNo = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txtClientID = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txtAddress = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txtClientName = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txtIDNo = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txtEmail = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2Panel17 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->ClientsDataGridView = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->guna2Panel18 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->txt_Search = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->lblTotalNumberofClients = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->PaidBillsTabPage = (gcnew System::Windows::Forms::TabPage());
			this->guna2Panel12 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->PaidBillsDataGridView = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->guna2Panel11 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->DueBillsTabPage = (gcnew System::Windows::Forms::TabPage());
			this->guna2Panel14 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->bunifuDataGridView1 = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->guna2Panel13 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->AllBillsTabPage = (gcnew System::Windows::Forms::TabPage());
			this->guna2Panel16 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->AllBillsDataGridView = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->guna2Panel15 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->AllBillsToDatePicker = (gcnew Bunifu::UI::WinForms::BunifuDatePicker());
			this->bunifuLabel23 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->guna2Button3 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button2 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->bunifuLabel21 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->txtAllBillsSearchBox = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->AllBillsFromDatePicker = (gcnew Bunifu::UI::WinForms::BunifuDatePicker());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->guna2Panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->BeginInit();
			this->guna2Panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2CirclePictureBox1))->BeginInit();
			this->guna2Panel3->SuspendLayout();
			this->bunifuPages1->SuspendLayout();
			this->DashboardTabPage->SuspendLayout();
			this->bunifuShadowPanel8->SuspendLayout();
			this->bunifuShadowPanel6->SuspendLayout();
			this->bunifuShadowPanel5->SuspendLayout();
			this->bunifuShadowPanel4->SuspendLayout();
			this->bunifuShadowPanel3->SuspendLayout();
			this->bunifuShadowPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartControl2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(xyDiagram1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(series1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(splineSeriesView1))->BeginInit();
			this->guna2Panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LatestPaidBillsDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LatestMeterReadingsDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(xyDiagram2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(series2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(splineSeriesView2))->BeginInit();
			this->GenerateBillTabPage->SuspendLayout();
			this->bunifuPages2->SuspendLayout();
			this->ClientListTabPage->SuspendLayout();
			this->guna2Panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientListDataGridView))->BeginInit();
			this->guna2Panel5->SuspendLayout();
			this->BillingTabPage->SuspendLayout();
			this->guna2Panel7->SuspendLayout();
			this->guna2Panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView4))->BeginInit();
			this->guna2Panel8->SuspendLayout();
			this->AddClientTabPage->SuspendLayout();
			this->guna2Panel10->SuspendLayout();
			this->guna2Panel19->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->guna2Panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientsDataGridView))->BeginInit();
			this->guna2Panel18->SuspendLayout();
			this->PaidBillsTabPage->SuspendLayout();
			this->guna2Panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PaidBillsDataGridView))->BeginInit();
			this->DueBillsTabPage->SuspendLayout();
			this->guna2Panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView1))->BeginInit();
			this->AllBillsTabPage->SuspendLayout();
			this->guna2Panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AllBillsDataGridView))->BeginInit();
			this->guna2Panel15->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// guna2Panel1
			// 
			this->guna2Panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->guna2Panel1->Controls->Add(this->bunifuLabel32);
			this->guna2Panel1->Controls->Add(this->guna2PictureBox1);
			this->guna2Panel1->Controls->Add(this->guna2Button9);
			this->guna2Panel1->Controls->Add(this->guna2Button8);
			this->guna2Panel1->Controls->Add(this->guna2Button7);
			this->guna2Panel1->Controls->Add(this->btnAllBills);
			this->guna2Panel1->Controls->Add(this->btnDueBills);
			this->guna2Panel1->Controls->Add(this->btnPaidBills);
			this->guna2Panel1->Controls->Add(this->btnAddClient);
			this->guna2Panel1->Controls->Add(this->btnGenerateBill);
			this->guna2Panel1->Controls->Add(this->btnDashboard);
			this->guna2Panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->guna2Panel1->Location = System::Drawing::Point(0, 0);
			this->guna2Panel1->Name = L"guna2Panel1";
			this->guna2Panel1->ShadowDecoration->Parent = this->guna2Panel1;
			this->guna2Panel1->Size = System::Drawing::Size(174, 721);
			this->guna2Panel1->TabIndex = 0;
			// 
			// bunifuLabel32
			// 
			this->bunifuLabel32->AllowParentOverrides = false;
			this->bunifuLabel32->AutoEllipsis = false;
			this->bunifuLabel32->AutoSize = false;
			this->bunifuLabel32->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel32->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel32->Font = (gcnew System::Drawing::Font(L"Roboto", 12));
			this->bunifuLabel32->ForeColor = System::Drawing::SystemColors::Control;
			this->bunifuLabel32->Location = System::Drawing::Point(3, 138);
			this->bunifuLabel32->Name = L"bunifuLabel32";
			this->bunifuLabel32->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel32->Size = System::Drawing::Size(169, 66);
			this->bunifuLabel32->TabIndex = 10;
			this->bunifuLabel32->Text = L"Water Management System";
			this->bunifuLabel32->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuLabel32->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// guna2PictureBox1
			// 
			this->guna2PictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->guna2PictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2PictureBox1.Image")));
			this->guna2PictureBox1->Location = System::Drawing::Point(12, 3);
			this->guna2PictureBox1->Name = L"guna2PictureBox1";
			this->guna2PictureBox1->ShadowDecoration->Parent = this->guna2PictureBox1;
			this->guna2PictureBox1->Size = System::Drawing::Size(160, 129);
			this->guna2PictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->guna2PictureBox1->TabIndex = 9;
			this->guna2PictureBox1->TabStop = false;
			this->guna2PictureBox1->UseTransparentBackground = true;
			// 
			// guna2Button9
			// 
			this->guna2Button9->BackColor = System::Drawing::Color::Transparent;
			this->guna2Button9->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->guna2Button9->CheckedState->Parent = this->guna2Button9;
			this->guna2Button9->CustomImages->Parent = this->guna2Button9;
			this->guna2Button9->FillColor = System::Drawing::Color::Transparent;
			this->guna2Button9->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->guna2Button9->ForeColor = System::Drawing::Color::White;
			this->guna2Button9->HoverState->Parent = this->guna2Button9;
			this->guna2Button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2Button9.Image")));
			this->guna2Button9->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->guna2Button9->ImageSize = System::Drawing::Size(30, 30);
			this->guna2Button9->Location = System::Drawing::Point(12, 655);
			this->guna2Button9->Name = L"guna2Button9";
			this->guna2Button9->ShadowDecoration->Parent = this->guna2Button9;
			this->guna2Button9->Size = System::Drawing::Size(147, 39);
			this->guna2Button9->TabIndex = 8;
			this->guna2Button9->Text = L"Logout";
			// 
			// guna2Button8
			// 
			this->guna2Button8->BackColor = System::Drawing::Color::Transparent;
			this->guna2Button8->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->guna2Button8->CheckedState->Parent = this->guna2Button8;
			this->guna2Button8->CustomImages->Parent = this->guna2Button8;
			this->guna2Button8->FillColor = System::Drawing::Color::Transparent;
			this->guna2Button8->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->guna2Button8->ForeColor = System::Drawing::Color::White;
			this->guna2Button8->HoverState->Parent = this->guna2Button8;
			this->guna2Button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2Button8.Image")));
			this->guna2Button8->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->guna2Button8->ImageSize = System::Drawing::Size(30, 30);
			this->guna2Button8->Location = System::Drawing::Point(12, 546);
			this->guna2Button8->Name = L"guna2Button8";
			this->guna2Button8->ShadowDecoration->Parent = this->guna2Button8;
			this->guna2Button8->Size = System::Drawing::Size(147, 39);
			this->guna2Button8->TabIndex = 7;
			this->guna2Button8->Text = L"Water consumption";
			this->guna2Button8->TextOffset = System::Drawing::Point(18, 0);
			// 
			// guna2Button7
			// 
			this->guna2Button7->BackColor = System::Drawing::Color::Transparent;
			this->guna2Button7->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->guna2Button7->CheckedState->Parent = this->guna2Button7;
			this->guna2Button7->CustomImages->Parent = this->guna2Button7;
			this->guna2Button7->FillColor = System::Drawing::Color::Transparent;
			this->guna2Button7->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->guna2Button7->ForeColor = System::Drawing::Color::White;
			this->guna2Button7->HoverState->Parent = this->guna2Button7;
			this->guna2Button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2Button7.Image")));
			this->guna2Button7->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->guna2Button7->ImageSize = System::Drawing::Size(30, 30);
			this->guna2Button7->Location = System::Drawing::Point(12, 501);
			this->guna2Button7->Name = L"guna2Button7";
			this->guna2Button7->ShadowDecoration->Parent = this->guna2Button7;
			this->guna2Button7->Size = System::Drawing::Size(147, 39);
			this->guna2Button7->TabIndex = 6;
			this->guna2Button7->Text = L"Finance";
			// 
			// btnAllBills
			// 
			this->btnAllBills->BackColor = System::Drawing::Color::Transparent;
			this->btnAllBills->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnAllBills->CheckedState->Parent = this->btnAllBills;
			this->btnAllBills->CustomImages->Parent = this->btnAllBills;
			this->btnAllBills->FillColor = System::Drawing::Color::Transparent;
			this->btnAllBills->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->btnAllBills->ForeColor = System::Drawing::Color::White;
			this->btnAllBills->HoverState->Parent = this->btnAllBills;
			this->btnAllBills->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAllBills.Image")));
			this->btnAllBills->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnAllBills->ImageSize = System::Drawing::Size(25, 25);
			this->btnAllBills->Location = System::Drawing::Point(12, 454);
			this->btnAllBills->Name = L"btnAllBills";
			this->btnAllBills->ShadowDecoration->Parent = this->btnAllBills;
			this->btnAllBills->Size = System::Drawing::Size(147, 39);
			this->btnAllBills->TabIndex = 5;
			this->btnAllBills->Text = L"All Bills";
			this->btnAllBills->UseTransparentBackground = true;
			this->btnAllBills->Click += gcnew System::EventHandler(this, &Administrator::btnAllBills_Click);
			// 
			// btnDueBills
			// 
			this->btnDueBills->BackColor = System::Drawing::Color::Transparent;
			this->btnDueBills->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnDueBills->CheckedState->Parent = this->btnDueBills;
			this->btnDueBills->CustomImages->Parent = this->btnDueBills;
			this->btnDueBills->FillColor = System::Drawing::Color::Transparent;
			this->btnDueBills->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->btnDueBills->ForeColor = System::Drawing::Color::White;
			this->btnDueBills->HoverState->Parent = this->btnDueBills;
			this->btnDueBills->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDueBills.Image")));
			this->btnDueBills->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnDueBills->ImageSize = System::Drawing::Size(29, 29);
			this->btnDueBills->Location = System::Drawing::Point(12, 407);
			this->btnDueBills->Name = L"btnDueBills";
			this->btnDueBills->ShadowDecoration->Parent = this->btnDueBills;
			this->btnDueBills->Size = System::Drawing::Size(147, 39);
			this->btnDueBills->TabIndex = 4;
			this->btnDueBills->Text = L"Due Bills";
			this->btnDueBills->UseTransparentBackground = true;
			this->btnDueBills->Click += gcnew System::EventHandler(this, &Administrator::btnDueBills_Click);
			// 
			// btnPaidBills
			// 
			this->btnPaidBills->BackColor = System::Drawing::Color::Transparent;
			this->btnPaidBills->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnPaidBills->CheckedState->Parent = this->btnPaidBills;
			this->btnPaidBills->CustomImages->Parent = this->btnPaidBills;
			this->btnPaidBills->FillColor = System::Drawing::Color::Transparent;
			this->btnPaidBills->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->btnPaidBills->ForeColor = System::Drawing::Color::White;
			this->btnPaidBills->HoverState->Parent = this->btnPaidBills;
			this->btnPaidBills->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPaidBills.Image")));
			this->btnPaidBills->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnPaidBills->ImageSize = System::Drawing::Size(27, 27);
			this->btnPaidBills->Location = System::Drawing::Point(12, 360);
			this->btnPaidBills->Name = L"btnPaidBills";
			this->btnPaidBills->ShadowDecoration->Parent = this->btnPaidBills;
			this->btnPaidBills->Size = System::Drawing::Size(147, 39);
			this->btnPaidBills->TabIndex = 3;
			this->btnPaidBills->Text = L"Paid Bills";
			this->btnPaidBills->UseTransparentBackground = true;
			this->btnPaidBills->Click += gcnew System::EventHandler(this, &Administrator::btnPaidBills_Click);
			// 
			// btnAddClient
			// 
			this->btnAddClient->BackColor = System::Drawing::Color::Transparent;
			this->btnAddClient->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnAddClient->CheckedState->Parent = this->btnAddClient;
			this->btnAddClient->CustomImages->Parent = this->btnAddClient;
			this->btnAddClient->FillColor = System::Drawing::Color::Transparent;
			this->btnAddClient->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->btnAddClient->ForeColor = System::Drawing::Color::White;
			this->btnAddClient->HoverState->Parent = this->btnAddClient;
			this->btnAddClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddClient.Image")));
			this->btnAddClient->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnAddClient->ImageSize = System::Drawing::Size(30, 30);
			this->btnAddClient->Location = System::Drawing::Point(12, 313);
			this->btnAddClient->Name = L"btnAddClient";
			this->btnAddClient->ShadowDecoration->Parent = this->btnAddClient;
			this->btnAddClient->Size = System::Drawing::Size(147, 39);
			this->btnAddClient->TabIndex = 2;
			this->btnAddClient->Text = L"Add Client";
			this->btnAddClient->TextOffset = System::Drawing::Point(3, 0);
			this->btnAddClient->UseTransparentBackground = true;
			this->btnAddClient->Click += gcnew System::EventHandler(this, &Administrator::btnAddClient_Click);
			// 
			// btnGenerateBill
			// 
			this->btnGenerateBill->BackColor = System::Drawing::Color::Transparent;
			this->btnGenerateBill->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnGenerateBill->CheckedState->Parent = this->btnGenerateBill;
			this->btnGenerateBill->CustomImages->Parent = this->btnGenerateBill;
			this->btnGenerateBill->FillColor = System::Drawing::Color::Transparent;
			this->btnGenerateBill->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->btnGenerateBill->ForeColor = System::Drawing::Color::White;
			this->btnGenerateBill->HoverState->Parent = this->btnGenerateBill;
			this->btnGenerateBill->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGenerateBill.Image")));
			this->btnGenerateBill->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnGenerateBill->ImageSize = System::Drawing::Size(30, 30);
			this->btnGenerateBill->Location = System::Drawing::Point(12, 266);
			this->btnGenerateBill->Name = L"btnGenerateBill";
			this->btnGenerateBill->ShadowDecoration->Parent = this->btnGenerateBill;
			this->btnGenerateBill->Size = System::Drawing::Size(147, 39);
			this->btnGenerateBill->TabIndex = 1;
			this->btnGenerateBill->Text = L"Generate Bill";
			this->btnGenerateBill->TextOffset = System::Drawing::Point(7, 0);
			this->btnGenerateBill->UseTransparentBackground = true;
			this->btnGenerateBill->Click += gcnew System::EventHandler(this, &Administrator::btnGenerateBill_Click);
			// 
			// btnDashboard
			// 
			this->btnDashboard->BackColor = System::Drawing::Color::Transparent;
			this->btnDashboard->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnDashboard->CheckedState->Parent = this->btnDashboard;
			this->btnDashboard->CustomImages->Parent = this->btnDashboard;
			this->btnDashboard->FillColor = System::Drawing::Color::Transparent;
			this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->btnDashboard->ForeColor = System::Drawing::Color::White;
			this->btnDashboard->HoverState->Parent = this->btnDashboard;
			this->btnDashboard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDashboard.Image")));
			this->btnDashboard->ImageAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->btnDashboard->ImageSize = System::Drawing::Size(25, 25);
			this->btnDashboard->Location = System::Drawing::Point(12, 219);
			this->btnDashboard->Name = L"btnDashboard";
			this->btnDashboard->ShadowDecoration->Parent = this->btnDashboard;
			this->btnDashboard->Size = System::Drawing::Size(147, 39);
			this->btnDashboard->TabIndex = 0;
			this->btnDashboard->Text = L"Dashboard";
			this->btnDashboard->UseTransparentBackground = true;
			this->btnDashboard->Click += gcnew System::EventHandler(this, &Administrator::btnDashboard_Click);
			// 
			// guna2Panel2
			// 
			this->guna2Panel2->Controls->Add(this->lblUserName);
			this->guna2Panel2->Controls->Add(this->guna2CirclePictureBox1);
			this->guna2Panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->guna2Panel2->Location = System::Drawing::Point(174, 0);
			this->guna2Panel2->Name = L"guna2Panel2";
			this->guna2Panel2->ShadowDecoration->Parent = this->guna2Panel2;
			this->guna2Panel2->Size = System::Drawing::Size(1170, 50);
			this->guna2Panel2->TabIndex = 1;
			// 
			// lblUserName
			// 
			this->lblUserName->AllowParentOverrides = false;
			this->lblUserName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lblUserName->AutoEllipsis = false;
			this->lblUserName->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblUserName->CursorType = System::Windows::Forms::Cursors::Default;
			this->lblUserName->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->lblUserName->ForeColor = System::Drawing::Color::MediumBlue;
			this->lblUserName->Location = System::Drawing::Point(1016, 23);
			this->lblUserName->Name = L"lblUserName";
			this->lblUserName->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblUserName->Size = System::Drawing::Size(73, 15);
			this->lblUserName->TabIndex = 1;
			this->lblUserName->Text = L"lblUserName";
			this->lblUserName->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->lblUserName->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// guna2CirclePictureBox1
			// 
			this->guna2CirclePictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->guna2CirclePictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->guna2CirclePictureBox1->FillColor = System::Drawing::Color::Transparent;
			this->guna2CirclePictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2CirclePictureBox1.Image")));
			this->guna2CirclePictureBox1->Location = System::Drawing::Point(969, 3);
			this->guna2CirclePictureBox1->Name = L"guna2CirclePictureBox1";
			this->guna2CirclePictureBox1->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->guna2CirclePictureBox1->ShadowDecoration->Parent = this->guna2CirclePictureBox1;
			this->guna2CirclePictureBox1->Size = System::Drawing::Size(41, 41);
			this->guna2CirclePictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->guna2CirclePictureBox1->TabIndex = 0;
			this->guna2CirclePictureBox1->TabStop = false;
			this->guna2CirclePictureBox1->UseTransparentBackground = true;
			// 
			// btn_Back
			// 
			this->btn_Back->Animated = true;
			this->btn_Back->BackColor = System::Drawing::Color::Transparent;
			this->btn_Back->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btn_Back->CheckedState->Parent = this->btn_Back;
			this->btn_Back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Back->CustomImages->Parent = this->btn_Back;
			this->btn_Back->FillColor = System::Drawing::Color::Transparent;
			this->btn_Back->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->btn_Back->ForeColor = System::Drawing::Color::White;
			this->btn_Back->HoverState->Parent = this->btn_Back;
			this->btn_Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Back.Image")));
			this->btn_Back->ImageSize = System::Drawing::Size(30, 30);
			this->btn_Back->IndicateFocus = true;
			this->btn_Back->Location = System::Drawing::Point(3, 3);
			this->btn_Back->Name = L"btn_Back";
			this->btn_Back->ShadowDecoration->Parent = this->btn_Back;
			this->btn_Back->Size = System::Drawing::Size(44, 37);
			this->btn_Back->TabIndex = 2;
			this->btn_Back->UseTransparentBackground = true;
			this->btn_Back->Click += gcnew System::EventHandler(this, &Administrator::btn_Back_Click);
			// 
			// guna2Panel3
			// 
			this->guna2Panel3->Controls->Add(this->bunifuPages1);
			this->guna2Panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guna2Panel3->Location = System::Drawing::Point(174, 50);
			this->guna2Panel3->Name = L"guna2Panel3";
			this->guna2Panel3->ShadowDecoration->Parent = this->guna2Panel3;
			this->guna2Panel3->Size = System::Drawing::Size(1170, 671);
			this->guna2Panel3->TabIndex = 2;
			// 
			// bunifuPages1
			// 
			this->bunifuPages1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->bunifuPages1->AllowTransitions = true;
			this->bunifuPages1->Controls->Add(this->DashboardTabPage);
			this->bunifuPages1->Controls->Add(this->GenerateBillTabPage);
			this->bunifuPages1->Controls->Add(this->AddClientTabPage);
			this->bunifuPages1->Controls->Add(this->PaidBillsTabPage);
			this->bunifuPages1->Controls->Add(this->DueBillsTabPage);
			this->bunifuPages1->Controls->Add(this->AllBillsTabPage);
			this->bunifuPages1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bunifuPages1->Location = System::Drawing::Point(0, 0);
			this->bunifuPages1->Multiline = true;
			this->bunifuPages1->Name = L"bunifuPages1";
			this->bunifuPages1->Page = this->AllBillsTabPage;
			this->bunifuPages1->PageIndex = 5;
			this->bunifuPages1->PageName = L"AllBillsTabPage";
			this->bunifuPages1->PageTitle = L"All Bills";
			this->bunifuPages1->SelectedIndex = 0;
			this->bunifuPages1->Size = System::Drawing::Size(1170, 671);
			this->bunifuPages1->TabIndex = 0;
			animation2->AnimateOnlyDifferences = true;
			animation2->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.BlindCoeff")));
			animation2->LeafCoeff = 0;
			animation2->MaxTime = 1;
			animation2->MinTime = 0;
			animation2->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicCoeff")));
			animation2->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicShift")));
			animation2->MosaicSize = 0;
			animation2->Padding = System::Windows::Forms::Padding(0, 0, 0, 0);
			animation2->RotateCoeff = 0;
			animation2->RotateLimit = 0;
			animation2->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.ScaleCoeff")));
			animation2->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.SlideCoeff")));
			animation2->TimeCoeff = 0;
			animation2->TransparencyCoeff = 0;
			this->bunifuPages1->Transition = animation2;
			this->bunifuPages1->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::HorizSlide;
			// 
			// DashboardTabPage
			// 
			this->DashboardTabPage->Controls->Add(this->bunifuShadowPanel8);
			this->DashboardTabPage->Controls->Add(this->bunifuShadowPanel6);
			this->DashboardTabPage->Controls->Add(this->bunifuShadowPanel5);
			this->DashboardTabPage->Controls->Add(this->bunifuShadowPanel4);
			this->DashboardTabPage->Controls->Add(this->bunifuShadowPanel3);
			this->DashboardTabPage->Controls->Add(this->bunifuShadowPanel1);
			this->DashboardTabPage->Controls->Add(this->bunifuLabel34);
			this->DashboardTabPage->Controls->Add(this->bunifuLabel33);
			this->DashboardTabPage->Controls->Add(this->chartControl2);
			this->DashboardTabPage->Controls->Add(this->guna2Panel4);
			this->DashboardTabPage->Controls->Add(this->chartControl1);
			this->DashboardTabPage->Location = System::Drawing::Point(4, 4);
			this->DashboardTabPage->Name = L"DashboardTabPage";
			this->DashboardTabPage->Padding = System::Windows::Forms::Padding(3);
			this->DashboardTabPage->Size = System::Drawing::Size(1162, 643);
			this->DashboardTabPage->TabIndex = 0;
			this->DashboardTabPage->Text = L"Dashboard";
			this->DashboardTabPage->UseVisualStyleBackColor = true;
			// 
			// bunifuShadowPanel8
			// 
			this->bunifuShadowPanel8->BackColor = System::Drawing::Color::Transparent;
			this->bunifuShadowPanel8->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel8->BorderRadius = 1;
			this->bunifuShadowPanel8->BorderThickness = 1;
			this->bunifuShadowPanel8->Controls->Add(this->bunifuLabel9);
			this->bunifuShadowPanel8->Controls->Add(this->bunifuLabel10);
			this->bunifuShadowPanel8->FillStyle = Bunifu::UI::WinForms::BunifuShadowPanel::FillStyles::Solid;
			this->bunifuShadowPanel8->GradientMode = Bunifu::UI::WinForms::BunifuShadowPanel::GradientModes::Vertical;
			this->bunifuShadowPanel8->Location = System::Drawing::Point(731, 7);
			this->bunifuShadowPanel8->Name = L"bunifuShadowPanel8";
			this->bunifuShadowPanel8->PanelColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel8->PanelColor2 = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel8->ShadowColor = System::Drawing::Color::MediumBlue;
			this->bunifuShadowPanel8->ShadowDept = 2;
			this->bunifuShadowPanel8->ShadowDepth = 5;
			this->bunifuShadowPanel8->ShadowStyle = Bunifu::UI::WinForms::BunifuShadowPanel::ShadowStyles::ForwardDiagonal;
			this->bunifuShadowPanel8->ShadowTopLeftVisible = false;
			this->bunifuShadowPanel8->Size = System::Drawing::Size(145, 71);
			this->bunifuShadowPanel8->Style = Bunifu::UI::WinForms::BunifuShadowPanel::BevelStyles::Raised;
			this->bunifuShadowPanel8->TabIndex = 13;
			// 
			// bunifuLabel9
			// 
			this->bunifuLabel9->AllowParentOverrides = false;
			this->bunifuLabel9->AutoEllipsis = false;
			this->bunifuLabel9->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel9->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel9->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel9->ForeColor = System::Drawing::Color::MediumBlue;
			this->bunifuLabel9->Location = System::Drawing::Point(3, 3);
			this->bunifuLabel9->Name = L"bunifuLabel9";
			this->bunifuLabel9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel9->Size = System::Drawing::Size(47, 23);
			this->bunifuLabel9->TabIndex = 1;
			this->bunifuLabel9->Text = L"Profit";
			this->bunifuLabel9->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel9->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel10
			// 
			this->bunifuLabel10->AllowParentOverrides = false;
			this->bunifuLabel10->AutoEllipsis = false;
			this->bunifuLabel10->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel10->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel10->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel10->ForeColor = System::Drawing::Color::MediumBlue;
			this->bunifuLabel10->Location = System::Drawing::Point(3, 32);
			this->bunifuLabel10->Name = L"bunifuLabel10";
			this->bunifuLabel10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel10->Size = System::Drawing::Size(121, 23);
			this->bunifuLabel10->TabIndex = 2;
			this->bunifuLabel10->Text = L"bunifuLabel10";
			this->bunifuLabel10->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel10->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuShadowPanel6
			// 
			this->bunifuShadowPanel6->BackColor = System::Drawing::Color::Transparent;
			this->bunifuShadowPanel6->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel6->BorderRadius = 1;
			this->bunifuShadowPanel6->BorderThickness = 1;
			this->bunifuShadowPanel6->Controls->Add(this->bunifuLabel4);
			this->bunifuShadowPanel6->Controls->Add(this->bunifuLabel2);
			this->bunifuShadowPanel6->FillStyle = Bunifu::UI::WinForms::BunifuShadowPanel::FillStyles::Solid;
			this->bunifuShadowPanel6->GradientMode = Bunifu::UI::WinForms::BunifuShadowPanel::GradientModes::Vertical;
			this->bunifuShadowPanel6->Location = System::Drawing::Point(913, 7);
			this->bunifuShadowPanel6->Name = L"bunifuShadowPanel6";
			this->bunifuShadowPanel6->PanelColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel6->PanelColor2 = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel6->ShadowColor = System::Drawing::Color::MediumBlue;
			this->bunifuShadowPanel6->ShadowDept = 2;
			this->bunifuShadowPanel6->ShadowDepth = 5;
			this->bunifuShadowPanel6->ShadowStyle = Bunifu::UI::WinForms::BunifuShadowPanel::ShadowStyles::ForwardDiagonal;
			this->bunifuShadowPanel6->ShadowTopLeftVisible = false;
			this->bunifuShadowPanel6->Size = System::Drawing::Size(145, 71);
			this->bunifuShadowPanel6->Style = Bunifu::UI::WinForms::BunifuShadowPanel::BevelStyles::Raised;
			this->bunifuShadowPanel6->TabIndex = 13;
			// 
			// bunifuLabel4
			// 
			this->bunifuLabel4->AllowParentOverrides = false;
			this->bunifuLabel4->AutoEllipsis = false;
			this->bunifuLabel4->CursorType = nullptr;
			this->bunifuLabel4->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel4->ForeColor = System::Drawing::Color::MediumBlue;
			this->bunifuLabel4->Location = System::Drawing::Point(3, 3);
			this->bunifuLabel4->Name = L"bunifuLabel4";
			this->bunifuLabel4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel4->Size = System::Drawing::Size(135, 23);
			this->bunifuLabel4->TabIndex = 1;
			this->bunifuLabel4->Text = L"Total Units (/m)";
			this->bunifuLabel4->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel4->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel2
			// 
			this->bunifuLabel2->AllowParentOverrides = false;
			this->bunifuLabel2->AutoEllipsis = false;
			this->bunifuLabel2->CursorType = nullptr;
			this->bunifuLabel2->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel2->ForeColor = System::Drawing::Color::MediumBlue;
			this->bunifuLabel2->Location = System::Drawing::Point(3, 32);
			this->bunifuLabel2->Name = L"bunifuLabel2";
			this->bunifuLabel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel2->Size = System::Drawing::Size(136, 23);
			this->bunifuLabel2->TabIndex = 2;
			this->bunifuLabel2->Text = L"lblMonthlyProfit";
			this->bunifuLabel2->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel2->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuShadowPanel5
			// 
			this->bunifuShadowPanel5->BackColor = System::Drawing::Color::Transparent;
			this->bunifuShadowPanel5->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel5->BorderRadius = 1;
			this->bunifuShadowPanel5->BorderThickness = 1;
			this->bunifuShadowPanel5->Controls->Add(this->bunifuLabel7);
			this->bunifuShadowPanel5->Controls->Add(this->lblTotalPaidBills);
			this->bunifuShadowPanel5->FillStyle = Bunifu::UI::WinForms::BunifuShadowPanel::FillStyles::Solid;
			this->bunifuShadowPanel5->GradientMode = Bunifu::UI::WinForms::BunifuShadowPanel::GradientModes::Vertical;
			this->bunifuShadowPanel5->Location = System::Drawing::Point(549, 7);
			this->bunifuShadowPanel5->Name = L"bunifuShadowPanel5";
			this->bunifuShadowPanel5->PanelColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel5->PanelColor2 = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel5->ShadowColor = System::Drawing::Color::MediumBlue;
			this->bunifuShadowPanel5->ShadowDept = 2;
			this->bunifuShadowPanel5->ShadowDepth = 5;
			this->bunifuShadowPanel5->ShadowStyle = Bunifu::UI::WinForms::BunifuShadowPanel::ShadowStyles::ForwardDiagonal;
			this->bunifuShadowPanel5->ShadowTopLeftVisible = false;
			this->bunifuShadowPanel5->Size = System::Drawing::Size(152, 71);
			this->bunifuShadowPanel5->Style = Bunifu::UI::WinForms::BunifuShadowPanel::BevelStyles::Raised;
			this->bunifuShadowPanel5->TabIndex = 13;
			// 
			// bunifuLabel7
			// 
			this->bunifuLabel7->AllowParentOverrides = false;
			this->bunifuLabel7->AutoEllipsis = false;
			this->bunifuLabel7->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel7->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel7->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel7->ForeColor = System::Drawing::Color::MediumBlue;
			this->bunifuLabel7->Location = System::Drawing::Point(3, 3);
			this->bunifuLabel7->Name = L"bunifuLabel7";
			this->bunifuLabel7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel7->Size = System::Drawing::Size(128, 23);
			this->bunifuLabel7->TabIndex = 1;
			this->bunifuLabel7->Text = L"Total Paid Bills";
			this->bunifuLabel7->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel7->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// lblTotalPaidBills
			// 
			this->lblTotalPaidBills->AllowParentOverrides = false;
			this->lblTotalPaidBills->AutoEllipsis = false;
			this->lblTotalPaidBills->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblTotalPaidBills->CursorType = System::Windows::Forms::Cursors::Default;
			this->lblTotalPaidBills->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalPaidBills->ForeColor = System::Drawing::Color::MediumBlue;
			this->lblTotalPaidBills->Location = System::Drawing::Point(3, 32);
			this->lblTotalPaidBills->Name = L"lblTotalPaidBills";
			this->lblTotalPaidBills->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblTotalPaidBills->Size = System::Drawing::Size(139, 23);
			this->lblTotalPaidBills->TabIndex = 2;
			this->lblTotalPaidBills->Text = L"lblTotalPaidBills";
			this->lblTotalPaidBills->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->lblTotalPaidBills->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuShadowPanel4
			// 
			this->bunifuShadowPanel4->BackColor = System::Drawing::Color::Transparent;
			this->bunifuShadowPanel4->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel4->BorderRadius = 1;
			this->bunifuShadowPanel4->BorderThickness = 1;
			this->bunifuShadowPanel4->Controls->Add(this->bunifuLabel5);
			this->bunifuShadowPanel4->Controls->Add(this->lblTotalDueBills);
			this->bunifuShadowPanel4->FillStyle = Bunifu::UI::WinForms::BunifuShadowPanel::FillStyles::Solid;
			this->bunifuShadowPanel4->GradientMode = Bunifu::UI::WinForms::BunifuShadowPanel::GradientModes::Vertical;
			this->bunifuShadowPanel4->Location = System::Drawing::Point(369, 7);
			this->bunifuShadowPanel4->Name = L"bunifuShadowPanel4";
			this->bunifuShadowPanel4->PanelColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel4->PanelColor2 = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel4->ShadowColor = System::Drawing::Color::MediumBlue;
			this->bunifuShadowPanel4->ShadowDept = 2;
			this->bunifuShadowPanel4->ShadowDepth = 5;
			this->bunifuShadowPanel4->ShadowStyle = Bunifu::UI::WinForms::BunifuShadowPanel::ShadowStyles::ForwardDiagonal;
			this->bunifuShadowPanel4->ShadowTopLeftVisible = false;
			this->bunifuShadowPanel4->Size = System::Drawing::Size(145, 71);
			this->bunifuShadowPanel4->Style = Bunifu::UI::WinForms::BunifuShadowPanel::BevelStyles::Raised;
			this->bunifuShadowPanel4->TabIndex = 13;
			// 
			// bunifuLabel5
			// 
			this->bunifuLabel5->AllowParentOverrides = false;
			this->bunifuLabel5->AutoEllipsis = false;
			this->bunifuLabel5->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel5->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel5->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel5->ForeColor = System::Drawing::Color::MediumBlue;
			this->bunifuLabel5->Location = System::Drawing::Point(3, 3);
			this->bunifuLabel5->Name = L"bunifuLabel5";
			this->bunifuLabel5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel5->Size = System::Drawing::Size(122, 23);
			this->bunifuLabel5->TabIndex = 1;
			this->bunifuLabel5->Text = L"Total Due Bills";
			this->bunifuLabel5->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel5->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// lblTotalDueBills
			// 
			this->lblTotalDueBills->AllowParentOverrides = false;
			this->lblTotalDueBills->AutoEllipsis = false;
			this->lblTotalDueBills->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblTotalDueBills->CursorType = System::Windows::Forms::Cursors::Default;
			this->lblTotalDueBills->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalDueBills->ForeColor = System::Drawing::Color::MediumBlue;
			this->lblTotalDueBills->Location = System::Drawing::Point(3, 32);
			this->lblTotalDueBills->Name = L"lblTotalDueBills";
			this->lblTotalDueBills->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblTotalDueBills->Size = System::Drawing::Size(133, 23);
			this->lblTotalDueBills->TabIndex = 2;
			this->lblTotalDueBills->Text = L"lblTotalDueBills";
			this->lblTotalDueBills->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->lblTotalDueBills->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuShadowPanel3
			// 
			this->bunifuShadowPanel3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuShadowPanel3->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel3->BorderRadius = 1;
			this->bunifuShadowPanel3->BorderThickness = 1;
			this->bunifuShadowPanel3->Controls->Add(this->bunifuLabel3);
			this->bunifuShadowPanel3->Controls->Add(this->lblTotalBills);
			this->bunifuShadowPanel3->FillStyle = Bunifu::UI::WinForms::BunifuShadowPanel::FillStyles::Solid;
			this->bunifuShadowPanel3->GradientMode = Bunifu::UI::WinForms::BunifuShadowPanel::GradientModes::Vertical;
			this->bunifuShadowPanel3->Location = System::Drawing::Point(188, 7);
			this->bunifuShadowPanel3->Name = L"bunifuShadowPanel3";
			this->bunifuShadowPanel3->PanelColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel3->PanelColor2 = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel3->ShadowColor = System::Drawing::Color::MediumBlue;
			this->bunifuShadowPanel3->ShadowDept = 2;
			this->bunifuShadowPanel3->ShadowDepth = 5;
			this->bunifuShadowPanel3->ShadowStyle = Bunifu::UI::WinForms::BunifuShadowPanel::ShadowStyles::ForwardDiagonal;
			this->bunifuShadowPanel3->ShadowTopLeftVisible = false;
			this->bunifuShadowPanel3->Size = System::Drawing::Size(145, 71);
			this->bunifuShadowPanel3->Style = Bunifu::UI::WinForms::BunifuShadowPanel::BevelStyles::Raised;
			this->bunifuShadowPanel3->TabIndex = 13;
			// 
			// bunifuLabel3
			// 
			this->bunifuLabel3->AllowParentOverrides = false;
			this->bunifuLabel3->AutoEllipsis = false;
			this->bunifuLabel3->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel3->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel3->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel3->ForeColor = System::Drawing::Color::MediumBlue;
			this->bunifuLabel3->Location = System::Drawing::Point(14, 3);
			this->bunifuLabel3->Name = L"bunifuLabel3";
			this->bunifuLabel3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel3->Size = System::Drawing::Size(85, 23);
			this->bunifuLabel3->TabIndex = 1;
			this->bunifuLabel3->Text = L"Total Bills";
			this->bunifuLabel3->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel3->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// lblTotalBills
			// 
			this->lblTotalBills->AllowParentOverrides = false;
			this->lblTotalBills->AutoEllipsis = false;
			this->lblTotalBills->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblTotalBills->CursorType = System::Windows::Forms::Cursors::Default;
			this->lblTotalBills->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalBills->ForeColor = System::Drawing::Color::MediumBlue;
			this->lblTotalBills->Location = System::Drawing::Point(14, 32);
			this->lblTotalBills->Name = L"lblTotalBills";
			this->lblTotalBills->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblTotalBills->Size = System::Drawing::Size(101, 23);
			this->lblTotalBills->TabIndex = 2;
			this->lblTotalBills->Text = L"lblTotalBills";
			this->lblTotalBills->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->lblTotalBills->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuShadowPanel1
			// 
			this->bunifuShadowPanel1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuShadowPanel1->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel1->BorderRadius = 1;
			this->bunifuShadowPanel1->BorderThickness = 1;
			this->bunifuShadowPanel1->Controls->Add(this->bunifuLabel1);
			this->bunifuShadowPanel1->Controls->Add(this->lblTotalClients);
			this->bunifuShadowPanel1->FillStyle = Bunifu::UI::WinForms::BunifuShadowPanel::FillStyles::Solid;
			this->bunifuShadowPanel1->GradientMode = Bunifu::UI::WinForms::BunifuShadowPanel::GradientModes::Vertical;
			this->bunifuShadowPanel1->Location = System::Drawing::Point(14, 7);
			this->bunifuShadowPanel1->Name = L"bunifuShadowPanel1";
			this->bunifuShadowPanel1->PanelColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel1->PanelColor2 = System::Drawing::Color::WhiteSmoke;
			this->bunifuShadowPanel1->ShadowColor = System::Drawing::Color::MediumBlue;
			this->bunifuShadowPanel1->ShadowDept = 2;
			this->bunifuShadowPanel1->ShadowDepth = 5;
			this->bunifuShadowPanel1->ShadowStyle = Bunifu::UI::WinForms::BunifuShadowPanel::ShadowStyles::ForwardDiagonal;
			this->bunifuShadowPanel1->ShadowTopLeftVisible = false;
			this->bunifuShadowPanel1->Size = System::Drawing::Size(145, 71);
			this->bunifuShadowPanel1->Style = Bunifu::UI::WinForms::BunifuShadowPanel::BevelStyles::Raised;
			this->bunifuShadowPanel1->TabIndex = 12;
			// 
			// bunifuLabel1
			// 
			this->bunifuLabel1->AllowParentOverrides = false;
			this->bunifuLabel1->AutoEllipsis = false;
			this->bunifuLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel1->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel1->ForeColor = System::Drawing::Color::MediumBlue;
			this->bunifuLabel1->Location = System::Drawing::Point(13, 3);
			this->bunifuLabel1->Name = L"bunifuLabel1";
			this->bunifuLabel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel1->Size = System::Drawing::Size(106, 23);
			this->bunifuLabel1->TabIndex = 1;
			this->bunifuLabel1->Text = L"Total Clients";
			this->bunifuLabel1->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel1->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// lblTotalClients
			// 
			this->lblTotalClients->AllowParentOverrides = false;
			this->lblTotalClients->AutoEllipsis = false;
			this->lblTotalClients->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblTotalClients->CursorType = System::Windows::Forms::Cursors::Default;
			this->lblTotalClients->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalClients->ForeColor = System::Drawing::Color::MediumBlue;
			this->lblTotalClients->Location = System::Drawing::Point(13, 32);
			this->lblTotalClients->Name = L"lblTotalClients";
			this->lblTotalClients->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblTotalClients->Size = System::Drawing::Size(122, 23);
			this->lblTotalClients->TabIndex = 2;
			this->lblTotalClients->Text = L"lblTotalClients";
			this->lblTotalClients->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->lblTotalClients->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel34
			// 
			this->bunifuLabel34->AllowParentOverrides = false;
			this->bunifuLabel34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bunifuLabel34->AutoEllipsis = false;
			this->bunifuLabel34->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel34->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel34->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F));
			this->bunifuLabel34->Location = System::Drawing::Point(583, 380);
			this->bunifuLabel34->Name = L"bunifuLabel34";
			this->bunifuLabel34->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel34->Size = System::Drawing::Size(111, 24);
			this->bunifuLabel34->TabIndex = 9;
			this->bunifuLabel34->Text = L"Latest Paid Bills";
			this->bunifuLabel34->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel34->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel33
			// 
			this->bunifuLabel33->AllowParentOverrides = false;
			this->bunifuLabel33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->bunifuLabel33->AutoEllipsis = false;
			this->bunifuLabel33->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel33->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel33->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F));
			this->bunifuLabel33->Location = System::Drawing::Point(3, 380);
			this->bunifuLabel33->Name = L"bunifuLabel33";
			this->bunifuLabel33->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel33->Size = System::Drawing::Size(156, 24);
			this->bunifuLabel33->TabIndex = 8;
			this->bunifuLabel33->Text = L"Latest Meter Readings";
			this->bunifuLabel33->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel33->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// chartControl2
			// 
			xyDiagram1->AxisX->VisibleInPanesSerializable = L"-1";
			xyDiagram1->AxisY->VisibleInPanesSerializable = L"-1";
			this->chartControl2->Diagram = xyDiagram1;
			this->chartControl2->Legend->Name = L"Default Legend";
			this->chartControl2->Location = System::Drawing::Point(582, 125);
			this->chartControl2->Name = L"chartControl2";
			series1->Name = L"Series 1";
			series1->View = splineSeriesView1;
			this->chartControl2->SeriesSerializable = gcnew cli::array< DevExpress::XtraCharts::Series^  >(1) { series1 };
			this->chartControl2->Size = System::Drawing::Size(576, 231);
			this->chartControl2->TabIndex = 7;
			// 
			// guna2Panel4
			// 
			this->guna2Panel4->Controls->Add(this->LatestPaidBillsDataGridView);
			this->guna2Panel4->Controls->Add(this->LatestMeterReadingsDataGridView);
			this->guna2Panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->guna2Panel4->Location = System::Drawing::Point(3, 410);
			this->guna2Panel4->Name = L"guna2Panel4";
			this->guna2Panel4->ShadowDecoration->Parent = this->guna2Panel4;
			this->guna2Panel4->Size = System::Drawing::Size(1156, 230);
			this->guna2Panel4->TabIndex = 1;
			// 
			// LatestPaidBillsDataGridView
			// 
			this->LatestPaidBillsDataGridView->AllowCustomTheming = true;
			this->LatestPaidBillsDataGridView->AllowUserToAddRows = false;
			this->LatestPaidBillsDataGridView->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->LatestPaidBillsDataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->LatestPaidBillsDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->LatestPaidBillsDataGridView->BackgroundColor = System::Drawing::SystemColors::Window;
			this->LatestPaidBillsDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LatestPaidBillsDataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->LatestPaidBillsDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->LatestPaidBillsDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->LatestPaidBillsDataGridView->ColumnHeadersHeight = 35;
			this->LatestPaidBillsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column5,
					this->Column6, this->Column9, this->Column7, this->Column8
			});
			this->LatestPaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestPaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LatestPaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->LatestPaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestPaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
			this->LatestPaidBillsDataGridView->CurrentTheme->BackColor = System::Drawing::Color::DodgerBlue;
			this->LatestPaidBillsDataGridView->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestPaidBillsDataGridView->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::DodgerBlue;
			this->LatestPaidBillsDataGridView->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LatestPaidBillsDataGridView->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->LatestPaidBillsDataGridView->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->LatestPaidBillsDataGridView->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->LatestPaidBillsDataGridView->CurrentTheme->Name = nullptr;
			this->LatestPaidBillsDataGridView->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestPaidBillsDataGridView->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LatestPaidBillsDataGridView->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->LatestPaidBillsDataGridView->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestPaidBillsDataGridView->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->LatestPaidBillsDataGridView->DefaultCellStyle = dataGridViewCellStyle3;
			this->LatestPaidBillsDataGridView->Dock = System::Windows::Forms::DockStyle::Right;
			this->LatestPaidBillsDataGridView->EnableHeadersVisualStyles = false;
			this->LatestPaidBillsDataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestPaidBillsDataGridView->HeaderBackColor = System::Drawing::Color::DodgerBlue;
			this->LatestPaidBillsDataGridView->HeaderBgColor = System::Drawing::Color::Empty;
			this->LatestPaidBillsDataGridView->HeaderForeColor = System::Drawing::Color::White;
			this->LatestPaidBillsDataGridView->Location = System::Drawing::Point(580, 0);
			this->LatestPaidBillsDataGridView->Name = L"LatestPaidBillsDataGridView";
			this->LatestPaidBillsDataGridView->ReadOnly = true;
			this->LatestPaidBillsDataGridView->RowHeadersVisible = false;
			this->LatestPaidBillsDataGridView->RowTemplate->Height = 30;
			this->LatestPaidBillsDataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->LatestPaidBillsDataGridView->Size = System::Drawing::Size(576, 230);
			this->LatestPaidBillsDataGridView->TabIndex = 1;
			this->LatestPaidBillsDataGridView->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::DodgerBlue;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->DataPropertyName = L"client_id";
			this->Column5->HeaderText = L"Client ID";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 90;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->DataPropertyName = L"name";
			this->Column6->HeaderText = L"Name";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 74;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column9->DataPropertyName = L"bill_no";
			this->Column9->HeaderText = L"Bill No.";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 82;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->DataPropertyName = L"credit";
			this->Column7->HeaderText = L"Credit";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 74;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column8->DataPropertyName = L"paid_date";
			this->Column8->HeaderText = L"Date Paid";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 101;
			// 
			// LatestMeterReadingsDataGridView
			// 
			this->LatestMeterReadingsDataGridView->AllowCustomTheming = true;
			this->LatestMeterReadingsDataGridView->AllowUserToAddRows = false;
			this->LatestMeterReadingsDataGridView->AllowUserToDeleteRows = false;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			this->LatestMeterReadingsDataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->LatestMeterReadingsDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LatestMeterReadingsDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->LatestMeterReadingsDataGridView->BackgroundColor = System::Drawing::SystemColors::Window;
			this->LatestMeterReadingsDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LatestMeterReadingsDataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->LatestMeterReadingsDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->LatestMeterReadingsDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->LatestMeterReadingsDataGridView->ColumnHeadersHeight = 35;
			this->LatestMeterReadingsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->LatestMeterReadingsDataGridView->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestMeterReadingsDataGridView->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F,
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LatestMeterReadingsDataGridView->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->LatestMeterReadingsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestMeterReadingsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
			this->LatestMeterReadingsDataGridView->CurrentTheme->BackColor = System::Drawing::Color::DodgerBlue;
			this->LatestMeterReadingsDataGridView->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestMeterReadingsDataGridView->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::DodgerBlue;
			this->LatestMeterReadingsDataGridView->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LatestMeterReadingsDataGridView->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->LatestMeterReadingsDataGridView->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->LatestMeterReadingsDataGridView->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->LatestMeterReadingsDataGridView->CurrentTheme->Name = nullptr;
			this->LatestMeterReadingsDataGridView->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestMeterReadingsDataGridView->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LatestMeterReadingsDataGridView->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->LatestMeterReadingsDataGridView->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestMeterReadingsDataGridView->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->LatestMeterReadingsDataGridView->DefaultCellStyle = dataGridViewCellStyle6;
			this->LatestMeterReadingsDataGridView->EnableHeadersVisualStyles = false;
			this->LatestMeterReadingsDataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LatestMeterReadingsDataGridView->HeaderBackColor = System::Drawing::Color::DodgerBlue;
			this->LatestMeterReadingsDataGridView->HeaderBgColor = System::Drawing::Color::Empty;
			this->LatestMeterReadingsDataGridView->HeaderForeColor = System::Drawing::Color::White;
			this->LatestMeterReadingsDataGridView->Location = System::Drawing::Point(0, 0);
			this->LatestMeterReadingsDataGridView->Name = L"LatestMeterReadingsDataGridView";
			this->LatestMeterReadingsDataGridView->ReadOnly = true;
			this->LatestMeterReadingsDataGridView->RowHeadersVisible = false;
			this->LatestMeterReadingsDataGridView->RowTemplate->Height = 30;
			this->LatestMeterReadingsDataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->LatestMeterReadingsDataGridView->Size = System::Drawing::Size(576, 230);
			this->LatestMeterReadingsDataGridView->TabIndex = 0;
			this->LatestMeterReadingsDataGridView->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::DodgerBlue;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->DataPropertyName = L"client_id";
			this->Column1->HeaderText = L"Client ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 90;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->DataPropertyName = L"name";
			this->Column2->HeaderText = L"Client Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 117;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->DataPropertyName = L"units_consumed";
			this->Column3->HeaderText = L"Units Consumed";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 146;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->DataPropertyName = L"meter_reading_date";
			this->Column4->HeaderText = L"Reading Date";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 127;
			// 
			// chartControl1
			// 
			xyDiagram2->AxisX->VisibleInPanesSerializable = L"-1";
			xyDiagram2->AxisY->VisibleInPanesSerializable = L"-1";
			this->chartControl1->Diagram = xyDiagram2;
			this->chartControl1->Legend->Name = L"Default Legend";
			this->chartControl1->Location = System::Drawing::Point(6, 125);
			this->chartControl1->Name = L"chartControl1";
			series2->Name = L"Series 1";
			series2->View = splineSeriesView2;
			this->chartControl1->SeriesSerializable = gcnew cli::array< DevExpress::XtraCharts::Series^  >(1) { series2 };
			this->chartControl1->Size = System::Drawing::Size(572, 231);
			this->chartControl1->TabIndex = 0;
			// 
			// GenerateBillTabPage
			// 
			this->GenerateBillTabPage->Controls->Add(this->bunifuPages2);
			this->GenerateBillTabPage->Location = System::Drawing::Point(4, 4);
			this->GenerateBillTabPage->Name = L"GenerateBillTabPage";
			this->GenerateBillTabPage->Padding = System::Windows::Forms::Padding(3);
			this->GenerateBillTabPage->Size = System::Drawing::Size(1162, 643);
			this->GenerateBillTabPage->TabIndex = 1;
			this->GenerateBillTabPage->Text = L"Generate Bill";
			this->GenerateBillTabPage->UseVisualStyleBackColor = true;
			// 
			// bunifuPages2
			// 
			this->bunifuPages2->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->bunifuPages2->AllowTransitions = true;
			this->bunifuPages2->Controls->Add(this->ClientListTabPage);
			this->bunifuPages2->Controls->Add(this->BillingTabPage);
			this->bunifuPages2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bunifuPages2->Location = System::Drawing::Point(3, 3);
			this->bunifuPages2->Multiline = true;
			this->bunifuPages2->Name = L"bunifuPages2";
			this->bunifuPages2->Page = this->ClientListTabPage;
			this->bunifuPages2->PageIndex = 0;
			this->bunifuPages2->PageName = L"ClientListTabPage";
			this->bunifuPages2->PageTitle = L"Clients List";
			this->bunifuPages2->SelectedIndex = 0;
			this->bunifuPages2->Size = System::Drawing::Size(1156, 637);
			this->bunifuPages2->TabIndex = 0;
			animation1->AnimateOnlyDifferences = true;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 0;
			animation1->Padding = System::Windows::Forms::Padding(0, 0, 0, 0);
			animation1->RotateCoeff = 0;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 0;
			animation1->TransparencyCoeff = 0;
			this->bunifuPages2->Transition = animation1;
			this->bunifuPages2->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::HorizSlide;
			// 
			// ClientListTabPage
			// 
			this->ClientListTabPage->Controls->Add(this->guna2Panel6);
			this->ClientListTabPage->Controls->Add(this->guna2Panel5);
			this->ClientListTabPage->Location = System::Drawing::Point(4, 4);
			this->ClientListTabPage->Name = L"ClientListTabPage";
			this->ClientListTabPage->Padding = System::Windows::Forms::Padding(3);
			this->ClientListTabPage->Size = System::Drawing::Size(1148, 609);
			this->ClientListTabPage->TabIndex = 0;
			this->ClientListTabPage->Text = L"Clients List";
			this->ClientListTabPage->UseVisualStyleBackColor = true;
			// 
			// guna2Panel6
			// 
			this->guna2Panel6->Controls->Add(this->ClientListDataGridView);
			this->guna2Panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guna2Panel6->Location = System::Drawing::Point(3, 51);
			this->guna2Panel6->Name = L"guna2Panel6";
			this->guna2Panel6->ShadowDecoration->Parent = this->guna2Panel6;
			this->guna2Panel6->Size = System::Drawing::Size(1142, 555);
			this->guna2Panel6->TabIndex = 1;
			// 
			// ClientListDataGridView
			// 
			this->ClientListDataGridView->AllowCustomTheming = true;
			this->ClientListDataGridView->AllowUserToAddRows = false;
			this->ClientListDataGridView->AllowUserToDeleteRows = false;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::Black;
			this->ClientListDataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle7;
			this->ClientListDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ClientListDataGridView->BackgroundColor = System::Drawing::SystemColors::Window;
			this->ClientListDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ClientListDataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->ClientListDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::Navy;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Saira", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ClientListDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->ClientListDataGridView->ColumnHeadersHeight = 40;
			this->ClientListDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column10,
					this->Column11, this->Column17, this->Column16, this->Column12, this->Column13, this->Column15, this->Column18, this->Column14
			});
			this->ClientListDataGridView->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->ClientListDataGridView->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F,
				System::Drawing::FontStyle::Bold));
			this->ClientListDataGridView->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->ClientListDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->ClientListDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
			this->ClientListDataGridView->CurrentTheme->BackColor = System::Drawing::Color::Navy;
			this->ClientListDataGridView->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->ClientListDataGridView->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::Navy;
			this->ClientListDataGridView->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Saira", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ClientListDataGridView->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->ClientListDataGridView->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->ClientListDataGridView->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->ClientListDataGridView->CurrentTheme->Name = nullptr;
			this->ClientListDataGridView->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->ClientListDataGridView->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ClientListDataGridView->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->ClientListDataGridView->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->ClientListDataGridView->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ClientListDataGridView->DefaultCellStyle = dataGridViewCellStyle9;
			this->ClientListDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientListDataGridView->EnableHeadersVisualStyles = false;
			this->ClientListDataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->ClientListDataGridView->HeaderBackColor = System::Drawing::Color::Navy;
			this->ClientListDataGridView->HeaderBgColor = System::Drawing::Color::Empty;
			this->ClientListDataGridView->HeaderForeColor = System::Drawing::Color::White;
			this->ClientListDataGridView->Location = System::Drawing::Point(0, 0);
			this->ClientListDataGridView->Name = L"ClientListDataGridView";
			this->ClientListDataGridView->ReadOnly = true;
			this->ClientListDataGridView->RowHeadersVisible = false;
			this->ClientListDataGridView->RowTemplate->Height = 40;
			this->ClientListDataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ClientListDataGridView->Size = System::Drawing::Size(1142, 555);
			this->ClientListDataGridView->TabIndex = 0;
			this->ClientListDataGridView->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::Navy;
			this->ClientListDataGridView->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Administrator::ClientListDataGridView_CellMouseClick);
			// 
			// Column10
			// 
			this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column10->DataPropertyName = L"client_id";
			this->Column10->HeaderText = L"Client ID";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 97;
			// 
			// Column11
			// 
			this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column11->DataPropertyName = L"name";
			this->Column11->HeaderText = L"Name";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 79;
			// 
			// Column17
			// 
			this->Column17->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column17->DataPropertyName = L"mobile_no";
			this->Column17->HeaderText = L"Mobile No.";
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			this->Column17->Width = 114;
			// 
			// Column16
			// 
			this->Column16->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column16->DataPropertyName = L"address";
			this->Column16->HeaderText = L"Address";
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Width = 95;
			// 
			// Column12
			// 
			this->Column12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column12->DataPropertyName = L"previous_meter_reading";
			this->Column12->HeaderText = L"Prev. Meter Reading";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 186;
			// 
			// Column13
			// 
			this->Column13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column13->DataPropertyName = L"units_consumed";
			this->Column13->HeaderText = L"Units Consumed";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->Width = 156;
			// 
			// Column15
			// 
			this->Column15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column15->DataPropertyName = L"debit";
			this->Column15->HeaderText = L"Debit";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			this->Column15->Width = 74;
			// 
			// Column18
			// 
			this->Column18->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column18->DataPropertyName = L"credit";
			this->Column18->HeaderText = L"Credit";
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			this->Column18->Width = 78;
			// 
			// Column14
			// 
			this->Column14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column14->DataPropertyName = L"meter_reading_date";
			this->Column14->HeaderText = L"Date";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			// 
			// guna2Panel5
			// 
			this->guna2Panel5->Controls->Add(this->txt_SearchBox);
			this->guna2Panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->guna2Panel5->Location = System::Drawing::Point(3, 3);
			this->guna2Panel5->Name = L"guna2Panel5";
			this->guna2Panel5->ShadowDecoration->Parent = this->guna2Panel5;
			this->guna2Panel5->Size = System::Drawing::Size(1142, 48);
			this->guna2Panel5->TabIndex = 0;
			// 
			// txt_SearchBox
			// 
			this->txt_SearchBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_SearchBox->DefaultText = L"";
			this->txt_SearchBox->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_SearchBox->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_SearchBox->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_SearchBox->DisabledState->Parent = this->txt_SearchBox;
			this->txt_SearchBox->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_SearchBox->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_SearchBox->FocusedState->Parent = this->txt_SearchBox;
			this->txt_SearchBox->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_SearchBox->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_SearchBox->HoverState->Parent = this->txt_SearchBox;
			this->txt_SearchBox->Location = System::Drawing::Point(404, 6);
			this->txt_SearchBox->Name = L"txt_SearchBox";
			this->txt_SearchBox->PasswordChar = '\0';
			this->txt_SearchBox->PlaceholderText = L"Search";
			this->txt_SearchBox->SelectedText = L"";
			this->txt_SearchBox->ShadowDecoration->Parent = this->txt_SearchBox;
			this->txt_SearchBox->Size = System::Drawing::Size(200, 36);
			this->txt_SearchBox->TabIndex = 0;
			this->txt_SearchBox->TextChanged += gcnew System::EventHandler(this, &Administrator::txt_SearchBox_TextChanged);
			// 
			// BillingTabPage
			// 
			this->BillingTabPage->Controls->Add(this->guna2Panel7);
			this->BillingTabPage->Location = System::Drawing::Point(4, 4);
			this->BillingTabPage->Name = L"BillingTabPage";
			this->BillingTabPage->Padding = System::Windows::Forms::Padding(3);
			this->BillingTabPage->Size = System::Drawing::Size(1148, 609);
			this->BillingTabPage->TabIndex = 1;
			this->BillingTabPage->Text = L"BillingTabPage";
			this->BillingTabPage->UseVisualStyleBackColor = true;
			// 
			// guna2Panel7
			// 
			this->guna2Panel7->Controls->Add(this->guna2Panel9);
			this->guna2Panel7->Controls->Add(this->guna2Panel8);
			this->guna2Panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guna2Panel7->Location = System::Drawing::Point(3, 3);
			this->guna2Panel7->Name = L"guna2Panel7";
			this->guna2Panel7->ShadowDecoration->Parent = this->guna2Panel7;
			this->guna2Panel7->Size = System::Drawing::Size(1142, 603);
			this->guna2Panel7->TabIndex = 0;
			this->guna2Panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Administrator::guna2Panel7_Paint);
			// 
			// guna2Panel9
			// 
			this->guna2Panel9->Controls->Add(this->bunifuDataGridView4);
			this->guna2Panel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guna2Panel9->Location = System::Drawing::Point(556, 0);
			this->guna2Panel9->Name = L"guna2Panel9";
			this->guna2Panel9->ShadowDecoration->Parent = this->guna2Panel9;
			this->guna2Panel9->Size = System::Drawing::Size(586, 603);
			this->guna2Panel9->TabIndex = 19;
			// 
			// bunifuDataGridView4
			// 
			this->bunifuDataGridView4->AllowCustomTheming = true;
			this->bunifuDataGridView4->AllowUserToAddRows = false;
			this->bunifuDataGridView4->AllowUserToDeleteRows = false;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView4->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle10;
			this->bunifuDataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->bunifuDataGridView4->BackgroundColor = System::Drawing::SystemColors::Window;
			this->bunifuDataGridView4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuDataGridView4->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->bunifuDataGridView4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::Navy;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuDataGridView4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->bunifuDataGridView4->ColumnHeadersHeight = 40;
			this->bunifuDataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column34,
					this->Column35, this->Column36, this->Column37
			});
			this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView4->CurrentTheme->BackColor = System::Drawing::Color::Navy;
			this->bunifuDataGridView4->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->bunifuDataGridView4->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::Navy;
			this->bunifuDataGridView4->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView4->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView4->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuDataGridView4->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView4->CurrentTheme->Name = nullptr;
			this->bunifuDataGridView4->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->bunifuDataGridView4->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView4->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView4->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->bunifuDataGridView4->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->bunifuDataGridView4->DefaultCellStyle = dataGridViewCellStyle12;
			this->bunifuDataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bunifuDataGridView4->EnableHeadersVisualStyles = false;
			this->bunifuDataGridView4->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->bunifuDataGridView4->HeaderBackColor = System::Drawing::Color::Navy;
			this->bunifuDataGridView4->HeaderBgColor = System::Drawing::Color::Empty;
			this->bunifuDataGridView4->HeaderForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView4->Location = System::Drawing::Point(0, 0);
			this->bunifuDataGridView4->Name = L"bunifuDataGridView4";
			this->bunifuDataGridView4->ReadOnly = true;
			this->bunifuDataGridView4->RowHeadersVisible = false;
			this->bunifuDataGridView4->RowTemplate->Height = 40;
			this->bunifuDataGridView4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->bunifuDataGridView4->Size = System::Drawing::Size(586, 603);
			this->bunifuDataGridView4->TabIndex = 0;
			this->bunifuDataGridView4->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::Navy;
			// 
			// Column34
			// 
			this->Column34->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column34->HeaderText = L"Date";
			this->Column34->Name = L"Column34";
			this->Column34->ReadOnly = true;
			this->Column34->Width = 67;
			// 
			// Column35
			// 
			this->Column35->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column35->HeaderText = L"Debit";
			this->Column35->Name = L"Column35";
			this->Column35->ReadOnly = true;
			this->Column35->Width = 73;
			// 
			// Column36
			// 
			this->Column36->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column36->HeaderText = L"Credit";
			this->Column36->Name = L"Column36";
			this->Column36->ReadOnly = true;
			this->Column36->Width = 78;
			// 
			// Column37
			// 
			this->Column37->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column37->HeaderText = L"Balance";
			this->Column37->Name = L"Column37";
			this->Column37->ReadOnly = true;
			this->Column37->Width = 89;
			// 
			// guna2Panel8
			// 
			this->guna2Panel8->Controls->Add(this->btn_Back);
			this->guna2Panel8->Controls->Add(this->btnSubmit);
			this->guna2Panel8->Controls->Add(this->txt_BillNo);
			this->guna2Panel8->Controls->Add(this->txt_TotalPrice);
			this->guna2Panel8->Controls->Add(this->guna2DateTimePicker1);
			this->guna2Panel8->Controls->Add(this->txt_PreviousMeterReading);
			this->guna2Panel8->Controls->Add(this->txt_ClientID);
			this->guna2Panel8->Controls->Add(this->bunifuLabel18);
			this->guna2Panel8->Controls->Add(this->txt_ClientName);
			this->guna2Panel8->Controls->Add(this->bunifuLabel17);
			this->guna2Panel8->Controls->Add(this->txt_UnitsConsumed);
			this->guna2Panel8->Controls->Add(this->bunifuLabel16);
			this->guna2Panel8->Controls->Add(this->txt_Balance);
			this->guna2Panel8->Controls->Add(this->bunifuLabel15);
			this->guna2Panel8->Controls->Add(this->txt_PricePerUnit);
			this->guna2Panel8->Controls->Add(this->bunifuLabel14);
			this->guna2Panel8->Controls->Add(this->txt_CurrentMeterReading);
			this->guna2Panel8->Controls->Add(this->bunifuLabel13);
			this->guna2Panel8->Controls->Add(this->bunifuLabel6);
			this->guna2Panel8->Controls->Add(this->bunifuLabel12);
			this->guna2Panel8->Controls->Add(this->bunifuLabel8);
			this->guna2Panel8->Controls->Add(this->bunifuLabel11);
			this->guna2Panel8->Dock = System::Windows::Forms::DockStyle::Left;
			this->guna2Panel8->Location = System::Drawing::Point(0, 0);
			this->guna2Panel8->Name = L"guna2Panel8";
			this->guna2Panel8->ShadowDecoration->Parent = this->guna2Panel8;
			this->guna2Panel8->Size = System::Drawing::Size(556, 603);
			this->guna2Panel8->TabIndex = 18;
			// 
			// btnSubmit
			// 
			this->btnSubmit->Animated = true;
			this->btnSubmit->AutoRoundedCorners = true;
			this->btnSubmit->BorderColor = System::Drawing::Color::MediumBlue;
			this->btnSubmit->BorderRadius = 16;
			this->btnSubmit->BorderThickness = 2;
			this->btnSubmit->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->btnSubmit->CheckedState->Parent = this->btnSubmit;
			this->btnSubmit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSubmit->CustomImages->Parent = this->btnSubmit;
			this->btnSubmit->FillColor = System::Drawing::Color::Transparent;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F));
			this->btnSubmit->ForeColor = System::Drawing::Color::MediumBlue;
			this->btnSubmit->HoverState->Parent = this->btnSubmit;
			this->btnSubmit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSubmit.Image")));
			this->btnSubmit->ImageSize = System::Drawing::Size(25, 25);
			this->btnSubmit->IndicateFocus = true;
			this->btnSubmit->Location = System::Drawing::Point(429, 556);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->ShadowDecoration->Parent = this->btnSubmit;
			this->btnSubmit->Size = System::Drawing::Size(109, 34);
			this->btnSubmit->TabIndex = 20;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseTransparentBackground = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &Administrator::btnSubmit_Click);
			// 
			// txt_BillNo
			// 
			this->txt_BillNo->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_BillNo->DefaultText = L"";
			this->txt_BillNo->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_BillNo->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_BillNo->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_BillNo->DisabledState->Parent = this->txt_BillNo;
			this->txt_BillNo->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_BillNo->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_BillNo->FocusedState->Parent = this->txt_BillNo;
			this->txt_BillNo->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_BillNo->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_BillNo->HoverState->Parent = this->txt_BillNo;
			this->txt_BillNo->Location = System::Drawing::Point(166, 521);
			this->txt_BillNo->Name = L"txt_BillNo";
			this->txt_BillNo->PasswordChar = '\0';
			this->txt_BillNo->PlaceholderText = L"";
			this->txt_BillNo->ReadOnly = true;
			this->txt_BillNo->SelectedText = L"";
			this->txt_BillNo->ShadowDecoration->Parent = this->txt_BillNo;
			this->txt_BillNo->Size = System::Drawing::Size(200, 36);
			this->txt_BillNo->TabIndex = 19;
			// 
			// txt_TotalPrice
			// 
			this->txt_TotalPrice->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_TotalPrice->DefaultText = L"";
			this->txt_TotalPrice->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_TotalPrice->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_TotalPrice->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_TotalPrice->DisabledState->Parent = this->txt_TotalPrice;
			this->txt_TotalPrice->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_TotalPrice->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_TotalPrice->FocusedState->Parent = this->txt_TotalPrice;
			this->txt_TotalPrice->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_TotalPrice->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_TotalPrice->HoverState->Parent = this->txt_TotalPrice;
			this->txt_TotalPrice->Location = System::Drawing::Point(166, 468);
			this->txt_TotalPrice->Name = L"txt_TotalPrice";
			this->txt_TotalPrice->PasswordChar = '\0';
			this->txt_TotalPrice->PlaceholderText = L"";
			this->txt_TotalPrice->ReadOnly = true;
			this->txt_TotalPrice->SelectedText = L"";
			this->txt_TotalPrice->ShadowDecoration->Parent = this->txt_TotalPrice;
			this->txt_TotalPrice->Size = System::Drawing::Size(200, 36);
			this->txt_TotalPrice->TabIndex = 18;
			// 
			// guna2DateTimePicker1
			// 
			this->guna2DateTimePicker1->CheckedState->Parent = this->guna2DateTimePicker1;
			this->guna2DateTimePicker1->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guna2DateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->guna2DateTimePicker1->HoverState->Parent = this->guna2DateTimePicker1;
			this->guna2DateTimePicker1->Location = System::Drawing::Point(166, 309);
			this->guna2DateTimePicker1->MaxDate = System::DateTime(9998, 12, 31, 0, 0, 0, 0);
			this->guna2DateTimePicker1->MinDate = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
			this->guna2DateTimePicker1->Name = L"guna2DateTimePicker1";
			this->guna2DateTimePicker1->ShadowDecoration->Parent = this->guna2DateTimePicker1;
			this->guna2DateTimePicker1->Size = System::Drawing::Size(200, 36);
			this->guna2DateTimePicker1->TabIndex = 17;
			this->guna2DateTimePicker1->Value = System::DateTime(2021, 10, 9, 23, 34, 59, 170);
			// 
			// txt_PreviousMeterReading
			// 
			this->txt_PreviousMeterReading->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_PreviousMeterReading->DefaultText = L"";
			this->txt_PreviousMeterReading->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_PreviousMeterReading->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_PreviousMeterReading->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_PreviousMeterReading->DisabledState->Parent = this->txt_PreviousMeterReading;
			this->txt_PreviousMeterReading->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_PreviousMeterReading->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_PreviousMeterReading->FocusedState->Parent = this->txt_PreviousMeterReading;
			this->txt_PreviousMeterReading->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_PreviousMeterReading->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_PreviousMeterReading->HoverState->Parent = this->txt_PreviousMeterReading;
			this->txt_PreviousMeterReading->Location = System::Drawing::Point(166, 150);
			this->txt_PreviousMeterReading->Name = L"txt_PreviousMeterReading";
			this->txt_PreviousMeterReading->PasswordChar = '\0';
			this->txt_PreviousMeterReading->PlaceholderText = L"";
			this->txt_PreviousMeterReading->ReadOnly = true;
			this->txt_PreviousMeterReading->SelectedText = L"";
			this->txt_PreviousMeterReading->ShadowDecoration->Parent = this->txt_PreviousMeterReading;
			this->txt_PreviousMeterReading->Size = System::Drawing::Size(199, 36);
			this->txt_PreviousMeterReading->TabIndex = 2;
			// 
			// txt_ClientID
			// 
			this->txt_ClientID->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_ClientID->DefaultText = L"";
			this->txt_ClientID->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_ClientID->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_ClientID->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_ClientID->DisabledState->Parent = this->txt_ClientID;
			this->txt_ClientID->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_ClientID->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_ClientID->FocusedState->Parent = this->txt_ClientID;
			this->txt_ClientID->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ClientID->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_ClientID->HoverState->Parent = this->txt_ClientID;
			this->txt_ClientID->Location = System::Drawing::Point(166, 44);
			this->txt_ClientID->Name = L"txt_ClientID";
			this->txt_ClientID->PasswordChar = '\0';
			this->txt_ClientID->PlaceholderText = L"";
			this->txt_ClientID->ReadOnly = true;
			this->txt_ClientID->SelectedText = L"";
			this->txt_ClientID->ShadowDecoration->Parent = this->txt_ClientID;
			this->txt_ClientID->Size = System::Drawing::Size(199, 36);
			this->txt_ClientID->TabIndex = 0;
			// 
			// bunifuLabel18
			// 
			this->bunifuLabel18->AllowParentOverrides = false;
			this->bunifuLabel18->AutoEllipsis = false;
			this->bunifuLabel18->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel18->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel18->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel18->Location = System::Drawing::Point(26, 97);
			this->bunifuLabel18->Name = L"bunifuLabel18";
			this->bunifuLabel18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel18->Size = System::Drawing::Size(69, 15);
			this->bunifuLabel18->TabIndex = 16;
			this->bunifuLabel18->Text = L"Client Name";
			this->bunifuLabel18->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel18->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// txt_ClientName
			// 
			this->txt_ClientName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_ClientName->DefaultText = L"";
			this->txt_ClientName->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_ClientName->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_ClientName->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_ClientName->DisabledState->Parent = this->txt_ClientName;
			this->txt_ClientName->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_ClientName->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_ClientName->FocusedState->Parent = this->txt_ClientName;
			this->txt_ClientName->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_ClientName->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_ClientName->HoverState->Parent = this->txt_ClientName;
			this->txt_ClientName->Location = System::Drawing::Point(166, 97);
			this->txt_ClientName->Name = L"txt_ClientName";
			this->txt_ClientName->PasswordChar = '\0';
			this->txt_ClientName->PlaceholderText = L"";
			this->txt_ClientName->ReadOnly = true;
			this->txt_ClientName->SelectedText = L"";
			this->txt_ClientName->ShadowDecoration->Parent = this->txt_ClientName;
			this->txt_ClientName->Size = System::Drawing::Size(199, 36);
			this->txt_ClientName->TabIndex = 1;
			// 
			// bunifuLabel17
			// 
			this->bunifuLabel17->AllowParentOverrides = false;
			this->bunifuLabel17->AutoEllipsis = false;
			this->bunifuLabel17->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel17->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel17->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel17->Location = System::Drawing::Point(26, 309);
			this->bunifuLabel17->Name = L"bunifuLabel17";
			this->bunifuLabel17->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel17->Size = System::Drawing::Size(112, 15);
			this->bunifuLabel17->TabIndex = 15;
			this->bunifuLabel17->Text = L"Meter Reading Date";
			this->bunifuLabel17->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel17->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// txt_UnitsConsumed
			// 
			this->txt_UnitsConsumed->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_UnitsConsumed->DefaultText = L"";
			this->txt_UnitsConsumed->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_UnitsConsumed->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_UnitsConsumed->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_UnitsConsumed->DisabledState->Parent = this->txt_UnitsConsumed;
			this->txt_UnitsConsumed->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_UnitsConsumed->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_UnitsConsumed->FocusedState->Parent = this->txt_UnitsConsumed;
			this->txt_UnitsConsumed->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_UnitsConsumed->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_UnitsConsumed->HoverState->Parent = this->txt_UnitsConsumed;
			this->txt_UnitsConsumed->Location = System::Drawing::Point(166, 256);
			this->txt_UnitsConsumed->Name = L"txt_UnitsConsumed";
			this->txt_UnitsConsumed->PasswordChar = '\0';
			this->txt_UnitsConsumed->PlaceholderText = L"";
			this->txt_UnitsConsumed->ReadOnly = true;
			this->txt_UnitsConsumed->SelectedText = L"";
			this->txt_UnitsConsumed->ShadowDecoration->Parent = this->txt_UnitsConsumed;
			this->txt_UnitsConsumed->Size = System::Drawing::Size(199, 36);
			this->txt_UnitsConsumed->TabIndex = 3;
			this->txt_UnitsConsumed->TextChanged += gcnew System::EventHandler(this, &Administrator::txt_UnitsConsumed_TextChanged);
			// 
			// bunifuLabel16
			// 
			this->bunifuLabel16->AllowParentOverrides = false;
			this->bunifuLabel16->AutoEllipsis = false;
			this->bunifuLabel16->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel16->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel16->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel16->Location = System::Drawing::Point(26, 521);
			this->bunifuLabel16->Name = L"bunifuLabel16";
			this->bunifuLabel16->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel16->Size = System::Drawing::Size(65, 15);
			this->bunifuLabel16->TabIndex = 14;
			this->bunifuLabel16->Text = L"Bill Number";
			this->bunifuLabel16->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel16->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// txt_Balance
			// 
			this->txt_Balance->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_Balance->DefaultText = L"";
			this->txt_Balance->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_Balance->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_Balance->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_Balance->DisabledState->Parent = this->txt_Balance;
			this->txt_Balance->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_Balance->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_Balance->FocusedState->Parent = this->txt_Balance;
			this->txt_Balance->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Balance->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_Balance->HoverState->Parent = this->txt_Balance;
			this->txt_Balance->Location = System::Drawing::Point(166, 415);
			this->txt_Balance->Name = L"txt_Balance";
			this->txt_Balance->PasswordChar = '\0';
			this->txt_Balance->PlaceholderText = L"";
			this->txt_Balance->ReadOnly = true;
			this->txt_Balance->SelectedText = L"";
			this->txt_Balance->ShadowDecoration->Parent = this->txt_Balance;
			this->txt_Balance->Size = System::Drawing::Size(199, 36);
			this->txt_Balance->TabIndex = 4;
			// 
			// bunifuLabel15
			// 
			this->bunifuLabel15->AllowParentOverrides = false;
			this->bunifuLabel15->AutoEllipsis = false;
			this->bunifuLabel15->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel15->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel15->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel15->Location = System::Drawing::Point(26, 44);
			this->bunifuLabel15->Name = L"bunifuLabel15";
			this->bunifuLabel15->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel15->Size = System::Drawing::Size(48, 15);
			this->bunifuLabel15->TabIndex = 13;
			this->bunifuLabel15->Text = L"Client ID";
			this->bunifuLabel15->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel15->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// txt_PricePerUnit
			// 
			this->txt_PricePerUnit->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_PricePerUnit->DefaultText = L"";
			this->txt_PricePerUnit->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_PricePerUnit->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_PricePerUnit->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_PricePerUnit->DisabledState->Parent = this->txt_PricePerUnit;
			this->txt_PricePerUnit->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_PricePerUnit->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_PricePerUnit->FocusedState->Parent = this->txt_PricePerUnit;
			this->txt_PricePerUnit->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_PricePerUnit->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_PricePerUnit->HoverState->Parent = this->txt_PricePerUnit;
			this->txt_PricePerUnit->Location = System::Drawing::Point(166, 362);
			this->txt_PricePerUnit->Name = L"txt_PricePerUnit";
			this->txt_PricePerUnit->PasswordChar = '\0';
			this->txt_PricePerUnit->PlaceholderText = L"";
			this->txt_PricePerUnit->SelectedText = L"";
			this->txt_PricePerUnit->ShadowDecoration->Parent = this->txt_PricePerUnit;
			this->txt_PricePerUnit->Size = System::Drawing::Size(199, 36);
			this->txt_PricePerUnit->TabIndex = 5;
			// 
			// bunifuLabel14
			// 
			this->bunifuLabel14->AllowParentOverrides = false;
			this->bunifuLabel14->AutoEllipsis = false;
			this->bunifuLabel14->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel14->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel14->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel14->Location = System::Drawing::Point(26, 415);
			this->bunifuLabel14->Name = L"bunifuLabel14";
			this->bunifuLabel14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel14->Size = System::Drawing::Size(46, 15);
			this->bunifuLabel14->TabIndex = 12;
			this->bunifuLabel14->Text = L"Balance";
			this->bunifuLabel14->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel14->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// txt_CurrentMeterReading
			// 
			this->txt_CurrentMeterReading->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_CurrentMeterReading->DefaultText = L"";
			this->txt_CurrentMeterReading->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_CurrentMeterReading->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_CurrentMeterReading->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_CurrentMeterReading->DisabledState->Parent = this->txt_CurrentMeterReading;
			this->txt_CurrentMeterReading->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_CurrentMeterReading->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_CurrentMeterReading->FocusedState->Parent = this->txt_CurrentMeterReading;
			this->txt_CurrentMeterReading->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_CurrentMeterReading->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_CurrentMeterReading->HoverState->Parent = this->txt_CurrentMeterReading;
			this->txt_CurrentMeterReading->Location = System::Drawing::Point(166, 203);
			this->txt_CurrentMeterReading->Name = L"txt_CurrentMeterReading";
			this->txt_CurrentMeterReading->PasswordChar = '\0';
			this->txt_CurrentMeterReading->PlaceholderText = L"";
			this->txt_CurrentMeterReading->SelectedText = L"";
			this->txt_CurrentMeterReading->ShadowDecoration->Parent = this->txt_CurrentMeterReading;
			this->txt_CurrentMeterReading->Size = System::Drawing::Size(199, 36);
			this->txt_CurrentMeterReading->TabIndex = 6;
			this->txt_CurrentMeterReading->Leave += gcnew System::EventHandler(this, &Administrator::txt_CurrentMeterReading_Leave);
			this->txt_CurrentMeterReading->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Administrator::txt_CurrentMeterReading_Validating);
			// 
			// bunifuLabel13
			// 
			this->bunifuLabel13->AllowParentOverrides = false;
			this->bunifuLabel13->AutoEllipsis = false;
			this->bunifuLabel13->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel13->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel13->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel13->Location = System::Drawing::Point(26, 468);
			this->bunifuLabel13->Name = L"bunifuLabel13";
			this->bunifuLabel13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel13->Size = System::Drawing::Size(61, 15);
			this->bunifuLabel13->TabIndex = 11;
			this->bunifuLabel13->Text = L"Total Price";
			this->bunifuLabel13->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel13->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel6
			// 
			this->bunifuLabel6->AllowParentOverrides = false;
			this->bunifuLabel6->AutoEllipsis = false;
			this->bunifuLabel6->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel6->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel6->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel6->Location = System::Drawing::Point(26, 150);
			this->bunifuLabel6->Name = L"bunifuLabel6";
			this->bunifuLabel6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel6->Size = System::Drawing::Size(134, 15);
			this->bunifuLabel6->TabIndex = 7;
			this->bunifuLabel6->Text = L"Previous Meter Reading";
			this->bunifuLabel6->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel6->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel12
			// 
			this->bunifuLabel12->AllowParentOverrides = false;
			this->bunifuLabel12->AutoEllipsis = false;
			this->bunifuLabel12->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel12->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel12->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel12->Location = System::Drawing::Point(26, 362);
			this->bunifuLabel12->Name = L"bunifuLabel12";
			this->bunifuLabel12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel12->Size = System::Drawing::Size(76, 15);
			this->bunifuLabel12->TabIndex = 10;
			this->bunifuLabel12->Text = L"Price Per Unit";
			this->bunifuLabel12->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel12->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel8
			// 
			this->bunifuLabel8->AllowParentOverrides = false;
			this->bunifuLabel8->AutoEllipsis = false;
			this->bunifuLabel8->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel8->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel8->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel8->Location = System::Drawing::Point(26, 203);
			this->bunifuLabel8->Name = L"bunifuLabel8";
			this->bunifuLabel8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel8->Size = System::Drawing::Size(126, 15);
			this->bunifuLabel8->TabIndex = 8;
			this->bunifuLabel8->Text = L"Current Meter Reading";
			this->bunifuLabel8->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel8->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel11
			// 
			this->bunifuLabel11->AllowParentOverrides = false;
			this->bunifuLabel11->AutoEllipsis = false;
			this->bunifuLabel11->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel11->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel11->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel11->Location = System::Drawing::Point(26, 256);
			this->bunifuLabel11->Name = L"bunifuLabel11";
			this->bunifuLabel11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel11->Size = System::Drawing::Size(93, 15);
			this->bunifuLabel11->TabIndex = 9;
			this->bunifuLabel11->Text = L"Units Consumed";
			this->bunifuLabel11->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel11->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// AddClientTabPage
			// 
			this->AddClientTabPage->Controls->Add(this->guna2Panel10);
			this->AddClientTabPage->Location = System::Drawing::Point(4, 4);
			this->AddClientTabPage->Name = L"AddClientTabPage";
			this->AddClientTabPage->Padding = System::Windows::Forms::Padding(3);
			this->AddClientTabPage->Size = System::Drawing::Size(1162, 643);
			this->AddClientTabPage->TabIndex = 2;
			this->AddClientTabPage->Text = L"Add Client";
			this->AddClientTabPage->UseVisualStyleBackColor = true;
			// 
			// guna2Panel10
			// 
			this->guna2Panel10->Controls->Add(this->guna2VSeparator1);
			this->guna2Panel10->Controls->Add(this->guna2Panel19);
			this->guna2Panel10->Controls->Add(this->guna2Panel17);
			this->guna2Panel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guna2Panel10->Location = System::Drawing::Point(3, 3);
			this->guna2Panel10->Name = L"guna2Panel10";
			this->guna2Panel10->ShadowDecoration->Parent = this->guna2Panel10;
			this->guna2Panel10->Size = System::Drawing::Size(1156, 637);
			this->guna2Panel10->TabIndex = 10;
			// 
			// guna2VSeparator1
			// 
			this->guna2VSeparator1->FillColor = System::Drawing::Color::Blue;
			this->guna2VSeparator1->Location = System::Drawing::Point(486, 6);
			this->guna2VSeparator1->Name = L"guna2VSeparator1";
			this->guna2VSeparator1->Size = System::Drawing::Size(14, 615);
			this->guna2VSeparator1->TabIndex = 27;
			// 
			// guna2Panel19
			// 
			this->guna2Panel19->Controls->Add(this->bunifuLabel22);
			this->guna2Panel19->Controls->Add(this->groupBox1);
			this->guna2Panel19->Controls->Add(this->btn_Submt);
			this->guna2Panel19->Controls->Add(this->bunifuLabel31);
			this->guna2Panel19->Controls->Add(this->bunifuLabel30);
			this->guna2Panel19->Controls->Add(this->bunifuLabel29);
			this->guna2Panel19->Controls->Add(this->bunifuLabel27);
			this->guna2Panel19->Controls->Add(this->bunifuLabel20);
			this->guna2Panel19->Controls->Add(this->bunifuLabel19);
			this->guna2Panel19->Controls->Add(this->txtMobileNo);
			this->guna2Panel19->Controls->Add(this->txtClientID);
			this->guna2Panel19->Controls->Add(this->txtAddress);
			this->guna2Panel19->Controls->Add(this->txtClientName);
			this->guna2Panel19->Controls->Add(this->txtIDNo);
			this->guna2Panel19->Controls->Add(this->txtEmail);
			this->guna2Panel19->Dock = System::Windows::Forms::DockStyle::Left;
			this->guna2Panel19->Location = System::Drawing::Point(0, 0);
			this->guna2Panel19->Name = L"guna2Panel19";
			this->guna2Panel19->ShadowDecoration->Parent = this->guna2Panel19;
			this->guna2Panel19->Size = System::Drawing::Size(408, 637);
			this->guna2Panel19->TabIndex = 26;
			// 
			// bunifuLabel22
			// 
			this->bunifuLabel22->AllowParentOverrides = false;
			this->bunifuLabel22->AutoEllipsis = false;
			this->bunifuLabel22->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel22->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel22->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->bunifuLabel22->ForeColor = System::Drawing::Color::Blue;
			this->bunifuLabel22->Location = System::Drawing::Point(104, 17);
			this->bunifuLabel22->Name = L"bunifuLabel22";
			this->bunifuLabel22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel22->Size = System::Drawing::Size(190, 22);
			this->bunifuLabel22->TabIndex = 39;
			this->bunifuLabel22->Text = L"Register New Client";
			this->bunifuLabel22->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel22->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnFemale);
			this->groupBox1->Controls->Add(this->rbtnMale);
			this->groupBox1->Location = System::Drawing::Point(164, 385);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(171, 52);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gender";
			// 
			// rbtnFemale
			// 
			this->rbtnFemale->AutoSize = true;
			this->rbtnFemale->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->rbtnFemale->CheckedState->BorderThickness = 0;
			this->rbtnFemale->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->rbtnFemale->CheckedState->InnerColor = System::Drawing::Color::White;
			this->rbtnFemale->CheckedState->InnerOffset = -4;
			this->rbtnFemale->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->rbtnFemale->Location = System::Drawing::Point(90, 22);
			this->rbtnFemale->Name = L"rbtnFemale";
			this->rbtnFemale->Size = System::Drawing::Size(67, 19);
			this->rbtnFemale->TabIndex = 1;
			this->rbtnFemale->Text = L"Female";
			this->rbtnFemale->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->rbtnFemale->UncheckedState->BorderThickness = 2;
			this->rbtnFemale->UncheckedState->FillColor = System::Drawing::Color::Transparent;
			this->rbtnFemale->UncheckedState->InnerColor = System::Drawing::Color::Transparent;
			// 
			// rbtnMale
			// 
			this->rbtnMale->AutoSize = true;
			this->rbtnMale->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->rbtnMale->CheckedState->BorderThickness = 0;
			this->rbtnMale->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->rbtnMale->CheckedState->InnerColor = System::Drawing::Color::White;
			this->rbtnMale->CheckedState->InnerOffset = -4;
			this->rbtnMale->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->rbtnMale->Location = System::Drawing::Point(6, 22);
			this->rbtnMale->Name = L"rbtnMale";
			this->rbtnMale->Size = System::Drawing::Size(53, 19);
			this->rbtnMale->TabIndex = 0;
			this->rbtnMale->Text = L"Male";
			this->rbtnMale->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(125)),
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->rbtnMale->UncheckedState->BorderThickness = 2;
			this->rbtnMale->UncheckedState->FillColor = System::Drawing::Color::Transparent;
			this->rbtnMale->UncheckedState->InnerColor = System::Drawing::Color::Transparent;
			// 
			// btn_Submt
			// 
			this->btn_Submt->CheckedState->Parent = this->btn_Submt;
			this->btn_Submt->CustomImages->Parent = this->btn_Submt;
			this->btn_Submt->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Submt->ForeColor = System::Drawing::Color::White;
			this->btn_Submt->HoverState->Parent = this->btn_Submt;
			this->btn_Submt->Location = System::Drawing::Point(244, 521);
			this->btn_Submt->Name = L"btn_Submt";
			this->btn_Submt->ShadowDecoration->Parent = this->btn_Submt;
			this->btn_Submt->Size = System::Drawing::Size(109, 34);
			this->btn_Submt->TabIndex = 37;
			this->btn_Submt->Text = L"Submit";
			this->btn_Submt->Click += gcnew System::EventHandler(this, &Administrator::btn_Submt_Click);
			// 
			// bunifuLabel31
			// 
			this->bunifuLabel31->AllowParentOverrides = false;
			this->bunifuLabel31->AutoEllipsis = false;
			this->bunifuLabel31->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel31->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel31->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel31->Location = System::Drawing::Point(46, 464);
			this->bunifuLabel31->Name = L"bunifuLabel31";
			this->bunifuLabel31->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel31->Size = System::Drawing::Size(47, 15);
			this->bunifuLabel31->TabIndex = 36;
			this->bunifuLabel31->Text = L"Address";
			this->bunifuLabel31->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel31->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel30
			// 
			this->bunifuLabel30->AllowParentOverrides = false;
			this->bunifuLabel30->AutoEllipsis = false;
			this->bunifuLabel30->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel30->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel30->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel30->Location = System::Drawing::Point(46, 143);
			this->bunifuLabel30->Name = L"bunifuLabel30";
			this->bunifuLabel30->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel30->Size = System::Drawing::Size(69, 15);
			this->bunifuLabel30->TabIndex = 35;
			this->bunifuLabel30->Text = L"Client Name";
			this->bunifuLabel30->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel30->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel29
			// 
			this->bunifuLabel29->AllowParentOverrides = false;
			this->bunifuLabel29->AutoEllipsis = false;
			this->bunifuLabel29->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel29->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel29->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel29->Location = System::Drawing::Point(46, 81);
			this->bunifuLabel29->Name = L"bunifuLabel29";
			this->bunifuLabel29->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel29->Size = System::Drawing::Size(48, 15);
			this->bunifuLabel29->TabIndex = 34;
			this->bunifuLabel29->Text = L"Client ID";
			this->bunifuLabel29->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel29->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel27
			// 
			this->bunifuLabel27->AllowParentOverrides = false;
			this->bunifuLabel27->AutoEllipsis = false;
			this->bunifuLabel27->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel27->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel27->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel27->Location = System::Drawing::Point(46, 267);
			this->bunifuLabel27->Name = L"bunifuLabel27";
			this->bunifuLabel27->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel27->Size = System::Drawing::Size(86, 15);
			this->bunifuLabel27->TabIndex = 33;
			this->bunifuLabel27->Text = L"Mobile Number";
			this->bunifuLabel27->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel27->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel20
			// 
			this->bunifuLabel20->AllowParentOverrides = false;
			this->bunifuLabel20->AutoEllipsis = false;
			this->bunifuLabel20->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel20->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel20->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel20->Location = System::Drawing::Point(46, 329);
			this->bunifuLabel20->Name = L"bunifuLabel20";
			this->bunifuLabel20->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel20->Size = System::Drawing::Size(31, 15);
			this->bunifuLabel20->TabIndex = 32;
			this->bunifuLabel20->Text = L"Email";
			this->bunifuLabel20->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel20->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel19
			// 
			this->bunifuLabel19->AllowParentOverrides = false;
			this->bunifuLabel19->AutoEllipsis = false;
			this->bunifuLabel19->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel19->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel19->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuLabel19->Location = System::Drawing::Point(46, 205);
			this->bunifuLabel19->Name = L"bunifuLabel19";
			this->bunifuLabel19->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel19->Size = System::Drawing::Size(61, 15);
			this->bunifuLabel19->TabIndex = 31;
			this->bunifuLabel19->Text = L"ID Number";
			this->bunifuLabel19->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel19->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// txtMobileNo
			// 
			this->txtMobileNo->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtMobileNo->DefaultText = L"";
			this->txtMobileNo->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txtMobileNo->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txtMobileNo->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtMobileNo->DisabledState->Parent = this->txtMobileNo;
			this->txtMobileNo->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtMobileNo->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtMobileNo->FocusedState->Parent = this->txtMobileNo;
			this->txtMobileNo->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMobileNo->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtMobileNo->HoverState->Parent = this->txtMobileNo;
			this->txtMobileNo->Location = System::Drawing::Point(164, 267);
			this->txtMobileNo->Name = L"txtMobileNo";
			this->txtMobileNo->PasswordChar = '\0';
			this->txtMobileNo->PlaceholderText = L"";
			this->txtMobileNo->SelectedText = L"";
			this->txtMobileNo->ShadowDecoration->Parent = this->txtMobileNo;
			this->txtMobileNo->Size = System::Drawing::Size(199, 36);
			this->txtMobileNo->TabIndex = 25;
			// 
			// txtClientID
			// 
			this->txtClientID->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtClientID->DefaultText = L"";
			this->txtClientID->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txtClientID->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txtClientID->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtClientID->DisabledState->Parent = this->txtClientID;
			this->txtClientID->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtClientID->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtClientID->FocusedState->Parent = this->txtClientID;
			this->txtClientID->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtClientID->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtClientID->HoverState->Parent = this->txtClientID;
			this->txtClientID->Location = System::Drawing::Point(164, 81);
			this->txtClientID->Name = L"txtClientID";
			this->txtClientID->PasswordChar = '\0';
			this->txtClientID->PlaceholderText = L"";
			this->txtClientID->ReadOnly = true;
			this->txtClientID->SelectedText = L"";
			this->txtClientID->ShadowDecoration->Parent = this->txtClientID;
			this->txtClientID->Size = System::Drawing::Size(199, 36);
			this->txtClientID->TabIndex = 30;
			// 
			// txtAddress
			// 
			this->txtAddress->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtAddress->DefaultText = L"";
			this->txtAddress->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txtAddress->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txtAddress->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtAddress->DisabledState->Parent = this->txtAddress;
			this->txtAddress->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtAddress->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtAddress->FocusedState->Parent = this->txtAddress;
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtAddress->HoverState->Parent = this->txtAddress;
			this->txtAddress->Location = System::Drawing::Point(164, 464);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->PasswordChar = '\0';
			this->txtAddress->PlaceholderText = L"";
			this->txtAddress->SelectedText = L"";
			this->txtAddress->ShadowDecoration->Parent = this->txtAddress;
			this->txtAddress->Size = System::Drawing::Size(199, 36);
			this->txtAddress->TabIndex = 26;
			// 
			// txtClientName
			// 
			this->txtClientName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtClientName->DefaultText = L"";
			this->txtClientName->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txtClientName->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txtClientName->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtClientName->DisabledState->Parent = this->txtClientName;
			this->txtClientName->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtClientName->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtClientName->FocusedState->Parent = this->txtClientName;
			this->txtClientName->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtClientName->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtClientName->HoverState->Parent = this->txtClientName;
			this->txtClientName->Location = System::Drawing::Point(164, 143);
			this->txtClientName->Name = L"txtClientName";
			this->txtClientName->PasswordChar = '\0';
			this->txtClientName->PlaceholderText = L"";
			this->txtClientName->SelectedText = L"";
			this->txtClientName->ShadowDecoration->Parent = this->txtClientName;
			this->txtClientName->Size = System::Drawing::Size(199, 36);
			this->txtClientName->TabIndex = 29;
			// 
			// txtIDNo
			// 
			this->txtIDNo->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtIDNo->DefaultText = L"";
			this->txtIDNo->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txtIDNo->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txtIDNo->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtIDNo->DisabledState->Parent = this->txtIDNo;
			this->txtIDNo->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtIDNo->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtIDNo->FocusedState->Parent = this->txtIDNo;
			this->txtIDNo->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIDNo->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtIDNo->HoverState->Parent = this->txtIDNo;
			this->txtIDNo->Location = System::Drawing::Point(164, 205);
			this->txtIDNo->Name = L"txtIDNo";
			this->txtIDNo->PasswordChar = '\0';
			this->txtIDNo->PlaceholderText = L"";
			this->txtIDNo->SelectedText = L"";
			this->txtIDNo->ShadowDecoration->Parent = this->txtIDNo;
			this->txtIDNo->Size = System::Drawing::Size(199, 36);
			this->txtIDNo->TabIndex = 28;
			// 
			// txtEmail
			// 
			this->txtEmail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtEmail->DefaultText = L"";
			this->txtEmail->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txtEmail->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txtEmail->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtEmail->DisabledState->Parent = this->txtEmail;
			this->txtEmail->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtEmail->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtEmail->FocusedState->Parent = this->txtEmail;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtEmail->HoverState->Parent = this->txtEmail;
			this->txtEmail->Location = System::Drawing::Point(164, 329);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->PasswordChar = '\0';
			this->txtEmail->PlaceholderText = L"";
			this->txtEmail->SelectedText = L"";
			this->txtEmail->ShadowDecoration->Parent = this->txtEmail;
			this->txtEmail->Size = System::Drawing::Size(199, 36);
			this->txtEmail->TabIndex = 27;
			// 
			// guna2Panel17
			// 
			this->guna2Panel17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->guna2Panel17->Controls->Add(this->ClientsDataGridView);
			this->guna2Panel17->Controls->Add(this->guna2Panel18);
			this->guna2Panel17->Location = System::Drawing::Point(602, 0);
			this->guna2Panel17->Name = L"guna2Panel17";
			this->guna2Panel17->ShadowDecoration->Parent = this->guna2Panel17;
			this->guna2Panel17->Size = System::Drawing::Size(554, 637);
			this->guna2Panel17->TabIndex = 25;
			// 
			// ClientsDataGridView
			// 
			this->ClientsDataGridView->AllowCustomTheming = true;
			this->ClientsDataGridView->AllowUserToAddRows = false;
			this->ClientsDataGridView->AllowUserToDeleteRows = false;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::Black;
			this->ClientsDataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle13;
			this->ClientsDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ClientsDataGridView->BackgroundColor = System::Drawing::SystemColors::Window;
			this->ClientsDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ClientsDataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->ClientsDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::Navy;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle14->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->ClientsDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle14;
			this->ClientsDataGridView->ColumnHeadersHeight = 40;
			this->ClientsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column29,
					this->Column30, this->Column31, this->Column32
			});
			this->ClientsDataGridView->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->ClientsDataGridView->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->ClientsDataGridView->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->ClientsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->ClientsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
			this->ClientsDataGridView->CurrentTheme->BackColor = System::Drawing::Color::Navy;
			this->ClientsDataGridView->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->ClientsDataGridView->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::Navy;
			this->ClientsDataGridView->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			this->ClientsDataGridView->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->ClientsDataGridView->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->ClientsDataGridView->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->ClientsDataGridView->CurrentTheme->Name = nullptr;
			this->ClientsDataGridView->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->ClientsDataGridView->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->ClientsDataGridView->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->ClientsDataGridView->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->ClientsDataGridView->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle15->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ClientsDataGridView->DefaultCellStyle = dataGridViewCellStyle15;
			this->ClientsDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientsDataGridView->EnableHeadersVisualStyles = false;
			this->ClientsDataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->ClientsDataGridView->HeaderBackColor = System::Drawing::Color::Navy;
			this->ClientsDataGridView->HeaderBgColor = System::Drawing::Color::Empty;
			this->ClientsDataGridView->HeaderForeColor = System::Drawing::Color::White;
			this->ClientsDataGridView->Location = System::Drawing::Point(0, 57);
			this->ClientsDataGridView->Name = L"ClientsDataGridView";
			this->ClientsDataGridView->ReadOnly = true;
			this->ClientsDataGridView->RowHeadersVisible = false;
			this->ClientsDataGridView->RowTemplate->Height = 40;
			this->ClientsDataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->ClientsDataGridView->Size = System::Drawing::Size(554, 580);
			this->ClientsDataGridView->TabIndex = 1;
			this->ClientsDataGridView->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::Navy;
			// 
			// Column29
			// 
			this->Column29->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column29->DataPropertyName = L"client_id";
			this->Column29->HeaderText = L"Client ID";
			this->Column29->Name = L"Column29";
			this->Column29->ReadOnly = true;
			this->Column29->Width = 95;
			// 
			// Column30
			// 
			this->Column30->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column30->DataPropertyName = L"name";
			this->Column30->HeaderText = L"Name";
			this->Column30->Name = L"Column30";
			this->Column30->ReadOnly = true;
			// 
			// Column31
			// 
			this->Column31->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column31->DataPropertyName = L"id_no";
			this->Column31->HeaderText = L"ID Number";
			this->Column31->Name = L"Column31";
			this->Column31->ReadOnly = true;
			this->Column31->Width = 113;
			// 
			// Column32
			// 
			this->Column32->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column32->DataPropertyName = L"mobile_no";
			this->Column32->HeaderText = L"Mobile No.";
			this->Column32->Name = L"Column32";
			this->Column32->ReadOnly = true;
			this->Column32->Width = 115;
			// 
			// guna2Panel18
			// 
			this->guna2Panel18->Controls->Add(this->txt_Search);
			this->guna2Panel18->Controls->Add(this->lblTotalNumberofClients);
			this->guna2Panel18->Dock = System::Windows::Forms::DockStyle::Top;
			this->guna2Panel18->Location = System::Drawing::Point(0, 0);
			this->guna2Panel18->Name = L"guna2Panel18";
			this->guna2Panel18->ShadowDecoration->Parent = this->guna2Panel18;
			this->guna2Panel18->Size = System::Drawing::Size(554, 57);
			this->guna2Panel18->TabIndex = 0;
			// 
			// txt_Search
			// 
			this->txt_Search->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_Search->DefaultText = L"";
			this->txt_Search->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_Search->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_Search->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_Search->DisabledState->Parent = this->txt_Search;
			this->txt_Search->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_Search->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_Search->FocusedState->Parent = this->txt_Search;
			this->txt_Search->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->txt_Search->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_Search->HoverState->Parent = this->txt_Search;
			this->txt_Search->Location = System::Drawing::Point(336, 15);
			this->txt_Search->Name = L"txt_Search";
			this->txt_Search->PasswordChar = '\0';
			this->txt_Search->PlaceholderText = L"Search";
			this->txt_Search->SelectedText = L"";
			this->txt_Search->ShadowDecoration->Parent = this->txt_Search;
			this->txt_Search->Size = System::Drawing::Size(199, 36);
			this->txt_Search->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
			this->txt_Search->TabIndex = 2;
			this->txt_Search->TextChanged += gcnew System::EventHandler(this, &Administrator::txt_Search_TextChanged);
			// 
			// lblTotalNumberofClients
			// 
			this->lblTotalNumberofClients->AllowParentOverrides = false;
			this->lblTotalNumberofClients->AutoEllipsis = false;
			this->lblTotalNumberofClients->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblTotalNumberofClients->CursorType = System::Windows::Forms::Cursors::Default;
			this->lblTotalNumberofClients->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F));
			this->lblTotalNumberofClients->Location = System::Drawing::Point(13, 21);
			this->lblTotalNumberofClients->Name = L"lblTotalNumberofClients";
			this->lblTotalNumberofClients->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblTotalNumberofClients->Size = System::Drawing::Size(230, 22);
			this->lblTotalNumberofClients->TabIndex = 12;
			this->lblTotalNumberofClients->Text = L"lblTotalNumberofClients";
			this->lblTotalNumberofClients->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->lblTotalNumberofClients->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// PaidBillsTabPage
			// 
			this->PaidBillsTabPage->Controls->Add(this->guna2Panel12);
			this->PaidBillsTabPage->Controls->Add(this->guna2Panel11);
			this->PaidBillsTabPage->Location = System::Drawing::Point(4, 4);
			this->PaidBillsTabPage->Name = L"PaidBillsTabPage";
			this->PaidBillsTabPage->Padding = System::Windows::Forms::Padding(3);
			this->PaidBillsTabPage->Size = System::Drawing::Size(1162, 643);
			this->PaidBillsTabPage->TabIndex = 3;
			this->PaidBillsTabPage->Text = L"Paid Bills";
			this->PaidBillsTabPage->UseVisualStyleBackColor = true;
			// 
			// guna2Panel12
			// 
			this->guna2Panel12->Controls->Add(this->PaidBillsDataGridView);
			this->guna2Panel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guna2Panel12->Location = System::Drawing::Point(3, 103);
			this->guna2Panel12->Name = L"guna2Panel12";
			this->guna2Panel12->ShadowDecoration->Parent = this->guna2Panel12;
			this->guna2Panel12->Size = System::Drawing::Size(1156, 537);
			this->guna2Panel12->TabIndex = 1;
			// 
			// PaidBillsDataGridView
			// 
			this->PaidBillsDataGridView->AllowCustomTheming = false;
			this->PaidBillsDataGridView->AllowUserToAddRows = false;
			this->PaidBillsDataGridView->AllowUserToDeleteRows = false;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::Color::Black;
			this->PaidBillsDataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle16;
			this->PaidBillsDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->PaidBillsDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PaidBillsDataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->PaidBillsDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle17->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->PaidBillsDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->PaidBillsDataGridView->ColumnHeadersHeight = 40;
			this->PaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F,
				System::Drawing::FontStyle::Bold));
			this->PaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->PaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->PaidBillsDataGridView->CurrentTheme->BackColor = System::Drawing::Color::White;
			this->PaidBillsDataGridView->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PaidBillsDataGridView->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::DodgerBlue;
			this->PaidBillsDataGridView->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			this->PaidBillsDataGridView->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->PaidBillsDataGridView->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->PaidBillsDataGridView->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->PaidBillsDataGridView->CurrentTheme->Name = nullptr;
			this->PaidBillsDataGridView->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::White;
			this->PaidBillsDataGridView->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->PaidBillsDataGridView->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->PaidBillsDataGridView->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PaidBillsDataGridView->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle18->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->PaidBillsDataGridView->DefaultCellStyle = dataGridViewCellStyle18;
			this->PaidBillsDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PaidBillsDataGridView->EnableHeadersVisualStyles = false;
			this->PaidBillsDataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PaidBillsDataGridView->HeaderBackColor = System::Drawing::Color::DodgerBlue;
			this->PaidBillsDataGridView->HeaderBgColor = System::Drawing::Color::Empty;
			this->PaidBillsDataGridView->HeaderForeColor = System::Drawing::Color::White;
			this->PaidBillsDataGridView->Location = System::Drawing::Point(0, 0);
			this->PaidBillsDataGridView->Name = L"PaidBillsDataGridView";
			this->PaidBillsDataGridView->ReadOnly = true;
			this->PaidBillsDataGridView->RowHeadersVisible = false;
			this->PaidBillsDataGridView->RowTemplate->Height = 40;
			this->PaidBillsDataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->PaidBillsDataGridView->Size = System::Drawing::Size(1156, 537);
			this->PaidBillsDataGridView->TabIndex = 0;
			this->PaidBillsDataGridView->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::Light;
			// 
			// guna2Panel11
			// 
			this->guna2Panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->guna2Panel11->Location = System::Drawing::Point(3, 3);
			this->guna2Panel11->Name = L"guna2Panel11";
			this->guna2Panel11->ShadowDecoration->Parent = this->guna2Panel11;
			this->guna2Panel11->Size = System::Drawing::Size(1156, 100);
			this->guna2Panel11->TabIndex = 0;
			// 
			// DueBillsTabPage
			// 
			this->DueBillsTabPage->Controls->Add(this->guna2Panel14);
			this->DueBillsTabPage->Controls->Add(this->guna2Panel13);
			this->DueBillsTabPage->Location = System::Drawing::Point(4, 4);
			this->DueBillsTabPage->Name = L"DueBillsTabPage";
			this->DueBillsTabPage->Padding = System::Windows::Forms::Padding(3);
			this->DueBillsTabPage->Size = System::Drawing::Size(1162, 643);
			this->DueBillsTabPage->TabIndex = 4;
			this->DueBillsTabPage->Text = L"Due Bills";
			this->DueBillsTabPage->UseVisualStyleBackColor = true;
			// 
			// guna2Panel14
			// 
			this->guna2Panel14->Controls->Add(this->bunifuDataGridView1);
			this->guna2Panel14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guna2Panel14->Location = System::Drawing::Point(3, 103);
			this->guna2Panel14->Name = L"guna2Panel14";
			this->guna2Panel14->ShadowDecoration->Parent = this->guna2Panel14;
			this->guna2Panel14->Size = System::Drawing::Size(1156, 537);
			this->guna2Panel14->TabIndex = 1;
			// 
			// bunifuDataGridView1
			// 
			this->bunifuDataGridView1->AllowCustomTheming = false;
			this->bunifuDataGridView1->AllowUserToAddRows = false;
			this->bunifuDataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle19;
			this->bunifuDataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->bunifuDataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuDataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->bunifuDataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle20->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle20->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle20->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle20->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle20->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuDataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle20;
			this->bunifuDataGridView1->ColumnHeadersHeight = 40;
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView1->CurrentTheme->BackColor = System::Drawing::Color::White;
			this->bunifuDataGridView1->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView1->CurrentTheme->Name = nullptr;
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::White;
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle21->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle21->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->bunifuDataGridView1->DefaultCellStyle = dataGridViewCellStyle21;
			this->bunifuDataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bunifuDataGridView1->EnableHeadersVisualStyles = false;
			this->bunifuDataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView1->HeaderBackColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDataGridView1->HeaderBgColor = System::Drawing::Color::Empty;
			this->bunifuDataGridView1->HeaderForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView1->Location = System::Drawing::Point(0, 0);
			this->bunifuDataGridView1->Name = L"bunifuDataGridView1";
			this->bunifuDataGridView1->ReadOnly = true;
			this->bunifuDataGridView1->RowHeadersVisible = false;
			this->bunifuDataGridView1->RowTemplate->Height = 40;
			this->bunifuDataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->bunifuDataGridView1->Size = System::Drawing::Size(1156, 537);
			this->bunifuDataGridView1->TabIndex = 0;
			this->bunifuDataGridView1->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::Light;
			// 
			// guna2Panel13
			// 
			this->guna2Panel13->Dock = System::Windows::Forms::DockStyle::Top;
			this->guna2Panel13->Location = System::Drawing::Point(3, 3);
			this->guna2Panel13->Name = L"guna2Panel13";
			this->guna2Panel13->ShadowDecoration->Parent = this->guna2Panel13;
			this->guna2Panel13->Size = System::Drawing::Size(1156, 100);
			this->guna2Panel13->TabIndex = 0;
			// 
			// AllBillsTabPage
			// 
			this->AllBillsTabPage->Controls->Add(this->guna2Panel16);
			this->AllBillsTabPage->Controls->Add(this->guna2Panel15);
			this->AllBillsTabPage->Location = System::Drawing::Point(4, 4);
			this->AllBillsTabPage->Name = L"AllBillsTabPage";
			this->AllBillsTabPage->Padding = System::Windows::Forms::Padding(3);
			this->AllBillsTabPage->Size = System::Drawing::Size(1162, 643);
			this->AllBillsTabPage->TabIndex = 5;
			this->AllBillsTabPage->Text = L"All Bills";
			this->AllBillsTabPage->UseVisualStyleBackColor = true;
			// 
			// guna2Panel16
			// 
			this->guna2Panel16->Controls->Add(this->AllBillsDataGridView);
			this->guna2Panel16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guna2Panel16->Location = System::Drawing::Point(3, 100);
			this->guna2Panel16->Name = L"guna2Panel16";
			this->guna2Panel16->ShadowDecoration->Parent = this->guna2Panel16;
			this->guna2Panel16->Size = System::Drawing::Size(1156, 540);
			this->guna2Panel16->TabIndex = 1;
			// 
			// AllBillsDataGridView
			// 
			this->AllBillsDataGridView->AllowCustomTheming = true;
			this->AllBillsDataGridView->AllowUserToAddRows = false;
			this->AllBillsDataGridView->AllowUserToDeleteRows = false;
			dataGridViewCellStyle22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::Color::Black;
			this->AllBillsDataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle22;
			this->AllBillsDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->AllBillsDataGridView->BackgroundColor = System::Drawing::SystemColors::Window;
			this->AllBillsDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AllBillsDataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->AllBillsDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::Navy;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->AllBillsDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle23;
			this->AllBillsDataGridView->ColumnHeadersHeight = 40;
			this->AllBillsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column19,
					this->Column20, this->Column21, this->Column22, this->Column23, this->Column28, this->Column24, this->Column25, this->Column26,
					this->Column27
			});
			this->AllBillsDataGridView->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->AllBillsDataGridView->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F,
				System::Drawing::FontStyle::Bold));
			this->AllBillsDataGridView->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->AllBillsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->AllBillsDataGridView->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
			this->AllBillsDataGridView->CurrentTheme->BackColor = System::Drawing::Color::Navy;
			this->AllBillsDataGridView->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->AllBillsDataGridView->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::Navy;
			this->AllBillsDataGridView->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AllBillsDataGridView->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->AllBillsDataGridView->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->AllBillsDataGridView->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->AllBillsDataGridView->CurrentTheme->Name = nullptr;
			this->AllBillsDataGridView->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->AllBillsDataGridView->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AllBillsDataGridView->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->AllBillsDataGridView->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->AllBillsDataGridView->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Sora", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->AllBillsDataGridView->DefaultCellStyle = dataGridViewCellStyle24;
			this->AllBillsDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AllBillsDataGridView->EnableHeadersVisualStyles = false;
			this->AllBillsDataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->AllBillsDataGridView->HeaderBackColor = System::Drawing::Color::Navy;
			this->AllBillsDataGridView->HeaderBgColor = System::Drawing::Color::Empty;
			this->AllBillsDataGridView->HeaderForeColor = System::Drawing::Color::White;
			this->AllBillsDataGridView->Location = System::Drawing::Point(0, 0);
			this->AllBillsDataGridView->Name = L"AllBillsDataGridView";
			this->AllBillsDataGridView->ReadOnly = true;
			this->AllBillsDataGridView->RowHeadersVisible = false;
			this->AllBillsDataGridView->RowTemplate->Height = 40;
			this->AllBillsDataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->AllBillsDataGridView->Size = System::Drawing::Size(1156, 540);
			this->AllBillsDataGridView->TabIndex = 0;
			this->AllBillsDataGridView->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::Navy;
			// 
			// Column19
			// 
			this->Column19->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column19->DataPropertyName = L"client_id";
			this->Column19->HeaderText = L"Client ID";
			this->Column19->Name = L"Column19";
			this->Column19->ReadOnly = true;
			this->Column19->Width = 90;
			// 
			// Column20
			// 
			this->Column20->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column20->DataPropertyName = L"name";
			this->Column20->HeaderText = L"Name";
			this->Column20->Name = L"Column20";
			this->Column20->ReadOnly = true;
			this->Column20->Width = 74;
			// 
			// Column21
			// 
			this->Column21->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column21->DataPropertyName = L"id_no";
			this->Column21->HeaderText = L"ID No";
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			this->Column21->Width = 71;
			// 
			// Column22
			// 
			this->Column22->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column22->DataPropertyName = L"mobile_no";
			this->Column22->HeaderText = L"Mobile No";
			this->Column22->Name = L"Column22";
			this->Column22->ReadOnly = true;
			this->Column22->Width = 105;
			// 
			// Column23
			// 
			this->Column23->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column23->DataPropertyName = L"bill_no";
			this->Column23->HeaderText = L"Bill No.";
			this->Column23->Name = L"Column23";
			this->Column23->ReadOnly = true;
			this->Column23->Width = 82;
			// 
			// Column28
			// 
			this->Column28->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column28->DataPropertyName = L"meter_reading_date";
			this->Column28->HeaderText = L"M. R. Date";
			this->Column28->Name = L"Column28";
			this->Column28->ReadOnly = true;
			this->Column28->Width = 103;
			// 
			// Column24
			// 
			this->Column24->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column24->DataPropertyName = L"previous_meter_reading";
			this->Column24->HeaderText = L"P. M. Reading";
			this->Column24->Name = L"Column24";
			this->Column24->ReadOnly = true;
			this->Column24->Width = 129;
			// 
			// Column25
			// 
			this->Column25->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column25->DataPropertyName = L"meter_reading";
			this->Column25->HeaderText = L"C. M. Reading";
			this->Column25->Name = L"Column25";
			this->Column25->ReadOnly = true;
			this->Column25->Width = 128;
			// 
			// Column26
			// 
			this->Column26->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column26->DataPropertyName = L"units_consumed";
			this->Column26->HeaderText = L"Units";
			this->Column26->Name = L"Column26";
			this->Column26->ReadOnly = true;
			this->Column26->Width = 69;
			// 
			// Column27
			// 
			this->Column27->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column27->DataPropertyName = L"debit";
			this->Column27->HeaderText = L"Debit";
			this->Column27->Name = L"Column27";
			this->Column27->ReadOnly = true;
			this->Column27->Width = 69;
			// 
			// guna2Panel15
			// 
			this->guna2Panel15->Controls->Add(this->AllBillsToDatePicker);
			this->guna2Panel15->Controls->Add(this->bunifuLabel23);
			this->guna2Panel15->Controls->Add(this->groupBox2);
			this->guna2Panel15->Controls->Add(this->bunifuLabel21);
			this->guna2Panel15->Controls->Add(this->txtAllBillsSearchBox);
			this->guna2Panel15->Controls->Add(this->AllBillsFromDatePicker);
			this->guna2Panel15->Dock = System::Windows::Forms::DockStyle::Top;
			this->guna2Panel15->Location = System::Drawing::Point(3, 3);
			this->guna2Panel15->Name = L"guna2Panel15";
			this->guna2Panel15->ShadowDecoration->Parent = this->guna2Panel15;
			this->guna2Panel15->Size = System::Drawing::Size(1156, 97);
			this->guna2Panel15->TabIndex = 0;
			// 
			// AllBillsToDatePicker
			// 
			this->AllBillsToDatePicker->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AllBillsToDatePicker->BackColor = System::Drawing::Color::Transparent;
			this->AllBillsToDatePicker->BorderRadius = 1;
			this->AllBillsToDatePicker->CalendarFont = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AllBillsToDatePicker->Color = System::Drawing::Color::Silver;
			this->AllBillsToDatePicker->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AllBillsToDatePicker->DateBorderThickness = Bunifu::UI::WinForms::BunifuDatePicker::BorderThickness::Thin;
			this->AllBillsToDatePicker->DateTextAlign = Bunifu::UI::WinForms::BunifuDatePicker::TextAlign::Left;
			this->AllBillsToDatePicker->DisabledColor = System::Drawing::Color::Gray;
			this->AllBillsToDatePicker->DisplayWeekNumbers = false;
			this->AllBillsToDatePicker->DPHeight = 0;
			this->AllBillsToDatePicker->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->AllBillsToDatePicker->FillDatePicker = false;
			this->AllBillsToDatePicker->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AllBillsToDatePicker->ForeColor = System::Drawing::Color::Navy;
			this->AllBillsToDatePicker->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AllBillsToDatePicker.Icon")));
			this->AllBillsToDatePicker->IconColor = System::Drawing::Color::Navy;
			this->AllBillsToDatePicker->IconLocation = Bunifu::UI::WinForms::BunifuDatePicker::Indicator::Right;
			this->AllBillsToDatePicker->LeftTextMargin = 5;
			this->AllBillsToDatePicker->Location = System::Drawing::Point(603, 35);
			this->AllBillsToDatePicker->MinimumSize = System::Drawing::Size(4, 32);
			this->AllBillsToDatePicker->Name = L"AllBillsToDatePicker";
			this->AllBillsToDatePicker->Size = System::Drawing::Size(220, 32);
			this->AllBillsToDatePicker->TabIndex = 4;
			this->AllBillsToDatePicker->ValueChanged += gcnew System::EventHandler(this, &Administrator::AllBillsToDatePicker_ValueChanged);
			// 
			// bunifuLabel23
			// 
			this->bunifuLabel23->AllowParentOverrides = false;
			this->bunifuLabel23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->bunifuLabel23->AutoEllipsis = false;
			this->bunifuLabel23->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel23->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel23->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->bunifuLabel23->ForeColor = System::Drawing::Color::Navy;
			this->bunifuLabel23->Location = System::Drawing::Point(603, 18);
			this->bunifuLabel23->Name = L"bunifuLabel23";
			this->bunifuLabel23->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel23->Size = System::Drawing::Size(45, 15);
			this->bunifuLabel23->TabIndex = 7;
			this->bunifuLabel23->Text = L"To Date";
			this->bunifuLabel23->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel23->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->guna2Button3);
			this->groupBox2->Controls->Add(this->guna2Button2);
			this->groupBox2->Controls->Add(this->guna2Button1);
			this->groupBox2->ForeColor = System::Drawing::Color::Navy;
			this->groupBox2->Location = System::Drawing::Point(881, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(270, 64);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Filter by";
			// 
			// guna2Button3
			// 
			this->guna2Button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->guna2Button3->Animated = true;
			this->guna2Button3->AutoRoundedCorners = true;
			this->guna2Button3->BorderColor = System::Drawing::Color::Navy;
			this->guna2Button3->BorderRadius = 16;
			this->guna2Button3->BorderThickness = 2;
			this->guna2Button3->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->guna2Button3->CheckedState->Parent = this->guna2Button3;
			this->guna2Button3->CustomImages->Parent = this->guna2Button3;
			this->guna2Button3->FillColor = System::Drawing::Color::Transparent;
			this->guna2Button3->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->guna2Button3->ForeColor = System::Drawing::Color::Navy;
			this->guna2Button3->HoverState->Parent = this->guna2Button3;
			this->guna2Button3->Location = System::Drawing::Point(6, 22);
			this->guna2Button3->Name = L"guna2Button3";
			this->guna2Button3->ShadowDecoration->Parent = this->guna2Button3;
			this->guna2Button3->Size = System::Drawing::Size(73, 35);
			this->guna2Button3->TabIndex = 9;
			this->guna2Button3->Text = L"All";
			this->guna2Button3->UseTransparentBackground = true;
			// 
			// guna2Button2
			// 
			this->guna2Button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->guna2Button2->Animated = true;
			this->guna2Button2->AutoRoundedCorners = true;
			this->guna2Button2->BorderColor = System::Drawing::Color::Navy;
			this->guna2Button2->BorderRadius = 16;
			this->guna2Button2->BorderThickness = 2;
			this->guna2Button2->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->guna2Button2->CheckedState->Parent = this->guna2Button2;
			this->guna2Button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->guna2Button2->CustomImages->Parent = this->guna2Button2;
			this->guna2Button2->FillColor = System::Drawing::Color::Transparent;
			this->guna2Button2->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->guna2Button2->ForeColor = System::Drawing::Color::Navy;
			this->guna2Button2->HoverState->Parent = this->guna2Button2;
			this->guna2Button2->Location = System::Drawing::Point(98, 22);
			this->guna2Button2->Name = L"guna2Button2";
			this->guna2Button2->ShadowDecoration->Parent = this->guna2Button2;
			this->guna2Button2->Size = System::Drawing::Size(73, 35);
			this->guna2Button2->TabIndex = 2;
			this->guna2Button2->Text = L"Due";
			this->guna2Button2->UseTransparentBackground = true;
			// 
			// guna2Button1
			// 
			this->guna2Button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->guna2Button1->Animated = true;
			this->guna2Button1->AutoRoundedCorners = true;
			this->guna2Button1->BorderColor = System::Drawing::Color::Navy;
			this->guna2Button1->BorderRadius = 16;
			this->guna2Button1->BorderThickness = 2;
			this->guna2Button1->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
			this->guna2Button1->CheckedState->Parent = this->guna2Button1;
			this->guna2Button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->guna2Button1->CustomImages->Parent = this->guna2Button1;
			this->guna2Button1->FillColor = System::Drawing::Color::Transparent;
			this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->guna2Button1->ForeColor = System::Drawing::Color::Navy;
			this->guna2Button1->HoverState->Parent = this->guna2Button1;
			this->guna2Button1->Location = System::Drawing::Point(190, 22);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->ShadowDecoration->Parent = this->guna2Button1;
			this->guna2Button1->Size = System::Drawing::Size(73, 35);
			this->guna2Button1->TabIndex = 1;
			this->guna2Button1->Text = L"Paid";
			this->guna2Button1->UseTransparentBackground = true;
			// 
			// bunifuLabel21
			// 
			this->bunifuLabel21->AllowParentOverrides = false;
			this->bunifuLabel21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->bunifuLabel21->AutoEllipsis = false;
			this->bunifuLabel21->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel21->CursorType = System::Windows::Forms::Cursors::Default;
			this->bunifuLabel21->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->bunifuLabel21->ForeColor = System::Drawing::Color::Navy;
			this->bunifuLabel21->Location = System::Drawing::Point(377, 18);
			this->bunifuLabel21->Name = L"bunifuLabel21";
			this->bunifuLabel21->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel21->Size = System::Drawing::Size(62, 15);
			this->bunifuLabel21->TabIndex = 6;
			this->bunifuLabel21->Text = L"From Date:";
			this->bunifuLabel21->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel21->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// txtAllBillsSearchBox
			// 
			this->txtAllBillsSearchBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtAllBillsSearchBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtAllBillsSearchBox->DefaultText = L"";
			this->txtAllBillsSearchBox->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txtAllBillsSearchBox->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txtAllBillsSearchBox->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtAllBillsSearchBox->DisabledState->Parent = this->txtAllBillsSearchBox;
			this->txtAllBillsSearchBox->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txtAllBillsSearchBox->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtAllBillsSearchBox->FocusedState->Parent = this->txtAllBillsSearchBox;
			this->txtAllBillsSearchBox->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
			this->txtAllBillsSearchBox->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txtAllBillsSearchBox->HoverState->Parent = this->txtAllBillsSearchBox;
			this->txtAllBillsSearchBox->Location = System::Drawing::Point(3, 31);
			this->txtAllBillsSearchBox->Name = L"txtAllBillsSearchBox";
			this->txtAllBillsSearchBox->PasswordChar = '\0';
			this->txtAllBillsSearchBox->PlaceholderText = L"Search by: Name / ID / Bill No";
			this->txtAllBillsSearchBox->SelectedText = L"";
			this->txtAllBillsSearchBox->ShadowDecoration->Parent = this->txtAllBillsSearchBox;
			this->txtAllBillsSearchBox->Size = System::Drawing::Size(312, 36);
			this->txtAllBillsSearchBox->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
			this->txtAllBillsSearchBox->TabIndex = 0;
			this->txtAllBillsSearchBox->TextChanged += gcnew System::EventHandler(this, &Administrator::txtAllBillsSearchBox_TextChanged);
			// 
			// AllBillsFromDatePicker
			// 
			this->AllBillsFromDatePicker->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AllBillsFromDatePicker->BackColor = System::Drawing::Color::Transparent;
			this->AllBillsFromDatePicker->BorderRadius = 1;
			this->AllBillsFromDatePicker->CalendarFont = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AllBillsFromDatePicker->CalendarForeColor = System::Drawing::Color::Navy;
			this->AllBillsFromDatePicker->Color = System::Drawing::Color::Silver;
			this->AllBillsFromDatePicker->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AllBillsFromDatePicker->DateBorderThickness = Bunifu::UI::WinForms::BunifuDatePicker::BorderThickness::Thin;
			this->AllBillsFromDatePicker->DateTextAlign = Bunifu::UI::WinForms::BunifuDatePicker::TextAlign::Left;
			this->AllBillsFromDatePicker->DisabledColor = System::Drawing::Color::Gray;
			this->AllBillsFromDatePicker->DisplayWeekNumbers = false;
			this->AllBillsFromDatePicker->DPHeight = 0;
			this->AllBillsFromDatePicker->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->AllBillsFromDatePicker->FillDatePicker = false;
			this->AllBillsFromDatePicker->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AllBillsFromDatePicker->ForeColor = System::Drawing::Color::Navy;
			this->AllBillsFromDatePicker->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AllBillsFromDatePicker.Icon")));
			this->AllBillsFromDatePicker->IconColor = System::Drawing::Color::Navy;
			this->AllBillsFromDatePicker->IconLocation = Bunifu::UI::WinForms::BunifuDatePicker::Indicator::Right;
			this->AllBillsFromDatePicker->LeftTextMargin = 5;
			this->AllBillsFromDatePicker->Location = System::Drawing::Point(377, 35);
			this->AllBillsFromDatePicker->MinimumSize = System::Drawing::Size(4, 32);
			this->AllBillsFromDatePicker->Name = L"AllBillsFromDatePicker";
			this->AllBillsFromDatePicker->Size = System::Drawing::Size(220, 32);
			this->AllBillsFromDatePicker->TabIndex = 3;
			this->AllBillsFromDatePicker->ValueChanged += gcnew System::EventHandler(this, &Administrator::AllBillsFromDatePicker_ValueChanged);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Administrator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1344, 721);
			this->Controls->Add(this->guna2Panel3);
			this->Controls->Add(this->guna2Panel2);
			this->Controls->Add(this->guna2Panel1);
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Administrator";
			this->Text = L"Administrator";
			this->Load += gcnew System::EventHandler(this, &Administrator::Administrator_Load);
			this->guna2Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->EndInit();
			this->guna2Panel2->ResumeLayout(false);
			this->guna2Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2CirclePictureBox1))->EndInit();
			this->guna2Panel3->ResumeLayout(false);
			this->bunifuPages1->ResumeLayout(false);
			this->DashboardTabPage->ResumeLayout(false);
			this->DashboardTabPage->PerformLayout();
			this->bunifuShadowPanel8->ResumeLayout(false);
			this->bunifuShadowPanel8->PerformLayout();
			this->bunifuShadowPanel6->ResumeLayout(false);
			this->bunifuShadowPanel6->PerformLayout();
			this->bunifuShadowPanel5->ResumeLayout(false);
			this->bunifuShadowPanel5->PerformLayout();
			this->bunifuShadowPanel4->ResumeLayout(false);
			this->bunifuShadowPanel4->PerformLayout();
			this->bunifuShadowPanel3->ResumeLayout(false);
			this->bunifuShadowPanel3->PerformLayout();
			this->bunifuShadowPanel1->ResumeLayout(false);
			this->bunifuShadowPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(xyDiagram1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(splineSeriesView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(series1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartControl2))->EndInit();
			this->guna2Panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LatestPaidBillsDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LatestMeterReadingsDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(xyDiagram2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(splineSeriesView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(series2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartControl1))->EndInit();
			this->GenerateBillTabPage->ResumeLayout(false);
			this->bunifuPages2->ResumeLayout(false);
			this->ClientListTabPage->ResumeLayout(false);
			this->guna2Panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientListDataGridView))->EndInit();
			this->guna2Panel5->ResumeLayout(false);
			this->BillingTabPage->ResumeLayout(false);
			this->guna2Panel7->ResumeLayout(false);
			this->guna2Panel9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView4))->EndInit();
			this->guna2Panel8->ResumeLayout(false);
			this->guna2Panel8->PerformLayout();
			this->AddClientTabPage->ResumeLayout(false);
			this->guna2Panel10->ResumeLayout(false);
			this->guna2Panel19->ResumeLayout(false);
			this->guna2Panel19->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->guna2Panel17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ClientsDataGridView))->EndInit();
			this->guna2Panel18->ResumeLayout(false);
			this->guna2Panel18->PerformLayout();
			this->PaidBillsTabPage->ResumeLayout(false);
			this->guna2Panel12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PaidBillsDataGridView))->EndInit();
			this->DueBillsTabPage->ResumeLayout(false);
			this->guna2Panel14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView1))->EndInit();
			this->AllBillsTabPage->ResumeLayout(false);
			this->guna2Panel16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AllBillsDataGridView))->EndInit();
			this->guna2Panel15->ResumeLayout(false);
			this->guna2Panel15->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void guna2Panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Administrator_Load(System::Object^ sender, System::EventArgs^ e) {
		btnDashboard->PerformClick();
	}
	private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e) {
		countNumberOfClients();
		countNumberOfBills();
		countNumberOfPaidBills();
		fillLatestMeterReadingsDatagridview();
		fillLatestPaidBillsDatagridview();

		bunifuPages1->PageName = "DashboardTabPage";
	}
	private: System::Void btnGenerateBill_Click(System::Object^ sender, System::EventArgs^ e) {
		fillClientListDatagridview();

		bunifuPages1->PageName = "GenerateBillTabPage";
	}
	private: System::Void btnAddClient_Click(System::Object^ sender, System::EventArgs^ e) {
		fillClientsDatagridview();
		GenerateClientID();

		bunifuPages1->PageName = "AddClientTabPage";
	}
	private: System::Void btnPaidBills_Click(System::Object^ sender, System::EventArgs^ e) {
		bunifuPages1->PageName = "PaidBillsTabPage";
	}
	private: System::Void btnDueBills_Click(System::Object^ sender, System::EventArgs^ e) {
		bunifuPages1->PageName = "DueBillsTabPage";
	}
	private: System::Void btnAllBills_Click(System::Object^ sender, System::EventArgs^ e) {
		fillAllBillsDatagridview();

		bunifuPages1->PageName = "AllBillsTabPage";
	}

		   void countNumberOfClients()
		   {
			   String^ constr = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
			   PgSqlConnection^ con = gcnew PgSqlConnection(constr);
			   try
			   {
				   con->Open();
				   PgSqlCommand^ cmd = gcnew PgSqlCommand("SELECT  COUNT(client_id) FROM clients_tbl", con);
				   PgSqlDataReader^ dr;
				   dr = cmd->ExecuteReader();
				   while (dr->Read())
				   {
					   lblTotalClients->Text = dr->GetString("count");
					   lblTotalNumberofClients->Text = "Total Clients: " + lblTotalClients->Text;
				   }
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show(ex->Message);
			   }
			   con->Close();
		   }

		   void countNumberOfBills()
		   {
			   String^ constr = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
			   PgSqlConnection^ con = gcnew PgSqlConnection(constr);
			   try
			   {
				   con->Open();
				   PgSqlCommand^ cmd = gcnew PgSqlCommand("SELECT  COUNT(client_id) FROM billing_tbl", con);
				   PgSqlDataReader^ dr;
				   dr = cmd->ExecuteReader();
				   while (dr->Read())
				   {
					   lblTotalBills->Text = dr->GetString("count");
				   }
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show(ex->Message);
			   }
			   con->Close();
		   }

		   void countNumberOfPaidBills()
		   {
			   String^ constr = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
			   PgSqlConnection^ con = gcnew PgSqlConnection(constr);
			   try
			   {
				   con->Open();
				   PgSqlCommand^ cmd = gcnew PgSqlCommand("SELECT  COUNT(client_id) FROM payments_tbl", con);
				   PgSqlDataReader^ dr;
				   dr = cmd->ExecuteReader();
				   while (dr->Read())
				   {
					   lblTotalPaidBills->Text = dr->GetString("count");
				   }
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show(ex->Message);
			   }
			   con->Close();
		   }

		   void fillLatestMeterReadingsDatagridview()
		   {
			   String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
			   PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
			   try {
				   PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT DISTINCT ON (BILLING_TBL.CLIENT_ID) BILLING_TBL.CLIENT_ID,CLIENTS_TBL.NAME, BILLING_TBL.METER_READING_DATE, BILLING_TBL.METER_READING, LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS PREVIOUS_METER_READING,BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS UNITS_CONSUMED FROM BILLING_TBL INNER JOIN CLIENTS_TBL ON BILLING_TBL.CLIENT_ID = CLIENTS_TBL.CLIENT_ID ORDER BY BILLING_TBL.CLIENT_ID, BILLING_TBL.METER_READING_DATE::date DESC ", conDatabase);
				   PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
				   sda->SelectCommand = cmdDatabase;
				   DataTable^ dbdataset = gcnew DataTable();
				   sda->Fill(dbdataset);
				   BindingSource^ bSource = gcnew BindingSource();
				   bSource->DataSource = dbdataset;
				   LatestMeterReadingsDataGridView->DataSource = bSource;
				   sda->Update(dbdataset);
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
			   }
		   }
		   void fillLatestPaidBillsDatagridview()
		   {
			   String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
			   PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
			   try {
				   PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT  payments_tbl.client_id, clients_tbl.name, payments_tbl.bill_no, payments_tbl.credit, payments_tbl.paid_date FROM payments_tbl INNER JOIN clients_tbl ON payments_tbl.client_id=clients_tbl.client_id ORDER  BY payments_tbl.paid_date DESC; ", conDatabase);
				   PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
				   sda->SelectCommand = cmdDatabase;
				   DataTable^ dbdataset = gcnew DataTable();
				   sda->Fill(dbdataset);
				   BindingSource^ bSource = gcnew BindingSource();
				   bSource->DataSource = dbdataset;
				   LatestPaidBillsDataGridView->DataSource = bSource;
				   sda->Update(dbdataset);
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
			   }
		   }

		   void fillClientListDatagridview()
		   {
			   String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
			   PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
			   try {
				   PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT DISTINCT ON (BILLING_TBL.CLIENT_ID)BILLING_TBL.CLIENT_ID,CLIENTS_TBL.NAME,CLIENTS_TBL.MOBILE_NO,CLIENTS_TBL.ADDRESS,BILLING_TBL.METER_READING_DATE,LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS PREVIOUS_METER_READING, BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS UNITS_CONSUMED, (BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date)) * 100 AS debit, payments_tbl.credit FROM /*BILLING_TBL*/ clients_tbl INNER JOIN /*CLIENTS_TBL*/ BILLING_TBL ON BILLING_TBL.CLIENT_ID = CLIENTS_TBL.CLIENT_ID INNER JOIN payments_tbl ON clients_tbl.client_id = payments_tbl.client_id ORDER BY BILLING_TBL.CLIENT_ID, BILLING_TBL.METER_READING_DATE::date DESC", conDatabase);
				   PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
				   sda->SelectCommand = cmdDatabase;
				   DataTable^ dbdataset = gcnew DataTable();
				   sda->Fill(dbdataset);
				   BindingSource^ bSource = gcnew BindingSource();
				   bSource->DataSource = dbdataset;
				   ClientListDataGridView->DataSource = bSource;
				   sda->Update(dbdataset);
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
			   }
		   }

		   void fillAllBillsDatagridview()
		   {
			   String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
			   PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
			   try {
				   PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT /*DISTINCT ON (BILLING_TBL.CLIENT_ID)*/ BILLING_TBL.CLIENT_ID,CLIENTS_TBL.NAME,CLIENTS_TBL.ID_NO,CLIENTS_TBL.MOBILE_NO,BILLING_TBL.BILL_NO,BILLING_TBL.METER_READING_DATE, BILLING_TBL.METER_READING, LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS PREVIOUS_METER_READING, BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS UNITS_CONSUMED, (BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date)) * 100 AS debit FROM BILLING_TBL INNER JOIN CLIENTS_TBL ON BILLING_TBL.CLIENT_ID = CLIENTS_TBL.CLIENT_ID  ORDER BY BILLING_TBL.CLIENT_ID, BILLING_TBL.METER_READING_DATE::date DESC", conDatabase);
				   PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
				   sda->SelectCommand = cmdDatabase;
				   DataTable^ dbdataset = gcnew DataTable();
				   sda->Fill(dbdataset);
				   BindingSource^ bSource = gcnew BindingSource();
				   bSource->DataSource = dbdataset;
				   AllBillsDataGridView->DataSource = bSource;
				   sda->Update(dbdataset);
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
			   }
		   }

		   void fillClientsDatagridview()
		   {
			   String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
			   PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
			   try {
				   PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT client_id,name,id_no,mobile_no from clients_tbl", conDatabase);
				   PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
				   sda->SelectCommand = cmdDatabase;
				   DataTable^ dbdataset = gcnew DataTable();
				   sda->Fill(dbdataset);
				   BindingSource^ bSource = gcnew BindingSource();
				   bSource->DataSource = dbdataset;
				   ClientsDataGridView->DataSource = bSource;
				   sda->Update(dbdataset);
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
			   }
		   }

	private: System::Void txtAllBillsSearchBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
		PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
		try {
			PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT /*DISTINCT ON (BILLING_TBL.CLIENT_ID)*/ BILLING_TBL.CLIENT_ID,CLIENTS_TBL.NAME,CLIENTS_TBL.ID_NO,CLIENTS_TBL.MOBILE_NO,BILLING_TBL.BILL_NO,BILLING_TBL.METER_READING_DATE, BILLING_TBL.METER_READING, LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS PREVIOUS_METER_READING, BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS UNITS_CONSUMED, (BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date)) * 100 AS debit FROM BILLING_TBL INNER JOIN CLIENTS_TBL ON BILLING_TBL.CLIENT_ID = CLIENTS_TBL.CLIENT_ID WHERE LOWER(billing_tbl.client_id) LIKE CONCAT('%',LOWER(@search::character varying),'%') OR LOWER(clients_tbl.name) LIKE CONCAT('%',LOWER(@search::text),'%') OR LOWER(clients_tbl.id_no) LIKE CONCAT('%',LOWER(@search::text),'%') OR LOWER(billing_tbl.bill_no) LIKE CONCAT('%',LOWER(@search::character varying),'%') ORDER BY BILLING_TBL.CLIENT_ID, BILLING_TBL.METER_READING_DATE::date DESC", conDatabase);
			cmdDatabase->Parameters->AddWithValue("@search", txtAllBillsSearchBox->Text);
			PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
			sda->SelectCommand = cmdDatabase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();
			bSource->DataSource = dbdataset;
			AllBillsDataGridView->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void bunifuLabel19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Submt_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ gender = "";
		if (rbtnMale->Checked == true || rbtnFemale->Checked == true)
		{
			bool isChecked = rbtnMale->Checked;
			if (isChecked)
				gender = rbtnMale->Text;
			else
				gender = rbtnFemale->Text;
		}
		
		String^ constr = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
		PgSqlConnection^ con = gcnew PgSqlConnection(constr);
		try
		{
			con->Open();
			PgSqlCommand^ cmd = gcnew PgSqlCommand(" INSERT INTO clients_tbl(client_id,name,id_no,mobile_no,email,gender,address)VALUES(@client_id, @name, @id_no, @mobile_no, @email, @gender, @address)", con);
			cmd->Parameters->AddWithValue("@client_id", txtClientID->Text);
			cmd->Parameters->AddWithValue("@name", txtClientName->Text);
			cmd->Parameters->AddWithValue("@id_no", txtIDNo->Text);
			cmd->Parameters->AddWithValue("@mobile_no", txtMobileNo->Text);
			cmd->Parameters->AddWithValue("@email", txtEmail->Text);
			cmd->Parameters->AddWithValue("@gender", gender);
			cmd->Parameters->AddWithValue("@address", txtAddress->Text);
			cmd->ExecuteNonQuery();
			MessageBox::Show("Successfully Registered.", "Success");
			//clearAll();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		con->Close();
	}
	private: System::Void ClientListDataGridView_CellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		if (e->RowIndex >= 0)
		{
			DataGridViewRow^ row = ClientListDataGridView->Rows[e->RowIndex];
			txt_ClientID->Text = row->Cells[0]->Value->ToString();
			txt_ClientName->Text = row->Cells[1]->Value->ToString();
			txt_PreviousMeterReading->Text = row->Cells[5]->Value->ToString();

			GenerateBillNo();

			bunifuPages2->PageName = "BillingTabPage";
		}
	}
	private: System::Void btn_Back_Click(System::Object^ sender, System::EventArgs^ e) {
		bunifuPages2->PageName = "ClientListTabPage";
	}
	private: System::Void txt_UnitsConsumed_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_CurrentMeterReading_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (ValidateChildren(ValidationConstraints::Enabled))
		{
			txt_UnitsConsumed->Text = (Int32::Parse(txt_CurrentMeterReading->Text) - Int32::Parse(txt_PreviousMeterReading->Text)).ToString();
		}
	}
	private: System::Void txt_CurrentMeterReading_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		if (String::IsNullOrEmpty(txt_CurrentMeterReading->Text))
		{
			e->Cancel = true;
			txt_CurrentMeterReading->Focus();
			errorProvider1->SetError(txt_CurrentMeterReading, "Meter Reading should not be left blank!");
		}
		else
		{
			e->Cancel = false;
			errorProvider1->SetError(txt_CurrentMeterReading, "");
		}
	}
	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   void GenerateBillNo()
		   {
			   string bill_no;
			   srand(time(0));
			   std::time_t t = std::time(0);
			   std::tm* now = std::localtime(&t);
			   String^ client_id2;
			   int i = 0;

			   client_id2 = txt_ClientID->Text;

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

			   bill_no = to_string((now->tm_year + 1900)) + to_string((now->tm_mon + 1)) + to_string((now->tm_mday)) + "-" + (array[1]) + "-" + to_string(rand() % 11 + 0);
			   String^ bill_no2 = gcnew String(bill_no.c_str());
			   txt_BillNo->Text = bill_no2;
		   }

		void GenerateClientID()
	{
			string client_id;
			srand(time(0));
			std::time_t t = std::time(0);
			std::tm* now = std::localtime(&t);
			client_id = "WMS" + to_string(rand() % 801 + 100) + "-" + to_string(rand() % 8001 + 1000) + "/" + to_string((now->tm_year + 1900) % 100);
			String^ client_id2 = gcnew String(client_id.c_str());
			txtClientID->Text = client_id2;
	}
	private: System::Void txt_Search_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
		PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
		try {
			PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT client_id, name, id_no, mobile_no from clients_tbl WHERE LOWER(clients_tbl.client_id) LIKE CONCAT('%',LOWER(@search::character varying),'%') OR LOWER(clients_tbl.name) LIKE CONCAT('%',LOWER(@search::text),'%') OR LOWER(clients_tbl.id_no) LIKE CONCAT('%',LOWER(@search::text),'%') OR LOWER(clients_tbl.mobile_no) LIKE CONCAT('%',LOWER(@search::text),'%') ORDER BY clients_tbl.CLIENT_ID", conDatabase);
			cmdDatabase->Parameters->AddWithValue("@search", txt_Search->Text);
			PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
			sda->SelectCommand = cmdDatabase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();
			bSource->DataSource = dbdataset;
			ClientsDataGridView->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void txt_SearchBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
	PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
	try {
		PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("Select DISTINCT ON (clients_tbl.client_id) clients_tbl.client_id, clients_tbl.name, clients_tbl.mobile_no, clients_tbl.address, /*coalesce(billing_tbl.meter_reading, 0)*/ billing_tbl.meter_reading AS previous_meter_reading, BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS UNITS_CONSUMED, (BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date)) * 100 AS debit, payments_tbl.credit, BILLING_TBL.METER_READING_DATE::date  from clients_tbl left join billing_tbl on clients_tbl.client_id=billing_tbl.client_id left JOIN payments_tbl ON clients_tbl.client_id = payments_tbl.client_id where LOWER(clients_tbl.name) LIKE CONCAT('%',LOWER(@search::text),'%') order by clients_tbl.client_id, BILLING_TBL.METER_READING_DATE::date desc NULLS LAST", conDatabase);
		cmdDatabase->Parameters->AddWithValue("@search", txt_SearchBox->Text);
		PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
		sda->SelectCommand = cmdDatabase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		ClientListDataGridView->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void bunifuDatePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AllBillsFromDatePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
	PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
	try {
		PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT /*DISTINCT ON (BILLING_TBL.CLIENT_ID)*/ BILLING_TBL.CLIENT_ID,CLIENTS_TBL.NAME,CLIENTS_TBL.ID_NO,CLIENTS_TBL.MOBILE_NO,BILLING_TBL.BILL_NO,BILLING_TBL.METER_READING_DATE, BILLING_TBL.METER_READING, LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS PREVIOUS_METER_READING, BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS UNITS_CONSUMED, (BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date)) * 100 AS debit FROM BILLING_TBL INNER JOIN CLIENTS_TBL ON BILLING_TBL.CLIENT_ID = CLIENTS_TBL.CLIENT_ID WHERE (LOWER(billing_tbl.client_id) LIKE CONCAT('%',LOWER(@search::character varying),'%') OR LOWER(clients_tbl.name) LIKE CONCAT('%',LOWER(@search::text),'%') OR LOWER(clients_tbl.id_no) LIKE CONCAT('%',LOWER(@search::text),'%') OR LOWER(billing_tbl.bill_no) LIKE CONCAT('%',LOWER(@search::character varying),'%')) AND BILLING_TBL.METER_READING_DATE::date >= (@FromDate) AND BILLING_TBL.METER_READING_DATE::date < (@ToDate) ORDER BY BILLING_TBL.CLIENT_ID, BILLING_TBL.METER_READING_DATE::date DESC", conDatabase);
		cmdDatabase->Parameters->AddWithValue("@search", txtAllBillsSearchBox->Text);
		cmdDatabase->Parameters->AddWithValue("@FromDate", AllBillsFromDatePicker->Value);
		cmdDatabase->Parameters->AddWithValue("@ToDate", AllBillsToDatePicker->Value);
		PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
		sda->SelectCommand = cmdDatabase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		AllBillsDataGridView->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void AllBillsToDatePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = ConfigurationManager::ConnectionStrings["PostgreSql"]->ConnectionString;
	PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
	try {
		PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT /*DISTINCT ON (BILLING_TBL.CLIENT_ID)*/ BILLING_TBL.CLIENT_ID,CLIENTS_TBL.NAME,CLIENTS_TBL.ID_NO,CLIENTS_TBL.MOBILE_NO,BILLING_TBL.BILL_NO,BILLING_TBL.METER_READING_DATE, BILLING_TBL.METER_READING, LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS PREVIOUS_METER_READING, BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date) AS UNITS_CONSUMED, (BILLING_TBL.METER_READING - LAG(BILLING_TBL.METER_READING) OVER(PARTITION BY BILLING_TBL.CLIENT_ID ORDER BY BILLING_TBL.METER_READING_DATE::date)) * 100 AS debit FROM BILLING_TBL INNER JOIN CLIENTS_TBL ON BILLING_TBL.CLIENT_ID = CLIENTS_TBL.CLIENT_ID WHERE (LOWER(billing_tbl.client_id) LIKE CONCAT('%',LOWER(@search::character varying),'%') OR LOWER(clients_tbl.name) LIKE CONCAT('%',LOWER(@search::text),'%') OR LOWER(clients_tbl.id_no) LIKE CONCAT('%',LOWER(@search::text),'%') OR LOWER(billing_tbl.bill_no) LIKE CONCAT('%',LOWER(@search::character varying),'%')) AND BILLING_TBL.METER_READING_DATE::date >= (@FromDate) AND BILLING_TBL.METER_READING_DATE::date < (@ToDate) ORDER BY BILLING_TBL.CLIENT_ID, BILLING_TBL.METER_READING_DATE::date DESC", conDatabase);
		cmdDatabase->Parameters->AddWithValue("@search", txtAllBillsSearchBox->Text);
		cmdDatabase->Parameters->AddWithValue("@FromDate", AllBillsFromDatePicker->Value);
		cmdDatabase->Parameters->AddWithValue("@ToDate", AllBillsToDatePicker->Value);
		PgSqlDataAdapter^ sda = gcnew PgSqlDataAdapter();
		sda->SelectCommand = cmdDatabase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();
		bSource->DataSource = dbdataset;
		AllBillsDataGridView->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}

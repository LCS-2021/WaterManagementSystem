#pragma once

namespace WaterManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Devart::Data::PostgreSql;


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

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel6;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ bunifuDataGridView3;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel5;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox1;
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
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox8;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox7;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox6;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox5;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox4;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox3;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox2;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel8;
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel9;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ bunifuDataGridView4;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox10;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox9;
	private: Guna::UI2::WinForms::Guna2DateTimePicker^ guna2DateTimePicker1;
private: Guna::UI2::WinForms::Guna2Button^ btnSubmit;
private: System::Windows::Forms::TabPage^ AddClientTabPage;
private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel10;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel31;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel30;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel29;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel28;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel27;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel26;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel25;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel24;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel23;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel22;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel21;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel20;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel19;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox11;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox20;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox12;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox19;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox13;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox18;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox14;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox17;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox15;
private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox16;
private: System::Windows::Forms::TabPage^ PaidBillsTabPage;
private: System::Windows::Forms::TabPage^ DueBillsTabPage;
private: System::Windows::Forms::TabPage^ AllBillsTabPage;
private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel32;
private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
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




























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Administrator::typeid));
            Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation3 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
            DevExpress::XtraCharts::XYDiagram^ xyDiagram3 = (gcnew DevExpress::XtraCharts::XYDiagram());
            DevExpress::XtraCharts::Series^ series3 = (gcnew DevExpress::XtraCharts::Series());
            DevExpress::XtraCharts::SplineSeriesView^ splineSeriesView3 = (gcnew DevExpress::XtraCharts::SplineSeriesView());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            DevExpress::XtraCharts::XYDiagram^ xyDiagram4 = (gcnew DevExpress::XtraCharts::XYDiagram());
            DevExpress::XtraCharts::Series^ series4 = (gcnew DevExpress::XtraCharts::Series());
            DevExpress::XtraCharts::SplineSeriesView^ splineSeriesView4 = (gcnew DevExpress::XtraCharts::SplineSeriesView());
            Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation2 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
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
            this->guna2Panel3 = (gcnew Guna::UI2::WinForms::Guna2Panel());
            this->bunifuPages1 = (gcnew Bunifu::UI::WinForms::BunifuPages());
            this->DashboardTabPage = (gcnew System::Windows::Forms::TabPage());
            this->bunifuLabel34 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel33 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->chartControl2 = (gcnew DevExpress::XtraCharts::ChartControl());
            this->bunifuLabel2 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel4 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel10 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel9 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->lblTotalPaidBills = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel7 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->lblTotalDueBills = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel5 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->lblTotalBills = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel3 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->lblTotalClients = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel1 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
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
            this->bunifuDataGridView3 = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
            this->guna2Panel5 = (gcnew Guna::UI2::WinForms::Guna2Panel());
            this->guna2TextBox1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->guna2Panel7 = (gcnew Guna::UI2::WinForms::Guna2Panel());
            this->guna2Panel9 = (gcnew Guna::UI2::WinForms::Guna2Panel());
            this->bunifuDataGridView4 = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
            this->guna2Panel8 = (gcnew Guna::UI2::WinForms::Guna2Panel());
            this->btnSubmit = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->guna2TextBox10 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox9 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2DateTimePicker1 = (gcnew Guna::UI2::WinForms::Guna2DateTimePicker());
            this->guna2TextBox4 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox2 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->bunifuLabel18 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->guna2TextBox3 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->bunifuLabel17 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->guna2TextBox5 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->bunifuLabel16 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->guna2TextBox6 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->bunifuLabel15 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->guna2TextBox7 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->bunifuLabel14 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->guna2TextBox8 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->bunifuLabel13 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel6 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel12 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel8 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel11 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->AddClientTabPage = (gcnew System::Windows::Forms::TabPage());
            this->guna2Panel10 = (gcnew Guna::UI2::WinForms::Guna2Panel());
            this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
            this->bunifuLabel31 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel30 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel29 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel28 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel27 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel26 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel25 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel24 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel23 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel22 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel21 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel20 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->bunifuLabel19 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
            this->guna2TextBox11 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox20 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox12 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox19 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox13 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox18 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox14 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox17 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox15 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->guna2TextBox16 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->PaidBillsTabPage = (gcnew System::Windows::Forms::TabPage());
            this->DueBillsTabPage = (gcnew System::Windows::Forms::TabPage());
            this->AllBillsTabPage = (gcnew System::Windows::Forms::TabPage());
            this->bunifuShadowPanel1 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
            this->bunifuShadowPanel3 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
            this->bunifuShadowPanel4 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
            this->bunifuShadowPanel5 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
            this->bunifuShadowPanel6 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
            this->bunifuShadowPanel8 = (gcnew Bunifu::UI::WinForms::BunifuShadowPanel());
            this->guna2Panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->BeginInit();
            this->guna2Panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2CirclePictureBox1))->BeginInit();
            this->guna2Panel3->SuspendLayout();
            this->bunifuPages1->SuspendLayout();
            this->DashboardTabPage->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartControl2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(xyDiagram3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(series3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(splineSeriesView3))->BeginInit();
            this->guna2Panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LatestPaidBillsDataGridView))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LatestMeterReadingsDataGridView))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartControl1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(xyDiagram4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(series4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(splineSeriesView4))->BeginInit();
            this->GenerateBillTabPage->SuspendLayout();
            this->bunifuPages2->SuspendLayout();
            this->ClientListTabPage->SuspendLayout();
            this->guna2Panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView3))->BeginInit();
            this->guna2Panel5->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->guna2Panel7->SuspendLayout();
            this->guna2Panel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView4))->BeginInit();
            this->guna2Panel8->SuspendLayout();
            this->AddClientTabPage->SuspendLayout();
            this->guna2Panel10->SuspendLayout();
            this->bunifuShadowPanel1->SuspendLayout();
            this->bunifuShadowPanel3->SuspendLayout();
            this->bunifuShadowPanel4->SuspendLayout();
            this->bunifuShadowPanel5->SuspendLayout();
            this->bunifuShadowPanel6->SuspendLayout();
            this->bunifuShadowPanel8->SuspendLayout();
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
            this->guna2Button9->CheckedState->Parent = this->guna2Button9;
            this->guna2Button9->CustomImages->Parent = this->guna2Button9;
            this->guna2Button9->FillColor = System::Drawing::Color::Transparent;
            this->guna2Button9->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2Button9->ForeColor = System::Drawing::Color::White;
            this->guna2Button9->HoverState->Parent = this->guna2Button9;
            this->guna2Button9->Location = System::Drawing::Point(12, 620);
            this->guna2Button9->Name = L"guna2Button9";
            this->guna2Button9->ShadowDecoration->Parent = this->guna2Button9;
            this->guna2Button9->Size = System::Drawing::Size(147, 39);
            this->guna2Button9->TabIndex = 8;
            this->guna2Button9->Text = L"guna2Button9";
            // 
            // guna2Button8
            // 
            this->guna2Button8->BackColor = System::Drawing::Color::Transparent;
            this->guna2Button8->CheckedState->Parent = this->guna2Button8;
            this->guna2Button8->CustomImages->Parent = this->guna2Button8;
            this->guna2Button8->FillColor = System::Drawing::Color::Transparent;
            this->guna2Button8->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2Button8->ForeColor = System::Drawing::Color::White;
            this->guna2Button8->HoverState->Parent = this->guna2Button8;
            this->guna2Button8->Location = System::Drawing::Point(12, 562);
            this->guna2Button8->Name = L"guna2Button8";
            this->guna2Button8->ShadowDecoration->Parent = this->guna2Button8;
            this->guna2Button8->Size = System::Drawing::Size(147, 39);
            this->guna2Button8->TabIndex = 7;
            this->guna2Button8->Text = L"guna2Button8";
            // 
            // guna2Button7
            // 
            this->guna2Button7->BackColor = System::Drawing::Color::Transparent;
            this->guna2Button7->CheckedState->Parent = this->guna2Button7;
            this->guna2Button7->CustomImages->Parent = this->guna2Button7;
            this->guna2Button7->FillColor = System::Drawing::Color::Transparent;
            this->guna2Button7->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2Button7->ForeColor = System::Drawing::Color::White;
            this->guna2Button7->HoverState->Parent = this->guna2Button7;
            this->guna2Button7->Location = System::Drawing::Point(12, 503);
            this->guna2Button7->Name = L"guna2Button7";
            this->guna2Button7->ShadowDecoration->Parent = this->guna2Button7;
            this->guna2Button7->Size = System::Drawing::Size(147, 39);
            this->guna2Button7->TabIndex = 6;
            this->guna2Button7->Text = L"guna2Button7";
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
            this->btnAllBills->Location = System::Drawing::Point(12, 444);
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
            this->btnDueBills->Location = System::Drawing::Point(12, 399);
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
            this->btnPaidBills->Location = System::Drawing::Point(12, 354);
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
            this->btnAddClient->Location = System::Drawing::Point(12, 309);
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
            this->btnGenerateBill->Location = System::Drawing::Point(12, 264);
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
            this->bunifuPages1->Page = this->DashboardTabPage;
            this->bunifuPages1->PageIndex = 0;
            this->bunifuPages1->PageName = L"DashboardTabPage";
            this->bunifuPages1->PageTitle = L"Dashboard";
            this->bunifuPages1->SelectedIndex = 0;
            this->bunifuPages1->Size = System::Drawing::Size(1170, 671);
            this->bunifuPages1->TabIndex = 0;
            animation3->AnimateOnlyDifferences = false;
            animation3->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.BlindCoeff")));
            animation3->LeafCoeff = 0;
            animation3->MaxTime = 1;
            animation3->MinTime = 0;
            animation3->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.MosaicCoeff")));
            animation3->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.MosaicShift")));
            animation3->MosaicSize = 0;
            animation3->Padding = System::Windows::Forms::Padding(0);
            animation3->RotateCoeff = 0;
            animation3->RotateLimit = 0;
            animation3->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.ScaleCoeff")));
            animation3->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.SlideCoeff")));
            animation3->TimeCoeff = 0;
            animation3->TransparencyCoeff = 0;
            this->bunifuPages1->Transition = animation3;
            this->bunifuPages1->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Custom;
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
            xyDiagram3->AxisX->VisibleInPanesSerializable = L"-1";
            xyDiagram3->AxisY->VisibleInPanesSerializable = L"-1";
            this->chartControl2->Diagram = xyDiagram3;
            this->chartControl2->Legend->Name = L"Default Legend";
            this->chartControl2->Location = System::Drawing::Point(582, 125);
            this->chartControl2->Name = L"chartControl2";
            series3->Name = L"Series 1";
            series3->View = splineSeriesView3;
            this->chartControl2->SeriesSerializable = gcnew cli::array< DevExpress::XtraCharts::Series^  >(1) { series3 };
            this->chartControl2->Size = System::Drawing::Size(576, 231);
            this->chartControl2->TabIndex = 7;
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
            this->bunifuLabel2->Size = System::Drawing::Size(121, 23);
            this->bunifuLabel2->TabIndex = 2;
            this->bunifuLabel2->Text = L"bunifuLabel10";
            this->bunifuLabel2->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel2->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
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
            this->bunifuLabel4->Size = System::Drawing::Size(110, 23);
            this->bunifuLabel4->TabIndex = 1;
            this->bunifuLabel4->Text = L"bunifuLabel9";
            this->bunifuLabel4->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel4->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
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
            this->bunifuLabel9->Size = System::Drawing::Size(110, 23);
            this->bunifuLabel9->TabIndex = 1;
            this->bunifuLabel9->Text = L"bunifuLabel9";
            this->bunifuLabel9->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel9->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
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
            dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle13->ForeColor = System::Drawing::Color::Black;
            this->LatestPaidBillsDataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle13;
            this->LatestPaidBillsDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->LatestPaidBillsDataGridView->BackgroundColor = System::Drawing::SystemColors::Window;
            this->LatestPaidBillsDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->LatestPaidBillsDataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
            this->LatestPaidBillsDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle14->BackColor = System::Drawing::Color::DodgerBlue;
            dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle14->ForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle14->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
                static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
            dataGridViewCellStyle14->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->LatestPaidBillsDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle14;
            this->LatestPaidBillsDataGridView->ColumnHeadersHeight = 40;
            this->LatestPaidBillsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->Column5,
                    this->Column6, this->Column9, this->Column7, this->Column8
            });
            this->LatestPaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->LatestPaidBillsDataGridView->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Sora Light", 9.749999F,
                System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
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
            this->LatestPaidBillsDataGridView->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Sora Light", 9.749999F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->LatestPaidBillsDataGridView->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
            this->LatestPaidBillsDataGridView->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->LatestPaidBillsDataGridView->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Sora Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle15->ForeColor = System::Drawing::Color::Black;
            dataGridViewCellStyle15->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle15->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->LatestPaidBillsDataGridView->DefaultCellStyle = dataGridViewCellStyle15;
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
            this->LatestPaidBillsDataGridView->RowTemplate->Height = 40;
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
            dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle16->ForeColor = System::Drawing::Color::Black;
            this->LatestMeterReadingsDataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle16;
            this->LatestMeterReadingsDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->LatestMeterReadingsDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->LatestMeterReadingsDataGridView->BackgroundColor = System::Drawing::SystemColors::Window;
            this->LatestMeterReadingsDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->LatestMeterReadingsDataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
            this->LatestMeterReadingsDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle17->BackColor = System::Drawing::Color::DodgerBlue;
            dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Saira", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle17->ForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle17->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
                static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
            dataGridViewCellStyle17->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->LatestMeterReadingsDataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
            this->LatestMeterReadingsDataGridView->ColumnHeadersHeight = 40;
            this->LatestMeterReadingsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->Column1,
                    this->Column2, this->Column3, this->Column4
            });
            this->LatestMeterReadingsDataGridView->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->LatestMeterReadingsDataGridView->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Sora Light", 9.749999F,
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
            this->LatestMeterReadingsDataGridView->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Sora Light", 9.749999F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->LatestMeterReadingsDataGridView->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
            this->LatestMeterReadingsDataGridView->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->LatestMeterReadingsDataGridView->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Sora Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle18->ForeColor = System::Drawing::Color::Black;
            dataGridViewCellStyle18->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle18->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->LatestMeterReadingsDataGridView->DefaultCellStyle = dataGridViewCellStyle18;
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
            this->LatestMeterReadingsDataGridView->RowTemplate->Height = 40;
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
            this->Column3->DataPropertyName = L"meter_reading";
            this->Column3->HeaderText = L"Meter Reading";
            this->Column3->Name = L"Column3";
            this->Column3->ReadOnly = true;
            this->Column3->Width = 136;
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
            xyDiagram4->AxisX->VisibleInPanesSerializable = L"-1";
            xyDiagram4->AxisY->VisibleInPanesSerializable = L"-1";
            this->chartControl1->Diagram = xyDiagram4;
            this->chartControl1->Legend->Name = L"Default Legend";
            this->chartControl1->Location = System::Drawing::Point(6, 125);
            this->chartControl1->Name = L"chartControl1";
            series4->Name = L"Series 1";
            series4->View = splineSeriesView4;
            this->chartControl1->SeriesSerializable = gcnew cli::array< DevExpress::XtraCharts::Series^  >(1) { series4 };
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
            this->bunifuPages2->Controls->Add(this->tabPage2);
            this->bunifuPages2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->bunifuPages2->Location = System::Drawing::Point(3, 3);
            this->bunifuPages2->Multiline = true;
            this->bunifuPages2->Name = L"bunifuPages2";
            this->bunifuPages2->Page = this->tabPage2;
            this->bunifuPages2->PageIndex = 1;
            this->bunifuPages2->PageName = L"tabPage2";
            this->bunifuPages2->PageTitle = L"tabPage2";
            this->bunifuPages2->SelectedIndex = 0;
            this->bunifuPages2->Size = System::Drawing::Size(1156, 637);
            this->bunifuPages2->TabIndex = 0;
            animation2->AnimateOnlyDifferences = false;
            animation2->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.BlindCoeff")));
            animation2->LeafCoeff = 0;
            animation2->MaxTime = 1;
            animation2->MinTime = 0;
            animation2->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicCoeff")));
            animation2->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicShift")));
            animation2->MosaicSize = 0;
            animation2->Padding = System::Windows::Forms::Padding(0);
            animation2->RotateCoeff = 0;
            animation2->RotateLimit = 0;
            animation2->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.ScaleCoeff")));
            animation2->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.SlideCoeff")));
            animation2->TimeCoeff = 0;
            animation2->TransparencyCoeff = 0;
            this->bunifuPages2->Transition = animation2;
            this->bunifuPages2->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Custom;
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
            this->guna2Panel6->Controls->Add(this->bunifuDataGridView3);
            this->guna2Panel6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->guna2Panel6->Location = System::Drawing::Point(3, 51);
            this->guna2Panel6->Name = L"guna2Panel6";
            this->guna2Panel6->ShadowDecoration->Parent = this->guna2Panel6;
            this->guna2Panel6->Size = System::Drawing::Size(1142, 555);
            this->guna2Panel6->TabIndex = 1;
            // 
            // bunifuDataGridView3
            // 
            this->bunifuDataGridView3->AllowCustomTheming = false;
            dataGridViewCellStyle19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle19->ForeColor = System::Drawing::Color::Black;
            this->bunifuDataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle19;
            this->bunifuDataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->bunifuDataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->bunifuDataGridView3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
            this->bunifuDataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle20->BackColor = System::Drawing::Color::DodgerBlue;
            dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
            dataGridViewCellStyle20->ForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle20->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
                static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
            dataGridViewCellStyle20->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle20->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->bunifuDataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle20;
            this->bunifuDataGridView3->ColumnHeadersHeight = 40;
            this->bunifuDataGridView3->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView3->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
            this->bunifuDataGridView3->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
            this->bunifuDataGridView3->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView3->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
            this->bunifuDataGridView3->CurrentTheme->BackColor = System::Drawing::Color::DodgerBlue;
            this->bunifuDataGridView3->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
                static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView3->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::DodgerBlue;
            this->bunifuDataGridView3->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
            this->bunifuDataGridView3->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
            this->bunifuDataGridView3->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
                static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->bunifuDataGridView3->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
            this->bunifuDataGridView3->CurrentTheme->Name = nullptr;
            this->bunifuDataGridView3->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView3->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
            this->bunifuDataGridView3->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
            this->bunifuDataGridView3->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView3->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
            dataGridViewCellStyle21->ForeColor = System::Drawing::Color::Black;
            dataGridViewCellStyle21->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle21->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle21->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->bunifuDataGridView3->DefaultCellStyle = dataGridViewCellStyle21;
            this->bunifuDataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->bunifuDataGridView3->EnableHeadersVisualStyles = false;
            this->bunifuDataGridView3->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
                static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView3->HeaderBackColor = System::Drawing::Color::DodgerBlue;
            this->bunifuDataGridView3->HeaderBgColor = System::Drawing::Color::Empty;
            this->bunifuDataGridView3->HeaderForeColor = System::Drawing::Color::White;
            this->bunifuDataGridView3->Location = System::Drawing::Point(0, 0);
            this->bunifuDataGridView3->Name = L"bunifuDataGridView3";
            this->bunifuDataGridView3->RowHeadersVisible = false;
            this->bunifuDataGridView3->RowTemplate->Height = 40;
            this->bunifuDataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->bunifuDataGridView3->Size = System::Drawing::Size(1142, 555);
            this->bunifuDataGridView3->TabIndex = 0;
            this->bunifuDataGridView3->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::DodgerBlue;
            // 
            // guna2Panel5
            // 
            this->guna2Panel5->Controls->Add(this->guna2TextBox1);
            this->guna2Panel5->Dock = System::Windows::Forms::DockStyle::Top;
            this->guna2Panel5->Location = System::Drawing::Point(3, 3);
            this->guna2Panel5->Name = L"guna2Panel5";
            this->guna2Panel5->ShadowDecoration->Parent = this->guna2Panel5;
            this->guna2Panel5->Size = System::Drawing::Size(1142, 48);
            this->guna2Panel5->TabIndex = 0;
            // 
            // guna2TextBox1
            // 
            this->guna2TextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox1->DefaultText = L"";
            this->guna2TextBox1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox1->DisabledState->Parent = this->guna2TextBox1;
            this->guna2TextBox1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox1->FocusedState->Parent = this->guna2TextBox1;
            this->guna2TextBox1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox1->HoverState->Parent = this->guna2TextBox1;
            this->guna2TextBox1->Location = System::Drawing::Point(404, 6);
            this->guna2TextBox1->Name = L"guna2TextBox1";
            this->guna2TextBox1->PasswordChar = '\0';
            this->guna2TextBox1->PlaceholderText = L"";
            this->guna2TextBox1->SelectedText = L"";
            this->guna2TextBox1->ShadowDecoration->Parent = this->guna2TextBox1;
            this->guna2TextBox1->Size = System::Drawing::Size(200, 36);
            this->guna2TextBox1->TabIndex = 0;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->guna2Panel7);
            this->tabPage2->Location = System::Drawing::Point(4, 4);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1148, 609);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"tabPage2";
            this->tabPage2->UseVisualStyleBackColor = true;
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
            this->guna2Panel9->Dock = System::Windows::Forms::DockStyle::Right;
            this->guna2Panel9->Location = System::Drawing::Point(517, 0);
            this->guna2Panel9->Name = L"guna2Panel9";
            this->guna2Panel9->ShadowDecoration->Parent = this->guna2Panel9;
            this->guna2Panel9->Size = System::Drawing::Size(625, 603);
            this->guna2Panel9->TabIndex = 19;
            // 
            // bunifuDataGridView4
            // 
            this->bunifuDataGridView4->AllowCustomTheming = false;
            dataGridViewCellStyle22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle22->ForeColor = System::Drawing::Color::Black;
            this->bunifuDataGridView4->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle22;
            this->bunifuDataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->bunifuDataGridView4->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->bunifuDataGridView4->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
            this->bunifuDataGridView4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle23->BackColor = System::Drawing::Color::DodgerBlue;
            dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
            dataGridViewCellStyle23->ForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle23->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
                static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
            dataGridViewCellStyle23->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->bunifuDataGridView4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle23;
            this->bunifuDataGridView4->ColumnHeadersHeight = 40;
            this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
            this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
            this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView4->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
            this->bunifuDataGridView4->CurrentTheme->BackColor = System::Drawing::Color::DodgerBlue;
            this->bunifuDataGridView4->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
                static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView4->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::DodgerBlue;
            this->bunifuDataGridView4->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
            this->bunifuDataGridView4->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
            this->bunifuDataGridView4->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
                static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->bunifuDataGridView4->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
            this->bunifuDataGridView4->CurrentTheme->Name = nullptr;
            this->bunifuDataGridView4->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView4->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
            this->bunifuDataGridView4->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
            this->bunifuDataGridView4->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView4->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
                static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
            dataGridViewCellStyle24->ForeColor = System::Drawing::Color::Black;
            dataGridViewCellStyle24->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
                static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            dataGridViewCellStyle24->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->bunifuDataGridView4->DefaultCellStyle = dataGridViewCellStyle24;
            this->bunifuDataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->bunifuDataGridView4->EnableHeadersVisualStyles = false;
            this->bunifuDataGridView4->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
                static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bunifuDataGridView4->HeaderBackColor = System::Drawing::Color::DodgerBlue;
            this->bunifuDataGridView4->HeaderBgColor = System::Drawing::Color::Empty;
            this->bunifuDataGridView4->HeaderForeColor = System::Drawing::Color::White;
            this->bunifuDataGridView4->Location = System::Drawing::Point(0, 0);
            this->bunifuDataGridView4->Name = L"bunifuDataGridView4";
            this->bunifuDataGridView4->RowHeadersVisible = false;
            this->bunifuDataGridView4->RowTemplate->Height = 40;
            this->bunifuDataGridView4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->bunifuDataGridView4->Size = System::Drawing::Size(625, 603);
            this->bunifuDataGridView4->TabIndex = 0;
            this->bunifuDataGridView4->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::DodgerBlue;
            // 
            // guna2Panel8
            // 
            this->guna2Panel8->Controls->Add(this->btnSubmit);
            this->guna2Panel8->Controls->Add(this->guna2TextBox10);
            this->guna2Panel8->Controls->Add(this->guna2TextBox9);
            this->guna2Panel8->Controls->Add(this->guna2DateTimePicker1);
            this->guna2Panel8->Controls->Add(this->guna2TextBox4);
            this->guna2Panel8->Controls->Add(this->guna2TextBox2);
            this->guna2Panel8->Controls->Add(this->bunifuLabel18);
            this->guna2Panel8->Controls->Add(this->guna2TextBox3);
            this->guna2Panel8->Controls->Add(this->bunifuLabel17);
            this->guna2Panel8->Controls->Add(this->guna2TextBox5);
            this->guna2Panel8->Controls->Add(this->bunifuLabel16);
            this->guna2Panel8->Controls->Add(this->guna2TextBox6);
            this->guna2Panel8->Controls->Add(this->bunifuLabel15);
            this->guna2Panel8->Controls->Add(this->guna2TextBox7);
            this->guna2Panel8->Controls->Add(this->bunifuLabel14);
            this->guna2Panel8->Controls->Add(this->guna2TextBox8);
            this->guna2Panel8->Controls->Add(this->bunifuLabel13);
            this->guna2Panel8->Controls->Add(this->bunifuLabel6);
            this->guna2Panel8->Controls->Add(this->bunifuLabel12);
            this->guna2Panel8->Controls->Add(this->bunifuLabel8);
            this->guna2Panel8->Controls->Add(this->bunifuLabel11);
            this->guna2Panel8->Dock = System::Windows::Forms::DockStyle::Left;
            this->guna2Panel8->Location = System::Drawing::Point(0, 0);
            this->guna2Panel8->Name = L"guna2Panel8";
            this->guna2Panel8->ShadowDecoration->Parent = this->guna2Panel8;
            this->guna2Panel8->Size = System::Drawing::Size(484, 603);
            this->guna2Panel8->TabIndex = 18;
            // 
            // btnSubmit
            // 
            this->btnSubmit->ButtonMode = Guna::UI2::WinForms::Enums::ButtonMode::RadioButton;
            this->btnSubmit->CheckedState->Parent = this->btnSubmit;
            this->btnSubmit->CustomImages->Parent = this->btnSubmit;
            this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F));
            this->btnSubmit->ForeColor = System::Drawing::Color::White;
            this->btnSubmit->HoverState->Parent = this->btnSubmit;
            this->btnSubmit->Location = System::Drawing::Point(341, 563);
            this->btnSubmit->Name = L"btnSubmit";
            this->btnSubmit->ShadowDecoration->Parent = this->btnSubmit;
            this->btnSubmit->Size = System::Drawing::Size(140, 34);
            this->btnSubmit->TabIndex = 20;
            this->btnSubmit->Text = L"Submit";
            // 
            // guna2TextBox10
            // 
            this->guna2TextBox10->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox10->DefaultText = L"";
            this->guna2TextBox10->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox10->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox10->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox10->DisabledState->Parent = this->guna2TextBox10;
            this->guna2TextBox10->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox10->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox10->FocusedState->Parent = this->guna2TextBox10;
            this->guna2TextBox10->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox10->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox10->HoverState->Parent = this->guna2TextBox10;
            this->guna2TextBox10->Location = System::Drawing::Point(166, 521);
            this->guna2TextBox10->Name = L"guna2TextBox10";
            this->guna2TextBox10->PasswordChar = '\0';
            this->guna2TextBox10->PlaceholderText = L"";
            this->guna2TextBox10->ReadOnly = true;
            this->guna2TextBox10->SelectedText = L"";
            this->guna2TextBox10->ShadowDecoration->Parent = this->guna2TextBox10;
            this->guna2TextBox10->Size = System::Drawing::Size(200, 36);
            this->guna2TextBox10->TabIndex = 19;
            // 
            // guna2TextBox9
            // 
            this->guna2TextBox9->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox9->DefaultText = L"";
            this->guna2TextBox9->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox9->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox9->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox9->DisabledState->Parent = this->guna2TextBox9;
            this->guna2TextBox9->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox9->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox9->FocusedState->Parent = this->guna2TextBox9;
            this->guna2TextBox9->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox9->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox9->HoverState->Parent = this->guna2TextBox9;
            this->guna2TextBox9->Location = System::Drawing::Point(166, 468);
            this->guna2TextBox9->Name = L"guna2TextBox9";
            this->guna2TextBox9->PasswordChar = '\0';
            this->guna2TextBox9->PlaceholderText = L"";
            this->guna2TextBox9->ReadOnly = true;
            this->guna2TextBox9->SelectedText = L"";
            this->guna2TextBox9->ShadowDecoration->Parent = this->guna2TextBox9;
            this->guna2TextBox9->Size = System::Drawing::Size(200, 36);
            this->guna2TextBox9->TabIndex = 18;
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
            // guna2TextBox4
            // 
            this->guna2TextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox4->DefaultText = L"";
            this->guna2TextBox4->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox4->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox4->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox4->DisabledState->Parent = this->guna2TextBox4;
            this->guna2TextBox4->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox4->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox4->FocusedState->Parent = this->guna2TextBox4;
            this->guna2TextBox4->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox4->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox4->HoverState->Parent = this->guna2TextBox4;
            this->guna2TextBox4->Location = System::Drawing::Point(166, 150);
            this->guna2TextBox4->Name = L"guna2TextBox4";
            this->guna2TextBox4->PasswordChar = '\0';
            this->guna2TextBox4->PlaceholderText = L"";
            this->guna2TextBox4->ReadOnly = true;
            this->guna2TextBox4->SelectedText = L"";
            this->guna2TextBox4->ShadowDecoration->Parent = this->guna2TextBox4;
            this->guna2TextBox4->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox4->TabIndex = 2;
            // 
            // guna2TextBox2
            // 
            this->guna2TextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox2->DefaultText = L"";
            this->guna2TextBox2->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox2->DisabledState->Parent = this->guna2TextBox2;
            this->guna2TextBox2->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox2->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox2->FocusedState->Parent = this->guna2TextBox2;
            this->guna2TextBox2->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox2->HoverState->Parent = this->guna2TextBox2;
            this->guna2TextBox2->Location = System::Drawing::Point(166, 44);
            this->guna2TextBox2->Name = L"guna2TextBox2";
            this->guna2TextBox2->PasswordChar = '\0';
            this->guna2TextBox2->PlaceholderText = L"";
            this->guna2TextBox2->ReadOnly = true;
            this->guna2TextBox2->SelectedText = L"";
            this->guna2TextBox2->ShadowDecoration->Parent = this->guna2TextBox2;
            this->guna2TextBox2->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox2->TabIndex = 0;
            // 
            // bunifuLabel18
            // 
            this->bunifuLabel18->AllowParentOverrides = false;
            this->bunifuLabel18->AutoEllipsis = false;
            this->bunifuLabel18->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel18->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel18->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel18->Location = System::Drawing::Point(26, 44);
            this->bunifuLabel18->Name = L"bunifuLabel18";
            this->bunifuLabel18->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel18->Size = System::Drawing::Size(69, 15);
            this->bunifuLabel18->TabIndex = 16;
            this->bunifuLabel18->Text = L"Client Name";
            this->bunifuLabel18->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel18->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // guna2TextBox3
            // 
            this->guna2TextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox3->DefaultText = L"";
            this->guna2TextBox3->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox3->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox3->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox3->DisabledState->Parent = this->guna2TextBox3;
            this->guna2TextBox3->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox3->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox3->FocusedState->Parent = this->guna2TextBox3;
            this->guna2TextBox3->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox3->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox3->HoverState->Parent = this->guna2TextBox3;
            this->guna2TextBox3->Location = System::Drawing::Point(166, 97);
            this->guna2TextBox3->Name = L"guna2TextBox3";
            this->guna2TextBox3->PasswordChar = '\0';
            this->guna2TextBox3->PlaceholderText = L"";
            this->guna2TextBox3->ReadOnly = true;
            this->guna2TextBox3->SelectedText = L"";
            this->guna2TextBox3->ShadowDecoration->Parent = this->guna2TextBox3;
            this->guna2TextBox3->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox3->TabIndex = 1;
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
            // guna2TextBox5
            // 
            this->guna2TextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox5->DefaultText = L"";
            this->guna2TextBox5->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox5->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox5->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox5->DisabledState->Parent = this->guna2TextBox5;
            this->guna2TextBox5->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox5->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox5->FocusedState->Parent = this->guna2TextBox5;
            this->guna2TextBox5->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox5->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox5->HoverState->Parent = this->guna2TextBox5;
            this->guna2TextBox5->Location = System::Drawing::Point(166, 256);
            this->guna2TextBox5->Name = L"guna2TextBox5";
            this->guna2TextBox5->PasswordChar = '\0';
            this->guna2TextBox5->PlaceholderText = L"";
            this->guna2TextBox5->ReadOnly = true;
            this->guna2TextBox5->SelectedText = L"";
            this->guna2TextBox5->ShadowDecoration->Parent = this->guna2TextBox5;
            this->guna2TextBox5->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox5->TabIndex = 3;
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
            this->bunifuLabel16->Size = System::Drawing::Size(89, 15);
            this->bunifuLabel16->TabIndex = 14;
            this->bunifuLabel16->Text = L"Invoice Number";
            this->bunifuLabel16->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel16->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // guna2TextBox6
            // 
            this->guna2TextBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox6->DefaultText = L"";
            this->guna2TextBox6->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox6->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox6->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox6->DisabledState->Parent = this->guna2TextBox6;
            this->guna2TextBox6->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox6->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox6->FocusedState->Parent = this->guna2TextBox6;
            this->guna2TextBox6->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox6->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox6->HoverState->Parent = this->guna2TextBox6;
            this->guna2TextBox6->Location = System::Drawing::Point(166, 415);
            this->guna2TextBox6->Name = L"guna2TextBox6";
            this->guna2TextBox6->PasswordChar = '\0';
            this->guna2TextBox6->PlaceholderText = L"";
            this->guna2TextBox6->ReadOnly = true;
            this->guna2TextBox6->SelectedText = L"";
            this->guna2TextBox6->ShadowDecoration->Parent = this->guna2TextBox6;
            this->guna2TextBox6->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox6->TabIndex = 4;
            // 
            // bunifuLabel15
            // 
            this->bunifuLabel15->AllowParentOverrides = false;
            this->bunifuLabel15->AutoEllipsis = false;
            this->bunifuLabel15->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel15->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel15->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel15->Location = System::Drawing::Point(26, 97);
            this->bunifuLabel15->Name = L"bunifuLabel15";
            this->bunifuLabel15->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel15->Size = System::Drawing::Size(48, 15);
            this->bunifuLabel15->TabIndex = 13;
            this->bunifuLabel15->Text = L"Client ID";
            this->bunifuLabel15->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel15->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // guna2TextBox7
            // 
            this->guna2TextBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox7->DefaultText = L"";
            this->guna2TextBox7->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox7->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox7->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox7->DisabledState->Parent = this->guna2TextBox7;
            this->guna2TextBox7->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox7->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox7->FocusedState->Parent = this->guna2TextBox7;
            this->guna2TextBox7->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox7->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox7->HoverState->Parent = this->guna2TextBox7;
            this->guna2TextBox7->Location = System::Drawing::Point(166, 362);
            this->guna2TextBox7->Name = L"guna2TextBox7";
            this->guna2TextBox7->PasswordChar = '\0';
            this->guna2TextBox7->PlaceholderText = L"";
            this->guna2TextBox7->SelectedText = L"";
            this->guna2TextBox7->ShadowDecoration->Parent = this->guna2TextBox7;
            this->guna2TextBox7->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox7->TabIndex = 5;
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
            // guna2TextBox8
            // 
            this->guna2TextBox8->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox8->DefaultText = L"";
            this->guna2TextBox8->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox8->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox8->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox8->DisabledState->Parent = this->guna2TextBox8;
            this->guna2TextBox8->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox8->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox8->FocusedState->Parent = this->guna2TextBox8;
            this->guna2TextBox8->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox8->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox8->HoverState->Parent = this->guna2TextBox8;
            this->guna2TextBox8->Location = System::Drawing::Point(166, 203);
            this->guna2TextBox8->Name = L"guna2TextBox8";
            this->guna2TextBox8->PasswordChar = '\0';
            this->guna2TextBox8->PlaceholderText = L"";
            this->guna2TextBox8->SelectedText = L"";
            this->guna2TextBox8->ShadowDecoration->Parent = this->guna2TextBox8;
            this->guna2TextBox8->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox8->TabIndex = 6;
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
            this->guna2Panel10->Controls->Add(this->guna2Button1);
            this->guna2Panel10->Controls->Add(this->bunifuLabel31);
            this->guna2Panel10->Controls->Add(this->bunifuLabel30);
            this->guna2Panel10->Controls->Add(this->bunifuLabel29);
            this->guna2Panel10->Controls->Add(this->bunifuLabel28);
            this->guna2Panel10->Controls->Add(this->bunifuLabel27);
            this->guna2Panel10->Controls->Add(this->bunifuLabel26);
            this->guna2Panel10->Controls->Add(this->bunifuLabel25);
            this->guna2Panel10->Controls->Add(this->bunifuLabel24);
            this->guna2Panel10->Controls->Add(this->bunifuLabel23);
            this->guna2Panel10->Controls->Add(this->bunifuLabel22);
            this->guna2Panel10->Controls->Add(this->bunifuLabel21);
            this->guna2Panel10->Controls->Add(this->bunifuLabel20);
            this->guna2Panel10->Controls->Add(this->bunifuLabel19);
            this->guna2Panel10->Controls->Add(this->guna2TextBox11);
            this->guna2Panel10->Controls->Add(this->guna2TextBox20);
            this->guna2Panel10->Controls->Add(this->guna2TextBox12);
            this->guna2Panel10->Controls->Add(this->guna2TextBox19);
            this->guna2Panel10->Controls->Add(this->guna2TextBox13);
            this->guna2Panel10->Controls->Add(this->guna2TextBox18);
            this->guna2Panel10->Controls->Add(this->guna2TextBox14);
            this->guna2Panel10->Controls->Add(this->guna2TextBox17);
            this->guna2Panel10->Controls->Add(this->guna2TextBox15);
            this->guna2Panel10->Controls->Add(this->guna2TextBox16);
            this->guna2Panel10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->guna2Panel10->Location = System::Drawing::Point(3, 3);
            this->guna2Panel10->Name = L"guna2Panel10";
            this->guna2Panel10->ShadowDecoration->Parent = this->guna2Panel10;
            this->guna2Panel10->Size = System::Drawing::Size(1156, 637);
            this->guna2Panel10->TabIndex = 10;
            // 
            // guna2Button1
            // 
            this->guna2Button1->CheckedState->Parent = this->guna2Button1;
            this->guna2Button1->CustomImages->Parent = this->guna2Button1;
            this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->guna2Button1->ForeColor = System::Drawing::Color::White;
            this->guna2Button1->HoverState->Parent = this->guna2Button1;
            this->guna2Button1->Location = System::Drawing::Point(665, 583);
            this->guna2Button1->Name = L"guna2Button1";
            this->guna2Button1->ShadowDecoration->Parent = this->guna2Button1;
            this->guna2Button1->Size = System::Drawing::Size(180, 45);
            this->guna2Button1->TabIndex = 23;
            this->guna2Button1->Text = L"guna2Button1";
            // 
            // bunifuLabel31
            // 
            this->bunifuLabel31->AllowParentOverrides = false;
            this->bunifuLabel31->AutoEllipsis = false;
            this->bunifuLabel31->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel31->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel31->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel31->Location = System::Drawing::Point(145, 205);
            this->bunifuLabel31->Name = L"bunifuLabel31";
            this->bunifuLabel31->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel31->Size = System::Drawing::Size(47, 15);
            this->bunifuLabel31->TabIndex = 22;
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
            this->bunifuLabel30->Location = System::Drawing::Point(145, 87);
            this->bunifuLabel30->Name = L"bunifuLabel30";
            this->bunifuLabel30->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel30->Size = System::Drawing::Size(69, 15);
            this->bunifuLabel30->TabIndex = 21;
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
            this->bunifuLabel29->Location = System::Drawing::Point(145, 127);
            this->bunifuLabel29->Name = L"bunifuLabel29";
            this->bunifuLabel29->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel29->Size = System::Drawing::Size(48, 15);
            this->bunifuLabel29->TabIndex = 20;
            this->bunifuLabel29->Text = L"Client ID";
            this->bunifuLabel29->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel29->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // bunifuLabel28
            // 
            this->bunifuLabel28->AllowParentOverrides = false;
            this->bunifuLabel28->AutoEllipsis = false;
            this->bunifuLabel28->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel28->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel28->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel28->Location = System::Drawing::Point(145, 322);
            this->bunifuLabel28->Name = L"bunifuLabel28";
            this->bunifuLabel28->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel28->Size = System::Drawing::Size(57, 15);
            this->bunifuLabel28->TabIndex = 19;
            this->bunifuLabel28->Text = L"Password";
            this->bunifuLabel28->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel28->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // bunifuLabel27
            // 
            this->bunifuLabel27->AllowParentOverrides = false;
            this->bunifuLabel27->AutoEllipsis = false;
            this->bunifuLabel27->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel27->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel27->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel27->Location = System::Drawing::Point(145, 244);
            this->bunifuLabel27->Name = L"bunifuLabel27";
            this->bunifuLabel27->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel27->Size = System::Drawing::Size(86, 15);
            this->bunifuLabel27->TabIndex = 18;
            this->bunifuLabel27->Text = L"Mobile Number";
            this->bunifuLabel27->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel27->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // bunifuLabel26
            // 
            this->bunifuLabel26->AllowParentOverrides = false;
            this->bunifuLabel26->AutoEllipsis = false;
            this->bunifuLabel26->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel26->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel26->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel26->Location = System::Drawing::Point(145, 439);
            this->bunifuLabel26->Name = L"bunifuLabel26";
            this->bunifuLabel26->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel26->Size = System::Drawing::Size(81, 15);
            this->bunifuLabel26->TabIndex = 17;
            this->bunifuLabel26->Text = L"bunifuLabel26";
            this->bunifuLabel26->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel26->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // bunifuLabel25
            // 
            this->bunifuLabel25->AllowParentOverrides = false;
            this->bunifuLabel25->AutoEllipsis = false;
            this->bunifuLabel25->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel25->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel25->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel25->Location = System::Drawing::Point(145, 556);
            this->bunifuLabel25->Name = L"bunifuLabel25";
            this->bunifuLabel25->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel25->Size = System::Drawing::Size(81, 15);
            this->bunifuLabel25->TabIndex = 16;
            this->bunifuLabel25->Text = L"bunifuLabel25";
            this->bunifuLabel25->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel25->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // bunifuLabel24
            // 
            this->bunifuLabel24->AllowParentOverrides = false;
            this->bunifuLabel24->AutoEllipsis = false;
            this->bunifuLabel24->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel24->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel24->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel24->Location = System::Drawing::Point(145, 517);
            this->bunifuLabel24->Name = L"bunifuLabel24";
            this->bunifuLabel24->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel24->Size = System::Drawing::Size(81, 15);
            this->bunifuLabel24->TabIndex = 15;
            this->bunifuLabel24->Text = L"bunifuLabel24";
            this->bunifuLabel24->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel24->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // bunifuLabel23
            // 
            this->bunifuLabel23->AllowParentOverrides = false;
            this->bunifuLabel23->AutoEllipsis = false;
            this->bunifuLabel23->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel23->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel23->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel23->Location = System::Drawing::Point(145, 400);
            this->bunifuLabel23->Name = L"bunifuLabel23";
            this->bunifuLabel23->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel23->Size = System::Drawing::Size(81, 15);
            this->bunifuLabel23->TabIndex = 14;
            this->bunifuLabel23->Text = L"bunifuLabel23";
            this->bunifuLabel23->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel23->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // bunifuLabel22
            // 
            this->bunifuLabel22->AllowParentOverrides = false;
            this->bunifuLabel22->AutoEllipsis = false;
            this->bunifuLabel22->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel22->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel22->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel22->Location = System::Drawing::Point(145, 478);
            this->bunifuLabel22->Name = L"bunifuLabel22";
            this->bunifuLabel22->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel22->Size = System::Drawing::Size(81, 15);
            this->bunifuLabel22->TabIndex = 13;
            this->bunifuLabel22->Text = L"bunifuLabel22";
            this->bunifuLabel22->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel22->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // bunifuLabel21
            // 
            this->bunifuLabel21->AllowParentOverrides = false;
            this->bunifuLabel21->AutoEllipsis = false;
            this->bunifuLabel21->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel21->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel21->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel21->Location = System::Drawing::Point(145, 361);
            this->bunifuLabel21->Name = L"bunifuLabel21";
            this->bunifuLabel21->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel21->Size = System::Drawing::Size(81, 15);
            this->bunifuLabel21->TabIndex = 12;
            this->bunifuLabel21->Text = L"bunifuLabel21";
            this->bunifuLabel21->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel21->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // bunifuLabel20
            // 
            this->bunifuLabel20->AllowParentOverrides = false;
            this->bunifuLabel20->AutoEllipsis = false;
            this->bunifuLabel20->Cursor = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel20->CursorType = System::Windows::Forms::Cursors::Default;
            this->bunifuLabel20->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuLabel20->Location = System::Drawing::Point(145, 283);
            this->bunifuLabel20->Name = L"bunifuLabel20";
            this->bunifuLabel20->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel20->Size = System::Drawing::Size(31, 15);
            this->bunifuLabel20->TabIndex = 11;
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
            this->bunifuLabel19->Location = System::Drawing::Point(145, 166);
            this->bunifuLabel19->Name = L"bunifuLabel19";
            this->bunifuLabel19->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->bunifuLabel19->Size = System::Drawing::Size(61, 15);
            this->bunifuLabel19->TabIndex = 10;
            this->bunifuLabel19->Text = L"ID Number";
            this->bunifuLabel19->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
            this->bunifuLabel19->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
            // 
            // guna2TextBox11
            // 
            this->guna2TextBox11->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox11->DefaultText = L"";
            this->guna2TextBox11->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox11->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox11->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox11->DisabledState->Parent = this->guna2TextBox11;
            this->guna2TextBox11->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox11->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox11->FocusedState->Parent = this->guna2TextBox11;
            this->guna2TextBox11->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox11->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox11->HoverState->Parent = this->guna2TextBox11;
            this->guna2TextBox11->Location = System::Drawing::Point(386, 211);
            this->guna2TextBox11->Name = L"guna2TextBox11";
            this->guna2TextBox11->PasswordChar = '\0';
            this->guna2TextBox11->PlaceholderText = L"";
            this->guna2TextBox11->SelectedText = L"";
            this->guna2TextBox11->ShadowDecoration->Parent = this->guna2TextBox11;
            this->guna2TextBox11->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox11->TabIndex = 0;
            // 
            // guna2TextBox20
            // 
            this->guna2TextBox20->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox20->DefaultText = L"";
            this->guna2TextBox20->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox20->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox20->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox20->DisabledState->Parent = this->guna2TextBox20;
            this->guna2TextBox20->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox20->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox20->FocusedState->Parent = this->guna2TextBox20;
            this->guna2TextBox20->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox20->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox20->HoverState->Parent = this->guna2TextBox20;
            this->guna2TextBox20->Location = System::Drawing::Point(386, 25);
            this->guna2TextBox20->Name = L"guna2TextBox20";
            this->guna2TextBox20->PasswordChar = '\0';
            this->guna2TextBox20->PlaceholderText = L"";
            this->guna2TextBox20->SelectedText = L"";
            this->guna2TextBox20->ShadowDecoration->Parent = this->guna2TextBox20;
            this->guna2TextBox20->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox20->TabIndex = 9;
            // 
            // guna2TextBox12
            // 
            this->guna2TextBox12->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox12->DefaultText = L"";
            this->guna2TextBox12->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox12->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox12->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox12->DisabledState->Parent = this->guna2TextBox12;
            this->guna2TextBox12->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox12->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox12->FocusedState->Parent = this->guna2TextBox12;
            this->guna2TextBox12->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox12->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox12->HoverState->Parent = this->guna2TextBox12;
            this->guna2TextBox12->Location = System::Drawing::Point(386, 335);
            this->guna2TextBox12->Name = L"guna2TextBox12";
            this->guna2TextBox12->PasswordChar = '\0';
            this->guna2TextBox12->PlaceholderText = L"";
            this->guna2TextBox12->SelectedText = L"";
            this->guna2TextBox12->ShadowDecoration->Parent = this->guna2TextBox12;
            this->guna2TextBox12->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox12->TabIndex = 1;
            // 
            // guna2TextBox19
            // 
            this->guna2TextBox19->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox19->DefaultText = L"";
            this->guna2TextBox19->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox19->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox19->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox19->DisabledState->Parent = this->guna2TextBox19;
            this->guna2TextBox19->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox19->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox19->FocusedState->Parent = this->guna2TextBox19;
            this->guna2TextBox19->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox19->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox19->HoverState->Parent = this->guna2TextBox19;
            this->guna2TextBox19->Location = System::Drawing::Point(386, 87);
            this->guna2TextBox19->Name = L"guna2TextBox19";
            this->guna2TextBox19->PasswordChar = '\0';
            this->guna2TextBox19->PlaceholderText = L"";
            this->guna2TextBox19->SelectedText = L"";
            this->guna2TextBox19->ShadowDecoration->Parent = this->guna2TextBox19;
            this->guna2TextBox19->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox19->TabIndex = 8;
            // 
            // guna2TextBox13
            // 
            this->guna2TextBox13->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox13->DefaultText = L"";
            this->guna2TextBox13->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox13->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox13->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox13->DisabledState->Parent = this->guna2TextBox13;
            this->guna2TextBox13->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox13->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox13->FocusedState->Parent = this->guna2TextBox13;
            this->guna2TextBox13->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox13->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox13->HoverState->Parent = this->guna2TextBox13;
            this->guna2TextBox13->Location = System::Drawing::Point(386, 397);
            this->guna2TextBox13->Name = L"guna2TextBox13";
            this->guna2TextBox13->PasswordChar = '\0';
            this->guna2TextBox13->PlaceholderText = L"";
            this->guna2TextBox13->SelectedText = L"";
            this->guna2TextBox13->ShadowDecoration->Parent = this->guna2TextBox13;
            this->guna2TextBox13->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox13->TabIndex = 2;
            // 
            // guna2TextBox18
            // 
            this->guna2TextBox18->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox18->DefaultText = L"";
            this->guna2TextBox18->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox18->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox18->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox18->DisabledState->Parent = this->guna2TextBox18;
            this->guna2TextBox18->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox18->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox18->FocusedState->Parent = this->guna2TextBox18;
            this->guna2TextBox18->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox18->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox18->HoverState->Parent = this->guna2TextBox18;
            this->guna2TextBox18->Location = System::Drawing::Point(386, 149);
            this->guna2TextBox18->Name = L"guna2TextBox18";
            this->guna2TextBox18->PasswordChar = '\0';
            this->guna2TextBox18->PlaceholderText = L"";
            this->guna2TextBox18->SelectedText = L"";
            this->guna2TextBox18->ShadowDecoration->Parent = this->guna2TextBox18;
            this->guna2TextBox18->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox18->TabIndex = 7;
            // 
            // guna2TextBox14
            // 
            this->guna2TextBox14->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox14->DefaultText = L"";
            this->guna2TextBox14->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox14->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox14->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox14->DisabledState->Parent = this->guna2TextBox14;
            this->guna2TextBox14->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox14->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox14->FocusedState->Parent = this->guna2TextBox14;
            this->guna2TextBox14->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox14->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox14->HoverState->Parent = this->guna2TextBox14;
            this->guna2TextBox14->Location = System::Drawing::Point(386, 459);
            this->guna2TextBox14->Name = L"guna2TextBox14";
            this->guna2TextBox14->PasswordChar = '\0';
            this->guna2TextBox14->PlaceholderText = L"";
            this->guna2TextBox14->SelectedText = L"";
            this->guna2TextBox14->ShadowDecoration->Parent = this->guna2TextBox14;
            this->guna2TextBox14->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox14->TabIndex = 3;
            // 
            // guna2TextBox17
            // 
            this->guna2TextBox17->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox17->DefaultText = L"";
            this->guna2TextBox17->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox17->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox17->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox17->DisabledState->Parent = this->guna2TextBox17;
            this->guna2TextBox17->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox17->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox17->FocusedState->Parent = this->guna2TextBox17;
            this->guna2TextBox17->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox17->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox17->HoverState->Parent = this->guna2TextBox17;
            this->guna2TextBox17->Location = System::Drawing::Point(386, 273);
            this->guna2TextBox17->Name = L"guna2TextBox17";
            this->guna2TextBox17->PasswordChar = '\0';
            this->guna2TextBox17->PlaceholderText = L"";
            this->guna2TextBox17->SelectedText = L"";
            this->guna2TextBox17->ShadowDecoration->Parent = this->guna2TextBox17;
            this->guna2TextBox17->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox17->TabIndex = 6;
            // 
            // guna2TextBox15
            // 
            this->guna2TextBox15->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox15->DefaultText = L"";
            this->guna2TextBox15->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox15->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox15->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox15->DisabledState->Parent = this->guna2TextBox15;
            this->guna2TextBox15->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox15->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox15->FocusedState->Parent = this->guna2TextBox15;
            this->guna2TextBox15->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox15->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox15->HoverState->Parent = this->guna2TextBox15;
            this->guna2TextBox15->Location = System::Drawing::Point(386, 521);
            this->guna2TextBox15->Name = L"guna2TextBox15";
            this->guna2TextBox15->PasswordChar = '\0';
            this->guna2TextBox15->PlaceholderText = L"";
            this->guna2TextBox15->SelectedText = L"";
            this->guna2TextBox15->ShadowDecoration->Parent = this->guna2TextBox15;
            this->guna2TextBox15->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox15->TabIndex = 4;
            // 
            // guna2TextBox16
            // 
            this->guna2TextBox16->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox16->DefaultText = L"";
            this->guna2TextBox16->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox16->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox16->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox16->DisabledState->Parent = this->guna2TextBox16;
            this->guna2TextBox16->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox16->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox16->FocusedState->Parent = this->guna2TextBox16;
            this->guna2TextBox16->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->guna2TextBox16->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
                static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->guna2TextBox16->HoverState->Parent = this->guna2TextBox16;
            this->guna2TextBox16->Location = System::Drawing::Point(386, 583);
            this->guna2TextBox16->Name = L"guna2TextBox16";
            this->guna2TextBox16->PasswordChar = '\0';
            this->guna2TextBox16->PlaceholderText = L"";
            this->guna2TextBox16->SelectedText = L"";
            this->guna2TextBox16->ShadowDecoration->Parent = this->guna2TextBox16;
            this->guna2TextBox16->Size = System::Drawing::Size(199, 36);
            this->guna2TextBox16->TabIndex = 5;
            // 
            // PaidBillsTabPage
            // 
            this->PaidBillsTabPage->Location = System::Drawing::Point(4, 4);
            this->PaidBillsTabPage->Name = L"PaidBillsTabPage";
            this->PaidBillsTabPage->Padding = System::Windows::Forms::Padding(3);
            this->PaidBillsTabPage->Size = System::Drawing::Size(1162, 643);
            this->PaidBillsTabPage->TabIndex = 3;
            this->PaidBillsTabPage->Text = L"Paid Bills";
            this->PaidBillsTabPage->UseVisualStyleBackColor = true;
            // 
            // DueBillsTabPage
            // 
            this->DueBillsTabPage->Location = System::Drawing::Point(4, 4);
            this->DueBillsTabPage->Name = L"DueBillsTabPage";
            this->DueBillsTabPage->Padding = System::Windows::Forms::Padding(3);
            this->DueBillsTabPage->Size = System::Drawing::Size(1162, 643);
            this->DueBillsTabPage->TabIndex = 4;
            this->DueBillsTabPage->Text = L"Due Bills";
            this->DueBillsTabPage->UseVisualStyleBackColor = true;
            // 
            // AllBillsTabPage
            // 
            this->AllBillsTabPage->Location = System::Drawing::Point(4, 4);
            this->AllBillsTabPage->Name = L"AllBillsTabPage";
            this->AllBillsTabPage->Padding = System::Windows::Forms::Padding(3);
            this->AllBillsTabPage->Size = System::Drawing::Size(1162, 643);
            this->AllBillsTabPage->TabIndex = 5;
            this->AllBillsTabPage->Text = L"All Bills";
            this->AllBillsTabPage->UseVisualStyleBackColor = true;
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(xyDiagram3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(splineSeriesView3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(series3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartControl2))->EndInit();
            this->guna2Panel4->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LatestPaidBillsDataGridView))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LatestMeterReadingsDataGridView))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(xyDiagram4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(splineSeriesView4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(series4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartControl1))->EndInit();
            this->GenerateBillTabPage->ResumeLayout(false);
            this->bunifuPages2->ResumeLayout(false);
            this->ClientListTabPage->ResumeLayout(false);
            this->guna2Panel6->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView3))->EndInit();
            this->guna2Panel5->ResumeLayout(false);
            this->tabPage2->ResumeLayout(false);
            this->guna2Panel7->ResumeLayout(false);
            this->guna2Panel9->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView4))->EndInit();
            this->guna2Panel8->ResumeLayout(false);
            this->guna2Panel8->PerformLayout();
            this->AddClientTabPage->ResumeLayout(false);
            this->guna2Panel10->ResumeLayout(false);
            this->guna2Panel10->PerformLayout();
            this->bunifuShadowPanel1->ResumeLayout(false);
            this->bunifuShadowPanel1->PerformLayout();
            this->bunifuShadowPanel3->ResumeLayout(false);
            this->bunifuShadowPanel3->PerformLayout();
            this->bunifuShadowPanel4->ResumeLayout(false);
            this->bunifuShadowPanel4->PerformLayout();
            this->bunifuShadowPanel5->ResumeLayout(false);
            this->bunifuShadowPanel5->PerformLayout();
            this->bunifuShadowPanel6->ResumeLayout(false);
            this->bunifuShadowPanel6->PerformLayout();
            this->bunifuShadowPanel8->ResumeLayout(false);
            this->bunifuShadowPanel8->PerformLayout();
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

	
	bunifuPages1->PageName="DashboardTabPage";
}
private: System::Void btnGenerateBill_Click(System::Object^ sender, System::EventArgs^ e) {

	bunifuPages1->PageName = "GenerateBillTabPage";
}
private: System::Void btnAddClient_Click(System::Object^ sender, System::EventArgs^ e) {

	bunifuPages1->PageName = "AddClientTabPage";
}
private: System::Void btnPaidBills_Click(System::Object^ sender, System::EventArgs^ e) {

	bunifuPages1->PageName = "PaidBillsTabPage";
}
private: System::Void btnDueBills_Click(System::Object^ sender, System::EventArgs^ e) {

	bunifuPages1->PageName = "DueBillsTabPage";
}
private: System::Void btnAllBills_Click(System::Object^ sender, System::EventArgs^ e) {

	bunifuPages1->PageName = "AllBillsTabPage";
}

	   void countNumberOfClients()
	   {
		   String^ constr = "User Id=postgres;Host=localhost;Database=Water_Management_System_Database;Password=electrospark;Persist Security Info=True;Initial Schema=public";
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
		   String^ constr = "User Id=postgres;Host=localhost;Database=Water_Management_System_Database;Password=electrospark;Persist Security Info=True;Initial Schema=public";
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
		   String^ constr = "User Id=postgres;Host=localhost;Database=Water_Management_System_Database;Password=electrospark;Persist Security Info=True;Initial Schema=public";
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
		   String^ constring = "User Id=postgres;Host=localhost;Database=Water_Management_System_Database;Password=electrospark;Persist Security Info=True;Initial Schema=public";
		   PgSqlConnection^ conDatabase = gcnew PgSqlConnection(constring);
		   try {
			   PgSqlCommand^ cmdDatabase = gcnew PgSqlCommand("SELECT  billing_tbl.client_id, clients_tbl.name, billing_tbl.meter_reading, billing_tbl.meter_reading_date FROM billing_tbl INNER JOIN clients_tbl ON billing_tbl.client_id=clients_tbl.client_id ORDER  BY billing_tbl.meter_reading_date DESC; ", conDatabase);
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
				String^ constring = "User Id=postgres;Host=localhost;Database=Water_Management_System_Database;Password=electrospark;Persist Security Info=True;Initial Schema=public";
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
};
}

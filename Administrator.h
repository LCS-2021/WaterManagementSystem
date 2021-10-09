#pragma once

namespace WaterManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
	private: Bunifu::UI::WinForms::BunifuPanel^ bunifuPanel1;
	private: Bunifu::UI::WinForms::BunifuPanel^ bunifuPanel2;
	private: Bunifu::UI::WinForms::BunifuPanel^ bunifuPanel3;
	private: Bunifu::UI::WinForms::BunifuPages^ bunifuPages1;
	private: System::Windows::Forms::TabPage^ DashboardTabPage;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: Bunifu::Framework::UI::BunifuCards^ bunifuCards1;
	private: Bunifu::Framework::UI::BunifuCards^ bunifuCards5;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel8;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel9;
	private: Bunifu::Framework::UI::BunifuCards^ bunifuCards4;
	private: Bunifu::UI::WinForms::BunifuLabel^ lblTotalPaidBills;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel7;
	private: Bunifu::Framework::UI::BunifuCards^ bunifuCards3;
	private: Bunifu::UI::WinForms::BunifuLabel^ lblTotalDueBills;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel5;
	private: Bunifu::Framework::UI::BunifuCards^ bunifuCards2;
	private: Bunifu::UI::WinForms::BunifuLabel^ lblTotalBills;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel3;
	private: Bunifu::UI::WinForms::BunifuLabel^ lblTotalClients;
	private: Bunifu::UI::WinForms::BunifuLabel^ bunifuLabel1;
	private: Bunifu::UI::WinForms::BunifuPanel^ bunifuPanel4;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ bunifuDataGridView2;
	private: Bunifu::UI::WinForms::BunifuDataGridView^ bunifuDataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox1;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button9;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button8;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button7;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button6;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button5;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button4;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button3;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button2;
	private: Guna::UI2::WinForms::Guna2Button^ btnDashboard;
	protected:

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
			Utilities::BunifuPages::BunifuAnimatorNS::Animation^ animation1 = (gcnew Utilities::BunifuPages::BunifuAnimatorNS::Animation());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bunifuPanel1 = (gcnew Bunifu::UI::WinForms::BunifuPanel());
			this->bunifuPanel2 = (gcnew Bunifu::UI::WinForms::BunifuPanel());
			this->bunifuPanel3 = (gcnew Bunifu::UI::WinForms::BunifuPanel());
			this->bunifuPages1 = (gcnew Bunifu::UI::WinForms::BunifuPages());
			this->DashboardTabPage = (gcnew System::Windows::Forms::TabPage());
			this->bunifuPanel4 = (gcnew Bunifu::UI::WinForms::BunifuPanel());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->bunifuDataGridView2 = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->bunifuDataGridView1 = (gcnew Bunifu::UI::WinForms::BunifuDataGridView());
			this->bunifuCards5 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->bunifuLabel8 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel9 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuCards4 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->lblTotalPaidBills = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel7 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuCards3 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->lblTotalDueBills = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel5 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuCards2 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->lblTotalBills = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel3 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuCards1 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->lblTotalClients = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->bunifuLabel1 = (gcnew Bunifu::UI::WinForms::BunifuLabel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnDashboard = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button2 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button3 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button4 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button5 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button6 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button7 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button8 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button9 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2PictureBox1 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			this->bunifuPanel2->SuspendLayout();
			this->bunifuPanel3->SuspendLayout();
			this->bunifuPages1->SuspendLayout();
			this->DashboardTabPage->SuspendLayout();
			this->bunifuPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView1))->BeginInit();
			this->bunifuCards5->SuspendLayout();
			this->bunifuCards4->SuspendLayout();
			this->bunifuCards3->SuspendLayout();
			this->bunifuCards2->SuspendLayout();
			this->bunifuCards1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuPanel1
			// 
			this->bunifuPanel1->BackgroundColor = System::Drawing::Color::Transparent;
			this->bunifuPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuPanel1.BackgroundImage")));
			this->bunifuPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuPanel1->BorderColor = System::Drawing::Color::Transparent;
			this->bunifuPanel1->BorderRadius = 3;
			this->bunifuPanel1->BorderThickness = 1;
			this->bunifuPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->bunifuPanel1->Location = System::Drawing::Point(0, 0);
			this->bunifuPanel1->Name = L"bunifuPanel1";
			this->bunifuPanel1->ShowBorders = true;
			this->bunifuPanel1->Size = System::Drawing::Size(1370, 50);
			this->bunifuPanel1->TabIndex = 0;
			// 
			// bunifuPanel2
			// 
			this->bunifuPanel2->BackgroundColor = System::Drawing::Color::Transparent;
			this->bunifuPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuPanel2.BackgroundImage")));
			this->bunifuPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuPanel2->BorderColor = System::Drawing::Color::Transparent;
			this->bunifuPanel2->BorderRadius = 3;
			this->bunifuPanel2->BorderThickness = 1;
			this->bunifuPanel2->Controls->Add(this->guna2PictureBox1);
			this->bunifuPanel2->Controls->Add(this->guna2Button9);
			this->bunifuPanel2->Controls->Add(this->guna2Button8);
			this->bunifuPanel2->Controls->Add(this->guna2Button7);
			this->bunifuPanel2->Controls->Add(this->guna2Button6);
			this->bunifuPanel2->Controls->Add(this->guna2Button5);
			this->bunifuPanel2->Controls->Add(this->guna2Button4);
			this->bunifuPanel2->Controls->Add(this->guna2Button3);
			this->bunifuPanel2->Controls->Add(this->guna2Button2);
			this->bunifuPanel2->Controls->Add(this->btnDashboard);
			this->bunifuPanel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->bunifuPanel2->Location = System::Drawing::Point(0, 50);
			this->bunifuPanel2->Name = L"bunifuPanel2";
			this->bunifuPanel2->ShowBorders = true;
			this->bunifuPanel2->Size = System::Drawing::Size(200, 699);
			this->bunifuPanel2->TabIndex = 1;
			// 
			// bunifuPanel3
			// 
			this->bunifuPanel3->BackgroundColor = System::Drawing::Color::Transparent;
			this->bunifuPanel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuPanel3.BackgroundImage")));
			this->bunifuPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuPanel3->BorderColor = System::Drawing::Color::Transparent;
			this->bunifuPanel3->BorderRadius = 3;
			this->bunifuPanel3->BorderThickness = 1;
			this->bunifuPanel3->Controls->Add(this->bunifuPages1);
			this->bunifuPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bunifuPanel3->Location = System::Drawing::Point(200, 50);
			this->bunifuPanel3->Name = L"bunifuPanel3";
			this->bunifuPanel3->ShowBorders = true;
			this->bunifuPanel3->Size = System::Drawing::Size(1170, 699);
			this->bunifuPanel3->TabIndex = 2;
			// 
			// bunifuPages1
			// 
			this->bunifuPages1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->bunifuPages1->AllowTransitions = true;
			this->bunifuPages1->Controls->Add(this->DashboardTabPage);
			this->bunifuPages1->Controls->Add(this->tabPage2);
			this->bunifuPages1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->bunifuPages1->Location = System::Drawing::Point(0, 0);
			this->bunifuPages1->Multiline = true;
			this->bunifuPages1->Name = L"bunifuPages1";
			this->bunifuPages1->Page = this->DashboardTabPage;
			this->bunifuPages1->PageIndex = 0;
			this->bunifuPages1->PageName = L"DashboardTabPage";
			this->bunifuPages1->PageTitle = L"Dashboard";
			this->bunifuPages1->SelectedIndex = 0;
			this->bunifuPages1->Size = System::Drawing::Size(1170, 699);
			this->bunifuPages1->TabIndex = 0;
			animation1->AnimateOnlyDifferences = false;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 0;
			animation1->Padding = System::Windows::Forms::Padding(0);
			animation1->RotateCoeff = 0;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 0;
			animation1->TransparencyCoeff = 0;
			this->bunifuPages1->Transition = animation1;
			this->bunifuPages1->TransitionType = Utilities::BunifuPages::BunifuAnimatorNS::AnimationType::Custom;
			// 
			// DashboardTabPage
			// 
			this->DashboardTabPage->Controls->Add(this->bunifuPanel4);
			this->DashboardTabPage->Controls->Add(this->bunifuCards5);
			this->DashboardTabPage->Controls->Add(this->bunifuCards4);
			this->DashboardTabPage->Controls->Add(this->bunifuCards3);
			this->DashboardTabPage->Controls->Add(this->bunifuCards2);
			this->DashboardTabPage->Controls->Add(this->bunifuCards1);
			this->DashboardTabPage->Location = System::Drawing::Point(4, 4);
			this->DashboardTabPage->Name = L"DashboardTabPage";
			this->DashboardTabPage->Padding = System::Windows::Forms::Padding(3);
			this->DashboardTabPage->Size = System::Drawing::Size(1162, 671);
			this->DashboardTabPage->TabIndex = 0;
			this->DashboardTabPage->Text = L"Dashboard";
			this->DashboardTabPage->UseVisualStyleBackColor = true;
			// 
			// bunifuPanel4
			// 
			this->bunifuPanel4->BackgroundColor = System::Drawing::Color::Transparent;
			this->bunifuPanel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuPanel4.BackgroundImage")));
			this->bunifuPanel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuPanel4->BorderColor = System::Drawing::Color::Transparent;
			this->bunifuPanel4->BorderRadius = 3;
			this->bunifuPanel4->BorderThickness = 1;
			this->bunifuPanel4->Controls->Add(this->chart3);
			this->bunifuPanel4->Controls->Add(this->chart2);
			this->bunifuPanel4->Controls->Add(this->chart1);
			this->bunifuPanel4->Controls->Add(this->bunifuDataGridView2);
			this->bunifuPanel4->Controls->Add(this->bunifuDataGridView1);
			this->bunifuPanel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bunifuPanel4->Location = System::Drawing::Point(3, 107);
			this->bunifuPanel4->Name = L"bunifuPanel4";
			this->bunifuPanel4->ShowBorders = true;
			this->bunifuPanel4->Size = System::Drawing::Size(1156, 561);
			this->bunifuPanel4->TabIndex = 1;
			// 
			// chart3
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart3->Legends->Add(legend1);
			this->chart3->Location = System::Drawing::Point(788, 5);
			this->chart3->Name = L"chart3";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart3->Series->Add(series1);
			this->chart3->Size = System::Drawing::Size(348, 300);
			this->chart3->TabIndex = 4;
			this->chart3->Text = L"chart3";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(394, 5);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(388, 300);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(4, 5);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(384, 300);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// bunifuDataGridView2
			// 
			this->bunifuDataGridView2->AllowCustomTheming = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->bunifuDataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->bunifuDataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuDataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->bunifuDataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::DodgerBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuDataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->bunifuDataGridView2->ColumnHeadersHeight = 40;
			this->bunifuDataGridView2->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView2->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView2->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView2->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView2->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView2->CurrentTheme->BackColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDataGridView2->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView2->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDataGridView2->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView2->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView2->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuDataGridView2->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView2->CurrentTheme->Name = nullptr;
			this->bunifuDataGridView2->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView2->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView2->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView2->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView2->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(188)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->bunifuDataGridView2->DefaultCellStyle = dataGridViewCellStyle3;
			this->bunifuDataGridView2->EnableHeadersVisualStyles = false;
			this->bunifuDataGridView2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuDataGridView2->HeaderBackColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDataGridView2->HeaderBgColor = System::Drawing::Color::Empty;
			this->bunifuDataGridView2->HeaderForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView2->Location = System::Drawing::Point(580, 311);
			this->bunifuDataGridView2->Name = L"bunifuDataGridView2";
			this->bunifuDataGridView2->RowHeadersVisible = false;
			this->bunifuDataGridView2->RowTemplate->Height = 40;
			this->bunifuDataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->bunifuDataGridView2->Size = System::Drawing::Size(570, 247);
			this->bunifuDataGridView2->TabIndex = 1;
			this->bunifuDataGridView2->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::DodgerBlue;
			// 
			// bunifuDataGridView1
			// 
			this->bunifuDataGridView1->AllowCustomTheming = false;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->bunifuDataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->bunifuDataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuDataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->bunifuDataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Navy;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuDataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->bunifuDataGridView1->ColumnHeadersHeight = 40;
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->bunifuDataGridView1->CurrentTheme->AlternatingRowsStyle->SelectionForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView1->CurrentTheme->BackColor = System::Drawing::Color::Navy;
			this->bunifuDataGridView1->CurrentTheme->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->BackColor = System::Drawing::Color::Navy;
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->ForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuDataGridView1->CurrentTheme->HeaderStyle->SelectionForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView1->CurrentTheme->Name = nullptr;
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->ForeColor = System::Drawing::Color::Black;
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->bunifuDataGridView1->CurrentTheme->RowsStyle->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(229)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(178)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->bunifuDataGridView1->DefaultCellStyle = dataGridViewCellStyle6;
			this->bunifuDataGridView1->EnableHeadersVisualStyles = false;
			this->bunifuDataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(216)));
			this->bunifuDataGridView1->HeaderBackColor = System::Drawing::Color::Navy;
			this->bunifuDataGridView1->HeaderBgColor = System::Drawing::Color::Empty;
			this->bunifuDataGridView1->HeaderForeColor = System::Drawing::Color::White;
			this->bunifuDataGridView1->Location = System::Drawing::Point(4, 311);
			this->bunifuDataGridView1->Name = L"bunifuDataGridView1";
			this->bunifuDataGridView1->RowHeadersVisible = false;
			this->bunifuDataGridView1->RowTemplate->Height = 40;
			this->bunifuDataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->bunifuDataGridView1->Size = System::Drawing::Size(570, 247);
			this->bunifuDataGridView1->TabIndex = 0;
			this->bunifuDataGridView1->Theme = Bunifu::UI::WinForms::BunifuDataGridView::PresetThemes::Navy;
			// 
			// bunifuCards5
			// 
			this->bunifuCards5->BackColor = System::Drawing::Color::White;
			this->bunifuCards5->BorderRadius = 5;
			this->bunifuCards5->BottomSahddow = true;
			this->bunifuCards5->color = System::Drawing::Color::MediumBlue;
			this->bunifuCards5->Controls->Add(this->bunifuLabel8);
			this->bunifuCards5->Controls->Add(this->bunifuLabel9);
			this->bunifuCards5->LeftSahddow = false;
			this->bunifuCards5->Location = System::Drawing::Point(872, 6);
			this->bunifuCards5->Name = L"bunifuCards5";
			this->bunifuCards5->RightSahddow = true;
			this->bunifuCards5->ShadowDepth = 20;
			this->bunifuCards5->Size = System::Drawing::Size(164, 95);
			this->bunifuCards5->TabIndex = 0;
			// 
			// bunifuLabel8
			// 
			this->bunifuLabel8->AllowParentOverrides = false;
			this->bunifuLabel8->AutoEllipsis = false;
			this->bunifuLabel8->CursorType = nullptr;
			this->bunifuLabel8->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->bunifuLabel8->Location = System::Drawing::Point(12, 52);
			this->bunifuLabel8->Name = L"bunifuLabel8";
			this->bunifuLabel8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel8->Size = System::Drawing::Size(122, 23);
			this->bunifuLabel8->TabIndex = 2;
			this->bunifuLabel8->Text = L"lblTotalClients";
			this->bunifuLabel8->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel8->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuLabel9
			// 
			this->bunifuLabel9->AllowParentOverrides = false;
			this->bunifuLabel9->AutoEllipsis = false;
			this->bunifuLabel9->CursorType = nullptr;
			this->bunifuLabel9->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->bunifuLabel9->Location = System::Drawing::Point(12, 23);
			this->bunifuLabel9->Name = L"bunifuLabel9";
			this->bunifuLabel9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel9->Size = System::Drawing::Size(106, 23);
			this->bunifuLabel9->TabIndex = 1;
			this->bunifuLabel9->Text = L"Total Clients";
			this->bunifuLabel9->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel9->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuCards4
			// 
			this->bunifuCards4->BackColor = System::Drawing::Color::White;
			this->bunifuCards4->BorderRadius = 5;
			this->bunifuCards4->BottomSahddow = true;
			this->bunifuCards4->color = System::Drawing::Color::MediumBlue;
			this->bunifuCards4->Controls->Add(this->lblTotalPaidBills);
			this->bunifuCards4->Controls->Add(this->bunifuLabel7);
			this->bunifuCards4->LeftSahddow = false;
			this->bunifuCards4->Location = System::Drawing::Point(661, 6);
			this->bunifuCards4->Name = L"bunifuCards4";
			this->bunifuCards4->RightSahddow = true;
			this->bunifuCards4->ShadowDepth = 20;
			this->bunifuCards4->Size = System::Drawing::Size(164, 95);
			this->bunifuCards4->TabIndex = 0;
			// 
			// lblTotalPaidBills
			// 
			this->lblTotalPaidBills->AllowParentOverrides = false;
			this->lblTotalPaidBills->AutoEllipsis = false;
			this->lblTotalPaidBills->CursorType = nullptr;
			this->lblTotalPaidBills->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->lblTotalPaidBills->Location = System::Drawing::Point(12, 52);
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
			this->bunifuLabel7->CursorType = nullptr;
			this->bunifuLabel7->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->bunifuLabel7->Location = System::Drawing::Point(12, 23);
			this->bunifuLabel7->Name = L"bunifuLabel7";
			this->bunifuLabel7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel7->Size = System::Drawing::Size(128, 23);
			this->bunifuLabel7->TabIndex = 1;
			this->bunifuLabel7->Text = L"Total Paid Bills";
			this->bunifuLabel7->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel7->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuCards3
			// 
			this->bunifuCards3->BackColor = System::Drawing::Color::White;
			this->bunifuCards3->BorderRadius = 5;
			this->bunifuCards3->BottomSahddow = true;
			this->bunifuCards3->color = System::Drawing::Color::MediumBlue;
			this->bunifuCards3->Controls->Add(this->lblTotalDueBills);
			this->bunifuCards3->Controls->Add(this->bunifuLabel5);
			this->bunifuCards3->LeftSahddow = false;
			this->bunifuCards3->Location = System::Drawing::Point(450, 6);
			this->bunifuCards3->Name = L"bunifuCards3";
			this->bunifuCards3->RightSahddow = true;
			this->bunifuCards3->ShadowDepth = 20;
			this->bunifuCards3->Size = System::Drawing::Size(164, 95);
			this->bunifuCards3->TabIndex = 0;
			// 
			// lblTotalDueBills
			// 
			this->lblTotalDueBills->AllowParentOverrides = false;
			this->lblTotalDueBills->AutoEllipsis = false;
			this->lblTotalDueBills->CursorType = nullptr;
			this->lblTotalDueBills->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->lblTotalDueBills->Location = System::Drawing::Point(12, 52);
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
			this->bunifuLabel5->CursorType = nullptr;
			this->bunifuLabel5->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->bunifuLabel5->Location = System::Drawing::Point(12, 23);
			this->bunifuLabel5->Name = L"bunifuLabel5";
			this->bunifuLabel5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel5->Size = System::Drawing::Size(122, 23);
			this->bunifuLabel5->TabIndex = 1;
			this->bunifuLabel5->Text = L"Total Due Bills";
			this->bunifuLabel5->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel5->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuCards2
			// 
			this->bunifuCards2->BackColor = System::Drawing::Color::White;
			this->bunifuCards2->BorderRadius = 5;
			this->bunifuCards2->BottomSahddow = true;
			this->bunifuCards2->color = System::Drawing::Color::MediumBlue;
			this->bunifuCards2->Controls->Add(this->lblTotalBills);
			this->bunifuCards2->Controls->Add(this->bunifuLabel3);
			this->bunifuCards2->LeftSahddow = false;
			this->bunifuCards2->Location = System::Drawing::Point(239, 6);
			this->bunifuCards2->Name = L"bunifuCards2";
			this->bunifuCards2->RightSahddow = true;
			this->bunifuCards2->ShadowDepth = 20;
			this->bunifuCards2->Size = System::Drawing::Size(164, 95);
			this->bunifuCards2->TabIndex = 0;
			// 
			// lblTotalBills
			// 
			this->lblTotalBills->AllowParentOverrides = false;
			this->lblTotalBills->AutoEllipsis = false;
			this->lblTotalBills->CursorType = nullptr;
			this->lblTotalBills->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->lblTotalBills->Location = System::Drawing::Point(12, 52);
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
			this->bunifuLabel3->CursorType = nullptr;
			this->bunifuLabel3->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->bunifuLabel3->Location = System::Drawing::Point(12, 23);
			this->bunifuLabel3->Name = L"bunifuLabel3";
			this->bunifuLabel3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel3->Size = System::Drawing::Size(85, 23);
			this->bunifuLabel3->TabIndex = 1;
			this->bunifuLabel3->Text = L"Total Bills";
			this->bunifuLabel3->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel3->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// bunifuCards1
			// 
			this->bunifuCards1->BackColor = System::Drawing::Color::White;
			this->bunifuCards1->BorderRadius = 5;
			this->bunifuCards1->BottomSahddow = true;
			this->bunifuCards1->color = System::Drawing::Color::MediumBlue;
			this->bunifuCards1->Controls->Add(this->lblTotalClients);
			this->bunifuCards1->Controls->Add(this->bunifuLabel1);
			this->bunifuCards1->LeftSahddow = false;
			this->bunifuCards1->Location = System::Drawing::Point(28, 6);
			this->bunifuCards1->Name = L"bunifuCards1";
			this->bunifuCards1->RightSahddow = true;
			this->bunifuCards1->ShadowDepth = 20;
			this->bunifuCards1->Size = System::Drawing::Size(164, 95);
			this->bunifuCards1->TabIndex = 0;
			// 
			// lblTotalClients
			// 
			this->lblTotalClients->AllowParentOverrides = false;
			this->lblTotalClients->AutoEllipsis = false;
			this->lblTotalClients->Cursor = System::Windows::Forms::Cursors::Default;
			this->lblTotalClients->CursorType = System::Windows::Forms::Cursors::Default;
			this->lblTotalClients->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->lblTotalClients->Location = System::Drawing::Point(12, 52);
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
			this->bunifuLabel1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F));
			this->bunifuLabel1->Location = System::Drawing::Point(12, 23);
			this->bunifuLabel1->Name = L"bunifuLabel1";
			this->bunifuLabel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuLabel1->Size = System::Drawing::Size(106, 23);
			this->bunifuLabel1->TabIndex = 1;
			this->bunifuLabel1->Text = L"Total Clients";
			this->bunifuLabel1->TextAlignment = System::Drawing::ContentAlignment::TopLeft;
			this->bunifuLabel1->TextFormat = Bunifu::UI::WinForms::BunifuLabel::TextFormattingOptions::Default;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1162, 671);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnDashboard
			// 
			this->btnDashboard->CheckedState->Parent = this->btnDashboard;
			this->btnDashboard->CustomImages->Parent = this->btnDashboard;
			this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->btnDashboard->ForeColor = System::Drawing::Color::White;
			this->btnDashboard->HoverState->Parent = this->btnDashboard;
			this->btnDashboard->Location = System::Drawing::Point(12, 218);
			this->btnDashboard->Name = L"btnDashboard";
			this->btnDashboard->ShadowDecoration->Parent = this->btnDashboard;
			this->btnDashboard->Size = System::Drawing::Size(180, 45);
			this->btnDashboard->TabIndex = 0;
			this->btnDashboard->Text = L"Dashboard";
			// 
			// guna2Button2
			// 
			this->guna2Button2->CheckedState->Parent = this->guna2Button2;
			this->guna2Button2->CustomImages->Parent = this->guna2Button2;
			this->guna2Button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button2->ForeColor = System::Drawing::Color::White;
			this->guna2Button2->HoverState->Parent = this->guna2Button2;
			this->guna2Button2->Location = System::Drawing::Point(12, 269);
			this->guna2Button2->Name = L"guna2Button2";
			this->guna2Button2->ShadowDecoration->Parent = this->guna2Button2;
			this->guna2Button2->Size = System::Drawing::Size(180, 45);
			this->guna2Button2->TabIndex = 1;
			this->guna2Button2->Text = L"guna2Button2";
			// 
			// guna2Button3
			// 
			this->guna2Button3->CheckedState->Parent = this->guna2Button3;
			this->guna2Button3->CustomImages->Parent = this->guna2Button3;
			this->guna2Button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button3->ForeColor = System::Drawing::Color::White;
			this->guna2Button3->HoverState->Parent = this->guna2Button3;
			this->guna2Button3->Location = System::Drawing::Point(12, 320);
			this->guna2Button3->Name = L"guna2Button3";
			this->guna2Button3->ShadowDecoration->Parent = this->guna2Button3;
			this->guna2Button3->Size = System::Drawing::Size(180, 45);
			this->guna2Button3->TabIndex = 2;
			this->guna2Button3->Text = L"guna2Button3";
			// 
			// guna2Button4
			// 
			this->guna2Button4->CheckedState->Parent = this->guna2Button4;
			this->guna2Button4->CustomImages->Parent = this->guna2Button4;
			this->guna2Button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button4->ForeColor = System::Drawing::Color::White;
			this->guna2Button4->HoverState->Parent = this->guna2Button4;
			this->guna2Button4->Location = System::Drawing::Point(12, 371);
			this->guna2Button4->Name = L"guna2Button4";
			this->guna2Button4->ShadowDecoration->Parent = this->guna2Button4;
			this->guna2Button4->Size = System::Drawing::Size(180, 45);
			this->guna2Button4->TabIndex = 3;
			this->guna2Button4->Text = L"guna2Button4";
			// 
			// guna2Button5
			// 
			this->guna2Button5->CheckedState->Parent = this->guna2Button5;
			this->guna2Button5->CustomImages->Parent = this->guna2Button5;
			this->guna2Button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button5->ForeColor = System::Drawing::Color::White;
			this->guna2Button5->HoverState->Parent = this->guna2Button5;
			this->guna2Button5->Location = System::Drawing::Point(12, 422);
			this->guna2Button5->Name = L"guna2Button5";
			this->guna2Button5->ShadowDecoration->Parent = this->guna2Button5;
			this->guna2Button5->Size = System::Drawing::Size(180, 45);
			this->guna2Button5->TabIndex = 4;
			this->guna2Button5->Text = L"guna2Button5";
			// 
			// guna2Button6
			// 
			this->guna2Button6->CheckedState->Parent = this->guna2Button6;
			this->guna2Button6->CustomImages->Parent = this->guna2Button6;
			this->guna2Button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button6->ForeColor = System::Drawing::Color::White;
			this->guna2Button6->HoverState->Parent = this->guna2Button6;
			this->guna2Button6->Location = System::Drawing::Point(12, 473);
			this->guna2Button6->Name = L"guna2Button6";
			this->guna2Button6->ShadowDecoration->Parent = this->guna2Button6;
			this->guna2Button6->Size = System::Drawing::Size(180, 45);
			this->guna2Button6->TabIndex = 5;
			this->guna2Button6->Text = L"guna2Button6";
			// 
			// guna2Button7
			// 
			this->guna2Button7->CheckedState->Parent = this->guna2Button7;
			this->guna2Button7->CustomImages->Parent = this->guna2Button7;
			this->guna2Button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button7->ForeColor = System::Drawing::Color::White;
			this->guna2Button7->HoverState->Parent = this->guna2Button7;
			this->guna2Button7->Location = System::Drawing::Point(12, 524);
			this->guna2Button7->Name = L"guna2Button7";
			this->guna2Button7->ShadowDecoration->Parent = this->guna2Button7;
			this->guna2Button7->Size = System::Drawing::Size(180, 45);
			this->guna2Button7->TabIndex = 6;
			this->guna2Button7->Text = L"guna2Button7";
			// 
			// guna2Button8
			// 
			this->guna2Button8->CheckedState->Parent = this->guna2Button8;
			this->guna2Button8->CustomImages->Parent = this->guna2Button8;
			this->guna2Button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button8->ForeColor = System::Drawing::Color::White;
			this->guna2Button8->HoverState->Parent = this->guna2Button8;
			this->guna2Button8->Location = System::Drawing::Point(12, 575);
			this->guna2Button8->Name = L"guna2Button8";
			this->guna2Button8->ShadowDecoration->Parent = this->guna2Button8;
			this->guna2Button8->Size = System::Drawing::Size(180, 45);
			this->guna2Button8->TabIndex = 7;
			this->guna2Button8->Text = L"guna2Button8";
			// 
			// guna2Button9
			// 
			this->guna2Button9->CheckedState->Parent = this->guna2Button9;
			this->guna2Button9->CustomImages->Parent = this->guna2Button9;
			this->guna2Button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button9->ForeColor = System::Drawing::Color::White;
			this->guna2Button9->HoverState->Parent = this->guna2Button9;
			this->guna2Button9->Location = System::Drawing::Point(12, 626);
			this->guna2Button9->Name = L"guna2Button9";
			this->guna2Button9->ShadowDecoration->Parent = this->guna2Button9;
			this->guna2Button9->Size = System::Drawing::Size(180, 45);
			this->guna2Button9->TabIndex = 8;
			this->guna2Button9->Text = L"guna2Button9";
			// 
			// guna2PictureBox1
			// 
			this->guna2PictureBox1->Location = System::Drawing::Point(12, 10);
			this->guna2PictureBox1->Name = L"guna2PictureBox1";
			this->guna2PictureBox1->ShadowDecoration->Parent = this->guna2PictureBox1;
			this->guna2PictureBox1->Size = System::Drawing::Size(180, 200);
			this->guna2PictureBox1->TabIndex = 9;
			this->guna2PictureBox1->TabStop = false;
			// 
			// Administrator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->bunifuPanel3);
			this->Controls->Add(this->bunifuPanel2);
			this->Controls->Add(this->bunifuPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Administrator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Administrator";
			this->bunifuPanel2->ResumeLayout(false);
			this->bunifuPanel3->ResumeLayout(false);
			this->bunifuPages1->ResumeLayout(false);
			this->DashboardTabPage->ResumeLayout(false);
			this->bunifuPanel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuDataGridView1))->EndInit();
			this->bunifuCards5->ResumeLayout(false);
			this->bunifuCards5->PerformLayout();
			this->bunifuCards4->ResumeLayout(false);
			this->bunifuCards4->PerformLayout();
			this->bunifuCards3->ResumeLayout(false);
			this->bunifuCards3->PerformLayout();
			this->bunifuCards2->ResumeLayout(false);
			this->bunifuCards2->PerformLayout();
			this->bunifuCards1->ResumeLayout(false);
			this->bunifuCards1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

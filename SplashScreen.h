#pragma once

namespace WaterManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SplashScreen
	/// </summary>
	public ref class SplashScreen : public System::Windows::Forms::Form
	{
	public:
		SplashScreen(void)
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
		~SplashScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI2::WinForms::Guna2Panel^ guna2Panel1;


	private: System::Windows::Forms::Timer^ timer1;
	private: Guna::UI2::WinForms::Guna2CircleProgressBar^ guna2CircleProgressBar1;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SplashScreen::typeid));
			this->guna2Panel1 = (gcnew Guna::UI2::WinForms::Guna2Panel());
			this->guna2CircleProgressBar1 = (gcnew Guna::UI2::WinForms::Guna2CircleProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->guna2Panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// guna2Panel1
			// 
			this->guna2Panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"guna2Panel1.BackgroundImage")));
			this->guna2Panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->guna2Panel1->Controls->Add(this->guna2CircleProgressBar1);
			this->guna2Panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->guna2Panel1->Location = System::Drawing::Point(0, 0);
			this->guna2Panel1->Name = L"guna2Panel1";
			this->guna2Panel1->ShadowDecoration->Parent = this->guna2Panel1;
			this->guna2Panel1->Size = System::Drawing::Size(700, 400);
			this->guna2Panel1->TabIndex = 0;
			// 
			// guna2CircleProgressBar1
			// 
			this->guna2CircleProgressBar1->Animated = true;
			this->guna2CircleProgressBar1->BackColor = System::Drawing::Color::Transparent;
			this->guna2CircleProgressBar1->FillThickness = 10;
			this->guna2CircleProgressBar1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guna2CircleProgressBar1->ForeColor = System::Drawing::Color::White;
			this->guna2CircleProgressBar1->Location = System::Drawing::Point(273, 145);
			this->guna2CircleProgressBar1->Maximum = 300;
			this->guna2CircleProgressBar1->Name = L"guna2CircleProgressBar1";
			this->guna2CircleProgressBar1->ProgressColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->guna2CircleProgressBar1->ProgressColor2 = System::Drawing::Color::Cyan;
			this->guna2CircleProgressBar1->ProgressEndCap = System::Drawing::Drawing2D::LineCap::Round;
			this->guna2CircleProgressBar1->ProgressStartCap = System::Drawing::Drawing2D::LineCap::Round;
			this->guna2CircleProgressBar1->ProgressThickness = 15;
			this->guna2CircleProgressBar1->ShadowDecoration->Mode = Guna::UI2::WinForms::Enums::ShadowMode::Circle;
			this->guna2CircleProgressBar1->ShadowDecoration->Parent = this->guna2CircleProgressBar1;
			this->guna2CircleProgressBar1->ShowPercentage = true;
			this->guna2CircleProgressBar1->Size = System::Drawing::Size(150, 150);
			this->guna2CircleProgressBar1->TabIndex = 0;
			this->guna2CircleProgressBar1->Value = 200;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &SplashScreen::timer1_Tick);
			// 
			// SplashScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 400);
			this->Controls->Add(this->guna2Panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SplashScreen";
			this->Opacity = 0.9;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SplashScreen";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &SplashScreen::SplashScreen_Load);
			this->guna2Panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		guna2CircleProgressBar1->Increment(1);
	}
private: System::Void SplashScreen_Load(System::Object^ sender, System::EventArgs^ e) {
	guna2CircleProgressBar1->Value = 0;
	timer1->Start();
}
};
}

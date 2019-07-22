#pragma once
#include<stdlib.h>
namespace Courswork {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}
	protected:

		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			this->button1->Location = System::Drawing::Point(81, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Завдання 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			this->button2->Location = System::Drawing::Point(82, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Завдання 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			this->button3->Location = System::Drawing::Point(81, 259);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Завдання 3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			this->button4->Location = System::Drawing::Point(99, 300);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Вихід";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			chartArea1->AxisX->Maximum = 360;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisY->Maximum = 80;
			chartArea1->AxisY->Minimum = 0;
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart3->Legends->Add(legend1);
			this->chart3->Location = System::Drawing::Point(280, 12);
			this->chart3->Name = L"chart3";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series1->Legend = L"Legend1";
			series1->MarkerSize = 2;
			series1->Name = L"Graph";
			this->chart3->Series->Add(series1);
			this->chart3->Size = System::Drawing::Size(650, 437);
			this->chart3->TabIndex = 6;
			this->chart3->Text = L"chart3";
			this->chart3->Visible = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(174, 158);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			chartArea2->AxisX->Maximum = 360;
			chartArea2->AxisX->Minimum = 0;
			chartArea2->AxisY->Maximum = 80;
			chartArea2->AxisY->Minimum = 0;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(280, 12);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series2->Legend = L"Legend1";
			series2->MarkerColor = System::Drawing::Color::Green;
			series2->MarkerSize = 2;
			series2->Name = L"Graph";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(650, 437);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			chartArea3->AxisX->Maximum = 360;
			chartArea3->AxisX->Minimum = 0;
			chartArea3->AxisY->Maximum = 80;
			chartArea3->AxisY->Minimum = 0;
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(280, 12);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series3->Legend = L"Legend1";
			series3->MarkerColor = System::Drawing::Color::Red;
			series3->MarkerSize = 2;
			series3->Name = L"Graph";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(650, 437);
			this->chart2->TabIndex = 10;
			this->chart2->Text = L"chart2";
			this->chart2->Visible = false;
			this->button5->Location = System::Drawing::Point(58, 373);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(165, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Выдкрити файл з рішенням";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			this->button6->Location = System::Drawing::Point(59, 344);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(164, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Відкрити файл з умовою";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(283, 461);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L" Курсова робота";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
	public: void addPoint(double X, double Y, int id) {
		switch (id){
			case 1:
				chart1->Series["Graph"]->Points->AddXY(X, Y);
				break;
			case 2:
				chart2->Series["Graph"]->Points->AddXY(X, Y);
				break;
			case 3:
				chart3->Series["Graph"]->Points->AddXY(X, Y);
				break;
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Size = System::Drawing::Size(956, 500);
		chart1->Visible = true;
		chart2->Visible = false;
		chart3->Visible = false;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Size = System::Drawing::Size(956, 500);
	chart1->Visible = false;
	chart2->Visible = true;
	chart3->Visible = false;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Size = System::Drawing::Size(956, 500);
	chart1->Visible = false;
	chart2->Visible = false;
	chart3->Visible = true;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	system("notepad output.out");
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	system("notepad input.in");
}
};
}

#pragma once
#include "tasks.h"

namespace Nummethods6sem1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//

			GraphPane^ pane1_1 = zedGraphControl1_1->GraphPane;
			GraphPane^ pane1_2 = zedGraphControl1_2->GraphPane;
			GraphPane^ pane1_3 = zedGraphControl1_3->GraphPane;
			GraphPane^ pane2_1 = zedGraphControl2_1->GraphPane;
			GraphPane^ pane2_2 = zedGraphControl2_2->GraphPane;
			GraphPane^ pane2_3 = zedGraphControl2_3->GraphPane;
			//pane1_1->XAxis->Title->Text = "��� X";
			//pane1_1->YAxis->Title->Text = "��� Y";
			pane1_1->Title->Text = "�������";
			pane1_2->Title->Text = "������ �����������";
			pane1_3->Title->Text = "������ �����������";
			pane2_1->Title->Text = "�������";
			pane2_2->Title->Text = "������ �����������";
			pane2_3->Title->Text = "������ �����������";

			
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1_1;
	protected:

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  textBox1_n;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1_1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1_factor;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1_GP;




	private: System::Windows::Forms::DataGridView^  dataGridView1_2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dataGridView2_2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::TextBox^  textBox2_GP;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2_factor;

	private: System::Windows::Forms::DataGridView^  dataGridView2_1;







	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2_n;

	private: System::Windows::Forms::Label^  label8;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2_1;

	private: ZedGraph::ZedGraphControl^  zedGraphControl1_2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1_3;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2_2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2_3;
	private: System::Windows::Forms::TextBox^  textBox1_der2;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox1_der1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox2_der2;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox2_der1;

	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::RadioButton^  radioButton2_2;
private: System::Windows::Forms::RadioButton^  radioButton2_1;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::RadioButton^  radioButton3_2;
private: System::Windows::Forms::RadioButton^  radioButton3_1;
private: System::Windows::Forms::TextBox^  textBox3_der2;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TextBox^  textBox3_der1;
private: System::Windows::Forms::Label^  label14;
private: ZedGraph::ZedGraphControl^  zedGraphControl3_2;
private: ZedGraph::ZedGraphControl^  zedGraphControl3_3;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::DataGridView^  dataGridView3_2;

private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn19;
private: System::Windows::Forms::TextBox^  textBox3_GP;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  textBox3_factor;
private: System::Windows::Forms::DataGridView^  dataGridView3_1;






private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::TextBox^  textBox3_n;
private: System::Windows::Forms::Label^  label18;
private: ZedGraph::ZedGraphControl^  zedGraphControl3_1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column24;



























	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1_1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1_der2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1_der1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl1_2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl1_3 = (gcnew ZedGraph::ZedGraphControl());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1_2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1_GP = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1_factor = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1_1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1_n = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2_2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2_1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2_der2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox2_der1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2_2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2_3 = (gcnew ZedGraph::ZedGraphControl());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2_2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox2_GP = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2_factor = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2_1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2_n = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl2_1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3_2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3_1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3_der2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3_der1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl3_2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl3_3 = (gcnew ZedGraph::ZedGraphControl());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3_2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox3_GP = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox3_factor = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView3_1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3_n = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl3_1 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1_1
			// 
			this->zedGraphControl1_1->Location = System::Drawing::Point(5, 6);
			this->zedGraphControl1_1->Name = L"zedGraphControl1_1";
			this->zedGraphControl1_1->ScrollGrace = 0;
			this->zedGraphControl1_1->ScrollMaxX = 0;
			this->zedGraphControl1_1->ScrollMaxY = 0;
			this->zedGraphControl1_1->ScrollMaxY2 = 0;
			this->zedGraphControl1_1->ScrollMinX = 0;
			this->zedGraphControl1_1->ScrollMinY = 0;
			this->zedGraphControl1_1->ScrollMinY2 = 0;
			this->zedGraphControl1_1->Size = System::Drawing::Size(424, 350);
			this->zedGraphControl1_1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(2, 10);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1283, 734);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox1_der2);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->textBox1_der1);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->zedGraphControl1_2);
			this->tabPage1->Controls->Add(this->zedGraphControl1_3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->dataGridView1_2);
			this->tabPage1->Controls->Add(this->textBox1_GP);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1_factor);
			this->tabPage1->Controls->Add(this->dataGridView1_1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1_n);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->zedGraphControl1_1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(1275, 708);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Test task";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox1_der2
			// 
			this->textBox1_der2->Location = System::Drawing::Point(917, 215);
			this->textBox1_der2->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_der2->Name = L"textBox1_der2";
			this->textBox1_der2->ReadOnly = true;
			this->textBox1_der2->Size = System::Drawing::Size(134, 20);
			this->textBox1_der2->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(914, 200);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Max GP second derivative";
			// 
			// textBox1_der1
			// 
			this->textBox1_der1->Location = System::Drawing::Point(917, 173);
			this->textBox1_der1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_der1->Name = L"textBox1_der1";
			this->textBox1_der1->ReadOnly = true;
			this->textBox1_der1->Size = System::Drawing::Size(134, 20);
			this->textBox1_der1->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(914, 158);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Max GP first derivative";
			// 
			// zedGraphControl1_2
			// 
			this->zedGraphControl1_2->Location = System::Drawing::Point(435, 5);
			this->zedGraphControl1_2->Name = L"zedGraphControl1_2";
			this->zedGraphControl1_2->ScrollGrace = 0;
			this->zedGraphControl1_2->ScrollMaxX = 0;
			this->zedGraphControl1_2->ScrollMaxY = 0;
			this->zedGraphControl1_2->ScrollMaxY2 = 0;
			this->zedGraphControl1_2->ScrollMinX = 0;
			this->zedGraphControl1_2->ScrollMinY = 0;
			this->zedGraphControl1_2->ScrollMinY2 = 0;
			this->zedGraphControl1_2->Size = System::Drawing::Size(424, 351);
			this->zedGraphControl1_2->TabIndex = 14;
			// 
			// zedGraphControl1_3
			// 
			this->zedGraphControl1_3->Location = System::Drawing::Point(5, 362);
			this->zedGraphControl1_3->Name = L"zedGraphControl1_3";
			this->zedGraphControl1_3->ScrollGrace = 0;
			this->zedGraphControl1_3->ScrollMaxX = 0;
			this->zedGraphControl1_3->ScrollMaxY = 0;
			this->zedGraphControl1_3->ScrollMaxY2 = 0;
			this->zedGraphControl1_3->ScrollMinX = 0;
			this->zedGraphControl1_3->ScrollMinY = 0;
			this->zedGraphControl1_3->ScrollMinY2 = 0;
			this->zedGraphControl1_3->Size = System::Drawing::Size(424, 340);
			this->zedGraphControl1_3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1075, 140);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L".";
			// 
			// dataGridView1_2
			// 
			this->dataGridView1_2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1_2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1_2->Location = System::Drawing::Point(855, 362);
			this->dataGridView1_2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1_2->Name = L"dataGridView1_2";
			this->dataGridView1_2->RowTemplate->Height = 24;
			this->dataGridView1_2->Size = System::Drawing::Size(407, 340);
			this->dataGridView1_2->TabIndex = 11;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"i";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"x(i-1)";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"x(i)";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"ai";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"bi";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ci";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"di";
			this->Column8->Name = L"Column8";
			// 
			// textBox1_GP
			// 
			this->textBox1_GP->Location = System::Drawing::Point(917, 133);
			this->textBox1_GP->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_GP->Name = L"textBox1_GP";
			this->textBox1_GP->ReadOnly = true;
			this->textBox1_GP->Size = System::Drawing::Size(134, 20);
			this->textBox1_GP->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(914, 118);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Max GP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1116, 186);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"NN";
			// 
			// textBox1_factor
			// 
			this->textBox1_factor->Location = System::Drawing::Point(1142, 184);
			this->textBox1_factor->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_factor->Name = L"textBox1_factor";
			this->textBox1_factor->Size = System::Drawing::Size(76, 20);
			this->textBox1_factor->TabIndex = 5;
			this->textBox1_factor->Text = L"2";
			// 
			// dataGridView1_1
			// 
			this->dataGridView1_1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1_1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column9, this->Column10, this->Column11, this->Column12
			});
			this->dataGridView1_1->Location = System::Drawing::Point(434, 362);
			this->dataGridView1_1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1_1->Name = L"dataGridView1_1";
			this->dataGridView1_1->RowTemplate->Height = 24;
			this->dataGridView1_1->Size = System::Drawing::Size(407, 340);
			this->dataGridView1_1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"j";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 30;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"xj";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"F(xj)";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"S(xj)";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"F(xj)-S(xj)";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 150;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1119, 261);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 73);
			this->button1->TabIndex = 3;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1_n
			// 
			this->textBox1_n->Location = System::Drawing::Point(1142, 152);
			this->textBox1_n->Margin = System::Windows::Forms::Padding(2);
			this->textBox1_n->Name = L"textBox1_n";
			this->textBox1_n->Size = System::Drawing::Size(76, 20);
			this->textBox1_n->TabIndex = 2;
			this->textBox1_n->Text = L"3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1124, 152);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"n";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->textBox2_der2);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox2_der1);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->zedGraphControl2_2);
			this->tabPage2->Controls->Add(this->zedGraphControl2_3);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->dataGridView2_2);
			this->tabPage2->Controls->Add(this->textBox2_GP);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox2_factor);
			this->tabPage2->Controls->Add(this->dataGridView2_1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox2_n);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->zedGraphControl2_1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(1275, 708);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Main task 1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2_2);
			this->groupBox1->Controls->Add(this->radioButton2_1);
			this->groupBox1->Location = System::Drawing::Point(928, 263);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(144, 85);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"����� ��";
			// 
			// radioButton2_2
			// 
			this->radioButton2_2->AutoSize = true;
			this->radioButton2_2->Location = System::Drawing::Point(16, 57);
			this->radioButton2_2->Name = L"radioButton2_2";
			this->radioButton2_2->Size = System::Drawing::Size(121, 17);
			this->radioButton2_2->TabIndex = 1;
			this->radioButton2_2->Text = L"���������� 2-� ��.";
			this->radioButton2_2->UseVisualStyleBackColor = true;
			// 
			// radioButton2_1
			// 
			this->radioButton2_1->AutoSize = true;
			this->radioButton2_1->Checked = true;
			this->radioButton2_1->Location = System::Drawing::Point(16, 29);
			this->radioButton2_1->Name = L"radioButton2_1";
			this->radioButton2_1->Size = System::Drawing::Size(46, 17);
			this->radioButton2_1->TabIndex = 0;
			this->radioButton2_1->TabStop = true;
			this->radioButton2_1->Text = L"���";
			this->radioButton2_1->UseVisualStyleBackColor = true;
			// 
			// textBox2_der2
			// 
			this->textBox2_der2->Location = System::Drawing::Point(928, 223);
			this->textBox2_der2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_der2->Name = L"textBox2_der2";
			this->textBox2_der2->ReadOnly = true;
			this->textBox2_der2->Size = System::Drawing::Size(134, 20);
			this->textBox2_der2->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(925, 208);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(132, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Max GP second derivative";
			// 
			// textBox2_der1
			// 
			this->textBox2_der1->Location = System::Drawing::Point(928, 181);
			this->textBox2_der1->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_der1->Name = L"textBox2_der1";
			this->textBox2_der1->ReadOnly = true;
			this->textBox2_der1->Size = System::Drawing::Size(134, 20);
			this->textBox2_der1->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(925, 166);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(113, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Max GP first derivative";
			// 
			// zedGraphControl2_2
			// 
			this->zedGraphControl2_2->Location = System::Drawing::Point(453, 5);
			this->zedGraphControl2_2->Name = L"zedGraphControl2_2";
			this->zedGraphControl2_2->ScrollGrace = 0;
			this->zedGraphControl2_2->ScrollMaxX = 0;
			this->zedGraphControl2_2->ScrollMaxY = 0;
			this->zedGraphControl2_2->ScrollMaxY2 = 0;
			this->zedGraphControl2_2->ScrollMinX = 0;
			this->zedGraphControl2_2->ScrollMinY = 0;
			this->zedGraphControl2_2->ScrollMinY2 = 0;
			this->zedGraphControl2_2->Size = System::Drawing::Size(445, 343);
			this->zedGraphControl2_2->TabIndex = 25;
			// 
			// zedGraphControl2_3
			// 
			this->zedGraphControl2_3->Location = System::Drawing::Point(11, 360);
			this->zedGraphControl2_3->Name = L"zedGraphControl2_3";
			this->zedGraphControl2_3->ScrollGrace = 0;
			this->zedGraphControl2_3->ScrollMaxX = 0;
			this->zedGraphControl2_3->ScrollMaxY = 0;
			this->zedGraphControl2_3->ScrollMaxY2 = 0;
			this->zedGraphControl2_3->ScrollMinX = 0;
			this->zedGraphControl2_3->ScrollMinY = 0;
			this->zedGraphControl2_3->ScrollMinY2 = 0;
			this->zedGraphControl2_3->Size = System::Drawing::Size(437, 343);
			this->zedGraphControl2_3->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1084, 141);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L".";
			// 
			// dataGridView2_2
			// 
			this->dataGridView2_2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2_2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->dataGridView2_2->Location = System::Drawing::Point(866, 360);
			this->dataGridView2_2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2_2->Name = L"dataGridView2_2";
			this->dataGridView2_2->RowTemplate->Height = 24;
			this->dataGridView2_2->Size = System::Drawing::Size(407, 343);
			this->dataGridView2_2->TabIndex = 22;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"x(i-1)";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"x(i)";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"ai";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"bi";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ci";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"di";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// textBox2_GP
			// 
			this->textBox2_GP->Location = System::Drawing::Point(928, 138);
			this->textBox2_GP->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_GP->Name = L"textBox2_GP";
			this->textBox2_GP->ReadOnly = true;
			this->textBox2_GP->Size = System::Drawing::Size(134, 20);
			this->textBox2_GP->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(925, 123);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Max GP";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1114, 195);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"NN";
			// 
			// textBox2_factor
			// 
			this->textBox2_factor->Location = System::Drawing::Point(1140, 192);
			this->textBox2_factor->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_factor->Name = L"textBox2_factor";
			this->textBox2_factor->Size = System::Drawing::Size(76, 20);
			this->textBox2_factor->TabIndex = 18;
			this->textBox2_factor->Text = L"2";
			// 
			// dataGridView2_1
			// 
			this->dataGridView2_1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2_1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12,
					this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18
			});
			this->dataGridView2_1->Location = System::Drawing::Point(453, 360);
			this->dataGridView2_1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2_1->Name = L"dataGridView2_1";
			this->dataGridView2_1->RowTemplate->Height = 24;
			this->dataGridView2_1->Size = System::Drawing::Size(407, 343);
			this->dataGridView2_1->TabIndex = 17;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"j";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 30;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"xj";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"F(xj)";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"S(xj)";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"F(xj)-S(xj)";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 150;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"F\'(xj)";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"S\'(xj)";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"F\'(xj)-S\'(xj)";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"F\'\'(xj)";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"S\'\'(xj)";
			this->Column17->Name = L"Column17";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"F\'\'(xj)-S\'\'(xj)";
			this->Column18->Name = L"Column18";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1108, 264);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 73);
			this->button2->TabIndex = 16;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2_n
			// 
			this->textBox2_n->Location = System::Drawing::Point(1140, 160);
			this->textBox2_n->Margin = System::Windows::Forms::Padding(2);
			this->textBox2_n->Name = L"textBox2_n";
			this->textBox2_n->Size = System::Drawing::Size(76, 20);
			this->textBox2_n->TabIndex = 15;
			this->textBox2_n->Text = L"3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1122, 160);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"n";
			// 
			// zedGraphControl2_1
			// 
			this->zedGraphControl2_1->Location = System::Drawing::Point(11, 5);
			this->zedGraphControl2_1->Name = L"zedGraphControl2_1";
			this->zedGraphControl2_1->ScrollGrace = 0;
			this->zedGraphControl2_1->ScrollMaxX = 0;
			this->zedGraphControl2_1->ScrollMaxY = 0;
			this->zedGraphControl2_1->ScrollMaxY2 = 0;
			this->zedGraphControl2_1->ScrollMinX = 0;
			this->zedGraphControl2_1->ScrollMinY = 0;
			this->zedGraphControl2_1->ScrollMinY2 = 0;
			this->zedGraphControl2_1->Size = System::Drawing::Size(436, 352);
			this->zedGraphControl2_1->TabIndex = 13;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Controls->Add(this->textBox3_der2);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->textBox3_der1);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->zedGraphControl3_2);
			this->tabPage3->Controls->Add(this->zedGraphControl3_3);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->dataGridView3_2);
			this->tabPage3->Controls->Add(this->textBox3_GP);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->textBox3_factor);
			this->tabPage3->Controls->Add(this->dataGridView3_1);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->textBox3_n);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->zedGraphControl3_1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1275, 708);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton3_2);
			this->groupBox2->Controls->Add(this->radioButton3_1);
			this->groupBox2->Location = System::Drawing::Point(923, 263);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(144, 85);
			this->groupBox2->TabIndex = 48;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"����� ��";
			// 
			// radioButton3_2
			// 
			this->radioButton3_2->AutoSize = true;
			this->radioButton3_2->Location = System::Drawing::Point(16, 57);
			this->radioButton3_2->Name = L"radioButton3_2";
			this->radioButton3_2->Size = System::Drawing::Size(121, 17);
			this->radioButton3_2->TabIndex = 1;
			this->radioButton3_2->Text = L"���������� 2-� ��.";
			this->radioButton3_2->UseVisualStyleBackColor = true;
			// 
			// radioButton3_1
			// 
			this->radioButton3_1->AutoSize = true;
			this->radioButton3_1->Checked = true;
			this->radioButton3_1->Location = System::Drawing::Point(16, 29);
			this->radioButton3_1->Name = L"radioButton3_1";
			this->radioButton3_1->Size = System::Drawing::Size(46, 17);
			this->radioButton3_1->TabIndex = 0;
			this->radioButton3_1->TabStop = true;
			this->radioButton3_1->Text = L"���";
			this->radioButton3_1->UseVisualStyleBackColor = true;
			// 
			// textBox3_der2
			// 
			this->textBox3_der2->Location = System::Drawing::Point(923, 223);
			this->textBox3_der2->Margin = System::Windows::Forms::Padding(2);
			this->textBox3_der2->Name = L"textBox3_der2";
			this->textBox3_der2->ReadOnly = true;
			this->textBox3_der2->Size = System::Drawing::Size(134, 20);
			this->textBox3_der2->TabIndex = 47;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(920, 208);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(132, 13);
			this->label13->TabIndex = 46;
			this->label13->Text = L"Max GP second derivative";
			// 
			// textBox3_der1
			// 
			this->textBox3_der1->Location = System::Drawing::Point(923, 181);
			this->textBox3_der1->Margin = System::Windows::Forms::Padding(2);
			this->textBox3_der1->Name = L"textBox3_der1";
			this->textBox3_der1->ReadOnly = true;
			this->textBox3_der1->Size = System::Drawing::Size(134, 20);
			this->textBox3_der1->TabIndex = 45;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(920, 166);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(113, 13);
			this->label14->TabIndex = 44;
			this->label14->Text = L"Max GP first derivative";
			// 
			// zedGraphControl3_2
			// 
			this->zedGraphControl3_2->Location = System::Drawing::Point(448, 5);
			this->zedGraphControl3_2->Name = L"zedGraphControl3_2";
			this->zedGraphControl3_2->ScrollGrace = 0;
			this->zedGraphControl3_2->ScrollMaxX = 0;
			this->zedGraphControl3_2->ScrollMaxY = 0;
			this->zedGraphControl3_2->ScrollMaxY2 = 0;
			this->zedGraphControl3_2->ScrollMinX = 0;
			this->zedGraphControl3_2->ScrollMinY = 0;
			this->zedGraphControl3_2->ScrollMinY2 = 0;
			this->zedGraphControl3_2->Size = System::Drawing::Size(445, 343);
			this->zedGraphControl3_2->TabIndex = 43;
			// 
			// zedGraphControl3_3
			// 
			this->zedGraphControl3_3->Location = System::Drawing::Point(6, 360);
			this->zedGraphControl3_3->Name = L"zedGraphControl3_3";
			this->zedGraphControl3_3->ScrollGrace = 0;
			this->zedGraphControl3_3->ScrollMaxX = 0;
			this->zedGraphControl3_3->ScrollMaxY = 0;
			this->zedGraphControl3_3->ScrollMaxY2 = 0;
			this->zedGraphControl3_3->ScrollMinX = 0;
			this->zedGraphControl3_3->ScrollMinY = 0;
			this->zedGraphControl3_3->ScrollMinY2 = 0;
			this->zedGraphControl3_3->Size = System::Drawing::Size(437, 343);
			this->zedGraphControl3_3->TabIndex = 42;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1079, 141);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(10, 13);
			this->label15->TabIndex = 41;
			this->label15->Text = L".";
			// 
			// dataGridView3_2
			// 
			this->dataGridView3_2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3_2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17,
					this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19
			});
			this->dataGridView3_2->Location = System::Drawing::Point(861, 360);
			this->dataGridView3_2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView3_2->Name = L"dataGridView3_2";
			this->dataGridView3_2->RowTemplate->Height = 24;
			this->dataGridView3_2->Size = System::Drawing::Size(407, 343);
			this->dataGridView3_2->TabIndex = 40;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"i";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"x(i-1)";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"x(i)";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"ai";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"bi";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"ci";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"di";
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			// 
			// textBox3_GP
			// 
			this->textBox3_GP->Location = System::Drawing::Point(923, 138);
			this->textBox3_GP->Margin = System::Windows::Forms::Padding(2);
			this->textBox3_GP->Name = L"textBox3_GP";
			this->textBox3_GP->ReadOnly = true;
			this->textBox3_GP->Size = System::Drawing::Size(134, 20);
			this->textBox3_GP->TabIndex = 39;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(920, 123);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 13);
			this->label16->TabIndex = 38;
			this->label16->Text = L"Max GP";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1097, 195);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(34, 13);
			this->label17->TabIndex = 37;
			this->label17->Text = L"factor";
			// 
			// textBox3_factor
			// 
			this->textBox3_factor->Location = System::Drawing::Point(1135, 192);
			this->textBox3_factor->Margin = System::Windows::Forms::Padding(2);
			this->textBox3_factor->Name = L"textBox3_factor";
			this->textBox3_factor->Size = System::Drawing::Size(76, 20);
			this->textBox3_factor->TabIndex = 36;
			this->textBox3_factor->Text = L"2";
			// 
			// dataGridView3_1
			// 
			this->dataGridView3_1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3_1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->dataGridViewTextBoxColumn20,
					this->dataGridViewTextBoxColumn21, this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24,
					this->Column19, this->Column20, this->Column21, this->Column22, this->Column23, this->Column24
			});
			this->dataGridView3_1->Location = System::Drawing::Point(448, 360);
			this->dataGridView3_1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView3_1->Name = L"dataGridView3_1";
			this->dataGridView3_1->RowTemplate->Height = 24;
			this->dataGridView3_1->Size = System::Drawing::Size(407, 343);
			this->dataGridView3_1->TabIndex = 35;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1103, 264);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 73);
			this->button3->TabIndex = 34;
			this->button3->Text = L"����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3_n
			// 
			this->textBox3_n->Location = System::Drawing::Point(1135, 160);
			this->textBox3_n->Margin = System::Windows::Forms::Padding(2);
			this->textBox3_n->Name = L"textBox3_n";
			this->textBox3_n->Size = System::Drawing::Size(76, 20);
			this->textBox3_n->TabIndex = 33;
			this->textBox3_n->Text = L"3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1117, 160);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 32;
			this->label18->Text = L"n";
			// 
			// zedGraphControl3_1
			// 
			this->zedGraphControl3_1->Location = System::Drawing::Point(6, 5);
			this->zedGraphControl3_1->Name = L"zedGraphControl3_1";
			this->zedGraphControl3_1->ScrollGrace = 0;
			this->zedGraphControl3_1->ScrollMaxX = 0;
			this->zedGraphControl3_1->ScrollMaxY = 0;
			this->zedGraphControl3_1->ScrollMaxY2 = 0;
			this->zedGraphControl3_1->ScrollMinX = 0;
			this->zedGraphControl3_1->ScrollMinY = 0;
			this->zedGraphControl3_1->ScrollMinY2 = 0;
			this->zedGraphControl3_1->Size = System::Drawing::Size(436, 352);
			this->zedGraphControl3_1->TabIndex = 31;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"j";
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->Width = 30;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"xj";
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"F(xj)";
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"S(xj)";
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"F(xj)-S(xj)";
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			this->dataGridViewTextBoxColumn24->Width = 150;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"F\'(xj)";
			this->Column19->Name = L"Column19";
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"S\'(xj)";
			this->Column20->Name = L"Column20";
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"F\'(xj)-S\'(xj)";
			this->Column21->Name = L"Column21";
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"F\'\'(xj)";
			this->Column22->Name = L"Column22";
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"S\'\'(xj)";
			this->Column23->Name = L"Column23";
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"F\'\'(xj)-S\'\'(xj)";
			this->Column24->Name = L"Column24";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1288, 746);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"��������� ������. 6 �������. ���� � 1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {  //   TEST   TASK

		dataGridView1_1->Rows->Clear();
		dataGridView1_2->Rows->Clear();
		GraphPane^ panel1 = zedGraphControl1_1->GraphPane;
		GraphPane^ panel2 = zedGraphControl1_2->GraphPane;
		GraphPane^ panel3 = zedGraphControl1_3->GraphPane;
		panel1->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();
		PointPairList^ point_list_numeric1 = gcnew ZedGraph::PointPairList();
		PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_2 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_2 = gcnew ZedGraph::PointPairList();

		int n = Convert::ToInt32(textBox1_n->Text);
		int factor = Convert::ToInt32(textBox1_factor->Text);
		int NN = factor * n;
		double a = -1;
		double b = 1;

		Task_test task(n);
		task.Init_coefs();

		double h = 2.0 / NN;

		double x_curr = 0;
		double temp;
		int curr_S_xi = 0;
		double accurate = 0;
		double numeric1 = 0;
		double der_num_1 = 0;
		double der_num_2 = 0;
		double der_acc_1 = 0;
		double der_acc_2 = 0;

		double GP = 0,
			maxGP = 0,
			GP_der_1 = 0,
			maxGP_der_1 = 0,
			GP_der_2 = 0,
			maxGP_der_2 = 0;
		if (n < NN)
		for (int i = 0; i < NN+1; i++)
		{
			x_curr = a + h * i;
			accurate = task.Function(x_curr);
			der_acc_1 = task.FunctionDerivative_1(x_curr);
			der_acc_2 = task.FunctionDerivative_2(x_curr);
			point_list_accurate->Add(x_curr, accurate);
			p_list_deriv_acc_1->Add(x_curr, der_acc_1);
			p_list_deriv_acc_2->Add(x_curr, der_acc_2);
			if (i % (NN / n) == 0 && curr_S_xi < n) curr_S_xi++;

			numeric1 = task.S_xi(curr_S_xi, x_curr);
			der_num_1 = task.S_xi_derivative_1(curr_S_xi,x_curr);
			der_num_2 = task.S_xi_derivative_2(curr_S_xi,x_curr);
			point_list_numeric1->Add(x_curr, numeric1);
			p_list_deriv_num_1->Add(x_curr, der_num_1);
			p_list_deriv_num_2->Add(x_curr, der_num_2);

			GP = abs(accurate - numeric1);
			GP_der_1 = abs(der_acc_1 - der_num_1);
			GP_der_2 = abs(der_acc_2 - der_num_2);
			if (GP > maxGP) { maxGP = GP; temp = x_curr; }
			if (GP_der_1 > maxGP_der_1) { maxGP_der_1 = GP_der_1; }
			if (GP_der_2 > maxGP_der_2) { maxGP_der_2 = GP_der_2; }

			dataGridView1_1->Rows->Add();
			dataGridView1_1->Rows[i]->Cells[0]->Value = i;
			dataGridView1_1->Rows[i]->Cells[1]->Value = x_curr;
			dataGridView1_1->Rows[i]->Cells[2]->Value = accurate;
			dataGridView1_1->Rows[i]->Cells[3]->Value = numeric1;
			dataGridView1_1->Rows[i]->Cells[4]->Value = abs(accurate - numeric1);


			
		}
		label4->Text = Convert::ToString(temp);
		textBox1_GP->Text = Convert::ToString(maxGP);
		textBox1_der1->Text = Convert::ToString(maxGP_der_1);
		textBox1_der2->Text = Convert::ToString(maxGP_der_2);

		for (int i = 1; i < task.a_coef.size(); i++)
		{
			dataGridView1_2->Rows->Add();
			dataGridView1_2->Rows[i - 1]->Cells[0]->Value = i;
			dataGridView1_2->Rows[i - 1]->Cells[1]->Value = task.Xgrid[i - 1];
			dataGridView1_2->Rows[i - 1]->Cells[2]->Value = task.Xgrid[i];
			dataGridView1_2->Rows[i - 1]->Cells[3]->Value = task.a_coef[i];
			dataGridView1_2->Rows[i - 1]->Cells[4]->Value = task.b_coef[i];
			dataGridView1_2->Rows[i - 1]->Cells[5]->Value = task.c_coef[i];
			dataGridView1_2->Rows[i - 1]->Cells[6]->Value = task.d_coef[i];
		}

		LineItem^ Curve1 = panel1->AddCurve("accurate trajectory", point_list_accurate, Color::Blue, SymbolType::None);
		LineItem^ Curve2 = panel1->AddCurve("numeric trajectory", point_list_numeric1, Color::Red, SymbolType::None);
		LineItem^ Curve3 = panel2->AddCurve("accurate trajectory", p_list_deriv_acc_1, Color::Blue, SymbolType::None);
		LineItem^ Curve4 = panel2->AddCurve("numeric trajectory", p_list_deriv_num_1, Color::Red, SymbolType::None);
		LineItem^ Curve5 = panel3->AddCurve("accurate trajectory", p_list_deriv_acc_2, Color::Blue, SymbolType::None);
		LineItem^ Curve6 = panel3->AddCurve("numeric trajectory", p_list_deriv_num_2, Color::Red, SymbolType::None);

		zedGraphControl1_1->AxisChange();
		zedGraphControl1_1->Invalidate();
		zedGraphControl1_2->AxisChange();
		zedGraphControl1_2->Invalidate();
		zedGraphControl1_3->AxisChange();
		zedGraphControl1_3->Invalidate();

	}    // END  TEST  TASK



	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {  //  MAIN  TASK  1
		double const PI = 3.141592653589793238462643383279502884197169399375105820974944;

		dataGridView2_1->Rows->Clear();
		dataGridView2_2->Rows->Clear();
		GraphPane^ panel1 = zedGraphControl2_1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2_2->GraphPane;
		GraphPane^ panel3 = zedGraphControl2_3->GraphPane;
		panel1->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();
		PointPairList^ point_list_numeric1 = gcnew ZedGraph::PointPairList();
		PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_2 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_2 = gcnew ZedGraph::PointPairList();

		int n = Convert::ToInt32(textBox2_n->Text);
		int factor = Convert::ToInt32(textBox2_factor->Text);
		int NN = factor * n;
		double a = 1;
		double b = PI;

		Task_main_1 task(n);
		if (radioButton2_1->Checked)	
			task.Init_coefs();
		else
			task.Init_coefs(1);

		double h = ((double)(b - a)) / NN;

		double x_curr = 0,
			temp = 0;
		int curr_S_xi = 0;
		double accurate = 0;
		double numeric1 = 0;
		double der_num_1 = 0;
		double der_num_2 = 0;
		double der_acc_1 = 0;
		double der_acc_2 = 0;
		double GP = 0,
			maxGP = 0,
			GP_der_1 = 0,
			maxGP_der_1 = 0,
			GP_der_2 = 0,
			maxGP_der_2 = 0;


		if (n < NN)
			for (int i = 0; i < NN + 1; i++)
			{
				x_curr = a + h * i;
				accurate = task.Function(x_curr);
				der_acc_1 = task.FunctionDerivative_1(x_curr);
				der_acc_2 = task.FunctionDerivative_2(x_curr);
				point_list_accurate->Add(x_curr, accurate);
				p_list_deriv_acc_1->Add(x_curr, der_acc_1);
				p_list_deriv_acc_2->Add(x_curr, der_acc_2);
				if (i % (NN / n) == 0 && curr_S_xi < n) curr_S_xi++;

				numeric1 = task.S_xi(curr_S_xi, x_curr);
				der_num_1 = task.S_xi_derivative_1(curr_S_xi, x_curr);
				der_num_2 = task.S_xi_derivative_2(curr_S_xi, x_curr);

				point_list_numeric1->Add(x_curr, numeric1);
				p_list_deriv_num_1->Add(x_curr, der_num_1);
				p_list_deriv_num_2->Add(x_curr, der_num_2);

				GP = abs(accurate - numeric1);
				GP_der_1 = abs(der_acc_1 - der_num_1);
				GP_der_2 = abs(der_acc_2 - der_num_2);
				if (GP > maxGP) { maxGP = GP; temp = x_curr; }
				if (GP_der_1 > maxGP_der_1) { maxGP_der_1 = GP_der_1; }
				if (GP_der_2 > maxGP_der_2) { maxGP_der_2 = GP_der_2; }

				dataGridView2_1->Rows->Add();
				dataGridView2_1->Rows[i]->Cells[0]->Value = i;
				dataGridView2_1->Rows[i]->Cells[1]->Value = x_curr;
				dataGridView2_1->Rows[i]->Cells[2]->Value = accurate;
				dataGridView2_1->Rows[i]->Cells[3]->Value = numeric1;
				dataGridView2_1->Rows[i]->Cells[4]->Value = abs(accurate - numeric1);
				dataGridView2_1->Rows[i]->Cells[5]->Value = der_acc_1;
				dataGridView2_1->Rows[i]->Cells[6]->Value = der_num_1;
				dataGridView2_1->Rows[i]->Cells[7]->Value = abs(der_acc_1 - der_num_1);
				dataGridView2_1->Rows[i]->Cells[8]->Value = der_acc_2;
				dataGridView2_1->Rows[i]->Cells[9]->Value = der_num_2;
				dataGridView2_1->Rows[i]->Cells[10]->Value = abs(der_acc_2 - der_num_2);

			}
		label5->Text = Convert::ToString(temp);
		textBox2_GP->Text = Convert::ToString(maxGP);
		textBox2_der1->Text = Convert::ToString(maxGP_der_1);
		textBox2_der2->Text = Convert::ToString(maxGP_der_2);

		for (int i = 1; i < task.c_coef.size(); i++)
		{
			dataGridView2_2->Rows->Add();
			dataGridView2_2->Rows[i - 1]->Cells[0]->Value = i;
			dataGridView2_2->Rows[i - 1]->Cells[1]->Value = task.Xgrid[i - 1];
			dataGridView2_2->Rows[i - 1]->Cells[2]->Value = task.Xgrid[i];
			dataGridView2_2->Rows[i - 1]->Cells[3]->Value = task.a_coef[i];
			dataGridView2_2->Rows[i - 1]->Cells[4]->Value = task.b_coef[i];
			dataGridView2_2->Rows[i - 1]->Cells[5]->Value = task.c_coef[i];
			dataGridView2_2->Rows[i - 1]->Cells[6]->Value = task.d_coef[i];
		}

		LineItem^ Curve1 = panel1->AddCurve("accurate trajectory", point_list_accurate, Color::Blue, SymbolType::None);
		LineItem^ Curve2 = panel1->AddCurve("numeric trajectory", point_list_numeric1, Color::Red, SymbolType::None);
		LineItem^ Curve3 = panel2->AddCurve("accurate trajectory", p_list_deriv_acc_1, Color::Blue, SymbolType::None);
		LineItem^ Curve4 = panel2->AddCurve("numeric trajectory", p_list_deriv_num_1, Color::Red, SymbolType::None);
		LineItem^ Curve5 = panel3->AddCurve("accurate trajectory", p_list_deriv_acc_2, Color::Blue, SymbolType::None);
		LineItem^ Curve6 = panel3->AddCurve("numeric trajectory", p_list_deriv_num_2, Color::Red, SymbolType::None);

		zedGraphControl2_1->AxisChange();
		zedGraphControl2_1->Invalidate();
		zedGraphControl2_2->AxisChange();
		zedGraphControl2_2->Invalidate();
		zedGraphControl2_3->AxisChange();
		zedGraphControl2_3->Invalidate();
	} //  END   MAIN  TASK   1
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


		double const PI = 3.141592653589793238462643383279502884197169399375105820974944;

		dataGridView3_1->Rows->Clear();
		dataGridView3_2->Rows->Clear();
		GraphPane^ panel1 = zedGraphControl3_1->GraphPane;
		GraphPane^ panel2 = zedGraphControl3_2->GraphPane;
		GraphPane^ panel3 = zedGraphControl3_3->GraphPane;
		panel1->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();
		PointPairList^ point_list_numeric1 = gcnew ZedGraph::PointPairList();
		PointPairList^ point_list_accurate = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_num_2 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_1 = gcnew ZedGraph::PointPairList();
		PointPairList^ p_list_deriv_acc_2 = gcnew ZedGraph::PointPairList();

		int n = Convert::ToInt32(textBox3_n->Text);
		int factor = Convert::ToInt32(textBox3_factor->Text);
		int NN = factor * n;
		double a = 1;
		double b = PI;

		Task_main_2 task(n);
		if (radioButton3_1->Checked)
			task.Init_coefs();
		else
			task.Init_coefs(2);

		double h = ((double)(b - a)) / NN;

		double x_curr = 0,
			temp = 0;
		int curr_S_xi = 0;
		double accurate = 0;
		double numeric1 = 0;
		double der_num_1 = 0;
		double der_num_2 = 0;
		double der_acc_1 = 0;
		double der_acc_2 = 0;
		double GP = 0,
			maxGP = 0,
			GP_der_1 = 0,
			maxGP_der_1 = 0,
			GP_der_2 = 0,
			maxGP_der_2 = 0;


		if (n < NN)
			for (int i = 0; i < NN + 1; i++)
			{
				x_curr = a + h * i;
				accurate = task.Function(x_curr);
				der_acc_1 = task.FunctionDerivative_1(x_curr);
				der_acc_2 = task.FunctionDerivative_2(x_curr);
				point_list_accurate->Add(x_curr, accurate);
				p_list_deriv_acc_1->Add(x_curr, der_acc_1);
				p_list_deriv_acc_2->Add(x_curr, der_acc_2);
				if (i % (NN / n) == 0 && curr_S_xi < n) curr_S_xi++;

				numeric1 = task.S_xi(curr_S_xi, x_curr);
				der_num_1 = task.S_xi_derivative_1(curr_S_xi, x_curr);
				der_num_2 = task.S_xi_derivative_2(curr_S_xi, x_curr);

				point_list_numeric1->Add(x_curr, numeric1);
				p_list_deriv_num_1->Add(x_curr, der_num_1);
				p_list_deriv_num_2->Add(x_curr, der_num_2);

				GP = abs(accurate - numeric1);
				GP_der_1 = abs(der_acc_1 - der_num_1);
				GP_der_2 = abs(der_acc_2 - der_num_2);
				if (GP > maxGP) { maxGP = GP; temp = x_curr; }
				if (GP_der_1 > maxGP_der_1) { maxGP_der_1 = GP_der_1; }
				if (GP_der_2 > maxGP_der_2) { maxGP_der_2 = GP_der_2; }

				dataGridView3_1->Rows->Add();
				dataGridView3_1->Rows[i]->Cells[0]->Value = i;
				dataGridView3_1->Rows[i]->Cells[1]->Value = x_curr;
				dataGridView3_1->Rows[i]->Cells[2]->Value = accurate;
				dataGridView3_1->Rows[i]->Cells[3]->Value = numeric1;
				dataGridView3_1->Rows[i]->Cells[4]->Value = abs(accurate - numeric1);
				dataGridView3_1->Rows[i]->Cells[5]->Value = der_acc_1;
				dataGridView3_1->Rows[i]->Cells[6]->Value = der_num_1;
				dataGridView3_1->Rows[i]->Cells[7]->Value = abs(der_acc_1 - der_num_1);
				dataGridView3_1->Rows[i]->Cells[8]->Value = der_acc_2;
				dataGridView3_1->Rows[i]->Cells[9]->Value = der_num_2;
				dataGridView3_1->Rows[i]->Cells[10]->Value = abs(der_acc_2 - der_num_2);

			}
		textBox3_GP->Text = Convert::ToString(maxGP);
		textBox3_der1->Text = Convert::ToString(maxGP_der_1);
		textBox3_der2->Text = Convert::ToString(maxGP_der_2);

		for (int i = 1; i < task.c_coef.size(); i++)
		{
			dataGridView3_2->Rows->Add();
			dataGridView3_2->Rows[i - 1]->Cells[0]->Value = i;
			dataGridView3_2->Rows[i - 1]->Cells[1]->Value = task.Xgrid[i - 1];
			dataGridView3_2->Rows[i - 1]->Cells[2]->Value = task.Xgrid[i];
			dataGridView3_2->Rows[i - 1]->Cells[3]->Value = task.a_coef[i];
			dataGridView3_2->Rows[i - 1]->Cells[4]->Value = task.b_coef[i];
			dataGridView3_2->Rows[i - 1]->Cells[5]->Value = task.c_coef[i];
			dataGridView3_2->Rows[i - 1]->Cells[6]->Value = task.d_coef[i];
		}

		LineItem^ Curve1 = panel1->AddCurve("accurate trajectory", point_list_accurate, Color::Blue, SymbolType::None);
		LineItem^ Curve2 = panel1->AddCurve("numeric trajectory", point_list_numeric1, Color::Red, SymbolType::None);
		LineItem^ Curve3 = panel2->AddCurve("accurate trajectory", p_list_deriv_acc_1, Color::Blue, SymbolType::None);
		LineItem^ Curve4 = panel2->AddCurve("numeric trajectory", p_list_deriv_num_1, Color::Red, SymbolType::None);
		LineItem^ Curve5 = panel3->AddCurve("accurate trajectory", p_list_deriv_acc_2, Color::Blue, SymbolType::None);
		LineItem^ Curve6 = panel3->AddCurve("numeric trajectory", p_list_deriv_num_2, Color::Red, SymbolType::None);

		zedGraphControl3_1->AxisChange();
		zedGraphControl3_1->Invalidate();
		zedGraphControl3_2->AxisChange();
		zedGraphControl3_2->Invalidate();
		zedGraphControl3_3->AxisChange();
		zedGraphControl3_3->Invalidate();
	}
};
}

#pragma once
#include "Preferences.h"

namespace arduino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnRight;
	protected: 

	protected: 

	private: System::Windows::Forms::Button^  btnExit;

	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Button^  btnLeft;
	private: System::Windows::Forms::Button^  btnBackward;

	private: bool dragging;
	private: Point offset;

	private: System::Windows::Forms::Button^  btnForward;

	private: System::Windows::Forms::Button^  btnShutDown;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  generalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  advancedToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  restartToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;

	private: System::Windows::Forms::RichTextBox^  txtPrompt;

	private: System::Windows::Forms::ToolStripMenuItem^  serialPortToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  creditsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  propertiesToolStripMenuItem;
	private: System::Windows::Forms::Button^  btnEnter;
	private: System::Windows::Forms::TextBox^  txtInput;



	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnBackward = (gcnew System::Windows::Forms::Button());
			this->btnForward = (gcnew System::Windows::Forms::Button());
			this->btnShutDown = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->generalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creditsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->propertiesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->advancedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serialPortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtPrompt = (gcnew System::Windows::Forms::RichTextBox());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnRight
			// 
			this->btnRight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(169)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			resources->ApplyResources(this->btnRight, L"btnRight");
			this->btnRight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRight->FlatAppearance->BorderSize = 0;
			this->btnRight->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnRight->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnRight->ForeColor = System::Drawing::Color::White;
			this->btnRight->Name = L"btnRight";
			this->btnRight->UseVisualStyleBackColor = false;
			this->btnRight->Click += gcnew System::EventHandler(this, &Form1::btnRight_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(169)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			resources->ApplyResources(this->btnExit, L"btnExit");
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->Name = L"btnExit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM6";
			this->serialPort1->ReadTimeout = 500;
			this->serialPort1->WriteTimeout = 500;
			// 
			// btnLeft
			// 
			this->btnLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(169)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnLeft->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLeft->FlatAppearance->BorderSize = 0;
			this->btnLeft->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnLeft->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			resources->ApplyResources(this->btnLeft, L"btnLeft");
			this->btnLeft->ForeColor = System::Drawing::Color::White;
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->UseVisualStyleBackColor = false;
			this->btnLeft->Click += gcnew System::EventHandler(this, &Form1::btnLeft_Click);
			// 
			// btnBackward
			// 
			this->btnBackward->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(169)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnBackward->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBackward->FlatAppearance->BorderSize = 0;
			this->btnBackward->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnBackward->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			resources->ApplyResources(this->btnBackward, L"btnBackward");
			this->btnBackward->ForeColor = System::Drawing::Color::White;
			this->btnBackward->Name = L"btnBackward";
			this->btnBackward->UseVisualStyleBackColor = false;
			this->btnBackward->Click += gcnew System::EventHandler(this, &Form1::btnBackward_Click);
			// 
			// btnForward
			// 
			this->btnForward->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(169)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnForward->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnForward->FlatAppearance->BorderSize = 0;
			this->btnForward->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnForward->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			resources->ApplyResources(this->btnForward, L"btnForward");
			this->btnForward->ForeColor = System::Drawing::Color::White;
			this->btnForward->Name = L"btnForward";
			this->btnForward->UseVisualStyleBackColor = false;
			this->btnForward->Click += gcnew System::EventHandler(this, &Form1::btnForward_Click);
			// 
			// btnShutDown
			// 
			this->btnShutDown->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(169)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnShutDown->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnShutDown->FlatAppearance->BorderSize = 0;
			this->btnShutDown->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnShutDown->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			resources->ApplyResources(this->btnShutDown, L"btnShutDown");
			this->btnShutDown->ForeColor = System::Drawing::Color::White;
			this->btnShutDown->Name = L"btnShutDown";
			this->btnShutDown->UseVisualStyleBackColor = false;
			this->btnShutDown->Click += gcnew System::EventHandler(this, &Form1::btnShutDown_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(74)), 
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->generalToolStripMenuItem, 
				this->advancedToolStripMenuItem});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// generalToolStripMenuItem
			// 
			this->generalToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->generalToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->restartToolStripMenuItem, 
				this->creditsToolStripMenuItem, this->propertiesToolStripMenuItem, this->exitToolStripMenuItem});
			this->generalToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			resources->ApplyResources(this->generalToolStripMenuItem, L"generalToolStripMenuItem");
			this->generalToolStripMenuItem->Name = L"generalToolStripMenuItem";
			// 
			// restartToolStripMenuItem
			// 
			this->restartToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->restartToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->restartToolStripMenuItem->Name = L"restartToolStripMenuItem";
			resources->ApplyResources(this->restartToolStripMenuItem, L"restartToolStripMenuItem");
			this->restartToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::restartToolStripMenuItem_Click);
			// 
			// creditsToolStripMenuItem
			// 
			this->creditsToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->creditsToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->creditsToolStripMenuItem->Name = L"creditsToolStripMenuItem";
			resources->ApplyResources(this->creditsToolStripMenuItem, L"creditsToolStripMenuItem");
			this->creditsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::creditsToolStripMenuItem_Click_1);
			// 
			// propertiesToolStripMenuItem
			// 
			this->propertiesToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->propertiesToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->propertiesToolStripMenuItem->Name = L"propertiesToolStripMenuItem";
			resources->ApplyResources(this->propertiesToolStripMenuItem, L"propertiesToolStripMenuItem");
			this->propertiesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::propertiesToolStripMenuItem_Click_1);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->exitToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			resources->ApplyResources(this->exitToolStripMenuItem, L"exitToolStripMenuItem");
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// advancedToolStripMenuItem
			// 
			this->advancedToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->helpToolStripMenuItem, 
				this->serialPortToolStripMenuItem});
			this->advancedToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			resources->ApplyResources(this->advancedToolStripMenuItem, L"advancedToolStripMenuItem");
			this->advancedToolStripMenuItem->Name = L"advancedToolStripMenuItem";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->helpToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// serialPortToolStripMenuItem
			// 
			this->serialPortToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->serialPortToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->serialPortToolStripMenuItem->Name = L"serialPortToolStripMenuItem";
			resources->ApplyResources(this->serialPortToolStripMenuItem, L"serialPortToolStripMenuItem");
			this->serialPortToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::serialPortToolStripMenuItem_Click);
			// 
			// txtPrompt
			// 
			this->txtPrompt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->txtPrompt, L"txtPrompt");
			this->txtPrompt->Name = L"txtPrompt";
			this->txtPrompt->ReadOnly = true;
			// 
			// btnEnter
			// 
			this->btnEnter->BackColor = System::Drawing::Color::DarkGray;
			this->btnEnter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEnter->FlatAppearance->BorderSize = 0;
			resources->ApplyResources(this->btnEnter, L"btnEnter");
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->UseVisualStyleBackColor = false;
			this->btnEnter->Click += gcnew System::EventHandler(this, &Form1::btnEnter_Click);
			// 
			// txtInput
			// 
			this->txtInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->txtInput, L"txtInput");
			this->txtInput->Name = L"txtInput";
			this->txtInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::txtInput_KeyPress);
			// 
			// Form1
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)), 
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->CancelButton = this->btnExit;
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->btnEnter);
			this->Controls->Add(this->txtPrompt);
			this->Controls->Add(this->btnShutDown);
			this->Controls->Add(this->btnForward);
			this->Controls->Add(this->btnBackward);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseUp);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 //this->serialPort1->Open();
				 this->dragging = false;
				 txtPrompt->Text = ">Welcome to SwagMobile Controller Version 0.55.2 \n";
				 array<String^>^ serialPorts = nullptr;
				 try{
					 // Get a list of serial port names.
					 serialPorts = SerialPort::GetPortNames();
				 }catch (Win32Exception^ ex){
					 Console::WriteLine(ex->Message);
				 }
			 }

	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {

				 //this->serialPort1->Close();
				 Application::Exit();	

			 }
	private: System::Void btnRight_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtPrompt->Text = txtPrompt->Text + ">Turning Right \n";
				 btnRight->Enabled = false;
				 btnLeft->Enabled = true;
				 btnBackward->Enabled = true;
				 btnForward->Enabled = true;
				 //this->serialPort1->Write("3");

			 }
	private: System::Void btnLeft_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtPrompt->Text = txtPrompt->Text + ">Turning Left \n";
				 btnRight->Enabled = true;
				 btnLeft->Enabled = false;
				 btnBackward->Enabled = true;
				 btnForward->Enabled = true;
				 //this->serialPort1->Write("4");

			 }
	private: System::Void btnBackward_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtPrompt->Text = txtPrompt->Text + ">Going Backward \n";
				 btnRight->Enabled = true;
				 btnLeft->Enabled = true;
				 btnBackward->Enabled = false;
				 btnForward->Enabled = true;
				 //this->serialPort1->Write("2");

			 }
	private: System::Void btnForward_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtPrompt->Text = txtPrompt->Text + ">Going Forward \n";
				 btnRight->Enabled = true;
				 btnLeft->Enabled = true;
				 btnBackward->Enabled = true;
				 btnForward->Enabled = false;
				 //this->serialPort1->Write("1");

			 }
	private: System::Void btnShutDown_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtPrompt->Text = txtPrompt->Text + ">Engine Stopped \n";
				 btnRight->Enabled = true;
				 btnLeft->Enabled = true;
				 btnBackward->Enabled = true;
				 btnForward->Enabled = true;
				 //this->serialPort1->Write("0");

			 }
	
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->serialPort1->Close();
				 Application::Exit();

			 }
	private: System::Void restartToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(MessageBox::Show(
					 "Are you sure that you would like to close the form?", 
					 "Form Closing", MessageBoxButtons::YesNo, 
					 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){

						 Application::Restart();
				 }



			 }
	private: System::Void Form1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				 this->dragging = true;
				 this->offset = Point(e->X, e->Y);

			 }
	private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				 if (this->dragging){ //Move, soldier, MOVE!
					 Point currentScreenPos = PointToScreen(e->Location);
					 Location = Point(currentScreenPos.X - this->offset.X, 
						 currentScreenPos.Y - this->offset.Y);
				 }

			 }
	private: System::Void Form1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->dragging = false;
			 }

	private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtPrompt->Text = txtPrompt->Text + ">Control Car with WASD \n" + 
					 ">W: Forward \n" + 
					 ">A: Left \n" + 
					 ">S: Backward \n" + 
					 ">D: Right \n" + 
					 ">You may also control the car with buttons above. \n" + 
					 ">To change preferences and settings press ctrl+j or go to advanced->Preferences. \n"
					 ;
			 }

	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 }

	private: System::Void creditsToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 txtPrompt->Text = txtPrompt->Text + ">Created By Yonglin Wang | GNU Some Rights Reserved | Find me on yongl.in or yonglinwang.ca \n";
			 }
	private: System::Void propertiesToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 Preferences ^ pf = gcnew Preferences;
				 pf->ShowDialog();
			 }
	private: System::Void serialPortToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtPrompt->Text = "" + ">Text Cleared \n";
			 }
	private: System::Void btnEnter_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtPrompt->Text = txtPrompt->Text + ">'" + txtInput->Text +  "'" + " sent to board \n";
				 txtInput->Text = "";
				 //this->serialPort1->Write(txtInput->Text);
			 }
	private: System::Void txtInput_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar == Char(13)){
					 txtPrompt->Text = txtPrompt->Text + ">'" + txtInput->Text +  "'" + " sent to board \n";
					 txtInput->Text = "";
					 //this->serialPort1->Write(txtInput->Text);
				 }
			 }
private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 switch (e->KeyCode)
					 {
					 case Keys::A:
						 if(btnLeft->Enabled){
							 txtPrompt->Text = txtPrompt->Text + ">Going Left \n";
						 }
						 btnRight->Enabled = true;
						 btnLeft->Enabled = false;
						 btnBackward->Enabled = true;
						 btnForward->Enabled = true;
						 break;
					 case Keys::W:
						 if(btnForward->Enabled){
							 txtPrompt->Text = txtPrompt->Text + ">Going Left \n";
						 }
						 btnRight->Enabled = true;
						 btnLeft->Enabled = true;
						 btnBackward->Enabled = true;
						 btnForward->Enabled = false;
						 break;
					 case Keys::S:
						 if(btnBackward->Enabled){
							 txtPrompt->Text = txtPrompt->Text + ">Going Left \n";
						 }
						 btnRight->Enabled = true;
						 btnLeft->Enabled = true;
						 btnBackward->Enabled = false;
						 btnForward->Enabled = true;
						 break;
					 case Keys::D:
						 if(btnRight->Enabled){
							 txtPrompt->Text = txtPrompt->Text + ">Going Left \n";
						 }
						 btnRight->Enabled = false;
						 btnLeft->Enabled = true;
						 btnBackward->Enabled = true;
						 btnForward->Enabled = true;
						 break;
					 }
		 }
private: System::Void Form1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 switch (e->KeyCode){
			 case Keys::A:
			 case Keys::S:
			 case Keys::W:
			 case Keys::D:
				 txtPrompt->Text = txtPrompt->Text + ">Breaked \n";
				 btnRight->Enabled = true;
				 btnLeft->Enabled = true;
				 btnBackward->Enabled = true;
				 btnForward->Enabled = true;
			 }
		 }
};
}


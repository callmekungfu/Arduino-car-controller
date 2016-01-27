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

	private: System::Windows::Forms::ToolStripMenuItem^  creditsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  propertiesToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  txtPrompt;
	private: System::Windows::Forms::Button^  btnClear;












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
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->advancedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creditsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->propertiesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtPrompt = (gcnew System::Windows::Forms::RichTextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnRight
			// 
			this->btnRight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(169)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnRight->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnRight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRight->FlatAppearance->BorderSize = 0;
			this->btnRight->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnRight->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnRight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRight->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRight->ForeColor = System::Drawing::Color::White;
			this->btnRight->Location = System::Drawing::Point(366, 83);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(119, 42);
			this->btnRight->TabIndex = 0;
			this->btnRight->Text = L"TURN RIGHT";
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
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->Location = System::Drawing::Point(120, 342);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(365, 42);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"EXIT";
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
			this->btnLeft->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLeft->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnLeft->ForeColor = System::Drawing::Color::White;
			this->btnLeft->Location = System::Drawing::Point(120, 83);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(119, 42);
			this->btnLeft->TabIndex = 3;
			this->btnLeft->Text = L"TURN LEFT";
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
			this->btnBackward->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackward->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnBackward->ForeColor = System::Drawing::Color::White;
			this->btnBackward->Location = System::Drawing::Point(243, 83);
			this->btnBackward->Name = L"btnBackward";
			this->btnBackward->Size = System::Drawing::Size(119, 42);
			this->btnBackward->TabIndex = 4;
			this->btnBackward->Text = L"BACKWARD";
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
			this->btnForward->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnForward->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnForward->ForeColor = System::Drawing::Color::White;
			this->btnForward->Location = System::Drawing::Point(243, 35);
			this->btnForward->Name = L"btnForward";
			this->btnForward->Size = System::Drawing::Size(119, 42);
			this->btnForward->TabIndex = 5;
			this->btnForward->Text = L"FORWARD";
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
			this->btnShutDown->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnShutDown->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnShutDown->ForeColor = System::Drawing::Color::White;
			this->btnShutDown->Location = System::Drawing::Point(120, 131);
			this->btnShutDown->Name = L"btnShutDown";
			this->btnShutDown->Size = System::Drawing::Size(365, 42);
			this->btnShutDown->TabIndex = 6;
			this->btnShutDown->Text = L"TURN OFF ENGINE";
			this->btnShutDown->UseVisualStyleBackColor = false;
			this->btnShutDown->Click += gcnew System::EventHandler(this, &Form1::btnShutDown_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(74)), 
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->generalToolStripMenuItem, 
				this->advancedToolStripMenuItem});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(604, 23);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// generalToolStripMenuItem
			// 
			this->generalToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->generalToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->restartToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->generalToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->generalToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->generalToolStripMenuItem->Name = L"generalToolStripMenuItem";
			this->generalToolStripMenuItem->Size = System::Drawing::Size(60, 19);
			this->generalToolStripMenuItem->Text = L"General";
			// 
			// restartToolStripMenuItem
			// 
			this->restartToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->restartToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->restartToolStripMenuItem->Name = L"restartToolStripMenuItem";
			this->restartToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->restartToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->restartToolStripMenuItem->Text = L"Restart";
			this->restartToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::restartToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->exitToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// advancedToolStripMenuItem
			// 
			this->advancedToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->creditsToolStripMenuItem, 
				this->helpToolStripMenuItem, this->propertiesToolStripMenuItem});
			this->advancedToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->advancedToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->advancedToolStripMenuItem->Name = L"advancedToolStripMenuItem";
			this->advancedToolStripMenuItem->Size = System::Drawing::Size(73, 19);
			this->advancedToolStripMenuItem->Text = L"Advanced";
			// 
			// creditsToolStripMenuItem
			// 
			this->creditsToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->creditsToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->creditsToolStripMenuItem->Name = L"creditsToolStripMenuItem";
			this->creditsToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F7;
			this->creditsToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->creditsToolStripMenuItem->Text = L"Credits";
			this->creditsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::creditsToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->helpToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->helpToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
			// 
			// propertiesToolStripMenuItem
			// 
			this->propertiesToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->propertiesToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->propertiesToolStripMenuItem->Name = L"propertiesToolStripMenuItem";
			this->propertiesToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::J));
			this->propertiesToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->propertiesToolStripMenuItem->Text = L"Properties";
			this->propertiesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::propertiesToolStripMenuItem_Click);
			// 
			// txtPrompt
			// 
			this->txtPrompt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPrompt->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPrompt->Location = System::Drawing::Point(120, 179);
			this->txtPrompt->Name = L"txtPrompt";
			this->txtPrompt->ReadOnly = true;
			this->txtPrompt->Size = System::Drawing::Size(365, 157);
			this->txtPrompt->TabIndex = 8;
			this->txtPrompt->Text = L"";
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::DarkGray;
			this->btnClear->FlatAppearance->BorderSize = 0;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(425, 311);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(60, 25);
			this->btnClear->TabIndex = 9;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)), 
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(604, 409);
			this->Controls->Add(this->btnClear);
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
			this->Text = L"Arduino LED controller";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
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
				txtPrompt->Text = ">Welcome to SwagMobile Controller Version 0.51 \n";
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
private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

			 if ((e->KeyChar >= 'a') && (e->KeyChar <= 'w') && (e->KeyChar <= 's')&& (e->KeyChar <= 'd'))
        {
            MessageBox::Show("Form.KeyPress: '" +
                e->KeyChar.ToString() + "' pressed.");

            switch (e->KeyChar)
            {
            case 'a':
            case 'w':
            case 's':
                MessageBox::Show("Form.KeyPress: '" +
                    e->KeyChar.ToString() + "' consumed.");
                e->Handled = true;
                break;
            }
        }

		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->serialPort1->Close();
				 Application::Exit();

		 }
private: System::Void restartToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Application::Restart();

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
private: System::Void creditsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			txtPrompt->Text = txtPrompt->Text + ">Created By Yonglin Wang | GNU Some Rights Reserved | Find me on yongl.in or yonglinwang.ca \n";
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
private: System::Void propertiesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //MessageBox::Show("Sorry, Still building it...", "Sorry...");
			 Preferences ^ pf = gcnew Preferences;
				pf->ShowDialog();
		 }
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtPrompt->Text = "" + ">Text Cleared \n";
		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
};
}


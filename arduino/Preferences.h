#pragma once

namespace arduino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;


	/// <summary>
	/// Summary for Preferences
	/// </summary>
	public ref class Preferences : public System::Windows::Forms::Form
	{
	public:
		Preferences(void)
		{
			InitializeComponent();
			findPorts();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Preferences()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool dragging;
	private: Point offset;


	private: System::Windows::Forms::Button^  btnApply;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::LinkLabel^  llblUC;
	private: System::Windows::Forms::ComboBox^  cbxSerialPorts;

	private: System::IO::Ports::SerialPort^  spDetect;
	private: System::Windows::Forms::Label^  lblSerialPortSelection;
	private: System::ComponentModel::IContainer^  components;
	protected: 







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
			this->btnApply = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->llblUC = (gcnew System::Windows::Forms::LinkLabel());
			this->cbxSerialPorts = (gcnew System::Windows::Forms::ComboBox());
			this->spDetect = (gcnew System::IO::Ports::SerialPort(this->components));
			this->lblSerialPortSelection = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnApply
			// 
			this->btnApply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(169)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnApply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnApply->Enabled = false;
			this->btnApply->FlatAppearance->BorderSize = 0;
			this->btnApply->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnApply->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->btnApply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnApply->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnApply->ForeColor = System::Drawing::Color::White;
			this->btnApply->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnApply->Location = System::Drawing::Point(51, 327);
			this->btnApply->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnApply->Name = L"btnApply";
			this->btnApply->Size = System::Drawing::Size(194, 48);
			this->btnApply->TabIndex = 8;
			this->btnApply->Text = L"APPLY";
			this->btnApply->UseVisualStyleBackColor = false;
			this->btnApply->Click += gcnew System::EventHandler(this, &Preferences::btnApply_Click);
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
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnExit->Location = System::Drawing::Point(51, 389);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(194, 48);
			this->btnExit->TabIndex = 7;
			this->btnExit->Text = L"EXIT";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &Preferences::btnExit_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(74)), 
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(296, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// llblUC
			// 
			this->llblUC->ActiveLinkColor = System::Drawing::Color::Gainsboro;
			this->llblUC->AutoSize = true;
			this->llblUC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->llblUC->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->llblUC->LinkColor = System::Drawing::Color::White;
			this->llblUC->Location = System::Drawing::Point(15, 221);
			this->llblUC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->llblUC->Name = L"llblUC";
			this->llblUC->Size = System::Drawing::Size(267, 29);
			this->llblUC->TabIndex = 10;
			this->llblUC->TabStop = true;
			this->llblUC->Text = L"Still Under Construction";
			this->llblUC->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->llblUC->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			// 
			// cbxSerialPorts
			// 
			this->cbxSerialPorts->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cbxSerialPorts->FormattingEnabled = true;
			this->cbxSerialPorts->Location = System::Drawing::Point(166, 71);
			this->cbxSerialPorts->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cbxSerialPorts->Name = L"cbxSerialPorts";
			this->cbxSerialPorts->Size = System::Drawing::Size(112, 28);
			this->cbxSerialPorts->TabIndex = 11;
			this->cbxSerialPorts->Text = L"COM6";
			this->cbxSerialPorts->SelectedIndexChanged += gcnew System::EventHandler(this, &Preferences::cbxSerialPorts_SelectedIndexChanged_1);
			// 
			// lblSerialPortSelection
			// 
			this->lblSerialPortSelection->AutoSize = true;
			this->lblSerialPortSelection->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblSerialPortSelection->Location = System::Drawing::Point(12, 73);
			this->lblSerialPortSelection->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSerialPortSelection->Name = L"lblSerialPortSelection";
			this->lblSerialPortSelection->Size = System::Drawing::Size(102, 24);
			this->lblSerialPortSelection->TabIndex = 12;
			this->lblSerialPortSelection->Text = L"Serial Port:";
			// 
			// Preferences
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)), 
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->CancelButton = this->btnExit;
			this->ClientSize = System::Drawing::Size(296, 470);
			this->Controls->Add(this->lblSerialPortSelection);
			this->Controls->Add(this->cbxSerialPorts);
			this->Controls->Add(this->llblUC);
			this->Controls->Add(this->btnApply);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 12));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MinimizeBox = false;
			this->Name = L"Preferences";
			this->Text = L"Preferences";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Preferences::Preferences_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Preferences::Preferences_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Preferences::Preferences_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void findPorts(void){
				array<Object^>^ serialPorts = SerialPort::GetPortNames();
				this->cbxSerialPorts->Items->AddRange(serialPorts);
			 }

	private: System::Void cbxSerialPorts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Preferences::Close();
			 }
	private: System::Void Preferences_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->dragging = true;
				 this->offset = Point(e->X, e->Y);
			 }

	private: System::Void Preferences_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (this->dragging){ //Move, soldier, MOVE!
					 Point currentScreenPos = PointToScreen(e->Location);
					 Location = Point(currentScreenPos.X - this->offset.X, 
						 currentScreenPos.Y - this->offset.Y);
				 }
			 }
	private: System::Void Preferences_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->dragging = false;
			 }
	private: System::Void cbxSerialPorts_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
				 Form1->txtPrompt->Text = ">It worked";
			 }
	private: System::Void btnApply_Click(System::Object^  sender, System::EventArgs^  e) {

			 }
};
}

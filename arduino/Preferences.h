#pragma once

namespace arduino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Preferences
	/// </summary>
	public ref class Preferences : public System::Windows::Forms::Form
	{
	public:
		Preferences(void)
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
		~Preferences()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool dragging;
	private: Point offset;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  btnApply;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 







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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnApply = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(118, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(105, 28);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"COMX";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Preferences::comboBox1_SelectedIndexChanged);
			// 
			// btnApply
			// 
			this->btnApply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(169)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->btnApply->Cursor = System::Windows::Forms::Cursors::Hand;
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
			this->btnApply->Location = System::Drawing::Point(48, 249);
			this->btnApply->Name = L"btnApply";
			this->btnApply->Size = System::Drawing::Size(175, 42);
			this->btnApply->TabIndex = 8;
			this->btnApply->Text = L"APPLY";
			this->btnApply->UseVisualStyleBackColor = false;
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
			this->btnExit->Location = System::Drawing::Point(48, 297);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(175, 42);
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
			this->menuStrip1->Size = System::Drawing::Size(270, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Preferences
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)), 
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->ClientSize = System::Drawing::Size(270, 351);
			this->Controls->Add(this->btnApply);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
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
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
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
};
}

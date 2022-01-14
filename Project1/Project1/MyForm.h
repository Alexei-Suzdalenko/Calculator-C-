namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void) { InitializeComponent(); }

	protected:
		~MyForm() {
			if (components) { delete components;}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		void InitializeComponent(void) {
			this->components = (gcnew System::ComponentModel::Container());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 76);
			this->button2->TabIndex = 1;
			this->button2->Text = L"<=";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 34, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->txtDisplay->Size = System::Drawing::Size(318, 59);
			this->txtDisplay->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(94, 92);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 76);
			this->button3->TabIndex = 3;
			this->button3->Text = L"C";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(175, 92);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 76);
			this->button4->TabIndex = 4;
			this->button4->Text = L"CE";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(94, 174);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 76);
			this->button5->TabIndex = 5;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(255, 92);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 76);
			this->button6->TabIndex = 6;
			this->button6->Text = L"+/-";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(12, 174);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 76);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(174, 174);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 76);
			this->button8->TabIndex = 8;
			this->button8->Text = L"9";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(256, 174);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 76);
			this->button9->TabIndex = 9;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(13, 256);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 76);
			this->button10->TabIndex = 10;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(255, 256);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 76);
			this->button11->TabIndex = 11;
			this->button11->Text = L"-";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(175, 256);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 76);
			this->button12->TabIndex = 12;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(93, 256);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 76);
			this->button13->TabIndex = 13;
			this->button13->Text = L"5";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(255, 420);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 76);
			this->button16->TabIndex = 17;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(174, 420);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 76);
			this->button17->TabIndex = 18;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(94, 420);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 76);
			this->button18->TabIndex = 19;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(13, 420);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 76);
			this->button19->TabIndex = 20;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(256, 338);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 76);
			this->button20->TabIndex = 21;
			this->button20->Text = L"*";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(175, 338);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 76);
			this->button21->TabIndex = 22;
			this->button21->Text = L"3";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(94, 338);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 76);
			this->button22->TabIndex = 23;
			this->button22->Text = L"2";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(12, 338);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 76);
			this->button23->TabIndex = 24;
			this->button23->Text = L"1";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 509);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Calculator Example S.A.";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double firstNum, secondNum, answer;
		String^ iop;

		private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {
			Button^ numb = safe_cast<Button^>(sender);
			if(txtDisplay->Text == "0"){ txtDisplay->Text = numb->Text;
			} else { txtDisplay->Text = txtDisplay->Text + numb->Text; }
		}
};
}

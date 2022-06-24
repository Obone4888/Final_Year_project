#pragma once

#include "MyForm1.h"
#include "TCP_functions.h"

namespace ClientToolGUI {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Button_window
	/// </summary>
	public ref class Button_window : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		Button_window(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Button_window(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Button_window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Good_Packet1;
	private: System::Windows::Forms::Button^ Good_Packet2;



	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ Good_Packet3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ How_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button6;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Button_window::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Good_Packet1 = (gcnew System::Windows::Forms::Button());
			this->Good_Packet2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Good_Packet3 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->How_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(467, 370);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Next Page";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Button_window::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(11, 370);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Previous Page";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Button_window::button2_Click);
			// 
			// Good_Packet1
			// 
			this->Good_Packet1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Good_Packet1->ForeColor = System::Drawing::Color::Green;
			this->Good_Packet1->Location = System::Drawing::Point(11, 34);
			this->Good_Packet1->Name = L"Good_Packet1";
			this->Good_Packet1->Size = System::Drawing::Size(123, 54);
			this->Good_Packet1->TabIndex = 2;
			this->Good_Packet1->Text = L"Click Me button 1";
			this->Good_Packet1->UseVisualStyleBackColor = true;
			this->Good_Packet1->Click += gcnew System::EventHandler(this, &Button_window::button3_Click);
			// 
			// Good_Packet2
			// 
			this->Good_Packet2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Good_Packet2->ForeColor = System::Drawing::Color::Green;
			this->Good_Packet2->Location = System::Drawing::Point(11, 126);
			this->Good_Packet2->Name = L"Good_Packet2";
			this->Good_Packet2->Size = System::Drawing::Size(123, 61);
			this->Good_Packet2->TabIndex = 4;
			this->Good_Packet2->Text = L"Click Me button 2";
			this->Good_Packet2->UseVisualStyleBackColor = true;
			this->Good_Packet2->Click += gcnew System::EventHandler(this, &Button_window::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(318, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(221, 340);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Button_window::richTextBox1_TextChanged);
			// 
			// Good_Packet3
			// 
			this->Good_Packet3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Good_Packet3->ForeColor = System::Drawing::Color::Green;
			this->Good_Packet3->Location = System::Drawing::Point(11, 227);
			this->Good_Packet3->Name = L"Good_Packet3";
			this->Good_Packet3->Size = System::Drawing::Size(123, 55);
			this->Good_Packet3->TabIndex = 6;
			this->Good_Packet3->Text = L"Click Me button 3";
			this->Good_Packet3->UseVisualStyleBackColor = true;
			this->Good_Packet3->Click += gcnew System::EventHandler(this, &Button_window::button5_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(192, 34);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 54);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Click Me button 1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Button_window::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(192, 126);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 61);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Click Me button 2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Button_window::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Maroon;
			this->button5->Location = System::Drawing::Point(192, 227);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 55);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Click Me button 3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Button_window::button5_Click_1);
			// 
			// How_button
			// 
			this->How_button->Location = System::Drawing::Point(211, 348);
			this->How_button->Name = L"How_button";
			this->How_button->Size = System::Drawing::Size(101, 45);
			this->How_button->TabIndex = 10;
			this->How_button->Text = L"HOW\?";
			this->How_button->UseVisualStyleBackColor = true;
			this->How_button->Click += gcnew System::EventHandler(this, &Button_window::How_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(11, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 22);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Good Packets";
			this->label1->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(188, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 22);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Bad Packets";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DarkRed;
			this->button6->Location = System::Drawing::Point(211, 288);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 33);
			this->button6->TabIndex = 13;
			this->button6->Text = L"SQL Injection \?";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Button_window::button6_Click);
			// 
			// Button_window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 404);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->How_button);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Good_Packet3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->Good_Packet2);
			this->Controls->Add(this->Good_Packet1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Button_window";
			this->Text = L"Button_window";
			this->Load += gcnew System::EventHandler(this, &Button_window::Button_window_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button_window_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm1^ object = gcnew MyForm1(this);
		object->ShowDialog();
	}
		   
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		funcs calling;
		richTextBox1->Text = "";
		string packet = "SELECT Country_Name FROM Country_population;";
		string returned = calling.send_to_server(packet);
		String^ returnPacket = gcnew String(returned.c_str());	
		MessageBox::Show("The packet sent is, SELECT Country_Name FROM Country_population;");
		richTextBox1->Text = returnPacket + "\r\nThis response from the server is telling you that your packet was accepted by the rules of the firewall this is becasue the packet was accpted. Returning your data. Try another";
	
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		funcs calling;
		richTextBox1->Text = "";
		string packet = "SELECT Country_Name, Population FROM	Country_population;";
		string returned = calling.send_to_server(packet);
		String^ returnPacket = gcnew String(returned.c_str());
		MessageBox::Show("The packet sent is, SELECT Country_Name, Population FROM	Country_population;");
		richTextBox1->Text = returnPacket + "\r\nThis response from the server is telling you that your packet was accepted by the rules of the firewall this is because the packet was accepted. Returning your data. Try another";

	}
	
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		funcs calling;
		richTextBox1->Text = "";
		string packet = "SELECT ID, Country_Name FROM Country_population;";
		string returned = calling.send_to_server(packet);
		String^ returnPacket = gcnew String(returned.c_str());
		MessageBox::Show("The packet sent is, SELECT ID, Country_Name FROM Country_population;");
		richTextBox1->Text = returnPacket + "\r\nThis response from the server is telling you that your packet was accepted by the rules of the firewall this is because the packet was accepted. Returning your data. Try another";
	}
	private: System::Void How_button_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("When you click the buttons they send a packet to the server.\r\n This is done with what is called TCP (Transmission Control Protocol) it uses IP addresses (Internet Protocol) to target the servers location\r\n A Server uses a port to know where a user(Client) can connect");
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		funcs calling;
		richTextBox1->Text = "";
		string packet = "Say Hi to the server";
		string returned = calling.send_to_server(packet);
		String^ returnPacket = gcnew String(returned.c_str());
		MessageBox::Show("The packet sent is, Say Hi to the server");
		richTextBox1->Text = returnPacket + "\r\nThis response from the server is telling you that your packet was not accepted as it does not match the rules of the firewall as such was rejected. Try another";
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		funcs calling;
		richTextBox1->Text = "";
		string packet = "SELECT ID, Country_Name WITH Country_population;";
		string returned = calling.send_to_server(packet);
		String^ returnPacket = gcnew String(returned.c_str());
		MessageBox::Show("The packet sent is, SELECT ID, Country_Name WITH Country_population;");
		richTextBox1->Text = returnPacket + "\r\nThis response from the server is telling you that your packet was not accepted as it does not match the rules of the firewall as such was rejected, this packet had incorrect syntax and as such it could be a malicious packet as such a firewall would want to stop anything that is not perfect and 100% accurate. Try another";
	}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		funcs calling;
		richTextBox1->Text = "";
		string packet = "SELECT Country_Name, Predicted_population FROM	Country_population UNION (SELECT 1,2,3 FROM dual);";// check SQl injection example
		string returned = calling.send_to_server(packet);
		String^ returnPacket = gcnew String(returned.c_str());
		MessageBox::Show("The packet sent is, SELECT Country_Name, Predicted_population FROM	Country_population UNION (SELECT 1,2,3 FROM dual);\r\n This code is an example of SQL injection that can be used in some circumstance with SQL Databases");
		richTextBox1->Text = returnPacket + "\r\nThis response from the server is telling you that your packet was not accepted by the firewall and does not see this code as a part of its rules and as such denies you access to the database and as such does not send back data that needs to be private.";
	}	
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("An SQL Injection utilizes a vulnerability in an SQL database by using code such as UNION. This often happens with websites that use a search function for products and do not have adequate security, when querying a database with a table that have other tables connected to them with different relationships. The use of the UNION word can sometimes be used to access these non-public tables.");
}
};
}

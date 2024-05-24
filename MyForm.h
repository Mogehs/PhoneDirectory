#pragma once
#include <msclr\marshal_cppstd.h>
#include "PhoneBook.h"
#include <string>
namespace PhoneDirectory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	PhoneBook* book = new PhoneBook();
	Contact newContact;
	Contact updatedContact;
	
	
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ firstText;
	private: System::Windows::Forms::TextBox^ lastText;
	private: System::Windows::Forms::TextBox^ numberText;
	private: System::Windows::Forms::TextBox^ homeText;
	private: System::Windows::Forms::TextBox^ workText;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBoxContacts;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ searchText;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ searchText2;
	private: System::Windows::Forms::Button^ button7;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->firstText = (gcnew System::Windows::Forms::TextBox());
			this->lastText = (gcnew System::Windows::Forms::TextBox());
			this->numberText = (gcnew System::Windows::Forms::TextBox());
			this->homeText = (gcnew System::Windows::Forms::TextBox());
			this->workText = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBoxContacts = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->searchText = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->searchText2 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Mobile Number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Home Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Work Number";
			// 
			// firstText
			// 
			this->firstText->Location = System::Drawing::Point(197, 23);
			this->firstText->Name = L"firstText";
			this->firstText->Size = System::Drawing::Size(335, 26);
			this->firstText->TabIndex = 5;
			// 
			// lastText
			// 
			this->lastText->Location = System::Drawing::Point(197, 89);
			this->lastText->Name = L"lastText";
			this->lastText->Size = System::Drawing::Size(335, 26);
			this->lastText->TabIndex = 6;
			// 
			// numberText
			// 
			this->numberText->Location = System::Drawing::Point(197, 158);
			this->numberText->Name = L"numberText";
			this->numberText->Size = System::Drawing::Size(335, 26);
			this->numberText->TabIndex = 7;
			// 
			// homeText
			// 
			this->homeText->Location = System::Drawing::Point(197, 226);
			this->homeText->Name = L"homeText";
			this->homeText->Size = System::Drawing::Size(335, 26);
			this->homeText->TabIndex = 8;
			// 
			// workText
			// 
			this->workText->Location = System::Drawing::Point(197, 299);
			this->workText->Name = L"workText";
			this->workText->Size = System::Drawing::Size(335, 26);
			this->workText->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(54, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(238, 33);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// listBoxContacts
			// 
			this->listBoxContacts->FormattingEnabled = true;
			this->listBoxContacts->ItemHeight = 20;
			this->listBoxContacts->Location = System::Drawing::Point(630, 23);
			this->listBoxContacts->Name = L"listBoxContacts";
			this->listBoxContacts->Size = System::Drawing::Size(453, 184);
			this->listBoxContacts->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(316, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(238, 33);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(845, 501);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(238, 33);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// searchText
			// 
			this->searchText->Location = System::Drawing::Point(630, 238);
			this->searchText->Name = L"searchText";
			this->searchText->Size = System::Drawing::Size(335, 26);
			this->searchText->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(586, 361);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(238, 33);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Edit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(845, 296);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(238, 33);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Get Contact";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// searchText2
			// 
			this->searchText2->Location = System::Drawing::Point(630, 457);
			this->searchText2->Name = L"searchText2";
			this->searchText2->Size = System::Drawing::Size(335, 26);
			this->searchText2->TabIndex = 17;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(89, 501);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(238, 33);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Reset";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(1095, 546);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->searchText2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->searchText);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBoxContacts);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->workText);
			this->Controls->Add(this->homeText);
			this->Controls->Add(this->numberText);
			this->Controls->Add(this->lastText);
			this->Controls->Add(this->firstText);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void updateContactsListBox()
		{	
			listBoxContacts->Items->Clear();
			Node* temp = book->getHead();
			while (temp != nullptr)
			{
				std::string contactInfo = temp->contact.firstName + "     " + temp->contact.lastName + "      " + temp->contact.mobileNumber + "     " + temp->contact.homeNumber + "       " + temp->contact.workNumber;
				listBoxContacts->Items->Add(gcnew String(contactInfo.c_str()));
				temp = temp->next;
			}
			firstText->Text = nullptr;
			lastText->Text = nullptr;
			numberText->Text = nullptr;
			homeText->Text = nullptr;
			workText->Text = nullptr;
		}
		void searchContactList(std::string& searchTerm) {
			listBoxContacts->Items->Clear();
			Node* temp = book->getHead();
			bool found = false;

			while (temp != nullptr) {
				if (temp->contact.firstName == searchTerm ||
					temp->contact.lastName == searchTerm ||
					temp->contact.mobileNumber == searchTerm ||
					temp->contact.homeNumber == searchTerm ||
					temp->contact.workNumber == searchTerm) {

					found = true;
					
					std::string contactInfo = temp->contact.firstName + "     " + temp->contact.lastName + "      " + temp->contact.mobileNumber + "     " + temp->contact.homeNumber + "       " + temp->contact.workNumber;
					listBoxContacts->Items->Add(gcnew String(contactInfo.c_str()));
				}
				temp = temp->next;
			}

			if (!found) {
				
				listBoxContacts->Items->Add("No contacts found with the name " + gcnew String(searchTerm.c_str()));
			}

		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	
		msclr::interop::marshal_context context;
		newContact.firstName =  context.marshal_as<string>(firstText->Text);
		newContact.lastName =  context.marshal_as<string>(lastText->Text);
		newContact.mobileNumber = context.marshal_as<string>(numberText->Text);
		newContact.homeNumber =  context.marshal_as<string>(homeText->Text);
		newContact.workNumber = context.marshal_as<string>(workText->Text);

		book->addContact(newContact);
		updateContactsListBox();

		
	}
		  
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	msclr::interop::marshal_context context;
	string search = context.marshal_as<string>(searchText->Text);
	if (book->searchContacts(search) == 1) {
		firstText->Text = msclr::interop::marshal_as<System::String^>(newContact.firstName);
		book->deleteContact(search);
	};
	

	updateContactsListBox();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	string searchName = context.marshal_as<string>(searchText2->Text);
	Node* temp = book->getHead();
	do{
		if (book->searchContacts(searchName) == 1) {
			searchContactList(searchName);
			
		};
		temp = temp->next;
	} while (temp!=NULL);
	
	

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;

	string firstName = context.marshal_as<string>(firstText->Text);
	string lastName = context.marshal_as<string>(lastText->Text);
	string mobileNumber = context.marshal_as<string>(numberText->Text);
	string homeNumber = context.marshal_as<string>(homeText->Text);
	string workNumber = context.marshal_as<string>(workText->Text);
	
	updatedContact.firstName = context.marshal_as<string>(firstText->Text);
	updatedContact.lastName = context.marshal_as<string>(lastText->Text);
	updatedContact.mobileNumber = context.marshal_as<string>(numberText->Text);
	updatedContact.homeNumber = context.marshal_as<string>(homeText->Text);
	updatedContact.workNumber = context.marshal_as<string>(workText->Text);

	book->editContact(firstName, updatedContact);
	book->editContact(lastName, updatedContact);
	book->editContact(mobileNumber, updatedContact);
	book->editContact(homeNumber, updatedContact);
	book->editContact(workNumber, updatedContact);
	updateContactsListBox();
	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	string search = context.marshal_as<string>(searchText->Text);
	if (book->searchContacts(search) == 1) {
		firstText->Text = msclr::interop::marshal_as<System::String^>(newContact.firstName);
		lastText->Text = msclr::interop::marshal_as<System::String^>(newContact.lastName);
		numberText->Text = msclr::interop::marshal_as<System::String^>(newContact.mobileNumber);
		homeText->Text = msclr::interop::marshal_as<System::String^>(newContact.homeNumber);
		workText->Text = msclr::interop::marshal_as<System::String^>(newContact.workNumber);

	};
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	updateContactsListBox();
}
};
}

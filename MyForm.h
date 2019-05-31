#pragma once


#include <string>  
#include <string.h>
#include <fstream>
#include <clocale>
#include <iostream>
#include <string>
#include "Music.h"
#include <msclr/marshal_cppstd.h>



namespace Music {

	Music_list list_1;

	using namespace System;

	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  browse_file;
	private: System::Windows::Forms::DataGridView^  list_show_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ammount;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tickets_left;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Time;

	private: System::Windows::Forms::SaveFileDialog^  save_file_dialog;

	private: System::Windows::Forms::Button^  save_file_button;
	private: System::Windows::Forms::TextBox^  name_box;

	private: System::Windows::Forms::Button^  search_name_button;

	private: System::Windows::Forms::DataGridView^  search_show_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ammount1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tickets_left1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Time1;

	private: System::Windows::Forms::TextBox^  Name_add;
	private: System::Windows::Forms::TextBox^  Singer_add;

	private: System::Windows::Forms::TextBox^  Quality_add;
	private: System::Windows::Forms::TextBox^  Likes_add;

	private: System::Windows::Forms::Button^  add_song_button;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  singer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  quality;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  likes;
	
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  singer1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  quality1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  likes1;
	

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;





#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->browse_file = (gcnew System::Windows::Forms::Button());
			this->list_show_table = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->singer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quality = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->likes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->save_file_dialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->save_file_button = (gcnew System::Windows::Forms::Button());
			this->name_box = (gcnew System::Windows::Forms::TextBox());
			this->search_name_button = (gcnew System::Windows::Forms::Button());
			this->search_show_table = (gcnew System::Windows::Forms::DataGridView());
			this->name1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->singer1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quality1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->likes1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_add = (gcnew System::Windows::Forms::TextBox());
			this->Singer_add = (gcnew System::Windows::Forms::TextBox());
			this->Quality_add = (gcnew System::Windows::Forms::TextBox());
			this->Likes_add = (gcnew System::Windows::Forms::TextBox());
			this->add_song_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->list_show_table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_show_table))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// browse_file
			// 
			this->browse_file->BackColor = System::Drawing::Color::LightSalmon;
			this->browse_file->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->browse_file->Location = System::Drawing::Point(9, 38);
			this->browse_file->Name = L"browse_file";
			this->browse_file->Size = System::Drawing::Size(142, 116);
			this->browse_file->TabIndex = 1;
			this->browse_file->Text = L"Browse the file";
			this->browse_file->UseVisualStyleBackColor = false;
			this->browse_file->Click += gcnew System::EventHandler(this, &MyForm::browse_file_Click);
			// 
			// list_show_table
			// 
			this->list_show_table->AllowUserToAddRows = false;
			this->list_show_table->AllowUserToDeleteRows = false;
			this->list_show_table->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::PaleGreen;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Tomato;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->list_show_table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->list_show_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->list_show_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->name,
					this->singer, this->quality, this->likes
			});
			this->list_show_table->Location = System::Drawing::Point(158, 12);
			this->list_show_table->Name = L"list_show_table";
			this->list_show_table->ReadOnly = true;
			this->list_show_table->Size = System::Drawing::Size(441, 165);
			this->list_show_table->TabIndex = 4;
			this->list_show_table->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::list_show_table_CellContentClick);
			// 
			// name
			// 
			this->name->HeaderText = L"Name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// singer
			// 
			this->singer->HeaderText = L"Singer";
			this->singer->Name = L"singer";
			this->singer->ReadOnly = true;
			// 
			// quality
			// 
			this->quality->HeaderText = L"Quality";
			this->quality->Name = L"quality";
			this->quality->ReadOnly = true;
			// 
			// likes
			// 
			this->likes->HeaderText = L"Likes";
			this->likes->Name = L"likes";
			this->likes->ReadOnly = true;
			// 
			// save_file_button
			// 
			this->save_file_button->BackColor = System::Drawing::Color::Aquamarine;
			this->save_file_button->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_file_button->Location = System::Drawing::Point(591, 547);
			this->save_file_button->Name = L"save_file_button";
			this->save_file_button->Size = System::Drawing::Size(141, 110);
			this->save_file_button->TabIndex = 5;
			this->save_file_button->Text = L"Save the file";
			this->save_file_button->UseVisualStyleBackColor = false;
			this->save_file_button->Click += gcnew System::EventHandler(this, &MyForm::save_file_button_Click);
			// 
			// name_box
			// 
			this->name_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->name_box->Location = System::Drawing::Point(94, 196);
			this->name_box->Multiline = true;
			this->name_box->Name = L"name_box";
			this->name_box->Size = System::Drawing::Size(196, 33);
			this->name_box->TabIndex = 6;
			this->name_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->name_box->TextChanged += gcnew System::EventHandler(this, &MyForm::name_box_TextChanged);
			// 
			// search_name_button
			// 
			this->search_name_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->search_name_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->search_name_button->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_name_button->Location = System::Drawing::Point(94, 231);
			this->search_name_button->Name = L"search_name_button";
			this->search_name_button->Size = System::Drawing::Size(174, 39);
			this->search_name_button->TabIndex = 7;
			this->search_name_button->Text = L"Search by name";
			this->search_name_button->UseVisualStyleBackColor = false;
			this->search_name_button->Click += gcnew System::EventHandler(this, &MyForm::search_name_button_Click);
			// 
			// search_show_table
			// 
			this->search_show_table->AllowUserToAddRows = false;
			this->search_show_table->AllowUserToDeleteRows = false;
			this->search_show_table->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->search_show_table->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedHorizontal;
			this->search_show_table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->search_show_table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->search_show_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->search_show_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->name1,
					this->singer1, this->quality1, this->likes1
			});
			this->search_show_table->GridColor = System::Drawing::Color::Maroon;
			this->search_show_table->Location = System::Drawing::Point(168, 276);
			this->search_show_table->Name = L"search_show_table";
			this->search_show_table->ReadOnly = true;
			this->search_show_table->Size = System::Drawing::Size(443, 203);
			this->search_show_table->TabIndex = 8;
			this->search_show_table->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::search_show_table_CellContentClick);
			// 
			// name1
			// 
			this->name1->HeaderText = L"Name";
			this->name1->Name = L"name1";
			this->name1->ReadOnly = true;
			// 
			// singer1
			// 
			this->singer1->HeaderText = L"Singer";
			this->singer1->Name = L"singer1";
			this->singer1->ReadOnly = true;
			// 
			// quality1
			// 
			this->quality1->HeaderText = L"Quality";
			this->quality1->Name = L"quality1";
			this->quality1->ReadOnly = true;
			// 
			// likes1
			// 
			this->likes1->HeaderText = L"Likes";
			this->likes1->Name = L"likes1";
			this->likes1->ReadOnly = true;
			// 
			// Name_add
			// 
			this->Name_add->Location = System::Drawing::Point(266, 485);
			this->Name_add->Name = L"Name_add";
			this->Name_add->Size = System::Drawing::Size(195, 24);
			this->Name_add->TabIndex = 9;
			this->Name_add->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Name_add->TextChanged += gcnew System::EventHandler(this, &MyForm::Name_add_TextChanged);
			// 
			// Singer_add
			// 
			this->Singer_add->Location = System::Drawing::Point(266, 515);
			this->Singer_add->Name = L"Singer_add";
			this->Singer_add->Size = System::Drawing::Size(149, 24);
			this->Singer_add->TabIndex = 10;
			this->Singer_add->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Quality_add
			// 
			this->Quality_add->Location = System::Drawing::Point(266, 545);
			this->Quality_add->Name = L"Quality_add";
			this->Quality_add->Size = System::Drawing::Size(151, 24);
			this->Quality_add->TabIndex = 11;
			this->Quality_add->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Likes_add
			// 
			this->Likes_add->Location = System::Drawing::Point(266, 575);
			this->Likes_add->Name = L"Likes_add";
			this->Likes_add->Size = System::Drawing::Size(195, 24);
			this->Likes_add->TabIndex = 12;
			this->Likes_add->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// add_song_button
			// 
			this->add_song_button->BackColor = System::Drawing::Color::Coral;
			this->add_song_button->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_song_button->Location = System::Drawing::Point(96, 607);
			this->add_song_button->Name = L"add_song_button";
			this->add_song_button->Size = System::Drawing::Size(365, 48);
			this->add_song_button->TabIndex = 13;
			this->add_song_button->Text = L"Add song";
			this->add_song_button->UseVisualStyleBackColor = false;
			this->add_song_button->Click += gcnew System::EventHandler(this, &MyForm::add_song_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(153, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 25);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(93, 485);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 22);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(93, 515);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 22);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Singer";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(93, 547);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 22);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Quality";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(93, 577);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 22);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Likes";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(756, 685);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->add_song_button);
			this->Controls->Add(this->Likes_add);
			this->Controls->Add(this->Quality_add);
			this->Controls->Add(this->Singer_add);
			this->Controls->Add(this->Name_add);
			this->Controls->Add(this->search_show_table);
			this->Controls->Add(this->search_name_button);
			this->Controls->Add(this->name_box);
			this->Controls->Add(this->save_file_button);
			this->Controls->Add(this->list_show_table);
			this->Controls->Add(this->browse_file);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Playlist";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->list_show_table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_show_table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void add_to_table(System::Windows::Forms::DataGridView^ table, Song c) {

		String^ song_name = msclr::interop::marshal_as<String^>(c.name);
		String^ song_singer = msclr::interop::marshal_as<String^>(c.singer);
		String^ song_quality = msclr::interop::marshal_as<String^>(c.quality);
		String^ song_likes = msclr::interop::marshal_as<String^>(std::to_string(c.likes));
		

		table->Rows->Add(song_name, song_singer, song_quality,
			song_likes);
	}


	private: System::Void redraw_list() {

		list_show_table->Rows->Clear();

		std::stringstream oss;
		oss << list_1;
		char str[128];

		while (oss.getline(str, 128))
		{
			Song c;
			c.get_info(str);
			add_to_table(list_show_table, c);
		}
	}


	private: System::Void browse_file_Click(System::Object^  sender, System::EventArgs^  e)
	{
		openFileDialog1->ShowDialog();
		std::string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
		std::ifstream fin(filename);

		if (!fin.is_open() && filename != "")
		{
			MessageBox::Show("No file selected", "File selecting warning");
		}

		else if (filename != "")
		{
			while (!fin.eof())
			{
				fin >> list_1;
			}

		}
		fin.close();
		redraw_list();

	}


	private: System::Void search_name_button_Click(System::Object^  sender, System::EventArgs^  e) {

		search_show_table->Rows->Clear();
		std::string concert_name = msclr::interop::marshal_as<std::string>(name_box->Text);

		if (concert_name.empty() == true)
		{
			MessageBox::Show("Fill in the name field", "Name inputing warning");
		}

		else
		{

			std::vector<Song> found_concerts = list_1.find_first_name(concert_name);

			if (!found_concerts.empty())
			{
				display_founded_concerts(found_concerts);
				name_box->Text = "";
			}

			else
			{
				MessageBox::Show("No concerts with this name", "Empty search");
			}
		}
	}



	
	private: System::Void save_file_button_Click(System::Object^  sender, System::EventArgs^  e) {

		save_file_dialog->ShowDialog();
		std::string filename = msclr::interop::marshal_as<std::string>(save_file_dialog->FileName);
		std::ofstream fout(filename);

		if (!fout.is_open() && filename != "")
		{
			MessageBox::Show("No file selected", "File chooshing warning");
		}

		else if (filename != "")
		{
			fout << list_1;
		}
		fout.close();
	}

	private: System::Void display_founded_concerts(std::vector<Song> f_list)
	{
		for (int i = 0; i < f_list.size(); i++)
		{
			add_to_table(search_show_table, f_list[i]);
		}
	}

	private: System::Void add_song_button_Click(System::Object^  sender, System::EventArgs^  e) {

		std::string concert_name = msclr::interop::marshal_as<std::string>(Name_add->Text);
		std::string concert_capacity = msclr::interop::marshal_as<std::string>(Singer_add->Text);
		std::string concert_left = msclr::interop::marshal_as<std::string>(Quality_add->Text);
		std::string concert_date = msclr::interop::marshal_as<std::string>(Likes_add->Text);

		if (concert_date == "" || concert_name == "" || concert_left == "" || concert_capacity == "")
		{
			MessageBox::Show("Fill in all the fields", "Inputing warning");
		}

		else
		{
			std::string final_info = concert_name + ";" + concert_capacity + ";" + concert_left + ";" + concert_date;

			list_1.add_song(final_info);

			Name_add->Text = "";
			Singer_add->Text = "";
			Quality_add->Text = "";
			Likes_add->Text = "";
			redraw_list();
		}
	}
	private: System::Void search_show_table_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void name_box_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Name_add_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void date_time_picker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void list_show_table_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};

}

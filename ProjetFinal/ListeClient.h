#pragma once

namespace Interface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description r�sum�e de ListeClient
	/// </summary>
	public ref class ListeClient : public System::Windows::Forms::Form
	{
	public:
		ListeClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonactualiser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_client;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_prenom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_date_naissance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_date_premier_achat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_adresse_email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client_numero_telephone;
	public:


	private:
		Point PanelMouseDownLocation;


	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~ListeClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelmove1;
	protected:
	private: System::Windows::Forms::Button^ X;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelmove1 = (gcnew System::Windows::Forms::Panel());
			this->X = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonactualiser = (gcnew System::Windows::Forms::Button());
			this->id_client = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_prenom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_date_naissance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_date_premier_achat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_adresse_email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client_numero_telephone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelmove1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelmove1
			// 
			this->panelmove1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panelmove1->Controls->Add(this->X);
			this->panelmove1->Location = System::Drawing::Point(0, 0);
			this->panelmove1->Margin = System::Windows::Forms::Padding(2);
			this->panelmove1->Name = L"panelmove1";
			this->panelmove1->Size = System::Drawing::Size(793, 32);
			this->panelmove1->TabIndex = 15;
			this->panelmove1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ListeClient::panelmove1_MouseDown);
			this->panelmove1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ListeClient::panelmove1_MouseMove);
			// 
			// X
			// 
			this->X->BackColor = System::Drawing::Color::White;
			this->X->FlatAppearance->BorderSize = 0;
			this->X->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->X->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->X->Location = System::Drawing::Point(765, 0);
			this->X->Margin = System::Windows::Forms::Padding(2);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(28, 32);
			this->X->TabIndex = 1;
			this->X->Text = L"X";
			this->X->UseVisualStyleBackColor = false;
			this->X->Click += gcnew System::EventHandler(this, &ListeClient::X_Click);
			this->X->MouseEnter += gcnew System::EventHandler(this, &ListeClient::X_MouseEnter);
			this->X->MouseLeave += gcnew System::EventHandler(this, &ListeClient::X_MouseLeave);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->id_client,
					this->client_nom, this->client_prenom, this->client_date_naissance, this->client_date_premier_achat, this->client_adresse_email,
					this->client_numero_telephone
			});
			this->dataGridView1->Location = System::Drawing::Point(11, 126);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(771, 341);
			this->dataGridView1->TabIndex = 16;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ListeClient::dataGridView1_CellContentClick);
			// 
			// buttonactualiser
			// 
			this->buttonactualiser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonactualiser->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonactualiser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(154)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->buttonactualiser->Location = System::Drawing::Point(305, 54);
			this->buttonactualiser->Margin = System::Windows::Forms::Padding(2);
			this->buttonactualiser->Name = L"buttonactualiser";
			this->buttonactualiser->Size = System::Drawing::Size(127, 41);
			this->buttonactualiser->TabIndex = 24;
			this->buttonactualiser->Text = L"Actualiser";
			this->buttonactualiser->UseVisualStyleBackColor = true;
			this->buttonactualiser->Click += gcnew System::EventHandler(this, &ListeClient::buttonactualiser_Click);
			// 
			// id_client
			// 
			this->id_client->HeaderText = L"id_client";
			this->id_client->Name = L"id_client";
			// 
			// client_nom
			// 
			this->client_nom->HeaderText = L"client_nom";
			this->client_nom->Name = L"client_nom";
			// 
			// client_prenom
			// 
			this->client_prenom->HeaderText = L"client_prenom";
			this->client_prenom->Name = L"client_prenom";
			// 
			// client_date_naissance
			// 
			this->client_date_naissance->HeaderText = L"client_date_naissance";
			this->client_date_naissance->Name = L"client_date_naissance";
			// 
			// client_date_premier_achat
			// 
			this->client_date_premier_achat->HeaderText = L"client_date_premier_achat";
			this->client_date_premier_achat->Name = L"client_date_premier_achat";
			// 
			// client_adresse_email
			// 
			this->client_adresse_email->HeaderText = L"client_adresse_email";
			this->client_adresse_email->Name = L"client_adresse_email";
			// 
			// client_numero_telephone
			// 
			this->client_numero_telephone->HeaderText = L"client_numero_telephone";
			this->client_numero_telephone->Name = L"client_numero_telephone";
			// 
			// ListeClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->ClientSize = System::Drawing::Size(793, 478);
			this->Controls->Add(this->buttonactualiser);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panelmove1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ListeClient";
			this->Text = L"ListeClient";
			this->Load += gcnew System::EventHandler(this, &ListeClient::ListeClient_Load);
			this->panelmove1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void X_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void X_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->X->BackColor = Color::FromArgb(221, 25, 23);
	}
	private: System::Void X_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->X->BackColor = Color::FromArgb(255, 255, 255);
	}
		   //Drag and move / panelmove1

	private: void dragFormMouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			PanelMouseDownLocation = e->Location;
	}
	private: void dragFormMouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			ListeClient::Left += e->X - PanelMouseDownLocation.X;
			ListeClient::Top += e->Y - PanelMouseDownLocation.Y;
		}
	}

	private: System::Void panelmove1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		dragFormMouseDown(sender, e);
	}
	private: System::Void panelmove1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		dragFormMouseMove(sender, e);
	}

	private: System::Void buttonactualiser_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ constring = "Data Source=DESKTOP-FB31OJA;Initial Catalog=PROJET_POO2;User ID=tonton;Password=1999";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select * from Client ", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	
	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{
		dataGridView1->Rows->Add(myReader[0],myReader[1],myReader[2],myReader[3],myReader[4],myReader[5],myReader[6]);
	}
	conDataBase->Close();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void ListeClient_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=DESKTOP-FB31OJA;Initial Catalog=PROJET_POO2;User ID=tonton;Password=1999";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("select * from Client ", conDataBase);
	conDataBase->Open();
	SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
	
	dataGridView1->Rows->Clear();
	while (myReader->Read())
	{
		dataGridView1->Rows->Add(myReader[0],myReader[1],myReader[2],myReader[3],myReader[4],myReader[5],myReader[6]);
	}
	conDataBase->Close();
}
};
}

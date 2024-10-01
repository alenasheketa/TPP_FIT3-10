#pragma once
using namespace System::Data::OleDb;
namespace lab8_tpp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            
        }
    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    protected:





    private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Button^ button_delete;
    private: System::Windows::Forms::Button^ button_load;
    private: System::Windows::Forms::Button^ button_update;
    private: System::Windows::Forms::Button^ button_add;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
    private:
       
        System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
        
        void InitializeComponent(void)
        {
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->button_delete = (gcnew System::Windows::Forms::Button());
            this->button_load = (gcnew System::Windows::Forms::Button());
            this->button_update = (gcnew System::Windows::Forms::Button());
            this->button_add = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->menuStrip1->SuspendLayout();
            this->groupBox1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // menuStrip1
            // 
            this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->проПрограмуToolStripMenuItem,
                    this->вихідToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(921, 33);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // проПрограмуToolStripMenuItem
            // 
            this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
            this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(149, 29);
            this->проПрограмуToolStripMenuItem->Text = L"Про програму";
            this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
            // 
            // вихідToolStripMenuItem
            // 
            this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
            this->вихідToolStripMenuItem->Size = System::Drawing::Size(70, 29);
            this->вихідToolStripMenuItem->Text = L"Вихід";
            this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вихідToolStripMenuItem_Click);
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->button_delete);
            this->groupBox1->Controls->Add(this->button_load);
            this->groupBox1->Controls->Add(this->button_update);
            this->groupBox1->Controls->Add(this->button_add);
            this->groupBox1->Location = System::Drawing::Point(704, 56);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(190, 246);
            this->groupBox1->TabIndex = 1;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Дії";
            // 
            // button_delete
            // 
            this->button_delete->Location = System::Drawing::Point(13, 180);
            this->button_delete->Name = L"button_delete";
            this->button_delete->Size = System::Drawing::Size(151, 40);
            this->button_delete->TabIndex = 3;
            this->button_delete->Text = L"Видалити";
            this->button_delete->UseVisualStyleBackColor = true;
            this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
            // 
            // button_load
            // 
            this->button_load->Location = System::Drawing::Point(13, 133);
            this->button_load->Name = L"button_load";
            this->button_load->Size = System::Drawing::Size(151, 41);
            this->button_load->TabIndex = 2;
            this->button_load->Text = L"Завантажити";
            this->button_load->UseVisualStyleBackColor = true;
            this->button_load->Click += gcnew System::EventHandler(this, &MyForm::button_load_Click);
            // 
            // button_update
            // 
            this->button_update->Location = System::Drawing::Point(13, 83);
            this->button_update->Name = L"button_update";
            this->button_update->Size = System::Drawing::Size(151, 44);
            this->button_update->TabIndex = 1;
            this->button_update->Text = L"Оновити";
            this->button_update->UseVisualStyleBackColor = true;
            this->button_update->Click += gcnew System::EventHandler(this, &MyForm::button_update_Click);
            // 
            // button_add
            // 
            this->button_add->Location = System::Drawing::Point(13, 35);
            this->button_add->Name = L"button_add";
            this->button_add->Size = System::Drawing::Size(151, 42);
            this->button_add->TabIndex = 0;
            this->button_add->Text = L"Додати";
            this->button_add->UseVisualStyleBackColor = true;
            this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->Column1,
                    this->Column2, this->Column3, this->Column4
            });
            this->dataGridView1->Location = System::Drawing::Point(21, 56);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(640, 294);
            this->dataGridView1->TabIndex = 2;
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"Код";
            this->Column1->MinimumWidth = 8;
            this->Column1->Name = L"Column1";
            this->Column1->Width = 80;
            // 
            // Column2
            // 
            this->Column2->HeaderText = L"Назва ";
            this->Column2->MinimumWidth = 8;
            this->Column2->Name = L"Column2";
            this->Column2->Width = 150;
            // 
            // Column3
            // 
            this->Column3->HeaderText = L"Опис ";
            this->Column3->MinimumWidth = 8;
            this->Column3->Name = L"Column3";
            this->Column3->Width = 200;
            // 
            // Column4
            // 
            this->Column4->HeaderText = L"Ціна";
            this->Column4->MinimumWidth = 8;
            this->Column4->Name = L"Column4";
            this->Column4->Width = 150;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(921, 377);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MyForm";
            this->Text = L"Телекомунікаційні послуги";
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->groupBox1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView1->SelectedRows->Count != 1)
    {
        MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
        return;
    }
    int index = dataGridView1->SelectedRows[0]->Index;
    if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[3]->Value == nullptr) {
        MessageBox::Show("Не всі дані є", "Зверніть увагу");
        return;
    }
    String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
    String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
    String^ typ = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
    String^ cost = dataGridView1->Rows[index]->Cells[3]->Value->ToString();

    String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=DataBase8.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    dbConnection->Open();
    String^ query = "INSERT INTO [DataBase8] VALUES (" + id + ",'" + name + "','" + typ + "'," + cost + ")";
    OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

    if (dbCommand->ExecuteNonQuery() != 1)
        MessageBox::Show("Помилка у виконанні", "Помилка");
    else
        MessageBox::Show("Дані додані", "Ок");
    dbConnection->Close();

}
private: System::Void button_update_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView1->SelectedRows->Count != 1)
    {
        MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
        return;
    }
    int index = dataGridView1->SelectedRows[0]->Index;
    if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[3]->Value == nullptr) {
        MessageBox::Show("Не всі дані є", "Зверніть увагу");
        return;
    }
    String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
    String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
    String^ typ = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
    String^ cost = dataGridView1->Rows[index]->Cells[3]->Value->ToString();

    String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=DataBase8.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    dbConnection->Open();
    String^ query = "UPDATE [DataBase8] SET Назва='" + name + "', Опис='" + typ + "', Ціна=" + cost + " WHERE Код=" + id;
    OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

    if (dbCommand->ExecuteNonQuery() != 1)
        MessageBox::Show("Помилка у виконанні", "Помилка");
    else
        MessageBox::Show("Дані змінені", "Ок");
    dbConnection->Close();

}
private: System::Void button_load_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=DataBase8.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

    dbConnection->Open();
    String^ query = "SELECT * FROM [DataBase8]";
    OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
    OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

    if (dbReader->HasRows == false) {
        MessageBox::Show("Дані відсутні", "Помилка");
    }
    else {
        while (dbReader->Read())
            dataGridView1->Rows->Add(dbReader["Код"], dbReader["Назва"], dbReader["Опис"], dbReader["Ціна"]);

    }
    dbReader->Close();
    dbConnection->Close();
}
private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView1->SelectedRows->Count != 1)
    {
        MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
        return;
    }
    int index = dataGridView1->SelectedRows[0]->Index;
    if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[3]->Value == nullptr) {
        MessageBox::Show("Не всі дані є", "Зверніть увагу");
        return;
    }
    String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

    String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=DataBase8.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    dbConnection->Open();
    String^ query = "DELETE FROM [DataBase8] WHERE Код=" + id;
    OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

    if (dbCommand->ExecuteNonQuery() != 1)
        MessageBox::Show("Помилка у виконанні", "Помилка");
    else {
        MessageBox::Show("Дані видалені", "Ок");
        dataGridView1->Rows->RemoveAt(index);
    }
    dbConnection->Close();

}
private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("Програма створена студенткою ФІТ 3-10 Пацан Оленою", "Система для наданання телекомунікаційних послуг");
}
};
}

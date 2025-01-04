#pragma once

#include <cstdlib>
#include <ctime>

namespace RockPaperScissorsGame {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public enum class ensort { Paper = 1, Scissor = 2, Rock = 3 };

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            srand((unsigned)time(NULL)); // Seed for random number generation
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        // Game counters
        short CounterEqual = 0;
        short CounterComputerWins = 0;
        short CounterPlayerWins = 0;

        // UI components
        System::Windows::Forms::Button^ btnPaper;
        System::Windows::Forms::Button^ btnScissor;
        System::Windows::Forms::Button^ btnRock;
        System::Windows::Forms::Label^ lblResult;
        System::Windows::Forms::Label^ lblPlayerScore;
        System::Windows::Forms::Label^ lblComputerScore;
        System::Windows::Forms::Label^ lblTies;
        System::Windows::Forms::ListBox^ listBoxResults;
    private: System::Windows::Forms::Label^ label1;


        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->btnPaper = (gcnew System::Windows::Forms::Button());
            this->btnScissor = (gcnew System::Windows::Forms::Button());
            this->btnRock = (gcnew System::Windows::Forms::Button());
            this->lblResult = (gcnew System::Windows::Forms::Label());
            this->lblPlayerScore = (gcnew System::Windows::Forms::Label());
            this->lblComputerScore = (gcnew System::Windows::Forms::Label());
            this->lblTies = (gcnew System::Windows::Forms::Label());
            this->listBoxResults = (gcnew System::Windows::Forms::ListBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // btnPaper
            // 
            this->btnPaper->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->btnPaper->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnPaper->Location = System::Drawing::Point(50, 50);
            this->btnPaper->Name = L"btnPaper";
            this->btnPaper->Size = System::Drawing::Size(100, 50);
            this->btnPaper->TabIndex = 0;
            this->btnPaper->Text = L"Paper";
            this->btnPaper->UseVisualStyleBackColor = false;
            this->btnPaper->Click += gcnew System::EventHandler(this, &MyForm::btnPaper_Click);
            // 
            // btnScissor
            // 
            this->btnScissor->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->btnScissor->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnScissor->Location = System::Drawing::Point(200, 50);
            this->btnScissor->Name = L"btnScissor";
            this->btnScissor->Size = System::Drawing::Size(100, 50);
            this->btnScissor->TabIndex = 1;
            this->btnScissor->Text = L"Scissor";
            this->btnScissor->UseVisualStyleBackColor = false;
            this->btnScissor->Click += gcnew System::EventHandler(this, &MyForm::btnScissor_Click);
            // 
            // btnRock
            // 
            this->btnRock->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->btnRock->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnRock->Location = System::Drawing::Point(350, 50);
            this->btnRock->Name = L"btnRock";
            this->btnRock->Size = System::Drawing::Size(100, 50);
            this->btnRock->TabIndex = 2;
            this->btnRock->Text = L"Rock";
            this->btnRock->UseVisualStyleBackColor = false;
            this->btnRock->Click += gcnew System::EventHandler(this, &MyForm::btnRock_Click);
            // 
            // lblResult
            // 
            this->lblResult->Location = System::Drawing::Point(50, 120);
            this->lblResult->Name = L"lblResult";
            this->lblResult->Size = System::Drawing::Size(400, 25);
            this->lblResult->TabIndex = 3;
            this->lblResult->Text = L"Result will be displayed here.";
            // 
            // lblPlayerScore
            // 
            this->lblPlayerScore->BackColor = System::Drawing::Color::Green;
            this->lblPlayerScore->Location = System::Drawing::Point(12, 160);
            this->lblPlayerScore->Name = L"lblPlayerScore";
            this->lblPlayerScore->Size = System::Drawing::Size(108, 25);
            this->lblPlayerScore->TabIndex = 4;
            this->lblPlayerScore->Text = L"Player Wins: 0";
            // 
            // lblComputerScore
            // 
            this->lblComputerScore->BackColor = System::Drawing::Color::Red;
            this->lblComputerScore->Location = System::Drawing::Point(183, 160);
            this->lblComputerScore->Name = L"lblComputerScore";
            this->lblComputerScore->Size = System::Drawing::Size(139, 25);
            this->lblComputerScore->TabIndex = 5;
            this->lblComputerScore->Text = L"Computer Wins: 0";
            // 
            // lblTies
            // 
            this->lblTies->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->lblTies->ForeColor = System::Drawing::Color::Black;
            this->lblTies->Location = System::Drawing::Point(369, 160);
            this->lblTies->Name = L"lblTies";
            this->lblTies->Size = System::Drawing::Size(81, 25);
            this->lblTies->TabIndex = 6;
            this->lblTies->Text = L"Ties: 0";
            // 
            // listBoxResults
            // 
            this->listBoxResults->ItemHeight = 16;
            this->listBoxResults->Location = System::Drawing::Point(50, 250);
            this->listBoxResults->Name = L"listBoxResults";
            this->listBoxResults->Size = System::Drawing::Size(400, 100);
            this->listBoxResults->TabIndex = 7;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(218, 216);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(61, 18);
            this->label1->TabIndex = 8;
            this->label1->Text = L"Results";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(482, 353);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btnPaper);
            this->Controls->Add(this->btnScissor);
            this->Controls->Add(this->btnRock);
            this->Controls->Add(this->lblResult);
            this->Controls->Add(this->lblPlayerScore);
            this->Controls->Add(this->lblComputerScore);
            this->Controls->Add(this->lblTies);
            this->Controls->Add(this->listBoxResults);
            this->Name = L"MyForm";
            this->Text = L"Rock-Paper-Scissors Game";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: void PlayRound(ensort playerChoice) {
        // Generate computer choice
        ensort computerChoice = static_cast<ensort>(rand() % 3 + 1);

        // Generate strings for player and computer choices
        System::String^ playerChoiceStr = gcnew System::String(
            playerChoice == ensort::Paper ? "Paper" : playerChoice == ensort::Scissor ? "Scissor" : "Rock"
        );
        System::String^ computerChoiceStr = gcnew System::String(
            computerChoice == ensort::Paper ? "Paper" : computerChoice == ensort::Scissor ? "Scissor" : "Rock"
        );

        // Determine winner
        if (playerChoice == computerChoice) {
            this->lblResult->Text = "It's a tie!";
            CounterEqual++;
        }
        else if ((playerChoice == ensort::Rock && computerChoice == ensort::Scissor) ||
            (playerChoice == ensort::Scissor && computerChoice == ensort::Paper) ||
            (playerChoice == ensort::Paper && computerChoice == ensort::Rock)) {
            this->lblResult->Text = "You won!";
            CounterPlayerWins++;
        }
        else {
            this->lblResult->Text = "Computer won!";
            CounterComputerWins++;
        }

        // Update scores
        this->lblPlayerScore->Text = "Player Wins: " + CounterPlayerWins.ToString();
        this->lblComputerScore->Text = "Computer Wins: " + CounterComputerWins.ToString();
        this->lblTies->Text = "Ties: " + CounterEqual.ToString();

        // Add result to ListBox
        this->listBoxResults->Items->Add("Player: " + playerChoiceStr +
            ", Computer: " + computerChoiceStr);
    }

    private: System::Void btnPaper_Click(System::Object^ sender, System::EventArgs^ e) {
        PlayRound(ensort::Paper);
    }

    private: System::Void btnScissor_Click(System::Object^ sender, System::EventArgs^ e) {
        PlayRound(ensort::Scissor);
    }

    private: System::Void btnRock_Click(System::Object^ sender, System::EventArgs^ e) {
        PlayRound(ensort::Rock);
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}

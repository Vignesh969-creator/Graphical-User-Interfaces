//---------------------------------------------------------------------------

#include <fmx.h>
#include<queue>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;


//---------------------------------------------------------------------------

class question{
public:
		char*Text;
		char*Answer1;
		char*Answer2;
		char*Answer3;
		int CorrectAnswer;

	question(){}
	question(char*text,char*Ans1,char*Ans2,char*Ans3,int correctanswer){
		Answer1=Ans1;
		Answer2=Ans1;
		Answer3=Ans3;
		Text=text;
		CorrectAnswer=correctanswer;
		}
} ;

std::queue<question>LoadQuestions(){
	question q1=question("what is you name","sham","ram","bam",2);
	question q2=question("what is you name","sham","ram","bam",1);
	question q3=question("what is you name","sham","ram","bam",3);

	std::queue<question>questions;
	questions.push(q1);
	questions.push(q2);
	questions.push(q3);
	return questions;

  }
std::queue<question>questions;
question currentquestion;
int selectedAnswer;
int points=0;

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	questions=LoadQuestions();
	currentquestion=questions.front();
	QUESTION->Text=currentquestion.Text;
	AnswerRadio1->Text=currentquestion.Answer1;
	AnswerRadio2->Text=currentquestion.Answer2;
	AnswerRadio3->Text=currentquestion.Answer3;
	questions.pop();
	PointsLabel->Text=0;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::AnswerRadio1Change(TObject *Sender)
{
	 selectedAnswer=1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AnswerRadio2Change(TObject *Sender)
{
			  selectedAnswer=2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AnswerRadio3Change(TObject *Sender)
{
          selectedAnswer=3;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CONFIRMClick(TObject *Sender)
{
	if(selectedAnswer==currentquestion.CorrectAnswer){
		points++;
		PointsLabel->Text=points;
	}
	if(!questions.empty()){
		currentquestion=questions.front();
		QUESTION->Text=currentquestion.Text;
		AnswerRadio1->Text=currentquestion.Answer1;
		AnswerRadio2->Text=currentquestion.Answer2;
		AnswerRadio3->Text=currentquestion.Answer3;
		questions.pop();
		AnswerRadio1->IsChecked=false;
		AnswerRadio2->IsChecked=false;
		AnswerRadio3->IsChecked=false;
	} else{
		CONFIRM->Enabled=false;
		CONFIRM->Text="The End";
    }
}
//---------------------------------------------------------------------------

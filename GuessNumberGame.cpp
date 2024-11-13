//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "GuessNumberGame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
bool isNumberEntered=false;
int guessnumber;
int count=0;
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	TitleLabel->Text="Enter the Number you want to store";
	CounterLabel->Text=0;
	HelperLabel->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CONFIRMClick(TObject *Sender)
{
   if(!isNumberEntered){
				guessnumber=NumbersEdit->Text.ToInt();
				isNumberEntered=true;

				TitleLabel->Text="Guess The Number";
				NumbersEdit->Text="";

   }else{
			int secondnumber=NumbersEdit->Text.ToInt();
	   if( secondnumber>guessnumber){
				HelperLabel->Text="The Number you Enter is Larger than the Answer";
				count++;
				CounterLabel->Text=count;
				NumbersEdit->Text="";
	   }else if(secondnumber==guessnumber){
				HelperLabel->Text="You Won";
				CONFIRM->Enabled=false;
				return;
	   }else{
		   HelperLabel->Text="The Number you Enter is Smaller than the Answer";
		   count++;
		   CounterLabel->Text=count;
           NumbersEdit->Text="";
       }
   }
}
//---------------------------------------------------------------------------

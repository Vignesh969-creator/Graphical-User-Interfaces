//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "TicTacToeGame.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
char currentsymbolplayer='x';
bool TForm1::CheckIsWinner(){
		if(Button1->Text==Button2->Text && Button2->Text==Button3->Text){
		return true;
		}
		if(Button4->Text==Button5->Text && Button5->Text==Button6->Text){
		return true;
		}
		if(Button7->Text==Button8->Text && Button8->Text==Button9->Text){
		return true;
		}
		if(Button1->Text==Button4->Text && Button4->Text==Button7->Text){
		return true;
		}
		if(Button2->Text==Button5->Text && Button5->Text==Button8->Text){
		return true;
		}
		if(Button3->Text==Button6->Text && Button6->Text==Button9->Text){
		return true;
		}
		if(Button1->Text==Button5->Text && Button5->Text==Button9->Text){
		return true;
		}
		if(Button3->Text==Button5->Text && Button5->Text==Button7->Text){
		return true;
		}

		return false;
}
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		Button1->Text=currentsymbolplayer;
		if(CheckIsWinner()) {
			WinnerLabel->Text="You Won !!";
			return;
		}
		if(currentsymbolplayer=='x'){
			currentsymbolplayer='o';
		}else{
			currentsymbolplayer='x';
		}

		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
		   Button2->Text=currentsymbolplayer;
           if(CheckIsWinner()) {
			WinnerLabel->Text="You Won !!";
			return;
		}
		if(currentsymbolplayer=='x'){
			currentsymbolplayer='o';
		}else{
			currentsymbolplayer='x';
		}
		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
			Button3->Text=currentsymbolplayer;
            if(CheckIsWinner()) {
			WinnerLabel->Text="You Won !!";
			return;
		}
		if(currentsymbolplayer=='x'){
			currentsymbolplayer='o';
		}else{
			currentsymbolplayer='x';
		}
		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
			  Button4->Text=currentsymbolplayer;
              if(CheckIsWinner()) {
			WinnerLabel->Text="You Won !!";
			return;
		}
		if(currentsymbolplayer=='x'){
			currentsymbolplayer='o';
		}else{
			currentsymbolplayer='x';
		}
		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
			   Button5->Text=currentsymbolplayer;
               if(CheckIsWinner()) {
			WinnerLabel->Text="You Won !!";
			return;
		}
		if(currentsymbolplayer=='x'){
			currentsymbolplayer='o';
		}else{
			currentsymbolplayer='x';
		}
		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
				 Button6->Text=currentsymbolplayer;
                 if(CheckIsWinner()) {
			WinnerLabel->Text="You Won !!";
			return;
		}
		if(currentsymbolplayer=='x'){
			currentsymbolplayer='o';
		}else{
			currentsymbolplayer='x';
		}
		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
				 Button7->Text=currentsymbolplayer;
                 if(CheckIsWinner()) {
			WinnerLabel->Text="You Won !!";
			return;
		}
		if(currentsymbolplayer=='x'){
			currentsymbolplayer='o';
		}else{
			currentsymbolplayer='x';
		}
		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
				  Button8->Text=currentsymbolplayer;
                  if(CheckIsWinner()) {
			WinnerLabel->Text="You Won !!";
			return;
		}
		if(currentsymbolplayer=='x'){
			currentsymbolplayer='o';
		}else{
			currentsymbolplayer='x';
		}
		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
				   Button9->Text=currentsymbolplayer;
                   if(CheckIsWinner()) {
			WinnerLabel->Text="You Won !!";
			return;
		}
		if(currentsymbolplayer=='x'){
			currentsymbolplayer='o';
		}else{
			currentsymbolplayer='x';
		}
		currentPlayerSymbol->Text=currentsymbolplayer;
}
//---------------------------------------------------------------------------

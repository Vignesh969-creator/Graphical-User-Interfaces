//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *QUESTION;
	TRadioButton *AnswerRadio1;
	TRadioButton *AnswerRadio2;
	TRadioButton *AnswerRadio3;
	TLabel *PointsLabel;
	TLabel *Points;
	TButton *CONFIRM;
	void __fastcall AnswerRadio1Change(TObject *Sender);
	void __fastcall AnswerRadio2Change(TObject *Sender);
	void __fastcall AnswerRadio3Change(TObject *Sender);
	void __fastcall CONFIRMClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

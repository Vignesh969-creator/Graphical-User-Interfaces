//---------------------------------------------------------------------------

#ifndef ToDoListH
#define ToDoListH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *AddButton;
	TEdit *TaskEdit;
	TLabel *Label1;
	TListBox *TaskListBox;
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall TaskListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

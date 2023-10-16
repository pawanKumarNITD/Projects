//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Types.hpp>
#include <FMX.StdCtrls.hpp>
#include <Data.Bind.Controls.hpp>
#include <Fmx.Bind.Navigator.hpp>
#include <FMX.Layouts.hpp>
//---------------------------------------------------------------------------
class TfoodOrderApplication : public TForm
{
__published:	// IDE-managed Components
	TEdit *editFoodItems;
	TEdit *editOrderedItems;
	TLabel *orderedItems;
	TLabel *foodItems;
	TLabel *totalAmount;
	TButton *generateBill;
	TBindNavigator *foodItemsNavigator;
private:	// User declarations
public:		// User declarations
	__fastcall TfoodOrderApplication(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfoodOrderApplication *foodOrderApplication;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TfoodOrderApplication *foodOrderApplication;
//---------------------------------------------------------------------------
__fastcall TfoodOrderApplication::TfoodOrderApplication(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Bindings.CustomScope.pas' rev: 35.00 (Windows)

#ifndef System_Bindings_CustomscopeHPP
#define System_Bindings_CustomscopeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Rtti.hpp>
#include <System.Bindings.EvalProtocol.hpp>
#include <System.Bindings.EvalSys.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Bindings
{
namespace Customscope
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomScope;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TScopeClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TScopeClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomScope : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
	
public:
	__interface DELPHIINTERFACE TWrapperFoundCallback;
	typedef System::DelphiInterface<TWrapperFoundCallback> _di_TWrapperFoundCallback;
	__interface TWrapperFoundCallback  : public System::IInterface 
	{
		virtual void __fastcall Invoke(TCustomScope* Scope, const System::Bindings::Evalprotocol::_di_ICustomWrapper Wrapper) = 0 ;
	};
	
	
private:
	System::Bindings::Evalsys::TDictionaryScope* FCache;
	System::TObject* FMappedObject;
	System::TClass FMetaClass;
	_di_TWrapperFoundCallback FWrapperFoundCallback;
	
protected:
	System::TObject* __fastcall GetMappedObject();
	System::TClass __fastcall GetMetaClass();
	void __fastcall SetMappedObject(System::TObject* const Value);
	virtual System::_di_IInterface __fastcall DoLookup(const System::UnicodeString Name) = 0 ;
	
public:
	__fastcall virtual TCustomScope(System::TObject* const MappedObject, System::TClass MetaClass);
	__fastcall virtual ~TCustomScope();
	System::_di_IInterface __fastcall Lookup(const System::UnicodeString Name);
	__property System::TObject* MappedObject = {read=GetMappedObject, write=SetMappedObject};
	__property System::TClass MetaClass = {read=GetMetaClass};
	__property _di_TWrapperFoundCallback OnWrapperFound = {read=FWrapperFoundCallback, write=FWrapperFoundCallback};
private:
	void *__ICustomScope;	// System::Bindings::Evalprotocol::ICustomScope 
	
public:
	operator System::Bindings::Evalprotocol::ICustomScope*(void) { return (System::Bindings::Evalprotocol::ICustomScope*)&__ICustomScope; }
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DAFE2455-3DB6-40CC-B1D6-1EAC0A29ABEC}
	operator System::Bindings::Evalprotocol::_di_IScope()
	{
		System::Bindings::Evalprotocol::_di_IScope intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::Bindings::Evalprotocol::IScope*(void) { return (System::Bindings::Evalprotocol::IScope*)&__ICustomScope; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Customscope */
}	/* namespace Bindings */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_BINDINGS_CUSTOMSCOPE)
using namespace System::Bindings::Customscope;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_BINDINGS)
using namespace System::Bindings;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_Bindings_CustomscopeHPP

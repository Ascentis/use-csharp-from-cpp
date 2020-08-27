#include "pch.h"
#include "combaseapi.h"
#include "ClassCOMConsumer.h"
#import "COMAdder.tlb"


// ReSharper disable once CppMemberFunctionMayBeStatic
int ClassCOMConsumer::add(int a, int b)
{
	COMAdder::IAdderPtr adder;
	// ReSharper disable once CppCStyleCast
	// ReSharper disable once CppDeclaratorNeverUsed
	HRESULT hr = ::CoCreateInstance(__uuidof(COMAdder::Adder), NULL, CLSCTX_INPROC, __uuidof(COMAdder::IAdder), (void**)&adder);
	const int c = adder->Add(a, b);
	adder->Release();
	return c;
}

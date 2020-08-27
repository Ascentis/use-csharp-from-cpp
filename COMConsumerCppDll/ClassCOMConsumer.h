#pragma once
#ifdef ASCENTIS_EXPORTS
	#undef ASCENTIS_EXPORTS
	#define ASCENTIS_EXPORTS __declspec(dllexport)  // NOLINT(cppcoreguidelines-macro-usage)
#else
	#define ASCENTIS_EXPORTS __declspec(dllimport)
#endif

class ClassCOMConsumer
{
public:
	ASCENTIS_EXPORTS int add(int a, int b);
};


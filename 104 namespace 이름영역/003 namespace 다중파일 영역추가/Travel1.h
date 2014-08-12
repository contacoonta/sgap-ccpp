#ifndef _TRAVEL1_H_		// if not defined
#define _TRAVEL1_H_

#include <string>

namespace travel
{
	typedef enum traveltype
	{
		LAOS, JEJU, FUKUSHIMA, TRAVELMAX
	}TRAVELTYPE;

	std::string travelname[TRAVELTYPE::TRAVELMAX]
	{
		"LAOS", "JEJU", "FUKUSHIMA"
	};
}

#endif
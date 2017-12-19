#ifndef __VEHICLE_WITH_TRAILER_FOR_HORSE_H__
#define __VEHICLE_WITH_TRAILER_FOR_HORSE_H__

#include "vehiclewithtrailer.h"

class VehicleWithTrailerForHorse :
	public VehicleWithTrailer
{
public:
	VehicleWithTrailerForHorse(IVehicle* _vehicle) : VehicleWithTrailer(_vehicle, false) { printf("Added HorseTrailer to %s\n", GetId().c_str()); };
	~VehicleWithTrailerForHorse() {};

	int GetMaximumLoad() override { return GetVehicle() ? GetVehicle()->GetMaximumLoad() + 33 : 33; }
	int GetMaximumSpeed() override { return std::min(GetVehicle() ? GetVehicle()->GetMaximumSpeed() : 0, 70); };
	std::string GetColor() override { return GetVehicle() ? "green and " + GetVehicle()->GetColor() : "green"; };
	std::string GetId() const override { return GetVehicle() ? GetVehicle()->GetId() : ""; }
};

#endif
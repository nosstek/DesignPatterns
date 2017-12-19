#ifndef __VEHICLE_WITH_TRAILER_H__
#define __VEHICLE_WITH_TRAILER_H__

#include "IVehicle.h"

class VehicleWithTrailer :
	public IVehicle
{
public:
	VehicleWithTrailer(IVehicle* _vehicle, bool _echo = true) : IVehicle(""), m_vehicle(_vehicle)
	{
		if (_echo)
			printf("Added Trailer to %s\n", GetId().c_str());
	};
	virtual ~VehicleWithTrailer() {};

	virtual int GetMaximumLoad() override { return m_vehicle ? m_vehicle->GetMaximumLoad() + 50 : 50; }
	virtual int GetMaximumSpeed() override { return std::min(m_vehicle ? m_vehicle->GetMaximumSpeed() : 0, 90); };
	virtual std::string GetColor() override { return m_vehicle ? "grey and " + m_vehicle->GetColor() : "grey"; };
	virtual std::string GetId() const override { return m_vehicle ? m_vehicle->GetId() : ""; }
	IVehicle* GetVehicle() const { return m_vehicle; };

private:
	IVehicle* m_vehicle;
};

#endif
#ifndef __VEHICLE_CAR_H__
#define __VEHICLE_CAR_H__

#include "IVehicle.h"

class VehicleCar :
	public IVehicle
{
public:
	VehicleCar(const std::string &_id) : IVehicle(_id) { printf("Created car with id: %s\n", GetId().c_str()); };
	virtual ~VehicleCar() {};

	virtual int GetMaximumLoad() override { return 100; };
	virtual int GetMaximumSpeed() override { return 180; };
	virtual std::string GetColor() override { return "red"; };
	virtual std::string GetId() const override { return __super::GetId(); }
};

#endif
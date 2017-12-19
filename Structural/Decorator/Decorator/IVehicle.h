#ifndef __IVEHICLE_H__
#define __IVEHICLE_H__

class IVehicle
{
public:
	IVehicle(const std::string &_id) : m_id(_id) {};
	virtual ~IVehicle() {};

	virtual int GetMaximumLoad() = 0;
	virtual int GetMaximumSpeed() = 0;
	virtual std::string GetColor() = 0;
	virtual std::string GetId() const = 0 { return m_id; };

	static void DisplayVehicleInfo(IVehicle* _vehicle)
	{
		if (_vehicle == NULL)
			return;

		std::string vehicle_id = _vehicle->GetId();
		int max_load = _vehicle->GetMaximumLoad();
		int max_speed = _vehicle->GetMaximumSpeed();
		std::string color = _vehicle->GetColor();
		printf(
			"\nDisplaying Vehicle info:\n"
			"Vehicle ID: %s\n"
			"Max load: %i\n"
			"Max speed: %i\n"
			"Colors: %s\n\n", vehicle_id.c_str(), max_load, max_speed, color.c_str());
	}

private:
	std::string m_id;
};

#endif
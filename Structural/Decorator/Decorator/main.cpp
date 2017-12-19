#include "stdafx.h"
#include <vld.h>
#include "VehicleCar.h"
#include "VehicleWithTrailer.h"
#include "VehicleWithTrailerForHorse.h"

int main()
{
	VehicleCar truck = VehicleCar("DWR C253");

	IVehicle::DisplayVehicleInfo(&truck);

	VehicleWithTrailer truck_with_1_trailer = VehicleWithTrailer(&truck);
	VehicleWithTrailer truck_with_2_trailer = VehicleWithTrailer(&truck_with_1_trailer);

	IVehicle::DisplayVehicleInfo(&truck_with_2_trailer);

	VehicleWithTrailerForHorse truck_with_3_trailer = VehicleWithTrailerForHorse(&truck_with_2_trailer);

	IVehicle::DisplayVehicleInfo(&truck_with_3_trailer);

	VehicleWithTrailer truck_with_4_trailer = VehicleWithTrailer(&truck_with_3_trailer);

	IVehicle::DisplayVehicleInfo(&truck_with_4_trailer);

	VehicleWithTrailerForHorse truck_with_5_trailer = VehicleWithTrailerForHorse(&truck_with_4_trailer);

	IVehicle::DisplayVehicleInfo(&truck_with_5_trailer);

	system("pause");
	return 0;
}
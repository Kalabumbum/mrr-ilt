#pragma once

class TrackSensor;

#include "track-object.hpp"
#include "linked-list.hpp"
#include "sensor.hpp"

class TrackSensor : public TrackObject, public linked_list<TrackSensor>
{
	public:
	TrackSensor(lid_t, Sensor*);

	private:
	Sensor* m_sensor;
};

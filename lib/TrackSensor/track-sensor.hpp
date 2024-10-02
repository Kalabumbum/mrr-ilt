#ifndef TRACK_SENSOR_HPP
#define TRACK_SENSOR_HPP

class TrackSensor;

#include "track-object.hpp"
#include "sensor.hpp"

class TrackSensor : public TrackObject
{
	public:
	TrackSensor(Sensor*);

	private:
	Sensor* m_sensor;
};
#endif // TRACK_SENSOR_H
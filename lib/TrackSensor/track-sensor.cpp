#include "track-sensor.hpp"

TrackSensor::TrackSensor(Sensor *sensor)
	: TrackObject(SENSOR), m_sensor(sensor)
{
}

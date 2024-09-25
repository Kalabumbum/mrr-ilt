#include "track-sensor.hpp"

// TrackSensor::TrackSensor(lid_t lid, Sensor *sensor)
// 	: linked_list<TrackSensor>(lid), TrackObject(SENSOR), m_sensor(sensor)
// {
// }

TrackSensor::TrackSensor(Sensor *sensor)
	: TrackObject(SENSOR), m_sensor(sensor)
{
}

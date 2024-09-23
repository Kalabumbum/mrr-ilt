#pragma once

#include "track-object.hpp"
#include "linked-list.hpp"

class TrackSensor : public TrackObject, public linked_list<TrackSensor>
{
};

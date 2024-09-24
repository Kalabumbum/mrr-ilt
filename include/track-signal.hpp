#pragma once

class TrackSignal;

#include "track-object.hpp"
#include "linked-list.hpp"

class TrackSignal : public TrackObject, public linked_list<TrackSignal>
{
	public:
	TrackSignal(lid_t);
};
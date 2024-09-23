#pragma once

#include "track-object.hpp"
#include "linked-list.hpp"

class TrackSignal : public TrackObject, public linked_list<TrackSignal>
{
};
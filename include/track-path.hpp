#pragma once

class TrackPath;

#include <vector>
#include "track-signal.hpp"
#include "linked-list.hpp"

class TrackPath : public linked_list<TrackPath, lid_t>
{
	TrackSignal* m_signal;
	std::vector<TrackObject*> m_track_objects;
	static lid_t s_counter;
public:
	TrackPath(lid_t lid, TrackSignal*, const std::vector<TrackObject*>&);
	TrackPath(TrackSignal*, const std::vector<TrackObject*>&);
private:
};

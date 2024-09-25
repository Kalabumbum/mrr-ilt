#pragma once

class TrackPath;

#include <vector>
#include "track-signal.hpp"
// #include "linked-list.hpp"

class TrackPathObject
{
	virtual bool check() = 0;
};

class TrackPath
{
	TrackSignal* m_signal;
	std::vector<TrackPathObject*> m_track_objects;
public:
	// TrackPath(lid_t lid, TrackSignal*, const std::vector<TrackPathObject*>&);
	TrackPath(TrackSignal*, const std::vector<TrackPathObject*>&);
private:
};

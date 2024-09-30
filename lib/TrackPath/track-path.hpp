#ifndef TRACK_PATH_HPP
#define TRACK_PATH_HPP
// #pragma once

class TrackPath;

#include <vector>
#include "track-signal.hpp"
// #include "linked-list.hpp"

class TrackPathObject
{
	public:
	virtual bool check() = 0;
};

class TrackPathObjectSignal : TrackObject
{
	TrackSignal *m_signal;
	TrackSignal::state_t m_state;
public:
	TrackPathObjectSignal(TrackSignal *, TrackSignal::state_t);
	bool check();
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
#endif // TRACK_PATH_HPP

#ifndef TRACK_PATH_HPP
#define TRACK_PATH_HPP
// #pragma once

class TrackPath;

#include <vector>

#include "track-signal.hpp"
#include "turnout.hpp"
// #include "linked-list.hpp"

class TrackPathObject
{
	TrackObject::owner_t m_owner;

	public:
	virtual bool check(void) = 0;
	virtual bool set(TrackObject::owner_t) = 0;
	TrackObject::owner_t get_owner(void);
};

class TrackPathObjectSignal : TrackPathObject
{
	TrackSignal *m_signal;
	TrackSignal::state_t m_state;
public:
	TrackPathObjectSignal(TrackSignal *, TrackSignal::state_t);
	inline bool check(void);
	inline bool set(TrackObject::owner_t);
};


class TrackPathObjectTurnout : TrackPathObject
{
	Turnout *m_turnout;
	dir_t m_dir;
public:
	TrackPathObjectTurnout(Turnout *, dir_t);
	inline bool check(void);
	inline bool set(TrackObject::owner_t);
};

class TrackPath
{
public:
	using list_t = std::vector<TrackPathObject *>;
private:
	TrackSignal* m_signal;
	list_t m_track_objects;
public:
	// TrackPath(lid_t lid, TrackSignal*, const std::vector<TrackPathObject*>&);
	TrackPath(TrackSignal*, const list_t &);
private:
};
#endif // TRACK_PATH_HPP

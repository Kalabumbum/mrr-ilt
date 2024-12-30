#include "track-path.hpp"


TrackPathObjectSignal::TrackPathObjectSignal(TrackSignal *signal, TrackSignal::state_t state)
	: m_signal(signal), m_state(state)
{
}

inline bool TrackPathObjectSignal::check(void)
{
	return m_state == m_signal->get_state();
}

inline bool TrackPathObjectSignal::set(TrackObject::owner_t owner)
{
	if (get_owner() != owner)
		return false;
	return m_signal->set_state(m_state);
}

TrackPath::TrackPath(TrackSignal *signal, const list_t &track_objects)
	: m_signal(signal), m_track_objects(track_objects)
{
}

TrackPathObjectTurnout::TrackPathObjectTurnout(Turnout *turnout, dir_t dir)
	: m_turnout(turnout), m_dir(dir)
{
}

inline bool TrackPathObjectTurnout::check(void)
{
	return m_turnout->get_dir() == m_dir;
}

inline bool TrackPathObjectTurnout::set(TrackObject::owner_t)
{
	return m_turnout->set_dir(m_dir);
}

TrackObject::owner_t TrackPathObject::get_owner(void)
{
	return m_owner;
}
